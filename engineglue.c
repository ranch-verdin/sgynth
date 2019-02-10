#include "engine.h"
#include "engineglue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <err.h>
#include <errno.h>
#include <error.h>
#include "lo/lo.h"

static int default_engineParamHandler(const char *path, const char *types, lo_arg ** argv,
				      int argc, void *data, void *user_data) {
  printf("handling param: %s,%f\n", path, argv[0]->f);
  *((float*)user_data) = argv[0]->f;
  return 1;
}

void default_engineAddParam(struct engineUI_t *ui, char *paramName, ENGINEFLOAT *param,
			    ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max, ENGINEFLOAT increment) {
  strncpy(ui->params[ui->numParams].name, paramName, ENGINE_MAX_NAMESTRING - 1);
  ui->params[ui->numParams].param = param;
  ui->params[ui->numParams].init = init;
  ui->params[ui->numParams].min = min;
  ui->params[ui->numParams].max = max;
  ui->params[ui->numParams].increment = increment;

  *param = init;
  char oscAddr[ENGINE_MAX_NAMESTRING] = "/param/";;
  strncat(oscAddr, paramName, ENGINE_MAX_NAMESTRING - 1);
  printf("adding osc param method %s f\n", oscAddr);
  lo_server_add_method(ui->st, oscAddr, "f", default_engineParamHandler, param);

  ui->numParams++;
}

// this is a command which has the behaviour of a param (i.e setting float *param)
void default_engineAddParamCommand(struct engineUI_t *ui, char *commandName,
				   ENGINEFLOAT *param,
				   ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max) {
  strncpy(ui->commands[ui->numCommands].name, commandName, ENGINE_MAX_NAMESTRING - 1);
  ui->commands[ui->numCommands].param.param = param;// FIXME: yuk!
  ui->commands[ui->numCommands].param.init = init;
  ui->commands[ui->numCommands].param.min = min;
  ui->commands[ui->numCommands].param.max = max;

  *param = init;
  char oscAddr[ENGINE_MAX_NAMESTRING] = "/command/";;
  strncat(oscAddr, commandName, ENGINE_MAX_NAMESTRING - 1);
  printf("adding osc command-param method %s f\n", oscAddr);
  lo_server_add_method(ui->st, oscAddr, "f", default_engineParamHandler, param);

  ui->numCommands++;
}

void default_engineAddCommand(struct engineUI_t *ui, char *commandName, char *argFmt,
			      void *liblo_handler, void *userdata) {
  strncpy(ui->commands[ui->numCommands].name, commandName, ENGINE_MAX_NAMESTRING - 1);
  strncpy(ui->commands[ui->numCommands].fmt, argFmt, ENGINE_MAX_NAMESTRING - 1);
  char oscAddr[ENGINE_MAX_NAMESTRING] = "/command/";;
  strncat(oscAddr, commandName, ENGINE_MAX_NAMESTRING - 1);
  printf("adding osc command method %s %s\n", oscAddr, argFmt);
  lo_server_add_method(ui->st, oscAddr, argFmt, liblo_handler, userdata);
  ui->numCommands++;
}

void default_engineAddPoll(struct engineUI_t *ui, char *pollName,
			   ENGINEFLOAT *poll,
			   ENGINEFLOAT min, ENGINEFLOAT max) {
  strncpy(ui->commands[ui->numPolls].name, pollName, ENGINE_MAX_NAMESTRING - 1);
  ui->polls[ui->numPolls].poll= poll;
  ui->polls[ui->numPolls].min = min;
  ui->polls[ui->numPolls].max = max;
  *poll = 0;
  ui->numPolls++;
}

void default_engineInitUI (struct engineUI_t *ui) {
  ui->engineAddParam = default_engineAddParam;
  ui->engineAddParamCommand = default_engineAddParamCommand;
  ui->engineAddCommand = default_engineAddCommand;
  ui->engineAddPoll = default_engineAddPoll;
  ui->numParams = 0;
  ui->numCommands = 0;
  ui->numPolls = 0;
  ui->st = NULL;
  recrank_lo_server(ui);
}

void default_engineResetUI(struct engineUI_t *ui) {
  ui->numParams = 0;
  ui->numCommands = 0;
  ui->numPolls = 0;
  recrank_lo_server(ui);
}

