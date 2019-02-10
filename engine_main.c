#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <error.h>

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

/**
 * The process callback for this JACK application is called in a
 * special realtime thread once for each audio cycle.
 *
 * This client does nothing more than copy data from its input
 * port to its output port. It will exit when stopped by
 * the user (e.g. using Ctrl-C on a unix-ish operating system)
 */
volatile void (*myengine_next)(void* engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) = NULL;
void *myengine = NULL;
volatile void (*fb_myengine_next)(void* engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) = NULL;
void *fb_myengine = NULL;
volatile int fb_flag = 0;
int process_block (jack_nframes_t nframes, void *arg) {

  jack_default_audio_sample_t* jack_in[IN_PORTS];
  jack_default_audio_sample_t* jack_out[OUT_PORTS];
  int i, j;
  if(fb_flag) {
    myengine = fb_myengine;
    myengine_next = fb_myengine_next;
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
    (*myengine_next)(myengine, nframes, jack_in, jack_out);
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
    fb_myengine = NULL;
    fb_myengine_next = NULL;
    fb_flag = 1;
    int i = 0;
    while(fb_flag) {
      usleep(1000);
      if (i++ > 2000) {
	error(1,0,"realtime thread failed to detach old DSP code, can't recover!");
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
  myengine_new = dlsym(handle, "engine_new");
  fb_myengine = (*myengine_new)(&ui, jack_get_sample_rate (client));

  void (*myengine_buildUI)(void*, struct engineUI_t*);
  myengine_buildUI = dlsym(handle, "engine_buildUI");
  default_engineResetUI(&ui);
  (*myengine_buildUI)(fb_myengine, &ui);
  fb_myengine_next = dlsym(handle, "engine_next");
  fb_flag = 1;
}

int main (int argc, char *argv[]) {
  ui.matron_addr = lo_address_new(NULL, "8888");
  default_engineInitUI(&ui);
  /* if(argc >=2) { */
  /*   load_so(argv[1]); */
  /* } */
  //fire up osc server for module
  printf("bang osc port 57120 @ /param with a float\n");

  const char **ports;
  const char *client_name = "aleph_sim";
  const char *server_name = NULL;
  jack_options_t options = JackNullOption;
  jack_status_t status;

  /* if (argc == 2) */
  /*   latency = atoi(argv[1]); */

  /* delay_line = malloc( latency * sizeof(jack_default_audio_sample_t)); */
  /* if (delay_line == NULL) { */
  /*   fprintf (stderr, "no memory"); */
  /*   exit(1); */
  /* } */

  /* memset (delay_line, 0, latency * sizeof(jack_default_audio_sample_t)); */

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


  /* Connect the ports.  You can't do this before the client is
   * activated, because we can't make connections to clients
   * that aren't running.  Note the confusing (but necessary)
   * orientation of the driver backend ports: playback ports are
   * "input" to the backend, and capture ports are "output" from
   * it.
   */

  /* ports = jack_get_ports (client, NULL, NULL, */
  /*			  JackPortIsPhysical|JackPortIsOutput); */
  /* if (ports == NULL) { */
  /*   fprintf(stderr, "no physical capture ports\n"); */
  /*   exit (1); */
  /* } */

  /* if (jack_connect (client, "jaaa:out_1", jack_port_name (input_port))) { */
  /*   fprintf (stderr, "cannot connect input ports\n"); */
  /* } */
  /* if (jack_connect (client, "latent:input 1", jack_port_name (input_port))) { */
  /*   fprintf (stderr, "cannot connect input ports\n"); */
  /* } */

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
  if (jack_connect (client, jack_port_name (output_ports[0]), "system:playback_2")) {
    fprintf (stderr, "cannot connect output ports\n");
  }

  /* free (ports); */

  lo_send(ui.matron_addr, "/crone/ready","");
  while(1) {
    if(ui.st) {
      lo_server_recv(ui.st);
    }
    if (engine_reload_flag) {
      default_engineResetUI(&ui);
      load_so(engine_reload_string);
      report_commands_handler("", "f", NULL, 0, NULL, &ui);
      report_params_handler("", "f", NULL, 0, NULL, &ui);
      engine_reload_flag = 0;
      // FIXME - build report_polls_handler and uncomment the line below
      /* report_polls_handler("", "f", NULL, 0, NULL, NULL); */
    }
  }
  /* this is never reached but if the program
     had some other way to exit besides being killed,
     they would be important to call.
  */

  jack_client_close (client);
  exit (0);
}
