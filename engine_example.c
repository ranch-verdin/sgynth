#include "engine.h"
#include <stdlib.h>
#include <math.h>

struct example {
  struct engineUI_t *ui;
  float sr;
  ENGINEFLOAT gain;
  ENGINEFLOAT prang;
  ENGINEFLOAT vu;
  float env;
};

void *engine_new(struct engineUI_t *ui, int samplingFreq) {
  struct example *engine = malloc(sizeof(struct example));
  engine->ui = ui;
  ui->sampleRate = samplingFreq;
  ui->numSignalInputs = 0;
  ui->numSignalOutputs = 1;
  return (void*)engine;
}

void engine_free(void *engine) {
  free(engine);
}

void engine_buildUI(void *engine, struct engineUI_t *ui) {
  struct example *e = (struct example *) engine;
  // add a volume control to this engine, 0.0->1.0 in 0.01 increments (default 0.5)
  ui->engineAddParam(ui, "volume",
		     &e->gain,
		     0.5, 0.0, 1.0, 0.01);

  // FIXME - expressing commands as floating point number only is is a
  // nasty quirk of faust - FloatTrig should be expressed using a
  // function call
  // add a simple float trigger command to this engine, resting value 0.0
  ui->engineAddFloatCommand(ui, "prang",
			    &e->prang,
			    0.0, 0.0, 1.0);

  // add a simple float poll which monitors rms
  ui->engineAddPoll(ui, "noise",
		    &e->vu,
		    0.0, 1.0);
}

void engine_next(void *engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) {
  struct example *e = (struct example *) engine;
  int i;
  for (i=0; i < count; i++) {
    if(e->prang != 0) {
      e->env = e->prang;
    }
    e->env *= 0.99999;
    float noise = (float)rand()/(float)(RAND_MAX/2.0);
    noise -= 1.0;
    outputs[0][i] = noise * e->env;
    e->vu *= 0.999;
    e->vu += 0.001 * fabs(outputs[0][i]);
  }
  e->prang = 0;
}
