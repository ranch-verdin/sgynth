#ifndef _ENGINE_H
#define _ENGINE_H
#include <jack/jack.h>
#include "lo/lo.h"

#define ENGINEFLOAT float
#define ENGINE_MAX_NAMESTRING 256 // max chars in engine namestring
#define ENGINE_MAX_PARAMS 1024 // max number of params in an engine
#define ENGINE_MAX_COMMANDS 512 // max number of params in an engine
#define ENGINE_MAX_POLLS 256 // max number of params in an engine
#define ENGINE_MAX_PARAMDEPTH 128 // max nesting for engine params

struct engineParam_t {
  char name[ENGINE_MAX_NAMESTRING];
  volatile ENGINEFLOAT *param; // OSC server will set this to update the value seen by the DSP
  ENGINEFLOAT init; // engineHost will initialise *param to this value

  ENGINEFLOAT min; // engineHost will clip params within the range
  ENGINEFLOAT max; // min->max
  ENGINEFLOAT increment; // with this increments of 
};

struct engineCommand_t {
  char name[ENGINE_MAX_NAMESTRING];
  char fmt[ENGINE_MAX_NAMESTRING];
  struct engineParam_t param; // need this in order to implement 'command params'

  // need these in order to schedule 'trigger' commands at start of audio frame
  ENGINEFLOAT newval;
  int update_flag;
};

struct enginePoll_t {
  char name[ENGINE_MAX_NAMESTRING];
  volatile ENGINEFLOAT *poll;

  ENGINEFLOAT min; // engineHost will clip *poll within the range
  ENGINEFLOAT max; // min->max
};

struct engineUI_t{
  /* struct engineUI_t *ui; */ // don't understand why this would be required
  void (*engineAddParam)(struct engineUI_t *uiInterface, char *paramName,
			 ENGINEFLOAT *param,
			 ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max, ENGINEFLOAT increment);
  void (*engineAddParamCommand)(struct engineUI_t *uiInterface, char *cmdName,
				ENGINEFLOAT *param,
				ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max);
  void (*engineAddTriggerCommand)(struct engineUI_t *uiInterface, char *cmdName,
				  ENGINEFLOAT *param,
				  ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max);
  void (*engineAddCommand)(struct engineUI_t *ui, char *commandName, char *argFmt,
			   void *liblo_handler, void *userdata);
  void (*engineAddPoll)(struct engineUI_t *uiInterface, char *pollName,
			ENGINEFLOAT *param,
			ENGINEFLOAT min, ENGINEFLOAT max);
  void (*engineResetUI)(struct engineUI_t *ui);

  struct engineParam_t params[ENGINE_MAX_PARAMS];
  int numParams;

  struct engineCommand_t commands[ENGINE_MAX_COMMANDS];
  int numCommands;

  struct enginePoll_t polls[ENGINE_MAX_POLLS];
  int numPolls;

  int sampleRate;
  int numSignalInputs;
  int numSignalOutputs;
  lo_server st;
  lo_address matron_addr;
};

void *engine_new(struct engineUI_t *ui, int samplingFreq); // needs to call faust's newmydsp
void engine_free(void *engine);
void engine_buildUI(void *engine, struct engineUI_t *ui);
void engine_next(void *engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs);
#endif
