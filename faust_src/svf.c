#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "svf"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: c, -scal -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifdef __cplusplus
extern "C" {
#endif

/* link with : "" */
#include <math.h>
#include <stdlib.h>


#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	
	int fSamplingFreq;
	float fConst0;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fRec0[2];
	FAUSTFLOAT fHslider5;
	float fRec1[2];
	
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)malloc(sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "filename", "svf");
	m->declare(m->metaInterface, "math.lib/author", "GRAME");
	m->declare(m->metaInterface, "math.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "math.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
	m->declare(m->metaInterface, "math.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "math.lib/name", "Math Library");
	m->declare(m->metaInterface, "math.lib/version", "1.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.1");
	m->declare(m->metaInterface, "name", "svf");
}

int getSampleRatemydsp(mydsp* dsp) { return dsp->fSamplingFreq; }

int getNumInputsmydsp(mydsp* dsp) {
	return 1;
	
}
int getNumOutputsmydsp(mydsp* dsp) {
	return 3;
	
}
int getInputRatemydsp(mydsp* dsp, int channel) {
	int rate;
	switch (channel) {
		case 0: {
			rate = 1;
			break;
		}
		default: {
			rate = -1;
			break;
		}
		
	}
	return rate;
	
}
int getOutputRatemydsp(mydsp* dsp, int channel) {
	int rate;
	switch (channel) {
		case 0: {
			rate = 1;
			break;
		}
		case 1: {
			rate = 1;
			break;
		}
		case 2: {
			rate = 1;
			break;
		}
		default: {
			rate = -1;
			break;
		}
		
	}
	return rate;
	
}

void classInitmydsp(int samplingFreq) {
	
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)500.0f;
	dsp->fHslider1 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider2 = (FAUSTFLOAT)2.0f;
	dsp->fHslider3 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider4 = (FAUSTFLOAT)2.0f;
	dsp->fHslider5 = (FAUSTFLOAT)0.54000000000000004f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->fRec0[l0] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->fRec1[l1] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = (1.0f / min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq)));
	
}

void instanceInitmydsp(mydsp* dsp, int samplingFreq) {
	instanceConstantsmydsp(dsp, samplingFreq);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int samplingFreq) {
	classInitmydsp(samplingFreq);
	instanceInitmydsp(dsp, samplingFreq);
}

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "svf");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq", &dsp->fHslider0, 500.0f, 10.0f, 1000.0f, 1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fHslider4, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fHslider2, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fHslider3, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fHslider1, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "q", &dsp->fHslider5, 0.540000021f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	FAUSTFLOAT* output2 = outputs[2];
	float fSlow0 = sinf((3.14159274f * min(0.25f, (dsp->fConst0 * (float)dsp->fHslider0))));
	float fSlow1 = (2.0f * fSlow0);
	float fSlow2 = (float)dsp->fHslider1;
	float fSlow3 = (1.0f / fSlow2);
	float fSlow4 = (1.0f / (float)dsp->fHslider2);
	float fSlow5 = (1.0f - fSlow4);
	float fSlow6 = (1.0f / fSlow5);
	float fSlow7 = (float)dsp->fHslider3;
	float fSlow8 = (1.0f / fSlow7);
	float fSlow9 = (1.0f / (float)dsp->fHslider4);
	float fSlow10 = (1.0f - fSlow9);
	float fSlow11 = (1.0f / fSlow10);
	float fSlow12 = min((2.0f * (1.0f - powf((float)dsp->fHslider5, 0.25f))), min(2.0f, ((1.0f / fSlow0) - fSlow0)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (dsp->fRec0[1] + (fSlow1 * dsp->fRec1[1]));
			float fTemp1 = (fSlow3 * fTemp0);
			float fTemp2 = (fSlow8 * fabsf(fTemp0));
			float fTemp3 = ((fTemp0 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp2 > fSlow9)?(1.0f - (fSlow10 * (1.0f - (float)tanhf((float)(fSlow11 * (min(max(fTemp2, 0.0f), 10.0f) - fSlow9)))))):fTemp2))):(fSlow2 * ((fTemp1 > fSlow4)?(1.0f - (fSlow5 * (1.0f - (float)tanhf((float)(fSlow6 * (min(max(fTemp1, 0.0f), 10.0f) - fSlow4)))))):fTemp1)));
			dsp->fRec0[0] = fTemp3;
			float fTemp4 = ((float)input0[i] - (fTemp3 + (fSlow12 * dsp->fRec1[1])));
			float fTemp5 = (fSlow3 * fTemp4);
			float fTemp6 = (fSlow8 * fabsf(fTemp4));
			float fTemp7 = ((fTemp4 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp6 > fSlow9)?(1.0f - (fSlow10 * (1.0f - (float)tanhf((float)(fSlow11 * (min(max(fTemp6, 0.0f), 10.0f) - fSlow9)))))):fTemp6))):(fSlow2 * ((fTemp5 > fSlow4)?(1.0f - (fSlow5 * (1.0f - (float)tanhf((float)(fSlow6 * (min(max(fTemp5, 0.0f), 10.0f) - fSlow4)))))):fTemp5)));
			float fTemp8 = (dsp->fRec1[1] + (fSlow1 * fTemp7));
			float fTemp9 = (fSlow3 * fTemp8);
			float fTemp10 = (fSlow8 * fabsf(fTemp8));
			dsp->fRec1[0] = ((fTemp8 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp10 > fSlow9)?(1.0f - (fSlow10 * (1.0f - (float)tanhf((float)(fSlow11 * (min(max(fTemp10, 0.0f), 10.0f) - fSlow9)))))):fTemp10))):(fSlow2 * ((fTemp9 > fSlow4)?(1.0f - (fSlow5 * (1.0f - (float)tanhf((float)(fSlow6 * (min(max(fTemp9, 0.0f), 10.0f) - fSlow4)))))):fTemp9)));
			float fRec2 = fTemp7;
			output0[i] = (FAUSTFLOAT)dsp->fRec0[0];
			output1[i] = (FAUSTFLOAT)dsp->fRec1[0];
			output2[i] = (FAUSTFLOAT)fRec2;
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
