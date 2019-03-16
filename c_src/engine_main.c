#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <error.h>
#include <stdatomic.h>

#include <jack/jack.h>
#include <math.h>
#include <dlfcn.h>
#include "lo/lo.h"
#include "engine.h"
#include "engineglue.h"

static jack_client_t *client;
static struct engineUI_t ui;
#define IN_PORTS 2
#define OUT_PORTS 2
static jack_port_t *input_ports[IN_PORTS];
static jack_port_t *output_ports[OUT_PORTS];

int
jack_xrun_callback(void *arg)
{
   fprintf (stderr, "Xrun at DSP load %f\n" , jack_cpu_load(client));
   return 0;
}

/**
 * The process callback for this JACK application is called in a
 * special realtime thread once for each audio cycle.
 *
 * This client does nothing more than copy data from its input
 * port to its output port. It will exit when stopped by
 * the user (e.g. using Ctrl-C on a unix-ish operating system)
 */
void (*myengine_next)(void* engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) = NULL;
void (*myengine_free)(void* engine) = NULL;
void *myengine = NULL;
void (*fb_myengine_next)(void* engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) = NULL;
void *fb_myengine = NULL;
volatile int fb_flag = 0;
jack_time_t last_stat_print;
jack_nframes_t jack_max_frame_length;

int process_block (jack_nframes_t nframes, void *arg) {

  jack_default_audio_sample_t* jack_in[IN_PORTS];
  jack_default_audio_sample_t* jack_out[OUT_PORTS];
  int j;
  if(fb_flag) {
    myengine = fb_myengine;
    myengine_next = fb_myengine_next;
    atomic_thread_fence(memory_order_release);
    fb_flag = 0;
  }
  //First get an input buffer for each jack input
  for (j=0; j < IN_PORTS; j++) {
    jack_out[j] = jack_port_get_buffer (output_ports[j], nframes);
  }
  //Then get an output buffer for each jack input
  for (j=0; j < OUT_PORTS; j++) {
    jack_in[j] = jack_port_get_buffer (input_ports[j], nframes);
  }
  if (myengine_next && myengine) {
    int update_flags[ENGINE_MAX_COMMANDS];
    for(j=0; j < ui.numCommands; j++) {
      update_flags[j] = ui.commands[j].update_flag;
      if (update_flags[j]) {
	atomic_thread_fence(memory_order_acquire);
	*(ui.commands[j].param.param) = ui.commands[j].newval;
      }
    }
    (*myengine_next)(myengine, nframes, jack_in, jack_out);
    for(j=0; j < ui.numCommands; j++) {
      if (update_flags[j]) {
	atomic_thread_fence(memory_order_release);
	ui.commands[j].update_flag = 0;
      }
    }
  }
  jack_nframes_t frames_this_time = jack_frames_since_cycle_start(client);
  if(frames_this_time > jack_max_frame_length) {
    jack_max_frame_length = frames_this_time;
  }
  return 0;
}

void jack_shutdown (void *arg) {
  fprintf(stderr, "JACK shut down, exiting ...\n");
  exit (1);
}

void *handle = NULL;
void load_so (char *so_file) {
  if(handle) {
    void *cache_myengine_pointer = myengine;
    fb_myengine = NULL;
    fb_myengine_next = NULL;
    atomic_thread_fence(memory_order_release);
    fb_flag = 1;
    int i = 0;
    while(fb_flag) {
      usleep(1000);
      if (i++ > 2000) {
	error(1,0,"realtime thread failed to detach old DSP code, can't recover!");
      }
    }
    atomic_thread_fence(memory_order_acquire);
    myengine_free = dlsym(handle, "engine_free");
    if (myengine_free) {
      if(cache_myengine_pointer) {
	free(cache_myengine_pointer);
      }
    } else {
      printf("warning: couldn't find engine_free... falling back to free without any extra cleanup");
      if(cache_myengine_pointer) {
	free(cache_myengine_pointer);
      }
    }
    dlclose(handle);
  }
  handle = dlopen(so_file, RTLD_NOW);
  if (handle == NULL) {
    fprintf(stdout, "blaaargh, can't open %s because %s\n", so_file, dlerror());
    return;
  }
  void * (*myengine_new)(void*, int);
  void (*myengine_buildUI)(void*, struct engineUI_t*);
  myengine_new = dlsym(handle, "engine_new");
  myengine_buildUI = dlsym(handle, "engine_buildUI");
  fb_myengine_next = dlsym(handle, "engine_next");
  if (myengine_new == NULL) {
    fprintf(stdout, "opened %s but function engine_new is missing\n", so_file);
    fb_myengine_next = NULL;
    return;
  }
  if (myengine_buildUI == NULL) {
    fprintf(stdout, "opened %s but function engine_buildUI is missing\n", so_file);
    fb_myengine_next = NULL;
    return;
  }
  if (fb_myengine_next == NULL) {
    fprintf(stdout, "opened %s but function engine_next is missing\n", so_file);
    fb_myengine_next = NULL;
    return;
  }

  fb_myengine = (*myengine_new)(&ui, jack_get_sample_rate (client));

  default_engineResetUI(&ui);
  (*myengine_buildUI)(fb_myengine, &ui);
  atomic_thread_fence(memory_order_release);
  fb_flag = 1;
}

