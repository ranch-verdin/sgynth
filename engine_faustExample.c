#include "engine.h"
#include <stdlib.h>
#include <math.h>
#include "engine_faustExample.h"

struct example {
  UIGlue ui;
  float sr;
  void *faustDsp;
};

void *engine_new(struct engineUI_t *eui, int samplingFreq) {
  struct example *engine = malloc(sizeof(struct example));
  initUIGlue(&engine->ui, eui);
  engine->ui.engineUI->sampleRate = samplingFreq;
  engine->ui.engineUI->numSignalInputs = getNumInputsmydsp(engine->faustDsp);
  engine->ui.engineUI->numSignalOutputs = getNumOutputsmydsp(engine->faustDsp);
  engine->faustDsp = newmydsp();
  initmydsp(engine->faustDsp, samplingFreq);
  return (void*)engine;
}

void engine_free(void *engine) {
  struct example *e = (struct example *) engine;
  deletemydsp(e->faustDsp);
  free(engine);
}

void engine_buildUI(void *engine, struct engineUI_t *ui) {
  struct example *e = (struct example *) engine;
  buildUserInterfacemydsp(e->faustDsp, &e->ui);
}

void engine_next(void *engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) {
  struct example *e = (struct example *) engine;
  computemydsp(e->faustDsp, count, inputs, outputs);
}
