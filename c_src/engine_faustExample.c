#include "engine.h"
#include <stdlib.h>
#include <math.h>
#include "engine_faustExample.h"
#include <sys/mman.h>
#include <malloc.h>

struct example {
  UIGlue ui;
  float sr;
  void *faustDsp;
};

void *engine_new(struct engineUI_t *eui, int samplingFreq) {
  struct example *engine = malloc(sizeof(struct example));
  mlock(engine, sizeof(struct example));
  initUIGlue(&engine->ui, eui);
  engine->ui.engineUI->sampleRate = samplingFreq;
  engine->ui.engineUI->numSignalInputs = getNumInputsmydsp(engine->faustDsp);
  engine->ui.engineUI->numSignalOutputs = getNumOutputsmydsp(engine->faustDsp);
  engine->faustDsp = newmydsp();
  mlock(engine->faustDsp, malloc_usable_size(engine->faustDsp));
  initmydsp(engine->faustDsp, samplingFreq);
  return (void*)engine;
}

void engine_free(void *engine) {
  struct example *e = (struct example *) engine;
  munlock(e->faustDsp, malloc_usable_size(e->faustDsp));
  deletemydsp(e->faustDsp);
  munlock(engine, sizeof(struct example));
  free(engine);
}

void engine_buildUI(void *engine, struct engineUI_t *ui) {
  struct example *e = (struct example *) engine;
  buildUserInterfacemydsp(e->faustDsp, &e->ui);
}

void engine_next(void *engine, int count, ENGINEFLOAT** inputs, ENGINEFLOAT** outputs) {
  struct example *e = (struct example *) engine;
  computemydsp(e->faustDsp, count, inputs, outputs);
  int i;
  for(i=0; i < e->ui.n_triggers; i++) {
    *(e->ui.triggers[i]) = 0;
  }
}
