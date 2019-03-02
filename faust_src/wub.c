#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "wub"
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

static float mydsp_faustpower3_f(float value) {
	return ((value * value) * value);
	
}
static float mydsp_faustpower2_f(float value) {
	return (value * value);
	
}

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
	float fConst2;
	float fConst3;
	float fConst4;
	FAUSTFLOAT fVslider0;
	float fConst5;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	float fRec3[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst6;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	int iRec5[2];
	float fConst7;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fRec4[2];
	float fRec1[2];
	float fConst8;
	FAUSTFLOAT fVslider10;
	float fRec7[2];
	float fConst9;
	float fRec8[2];
	float fConst10;
	float fConst11;
	float fRec6[3];
	FAUSTFLOAT fVslider11;
	float fRec2[2];
	float fRec0[3];
	
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
	m->declare(m->metaInterface, "filename", "wub");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/version", "0.0");
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
	m->declare(m->metaInterface, "name", "wub");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/version", "0.0");
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
	dsp->fVslider0 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)100.0f;
	dsp->fVslider2 = (FAUSTFLOAT)0.5f;
	dsp->fVslider3 = (FAUSTFLOAT)0.80000000000000004f;
	dsp->fVslider4 = (FAUSTFLOAT)8.0f;
	dsp->fVslider5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider6 = (FAUSTFLOAT)50.0f;
	dsp->fVslider7 = (FAUSTFLOAT)50.0f;
	dsp->fVslider8 = (FAUSTFLOAT)90.0f;
	dsp->fVslider9 = (FAUSTFLOAT)0.80000000000000004f;
	dsp->fVslider10 = (FAUSTFLOAT)1.0f;
	dsp->fVslider11 = (FAUSTFLOAT)1.2f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->fRec3[l0] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->iRec5[l1] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec4[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->fRec1[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec7[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec8[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
			dsp->fRec6[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec2[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			dsp->fRec0[l8] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = tanf((18849.5566f / dsp->fConst0));
	dsp->fConst2 = (1.0f / dsp->fConst1);
	dsp->fConst3 = (((dsp->fConst2 + 1.41421354f) / dsp->fConst1) + 1.0f);
	dsp->fConst4 = (1.0f / dsp->fConst3);
	dsp->fConst5 = (1.0f / dsp->fConst0);
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (0.00100000005f * dsp->fConst0);
	dsp->fConst8 = (0.419999987f / dsp->fConst3);
	dsp->fConst9 = (1.0f / dsp->fConst0);
	dsp->fConst10 = (((dsp->fConst2 + -1.41421354f) / dsp->fConst1) + 1.0f);
	dsp->fConst11 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst1))));
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "wub");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider1, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider5, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "params");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider7, 50.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "basefreq", &dsp->fVslider3, 0.800000012f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider8, 90.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "env", &dsp->fVslider4, 8.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q", &dsp->fVslider11, 1.20000005f, 0.800000012f, 1.10000002f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider6, 50.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sustain", &dsp->fVslider9, 0.800000012f, 0.0f, 1.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider10, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.200000003f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "portamento", &dsp->fVslider2, 0.5f, 0.00999999978f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider2;
	float fSlow2 = (0.00100000005f * ((float)dsp->fVslider1 * fSlow1));
	float fSlow3 = (1.0f - (0.00100000005f * fSlow1));
	float fSlow4 = (float)dsp->fVslider3;
	float fSlow5 = (float)dsp->fVslider4;
	float fSlow6 = (float)dsp->fVslider5;
	int iSlow7 = (fSlow6 > 0.0f);
	float fSlow8 = (0.00100000005f * (float)dsp->fVslider6);
	float fSlow9 = (float)dsp->fVslider7;
	int iSlow10 = (int)(dsp->fConst7 * fSlow9);
	float fSlow11 = (0.00100000005f * (float)dsp->fVslider8);
	float fSlow12 = (0.00100000005f * fSlow9);
	float fSlow13 = ((float)iSlow7 * (float)dsp->fVslider9);
	float fSlow14 = expf((0.0f - (dsp->fConst6 / (iSlow7?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider10)))));
	float fSlow15 = ((1.0f - fSlow14) * (iSlow7?fSlow6:0.0f));
	float fSlow16 = (2.0f * (1.0f - powf((float)dsp->fVslider11, 0.25f)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fRec3[0] = (fSlow2 + (fSlow3 * dsp->fRec3[1]));
			dsp->iRec5[0] = (iSlow7 * (dsp->iRec5[1] + 1));
			int iTemp0 = (dsp->iRec5[0] < iSlow10);
			float fTemp1 = expf((0.0f - (dsp->fConst6 / (iSlow7?(iTemp0?fSlow12:fSlow11):fSlow8))));
			dsp->fRec4[0] = ((dsp->fRec4[1] * fTemp1) + ((iSlow7?(iTemp0?(float)iSlow7:fSlow13):0.0f) * (1.0f - fTemp1)));
			float fTemp2 = sinf((3.14159274f * min(0.25f, (dsp->fConst5 * (dsp->fRec3[0] * (fSlow4 + (fSlow5 * dsp->fRec4[0])))))));
			float fTemp3 = (dsp->fRec1[1] + (2.0f * (fTemp2 * dsp->fRec2[1])));
			float fTemp4 = (fTemp3 + 0.119999997f);
			float fTemp5 = (0.666666687f * fTemp4);
			float fTemp6 = ((fTemp5 > 1.0f)?1.0f:((fTemp5 < -1.0f)?-1.0f:(fTemp3 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp4))))));
			dsp->fRec1[0] = (fTemp6 + -0.119999997f);
			dsp->fRec7[0] = ((dsp->fRec7[1] * fSlow14) + fSlow15);
			float fTemp7 = max(1.00000001e-07f, fabsf(dsp->fRec3[0]));
			float fTemp8 = (dsp->fRec8[1] + (dsp->fConst9 * fTemp7));
			float fTemp9 = (fTemp8 + -1.0f);
			int iTemp10 = (fTemp9 < 0.0f);
			dsp->fRec8[0] = (iTemp10?fTemp8:fTemp9);
			float fRec9 = (iTemp10?fTemp8:(fTemp8 + ((1.0f - (dsp->fConst0 / fTemp7)) * fTemp9)));
			dsp->fRec6[0] = ((dsp->fRec7[0] * ((2.0f * fRec9) + -1.0f)) - (dsp->fConst4 * ((dsp->fConst10 * dsp->fRec6[2]) + (dsp->fConst11 * dsp->fRec6[1]))));
			float fTemp11 = (dsp->fConst8 * (dsp->fRec6[2] + (dsp->fRec6[0] + (2.0f * dsp->fRec6[1]))));
			float fTemp12 = (fTemp6 + (dsp->fRec2[1] * min(fSlow16, min(2.0f, ((1.0f / fTemp2) - fTemp2)))));
			float fTemp13 = (fTemp11 + (0.239999995f - fTemp12));
			float fTemp14 = (0.666666687f * fTemp13);
			float fTemp15 = (((fTemp14 > 1.0f)?1.0f:((fTemp14 < -1.0f)?-1.0f:(fTemp11 + (0.239999995f - (fTemp12 + (0.148148149f * mydsp_faustpower3_f(fTemp13))))))) + -0.119999997f);
			float fTemp16 = (dsp->fRec2[1] + (2.0f * (fTemp2 * fTemp15)));
			float fTemp17 = (fTemp16 + 0.119999997f);
			float fTemp18 = (0.666666687f * fTemp17);
			dsp->fRec2[0] = (((fTemp18 > 1.0f)?1.0f:((fTemp18 < -1.0f)?-1.0f:(fTemp16 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp17)))))) + -0.119999997f);
			dsp->fRec0[0] = ((fSlow0 * dsp->fRec1[0]) - (dsp->fConst4 * ((dsp->fConst10 * dsp->fRec0[2]) + (dsp->fConst11 * dsp->fRec0[1]))));
			float fTemp19 = (dsp->fConst4 * (dsp->fRec0[2] + (dsp->fRec0[0] + (2.0f * dsp->fRec0[1]))));
			float fTemp20 = (fTemp19 + 0.200000003f);
			float fTemp21 = (0.666666687f * fTemp20);
			output0[i] = (FAUSTFLOAT)(((fTemp21 > 1.0f)?1.0f:((fTemp21 < -1.0f)?-1.0f:(fTemp19 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp20)))))) + -0.200000003f);
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec6[2] = dsp->fRec6[1];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