void recrank_lo_server(struct engineUI_t *ui) {
  if (ui->st) {
    lo_server_free(ui->st);
  }
  ui->st = lo_server_new("57120", lo_server_error);
  lo_server_add_method(ui->st, NULL, NULL, generic_handler, NULL);
  lo_server_add_method(ui->st, "/report/commands", "", report_commands_handler, ui->matron_addr);
  lo_server_add_method(ui->st, "/report/params", "", report_params_handler, ui->matron_addr);
  // FIXME add the plumbing for polls and uncomment line below
  /* lo_server_add_method(ui->st, "/report/polls", "", report_polls_handler, ui); */
  lo_server_add_method(ui->st, "/engine/load/name", "s", engine_load_handler, NULL);
  lo_server_add_method(ui->st, "/report/engines", "", report_engines_handler, ui->matron_addr);
  lo_server_add_method(ui->st, "/ready", "", ready_handler, ui);

  /* lo_server_start(ui->st); */
}

/* void engineParam_init(struct engineParam_t *e, */
/*		      char *name, */
/*		      ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max) { */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->init = init; */
/*   e->min = min; */
/*   e->max = max; */
/* } */

/* void engineCommand_init(struct engineParam_t *e, */
/*			char *name, */
/*			ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max){ */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->rest = rest; */
/*   e->min = min; */
/*   e->max = max; */
/* } */

/* void enginePoll_init(struct engineParam_t *e, */
/*		     char *name, */
/*		     ENGINEFLOAT min, ENGINEFLOAT max){ */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->min = min; */
/*   e->max = max; */
/* } */
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
  strncpy(engine_reload_string, &argv[0]->s, ENGINE_MAX_NAMESTRING - 1);
  engine_reload_flag = 1;
  return 0;
}

int ready_handler(const char *path, const char *types, lo_arg ** argv,
		  int argc, void *data, void *user_data) {
  struct engineUI_t *ui = user_data;
  lo_send(ui->matron_addr, "/crone/ready","");
  return 0;
}

int report_commands_handler(const char *path, const char *types, lo_arg ** argv,
			    int argc, void *data, void *user_data) {
  struct engineUI_t *ui = user_data;
  printf("reporting commands...\n");
  lo_send(ui->matron_addr, "/report/commands/start","i", ui->numCommands);
  int i;
  for(i=0; i < ui->numCommands; i++) {
    char *without_cmd = ui->commands[i].name;
    printf("cmd: %s...\n", without_cmd);
    lo_send(ui->matron_addr, "/report/commands/entry","iss", i, without_cmd, "f");
  }
  lo_send(ui->matron_addr, "/report/commands/end","");

  lo_send(ui->matron_addr, "/report/polls/start","i", 0);
  lo_send(ui->matron_addr, "/report/polls/end","");
  return 0;
}
int report_params_handler(const char *path, const char *types, lo_arg ** argv,
			  int argc, void *data, void *user_data) {
  struct engineUI_t *ui = user_data;
  printf("reporting params...\n");
  lo_send(ui->matron_addr, "/report/params/start","i", ui->numParams);
  int i;
  for(i=0; i < ui->numParams; i++) {
    char *without_cmd =  ui->params[i].name;
    printf("cmd: %s...\n", without_cmd);
    lo_send(ui->matron_addr, "/report/params/entry","iss", i, without_cmd, "f");
  }
  lo_send(ui->matron_addr, "/report/params/end","");

  lo_send(ui->matron_addr, "/report/polls/start","i", 0);
  lo_send(ui->matron_addr, "/report/polls/end","");
  return 0;
}
int report_engines_handler(const char *path, const char *types, lo_arg ** argv,
			   int argc, void *data, void *userdata) {
  struct engineUI_t *ui = userdata;
  printf("reporting engines...\n");
  lo_send(ui->matron_addr, "/report/engines/start","i", 1);
  lo_send(ui->matron_addr, "/report/engines/entry","iss", 0, "./engine_example.so", "f");
  // FIXME actually ls the directory and report all available .so to matron
  lo_send(ui->matron_addr, "/report/engines/end","i", 1);
  return 0;
}

void lo_server_error(int num, const char *msg, const char *path)
{
  printf("liblo server error %d in path %s: %s\n", num, path, msg);
  fflush(stdout);
}
volatile int engine_reload_flag = 0;
char engine_reload_string[ENGINE_MAX_NAMESTRING] = "";
