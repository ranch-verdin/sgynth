#include "engine.h"

void default_engineAddParam(struct engineUI_t *ui, char *paramName, ENGINEFLOAT *param,
			    ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max, ENGINEFLOAT increment);

void default_engineAddFloatCommand(struct engineUI_t *uiInterface, char *commandName,
				   ENGINEFLOAT *command,
				   ENGINEFLOAT rest, ENGINEFLOAT min, ENGINEFLOAT max);

void default_engineAddPoll(struct engineUI_t *uiInterface, char *pollName,
			   ENGINEFLOAT *poll,
			   ENGINEFLOAT min, ENGINEFLOAT max);

void default_engineAddCommand(struct engineUI_t *uiInterface, char *cmdName,
			      void *liblo_handler);


void default_engineInitUI (struct engineUI_t *ui);
void default_engineResetUI(struct engineUI_t *ui);