int main (int argc, char *argv[]) {
  ui.matron_addr = lo_address_new(NULL, "8888");
  default_engineInitUI(&ui);
  //fire up osc server for module
  printf("bang osc port 57120 @ /param with a float\n");

  const char *client_name = "aleph_sim";
  const char *server_name = NULL;
  jack_options_t options = JackNullOption;
  jack_status_t status;


  /* open a client connection to the JACK server */

  client = jack_client_open (client_name, options, &status, server_name);
  if (client == NULL) {
    fprintf (stderr, "jack_client_open() failed, "
	     "status = 0x%2.0x\n", status);
    if (status & JackServerFailed) {
      fprintf (stderr, "Unable to connect to JACK server\n");
    }
    exit (1);
  }
  if (status & JackServerStarted) {
    fprintf (stderr, "JACK server started\n");
  }
  if (status & JackNameNotUnique) {
    client_name = jack_get_client_name(client);
    fprintf (stderr, "unique name `%s' assigned\n", client_name);
  }

  jack_set_process_callback (client, process_block, 0);
  jack_set_xrun_callback(client, jack_xrun_callback, 0);
  jack_on_shutdown (client, jack_shutdown, 0);

  /* display the current sample rate.
   */

  printf ("engine sample rate: %" PRIu32 "\n",
	  jack_get_sample_rate (client));

  /* create the ports */
  int j;
  for (j=0; j < IN_PORTS; j++) {
    char foo[100];
    sprintf(foo, "input%d", j);
    input_ports[j] = jack_port_register (client, foo,
					 JACK_DEFAULT_AUDIO_TYPE,
					 JackPortIsInput, 0);
    if (input_ports[j] == NULL) {
      fprintf(stderr, "no more JACK ports available\n");
      exit (1);
    }
  }
  for (j=0; j < OUT_PORTS; j++) {
    char foo[100];
    sprintf(foo, "output%d", j);
    output_ports[j] = jack_port_register (client, foo,
					  JACK_DEFAULT_AUDIO_TYPE,
					  JackPortIsOutput, 0);

    if (output_ports[j] == NULL) {
      fprintf(stderr, "no more JACK ports available\n");
      exit (1);
    }
  }

  if (jack_activate (client)) {
    fprintf (stderr, "cannot activate client");
    exit (1);
  }

  /* ports = jack_get_ports (client, NULL, NULL, */
  /*			  JackPortIsPhysical|JackPortIsOutput); */
  /* if (ports == NULL) { */
  /*   fprintf(stderr, "no physical capture ports\n"); */
  /*   exit (1); */
  /* } */

  if (jack_connect (client, "system:capture_1", jack_port_name (input_ports[0]))) {
    fprintf (stderr, "cannot connect input ports\n");
  }
  if (jack_connect (client, "system:capture_2", jack_port_name (input_ports[0]))) {
    fprintf (stderr, "cannot connect input ports\n");
  }

  /* free (ports); */

  /* ports = jack_get_ports (client, NULL, NULL, */
  /*			  JackPortIsPhysical|JackPortIsInput); */
  /* if (ports == NULL) { */
  /*   fprintf(stderr, "no physical playback ports\n"); */
  /*   exit (1); */
  /* } */

  if (jack_connect (client, jack_port_name (output_ports[0]), "system:playback_1")) {
    fprintf (stderr, "cannot connect output ports\n");
  }
  if (jack_connect (client, jack_port_name (output_ports[1]), "system:playback_2")) {
    fprintf (stderr, "cannot connect output ports\n");
  }

  lo_send(ui.matron_addr, "/crone/ready","");
  last_stat_print = jack_get_time();
  while(1) {
    if(ui.st) {
      lo_server_recv(ui.st);
    }
    if (engine_reload_flag) {
      atomic_thread_fence(memory_order_acquire);
      default_engineResetUI(&ui);
      load_so(engine_reload_string);
      report_commands_handler("", "f", NULL, 0, NULL, &ui);
      report_params_handler("", "f", NULL, 0, NULL, &ui);
      engine_reload_flag = 0;
      // FIXME - build report_polls_handler and uncomment the line below
      /* report_polls_handler("", "f", NULL, 0, NULL, NULL); */
    }
    jack_time_t this_stat_print = jack_get_time();
    /* printf("this_stat_print = %d\n", this_stat_print); */
    if(this_stat_print - last_stat_print >= 5000000) {
      printf("max frame length: %d, cpu load: %f\n", jack_max_frame_length, jack_cpu_load(client));
      last_stat_print = this_stat_print;
      jack_max_frame_length = 0;
    }
  }
  /* this is never reached but if the program
     had some other way to exit besides being killed,
     they would be important to call.
  */

  jack_client_close (client);
  exit (0);
}
