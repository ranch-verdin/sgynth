#include "engine.h"
#include "engineglue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <err.h>
#include <errno.h>
#include <error.h>

void default_engineAddParam(struct engineUI_t *ui, char *paramName, ENGINEFLOAT *param,
			    ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max, ENGINEFLOAT increment) {
  strncpy(ui->params[ui->numParams].name, paramName, ENGINE_MAX_NAMESTRING - 1);
  ui->params[ui->numParams].param = param;
  ui->params[ui->numParams].init = init;
  ui->params[ui->numParams].min = min;
  ui->params[ui->numParams].max = max;
  ui->params[ui->numParams].increment = increment;

  *param = init;
  ui->numParams++;
}
void default_engineAddFloatCommand(struct engineUI_t *ui, char *commandName,
				   ENGINEFLOAT *command,
				   ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max) {
  strncpy(ui->commands[ui->numCommands].name, commandName, ENGINE_MAX_NAMESTRING - 1);
  ui->commands[ui->numCommands].command = command;
  ui->commands[ui->numCommands].rest = rest;
  ui->commands[ui->numCommands].min = min;
  ui->commands[ui->numCommands].max = max;

  *command = rest;
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

void default_engineAddCommand(struct engineUI_t *ui, char *cmdName,
			      void *liblo_handler) {
  error(1, EAFNOSUPPORT,"engine add command not implemented yet for arbitrary liblo callback");
}

void default_engineInitUI (struct engineUI_t *ui) {
  ui->engineAddParam = default_engineAddParam;
  ui->engineAddFloatCommand = default_engineAddFloatCommand;
  ui->engineAddCommand = default_engineAddCommand;
  ui->engineAddPoll = default_engineAddPoll;
  ui->numParams = 0;
  ui->numCommands = 0;
  ui->numPolls = 0;
}

void default_engineResetUI(struct engineUI_t *ui) {
  ui->numParams = 0;
  ui->numCommands = 0;
  ui->numPolls = 0;
}

/* void engineParam_init(struct engineParam_t *e, */
/* 		      char *name, */
/* 		      ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max) { */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->init = init; */
/*   e->min = min; */
/*   e->max = max; */
/* } */

/* void engineCommand_init(struct engineParam_t *e, */
/* 			char *name, */
/* 			ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max){ */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->rest = rest; */
/*   e->min = min; */
/*   e->max = max; */
/* } */

/* void enginePoll_init(struct engineParam_t *e, */
/* 		     char *name, */
/* 		     ENGINEFLOAT min, ENGINEFLOAT max){ */
/*   strncpy(e->name, name, ENGINE_MAX_NAMESTRING -1); */
/*   e->min = min; */
/*   e->max = max; */
/* } */
