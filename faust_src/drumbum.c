#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "drumbum"
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
	
	FAUSTFLOAT fVslider0;
	int fSamplingFreq;
	float fConst0;
	float fVec0[2];
	float fConst1;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst2;
	float fRec3[2];
	FAUSTFLOAT fButton1;
	float fVec2[2];
	float fRec4[2];
	int iVec3[2];
	FAUSTFLOAT fVslider3;
	float fVec4[2];
	float fRec2[2];
	float fConst3;
	float fConst4;
	float fRec0[2];
	float fConst5;
	float fRec5[2];
	float fConst6;
	float fConst7;
	int iRec6[2];
	FAUSTFLOAT fVslider4;
	float fRec7[2];
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
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/version", "0.0");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.0");
	m->declare(m->metaInterface, "filename", "drumbum");
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
	m->declare(m->metaInterface, "name", "drumbum");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
}

int getSampleRatemydsp(mydsp* dsp) { return dsp->fSamplingFreq; }

int getNumInputsmydsp(mydsp* dsp) {
	return 0;
	
}
int getNumOutputsmydsp(mydsp* dsp) {
	return 2;
	
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
		case 1: {
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
	dsp->fVslider0 = (FAUSTFLOAT)1.0f;
	dsp->fVslider1 = (FAUSTFLOAT)60.0f;
	dsp->fVslider2 = (FAUSTFLOAT)4.7300000000000004f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider3 = (FAUSTFLOAT)12.0f;
	dsp->fVslider4 = (FAUSTFLOAT)0.98899999999999999f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->fVec0[l0] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->fVec1[l1] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec3[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->fVec2[l3] = 0.0f;
			
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
			dsp->iVec3[l5] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fVec4[l6] = 0.0f;
			
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
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec0[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec5[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->iRec6[l10] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec7[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec1[l12] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (1.0f / dsp->fConst0);
	dsp->fConst2 = (0.00700000022f * dsp->fConst0);
	dsp->fConst3 = (0.00600000005f * dsp->fConst0);
	dsp->fConst4 = (166.666672f / dsp->fConst0);
	dsp->fConst5 = (0.00609999988f * dsp->fConst0);
	dsp->fConst6 = (9.99999975e-05f * dsp->fConst0);
	dsp->fConst7 = (10000.0f / dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "bd");
	ui_interface->addButton(ui_interface->uiInterface, "bd", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "bl", &dsp->fButton1);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "freq");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulp", &dsp->fVslider2, 4.73000002f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulpdecay", &dsp->fVslider3, 12.0f, 0.0f, 100.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider1, 60.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider4, 0.989000022f, 0.800000012f, 0.990999997f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 1.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (dsp->fConst1 * (float)dsp->fVslider1);
	float fSlow2 = (float)dsp->fVslider2;
	float fSlow3 = (float)dsp->fButton0;
	float fSlow4 = (float)dsp->fButton1;
	float fSlow5 = ((0.00100000005f * (float)dsp->fVslider3) + 0.00600000005f);
	float fSlow6 = (dsp->fConst0 * fSlow5);
	float fSlow7 = (dsp->fConst1 / (fSlow5 + -0.00600000005f));
	float fSlow8 = (float)dsp->fVslider4;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->fVec1[0] = fSlow3;
			dsp->fRec3[0] = ((((fSlow3 - dsp->fVec1[1]) > 0.0f) > 0)?dsp->fConst2:max(0.0f, (dsp->fRec3[1] + -1.0f)));
			int iTemp0 = (dsp->fRec3[0] > 0.0f);
			dsp->fVec2[0] = fSlow4;
			dsp->fRec4[0] = ((((fSlow4 - dsp->fVec2[1]) > 0.0f) > 0)?dsp->fConst2:max(0.0f, (dsp->fRec4[1] + -1.0f)));
			int iTemp1 = (dsp->fRec4[0] > 0.0f);
			int iTemp2 = ((iTemp0 + iTemp1) > 0);
			dsp->iVec3[0] = iTemp2;
			int iTemp3 = (((iTemp2 - dsp->iVec3[1]) > 0) > 0);
			dsp->fVec4[0] = fSlow5;
			dsp->fRec2[0] = (iTemp3?0.0f:min(fSlow6, ((dsp->fRec2[1] + (dsp->fConst0 * (fSlow5 - dsp->fVec4[1]))) + 1.0f)));
			int iTemp4 = (dsp->fRec2[0] < dsp->fConst3);
			float fTemp5 = sinf((3.14159274f * min(0.25f, (fSlow1 * ((fSlow2 * (iTemp4?((dsp->fRec2[0] < 0.0f)?0.0f:(iTemp4?(dsp->fConst4 * dsp->fRec2[0]):1.0f)):((dsp->fRec2[0] < fSlow6)?((fSlow7 * (0.0f - (dsp->fRec2[0] - dsp->fConst3))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp6 = (dsp->fRec0[1] + (2.0f * (fTemp5 * dsp->fRec1[1])));
			float fTemp7 = (min(max(fTemp6, 0.0f), 10.0f) + -0.714285731f);
			float fTemp8 = (2.33333325f * fTemp7);
			float fTemp9 = (1.14942527f * fabsf(fTemp6));
			float fTemp10 = (min(max(fTemp9, 0.0f), 10.0f) + -0.333333343f);
			float fTemp11 = (1.0f * fTemp10);
			float fTemp12 = ((fTemp6 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp9 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp11 > 1.0f)?1.0f:((fTemp11 < -1.0f)?-1.0f:(fTemp10 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp10))))))))):fTemp9))):((fTemp6 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp8 > 1.0f)?1.0f:((fTemp8 < -1.0f)?-1.0f:(fTemp7 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp7))))))))):fTemp6));
			dsp->fRec0[0] = fTemp12;
			dsp->fRec5[0] = (iTemp3?0.0f:min(dsp->fConst5, (dsp->fRec5[1] + (1.0f - (0.00609999988f * (dsp->fVec0[1] - dsp->fConst0))))));
			int iTemp13 = (dsp->fRec5[0] < dsp->fConst6);
			dsp->iRec6[0] = ((1103515245 * dsp->iRec6[1]) + 12345);
			int iTemp14 = ((dsp->iVec3[1] <= 0) & (iTemp2 > 0));
			dsp->fRec7[0] = ((dsp->fRec7[1] * (float)(1 - iTemp14)) + ((float)iTemp14 * ((0.850000024f * (float)iTemp0) + (fSlow8 * (float)iTemp1))));
			float fTemp15 = (((iTemp13?((dsp->fRec5[0] < 0.0f)?0.0f:(iTemp13?(dsp->fConst7 * dsp->fRec5[0]):1.0f)):((dsp->fRec5[0] < dsp->fConst5)?((dsp->fConst4 * (0.0f - (dsp->fRec5[0] - dsp->fConst6))) + 1.0f):0.0f)) * ((3.25962901e-09f * (float)dsp->iRec6[0]) + 3.0f)) - (fTemp12 + (dsp->fRec1[1] * min((2.0f * (1.0f - powf(dsp->fRec7[0], 0.25f))), min(2.0f, ((1.0f / fTemp5) - fTemp5))))));
			float fTemp16 = (min(max(fTemp15, 0.0f), 10.0f) + -0.714285731f);
			float fTemp17 = (2.33333325f * fTemp16);
			float fTemp18 = (1.14942527f * fabsf(fTemp15));
			float fTemp19 = (min(max(fTemp18, 0.0f), 10.0f) + -0.333333343f);
			float fTemp20 = (1.0f * fTemp19);
			float fTemp21 = ((fTemp15 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp18 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp20 > 1.0f)?1.0f:((fTemp20 < -1.0f)?-1.0f:(fTemp19 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp19))))))))):fTemp18))):((fTemp15 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp17 > 1.0f)?1.0f:((fTemp17 < -1.0f)?-1.0f:(fTemp16 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp16))))))))):fTemp15));
			float fTemp22 = (dsp->fRec1[1] + (2.0f * (fTemp5 * fTemp21)));
			float fTemp23 = (min(max(fTemp22, 0.0f), 10.0f) + -0.714285731f);
			float fTemp24 = (2.33333325f * fTemp23);
			float fTemp25 = (1.14942527f * fabsf(fTemp22));
			float fTemp26 = (min(max(fTemp25, 0.0f), 10.0f) + -0.333333343f);
			float fTemp27 = (1.0f * fTemp26);
			dsp->fRec1[0] = ((fTemp22 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp25 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp27 > 1.0f)?1.0f:((fTemp27 < -1.0f)?-1.0f:(fTemp26 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp26))))))))):fTemp25))):((fTemp22 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp24 > 1.0f)?1.0f:((fTemp24 < -1.0f)?-1.0f:(fTemp23 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp23))))))))):fTemp22));
			float fTemp28 = ((float)tanhf((float)((fSlow0 * dsp->fRec0[0]) + -0.100000001f)) + 0.100000001f);
			output0[i] = (FAUSTFLOAT)fTemp28;
			output1[i] = (FAUSTFLOAT)fTemp28;
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec6[1] = dsp->iRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
