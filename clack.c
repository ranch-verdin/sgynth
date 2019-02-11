#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "clack"
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
	float fConst1;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fRec0[2];
	int iRec2[2];
	FAUSTFLOAT fVslider5;
	float fRec1[2];
	float fConst2;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst3;
	FAUSTFLOAT fVslider6;
	float fRec4[2];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fRec3[2];
	
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)malloc(sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/version", "0.0");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.0");
	m->declare(m->metaInterface, "filename", "clack");
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
	m->declare(m->metaInterface, "name", "clack");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "0.0");
}

int getSampleRatemydsp(mydsp* dsp) { return dsp->fSamplingFreq; }

int getNumInputsmydsp(mydsp* dsp) {
	return 0;
	
}
int getNumOutputsmydsp(mydsp* dsp) {
	return 1;
	
}
int getInputRatemydsp(mydsp* dsp, int channel) {
	int rate;
	switch (channel) {
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
	dsp->fVslider0 = (FAUSTFLOAT)5000.0f;
	dsp->fVslider1 = (FAUSTFLOAT)0.70599999999999996f;
	dsp->fVslider2 = (FAUSTFLOAT)1.8999999999999999f;
	dsp->fVslider3 = (FAUSTFLOAT)0.42099999999999999f;
	dsp->fVslider4 = (FAUSTFLOAT)3.8999999999999999f;
	dsp->fVslider5 = (FAUSTFLOAT)0.97999999999999998f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider6 = (FAUSTFLOAT)6.4000000000000004f;
	dsp->fVslider7 = (FAUSTFLOAT)20.0f;
	dsp->fVslider8 = (FAUSTFLOAT)1.0f;
	
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
			dsp->iRec2[l1] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec1[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->fVec0[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec4[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec3[l5] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (1.0f / dsp->fConst0);
	dsp->fConst2 = (6.90999985f / dsp->fConst0);
	dsp->fConst3 = (0.00100000005f * dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider8, 1.0f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider0, 5000.0f, 2000.0f, 10000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapq", &dsp->fVslider5, 0.980000019f, 0.5f, 5.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider7, 20.0f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fVslider4, 3.9000001f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fVslider2, 1.89999998f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "length", &dsp->fVslider6, 6.4000001f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fVslider3, 0.421000004f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fVslider1, 0.70599997f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = sinf((3.14159274f * min(0.25f, (dsp->fConst1 * (float)dsp->fVslider0))));
	float fSlow1 = (2.0f * fSlow0);
	float fSlow2 = (float)dsp->fVslider1;
	float fSlow3 = (1.0f / fSlow2);
	float fSlow4 = (1.0f / (float)dsp->fVslider2);
	float fSlow5 = (1.0f - fSlow4);
	float fSlow6 = (2.0f / fSlow5);
	float fSlow7 = (float)dsp->fVslider3;
	float fSlow8 = (1.0f / fSlow7);
	float fSlow9 = (1.0f / (float)dsp->fVslider4);
	float fSlow10 = (1.0f - fSlow9);
	float fSlow11 = (2.0f / fSlow10);
	float fSlow12 = min((2.0f * (1.0f - powf((float)dsp->fVslider5, 0.25f))), min(2.0f, ((1.0f / fSlow0) - fSlow0)));
	float fSlow13 = (float)dsp->fButton0;
	float fSlow14 = (dsp->fConst3 * (float)dsp->fVslider6);
	float fSlow15 = (0.00100000005f * (float)dsp->fVslider7);
	float fSlow16 = (0.00100000005f * (float)dsp->fVslider8);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (dsp->fRec0[1] + (fSlow1 * dsp->fRec1[1]));
			float fTemp1 = (fSlow3 * fTemp0);
			float fTemp2 = expf((0.0f - (fSlow6 * (min(max(fTemp1, 0.0f), 10.0f) - fSlow4))));
			float fTemp3 = (fSlow8 * fabsf(fTemp0));
			float fTemp4 = expf((0.0f - (fSlow11 * (min(max(fTemp3, 0.0f), 10.0f) - fSlow9))));
			float fTemp5 = ((fTemp0 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp3 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp4) / (fTemp4 + 1.0f))))):fTemp3))):(fSlow2 * ((fTemp1 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp2) / (fTemp2 + 1.0f))))):fTemp1)));
			dsp->fRec0[0] = fTemp5;
			dsp->iRec2[0] = ((1103515245 * dsp->iRec2[1]) + 12345);
			float fTemp6 = ((4.65661287e-10f * (float)dsp->iRec2[0]) - (fSlow12 * dsp->fRec1[1]));
			float fTemp7 = (fSlow3 * fTemp6);
			float fTemp8 = expf((0.0f - (fSlow6 * (min(max(fTemp7, 0.0f), 10.0f) - fSlow4))));
			float fTemp9 = (fSlow8 * fabsf(fTemp6));
			float fTemp10 = expf((0.0f - (fSlow11 * (min(max(fTemp9, 0.0f), 10.0f) - fSlow9))));
			float fTemp11 = (((fTemp6 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp9 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp10) / (fTemp10 + 1.0f))))):fTemp9))):(fSlow2 * ((fTemp7 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp8) / (fTemp8 + 1.0f))))):fTemp7))) - fTemp5);
			float fTemp12 = (fSlow3 * fTemp11);
			float fTemp13 = expf((0.0f - (fSlow6 * (min(max(fTemp12, 0.0f), 10.0f) - fSlow4))));
			float fTemp14 = (fSlow8 * fabsf(fTemp11));
			float fTemp15 = expf((0.0f - (fSlow11 * (min(max(fTemp14, 0.0f), 10.0f) - fSlow9))));
			float fTemp16 = ((fTemp11 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp14 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp15) / (fTemp15 + 1.0f))))):fTemp14))):(fSlow2 * ((fTemp12 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp13) / (fTemp13 + 1.0f))))):fTemp12)));
			float fTemp17 = (dsp->fRec1[1] + (fSlow1 * fTemp16));
			float fTemp18 = (fSlow3 * fTemp17);
			float fTemp19 = expf((0.0f - (fSlow6 * (min(max(fTemp18, 0.0f), 10.0f) - fSlow4))));
			float fTemp20 = (fSlow8 * fabsf(fTemp17));
			float fTemp21 = expf((0.0f - (fSlow11 * (min(max(fTemp20, 0.0f), 10.0f) - fSlow9))));
			dsp->fRec1[0] = ((fTemp17 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp20 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp21) / (fTemp21 + 1.0f))))):fTemp20))):(fSlow2 * ((fTemp18 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp19) / (fTemp19 + 1.0f))))):fTemp18)));
			dsp->fVec0[0] = fSlow13;
			dsp->fRec4[0] = ((((fSlow13 - dsp->fVec0[1]) > 0.0f) > 0)?fSlow14:max(0.0f, (dsp->fRec4[1] + -1.0f)));
			int iTemp22 = (dsp->fRec4[0] > 0.0f);
			int iTemp23 = (iTemp22 > 0);
			float fTemp24 = expf((0.0f - (dsp->fConst2 / (iTemp23?fSlow16:fSlow15))));
			dsp->fRec3[0] = ((dsp->fRec3[1] * fTemp24) + ((iTemp23?(float)iTemp22:0.0f) * (1.0f - fTemp24)));
			output0[i] = (FAUSTFLOAT)(dsp->fRec1[0] * dsp->fRec3[0]);
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->iRec2[1] = dsp->iRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
