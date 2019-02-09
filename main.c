#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include <jack/jack.h>
#include <math.h>
#include <dlfcn.h>
#include "lo/lo.h"
#include "faustglue.h"

jack_client_t *client;
UIGlue ui;

jack_default_audio_sample_t *delay_line;
jack_nframes_t delay_index;
jack_nframes_t latency = 1024;
#define IN_PORTS 2
#define OUT_PORTS 2
jack_port_t *input_ports[IN_PORTS];
jack_port_t *output_ports[OUT_PORTS];

/**
 * The process callback for this JACK application is called in a
 * special realtime thread once for each audio cycle.
 *
 * This client does nothing more than copy data from its input
 * port to its output port. It will exit when stopped by
 * the user (e.g. using Ctrl-C on a unix-ish operating system)
 */
void (*computemydsp)(void* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) = NULL;
void *mydsp = NULL;
void (*fb_computemydsp)(void* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) = NULL;
void *fb_mydsp = NULL;
int fb_flag = 0;
int process_block (jack_nframes_t nframes, void *arg) {

  jack_default_audio_sample_t* jack_in[IN_PORTS];
  jack_default_audio_sample_t* jack_out[OUT_PORTS];
  int i, j;
  if(fb_flag) {
    mydsp = fb_mydsp;
    computemydsp = fb_computemydsp;
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
  if (computemydsp && mydsp) {
    (*computemydsp)(mydsp, nframes, jack_in, jack_out);
  }
  //Then run module_process_frame, priming ins from jack_in, copying
  //outs back to jack_out
  /* for (i=0; i < nframes; i++) { */
  /*   for (j=0; j < IN_PORTS; j++) { */
  /*     in[j] = float_to_fr32(*(jack_in[j] + i)); */
  /*   } */

  /*   for (j=0; j < OUT_PORTS; j++) { */
  /*     *(jack_out[j] + i) = fr32_to_float(out[j]); */
  /*   } */
  /* } */
  for(i=0; i < ui.n_triggers; i++) {
    *(ui.triggers[i]) = 0;
  }
  return 0;
}

void jack_shutdown (void *arg) {
	fprintf(stderr, "JACK shut down, exiting ...\n");
	exit (1);
}
int foo_handler(const char *path, const char *types, lo_arg ** argv,
		int argc, void *data, void *user_data);
int report_commands_handler(const char *path, const char *types, lo_arg ** argv,
		int argc, void *data, void *user_data);
int engine_load_handler(const char *path, const char *types, lo_arg ** argv,
		int argc, void *data, void *user_data);
int report_engines_handler(const char *path, const char *types, lo_arg ** argv,
		int argc, void *data, void *user_data);
int generic_handler(const char *path, const char *types, lo_arg ** argv,
		    int argc, void *data, void *user_data);

void error(int num, const char *m, const char *path);

volatile FAUSTFLOAT *button;
void load_so (char *so_file) {
  void *handle = dlopen(so_file, RTLD_NOW);
  if (handle == NULL) {
    printf("blaaargh\n");
    fprintf(stderr, "%s\n", dlerror());
    exit(EXIT_FAILURE);
  }
  void * (*newmydsp)(void);
  newmydsp = dlsym(handle, "newmydsp");
  fb_mydsp = (*newmydsp)();
  void (*instanceInitmydsp)(void*, int);
  instanceInitmydsp = dlsym(handle, "instanceInitmydsp");
  (*instanceInitmydsp)(fb_mydsp, 44100);

  void (*buildUserInterfacemydsp)(void*, UIGlue*);
  buildUserInterfacemydsp = dlsym(handle, "buildUserInterfacemydsp");
  resetUIGlue(&ui);
  (*buildUserInterfacemydsp)(fb_mydsp, &ui);
  fb_computemydsp = dlsym(handle, "computemydsp");
  fb_flag = 1;
}

int main (int argc, char *argv[]) {
  initUIGlue(&ui);
  ui.st = lo_server_thread_new("57120", error);
  /* if(argc >=2) { */
  /*   load_so(argv[1]); */
  /* } */
  //fire up osc server for module
  printf("bang osc port 57120 @ /param with a float\n");

  /* lo_server_thread_add_method(ui.st, NULL, NULL, generic_handler, NULL); */
  lo_server_thread_add_method(ui.st, "/param", "f", foo_handler, NULL);
  lo_server_thread_add_method(ui.st, "/report/commands", "", report_commands_handler, NULL);
  lo_server_thread_add_method(ui.st, "/engine/load/name", "s", engine_load_handler, NULL);
  lo_server_thread_add_method(ui.st, "/report/engines", "", report_engines_handler, NULL);
  /* lo_server_thread_add_method(st, NULL, "f", param_handler, NULL); */
  lo_server_thread_start(ui.st);

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

  /* tell the JACK server to call `process()' whenever
     there is work to be done.
  */

  jack_set_process_callback (client, process_block, 0);

  /* tell the JACK server to call `latency()' whenever
     the latency needs to be recalculated.
  */

  /* tell the JACK server to call `jack_shutdown()' if
     it ever shuts down, either entirely, or if it
     just decides to stop calling us.
  */

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

  lo_address matron_addr = lo_address_new(NULL, "8888");
  lo_send(matron_addr, "/crone/ready","");
  /* keep running until stopped by the user */
  while(1) {
    if (argc >= 3) {
      button = testFindParam(&ui, argv[2]);
    }
    usleep(100 * 1000);
    if (button) {
      if (*button < 0.5) {
	*button  = 1.0;
      }
      else {
	*button = 0.0;
      }
    }
  }

  /* this is never reached but if the program
     had some other way to exit besides being killed,
     they would be important to call.
  */

  jack_client_close (client);
  exit (0);
}
/* catch any incoming messages and display them. returning 1 means that the
 * message has not been fully handled and the server should try other methods */
int param_handler(const char *path, const char *types, lo_arg ** argv,
		  int argc, void *data, void *user_data) {
  /* printf("handling param: %s\n", path); */
  /* float *param = testFindParam(&ui, (char *)path); */
  /* if (param) { */
  *((float*)user_data) = argv[0]->f;
    /* *param = argv[0]->f; */
  /* } */

  return 1;
}

int generic_handler(const char *path, const char *types, lo_arg ** argv,
		    int argc, void *data, void *user_data)
{
    int i;

    printf("path: <%s>\n", path);
    for (i = 0; i < argc; i++) {
	printf("arg %d '%c' ", i, types[i]);
	lo_arg_pp((lo_type)types[i], argv[i]);
	printf("\n");
    }
    printf("\n");
    fflush(stdout);

    return 1;
}

int engine_load_handler(const char *path, const char *types, lo_arg ** argv,
		   int argc, void *data, void *user_data) {
  load_so(&argv[0]->s);
  report_commands_handler(path, types, argv, argc, data, user_data);
}

int report_commands_handler(const char *path, const char *types, lo_arg ** argv,
		   int argc, void *data, void *user_data) {
  printf("reporting commands...\n");
  lo_address t = lo_address_new(NULL, "8888");
  lo_send(t, "/report/commands/start","i", ui.faustParamIdx);
  int i;
  for(i=0; i < ui.faustParamIdx; i++) {
    char *without_cmd = ui.faustParam[i].name + 9;// XXX nasty hack to unfuck matron's asymmetric addr-mangling
    printf("cmd: %s...\n", without_cmd);
    lo_send(t, "/report/commands/entry","iss", i, without_cmd, "f");
  }
  lo_send(t, "/report/commands/end","");

  lo_send(t, "/report/polls/start","i", 0);
  lo_send(t, "/report/polls/end","");

}
int report_engines_handler(const char *path, const char *types, lo_arg ** argv,
		   int argc, void *data, void *user_data) {
  printf("reporting engines...\n");
  lo_address t = lo_address_new(NULL, "8888");
  lo_send(t, "/report/engines/start","i", 1);
  lo_send(t, "/report/engines/entry","iss", 0, "drumbum", "f");
  lo_send(t, "/report/engines/end","i", 1);
}
int foo_handler(const char *path, const char *types, lo_arg ** argv,
		int argc, void *data, void *user_data) {
  printf("received param %f\n", argv[0]->f);
  return 0;
}


void error(int num, const char *msg, const char *path)
{
    printf("liblo server error %d in path %s: %s\n", num, path, msg);
    fflush(stdout);
}
