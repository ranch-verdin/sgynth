#include "engine.h"

void default_engineAddParam(struct engineUI_t *ui, char *paramName, ENGINEFLOAT *param,
			    ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max, ENGINEFLOAT increment);

void default_engineAddParamCommand(struct engineUI_t *ui, char *commandName,
				   ENGINEFLOAT *param,
				   ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max);

void default_engineAddTriggerCommand(struct engineUI_t *ui, char *commandName,
				     ENGINEFLOAT *param,
				     ENGINEFLOAT init, ENGINEFLOAT min, ENGINEFLOAT max);

void default_engineAddPoll(struct engineUI_t *uiInterface, char *pollName,
			   ENGINEFLOAT *poll,
			   ENGINEFLOAT min, ENGINEFLOAT max);

void default_engineAddCommand(struct engineUI_t *ui, char *commandName, char *argFmt,
			      void *liblo_handler, void *userdata);


void default_engineInitUI (struct engineUI_t *ui);
void default_engineResetUI(struct engineUI_t *ui);

int report_commands_handler(const char *path, const char *types, lo_arg ** argv,
			    int argc, void *data, void *user_data);
int report_params_handler(const char *path, const char *types, lo_arg ** argv,
			  int argc, void *data, void *user_data);
int engine_load_handler(const char *path, const char *types, lo_arg ** argv,
			int argc, void *data, void *user_data);
int report_engines_handler(const char *path, const char *types, lo_arg ** argv,
			   int argc, void *data, void *user_data);
int generic_handler(const char *path, const char *types, lo_arg ** argv,
		    int argc, void *data, void *user_data);
int ready_handler(const char *path, const char *types, lo_arg ** argv,
		  int argc, void *data, void *user_data);

void lo_server_error(int num, const char *m, const char *path);
void recrank_lo_server(struct engineUI_t *ui);

volatile int engine_reload_flag;
char engine_reload_string[ENGINE_MAX_NAMESTRING];
