#ifndef _ENGINE_FAUSTEXAMPLE_H
#define _ENGINE_FAUSTEXAMPLE_H
#include "faustglue.h"
int getNumInputsmydsp(void* dsp);
int getNumOutputsmydsp(void* dsp);
void* newmydsp();
void deletemydsp(void* dsp);
void initmydsp(void* dsp, int samplingFreq);
void buildUserInterfacemydsp(void* dsp, UIGlue* ui_interface);
void computemydsp(void *dsp, int count, ENGINEFLOAT **inputs, ENGINEFLOAT **outputs);
#endif
