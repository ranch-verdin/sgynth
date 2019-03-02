#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "snarf"
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

static float mydsp_faustpower2_f(float value) {
	return (value * value);
	
}
static float mydsp_faustpower3_f(float value) {
	return ((value * value) * value);
	
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
	float fConst1;
	FAUSTFLOAT fVslider1;
	float fRec0[2];
	float fConst2;
	float fConst3;
	float fConst4;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst5;
	float fRec3[2];
	float fConst6;
	FAUSTFLOAT fVslider2;
	float fRec4[2];
	float fConst7;
	float fConst8;
	float fRec2[3];
	float fRec1[2];
	float fConst9;
	float fRec5[2];
	float fRec6[2];
	float fConst10;
	float fConst11;
	float fConst12;
	int iRec8[2];
	float fConst13;
	float fConst14;
	float fRec7[3];
	
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
	m->declare(m->metaInterface, "filename", "snarf");
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
	m->declare(m->metaInterface, "name", "snarf");
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
	dsp->fVslider0 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)1.0f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider2 = (FAUSTFLOAT)0.5f;
	
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
			dsp->fVec0[l1] = 0.0f;
			
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
			dsp->fRec4[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			dsp->fRec2[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec1[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec5[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec6[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->iRec8[l8] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			dsp->fRec7[l9] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (180.0f / dsp->fConst0);
	dsp->fConst2 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst3 = (1.0f / dsp->fConst2);
	dsp->fConst4 = (1.0f / (((dsp->fConst3 + 1.41421354f) / dsp->fConst2) + 1.0f));
	dsp->fConst5 = (0.0027999999f * dsp->fConst0);
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (((dsp->fConst3 + -1.41421354f) / dsp->fConst2) + 1.0f);
	dsp->fConst8 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst2))));
	dsp->fConst9 = (330.0f / dsp->fConst0);
	dsp->fConst10 = tanf((25472.0332f / dsp->fConst0));
	dsp->fConst11 = (1.0f / dsp->fConst10);
	dsp->fConst12 = (1.0f / (((dsp->fConst11 + 1.41421354f) / dsp->fConst10) + 1.0f));
	dsp->fConst13 = (((dsp->fConst11 + -1.41421354f) / dsp->fConst10) + 1.0f);
	dsp->fConst14 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst10))));
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "sd");
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider2, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider1, 1.0f, 1.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (8.0f * (float)dsp->fVslider0);
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = sinf((3.14159274f * min(0.25f, (dsp->fConst1 * fSlow1))));
	float fSlow3 = (2.0f * fSlow2);
	float fSlow4 = (float)dsp->fButton0;
	float fSlow5 = (float)dsp->fVslider2;
	float fSlow6 = (0.5f * (fSlow5 + 0.200000003f));
	float fSlow7 = ((2.0f * fSlow5) + 0.5f);
	float fSlow8 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow7)), 0.25f))), min(2.0f, ((1.0f / fSlow2) - fSlow2)));
	float fSlow9 = sinf((3.14159274f * min(0.25f, (dsp->fConst9 * fSlow1))));
	float fSlow10 = (2.0f * fSlow9);
	float fSlow11 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow7)), 0.25f))), min(2.0f, ((1.0f / fSlow9) - fSlow9)));
	float fSlow12 = (dsp->fConst12 * fSlow5);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (dsp->fRec0[1] + (fSlow3 * dsp->fRec1[1]));
			float fTemp1 = (1.02040815f * fTemp0);
			float fTemp2 = (min(max(fTemp1, 0.0f), 10.0f) + -0.625f);
			float fTemp3 = (1.77777779f * fTemp2);
			float fTemp4 = (1.33333337f * fabsf(fTemp0));
			float fTemp5 = (min(max(fTemp4, 0.0f), 10.0f) + -0.333333343f);
			float fTemp6 = (1.0f * fTemp5);
			float fTemp7 = ((fTemp0 <= 0.0f)?(0.0f - (0.75f * ((fTemp4 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp6 > 1.0f)?1.0f:((fTemp6 < -1.0f)?-1.0f:(fTemp5 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp5))))))))):fTemp4))):(0.980000019f * ((fTemp1 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp3 > 1.0f)?1.0f:((fTemp3 < -1.0f)?-1.0f:(fTemp2 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp2))))))))):fTemp1)));
			dsp->fRec0[0] = fTemp7;
			dsp->fVec0[0] = fSlow4;
			dsp->fRec3[0] = ((((fSlow4 - dsp->fVec0[1]) > 0.0f) > 0)?dsp->fConst5:max(0.0f, (dsp->fRec3[1] + -1.0f)));
			int iTemp8 = (dsp->fRec3[0] > 0.0f);
			int iTemp9 = (iTemp8 > 0);
			float fTemp10 = expf((0.0f - (dsp->fConst6 / (iTemp9?9.99999975e-05f:fSlow6))));
			dsp->fRec4[0] = ((dsp->fRec4[1] * fTemp10) + ((iTemp9?(float)iTemp8:0.0f) * (1.0f - fTemp10)));
			dsp->fRec2[0] = (((float)iTemp8 + (0.289999992f * dsp->fRec4[0])) - (dsp->fConst4 * ((dsp->fConst7 * dsp->fRec2[2]) + (dsp->fConst8 * dsp->fRec2[1]))));
			float fTemp11 = (dsp->fConst4 * (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1]))));
			float fTemp12 = (fTemp11 - (fTemp7 + (fSlow8 * dsp->fRec1[1])));
			float fTemp13 = (1.02040815f * fTemp12);
			float fTemp14 = (min(max(fTemp13, 0.0f), 10.0f) + -0.625f);
			float fTemp15 = (1.77777779f * fTemp14);
			float fTemp16 = (1.33333337f * fabsf(fTemp12));
			float fTemp17 = (min(max(fTemp16, 0.0f), 10.0f) + -0.333333343f);
			float fTemp18 = (1.0f * fTemp17);
			float fTemp19 = ((fTemp12 <= 0.0f)?(0.0f - (0.75f * ((fTemp16 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp18 > 1.0f)?1.0f:((fTemp18 < -1.0f)?-1.0f:(fTemp17 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp17))))))))):fTemp16))):(0.980000019f * ((fTemp13 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp15 > 1.0f)?1.0f:((fTemp15 < -1.0f)?-1.0f:(fTemp14 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp14))))))))):fTemp13)));
			float fTemp20 = (dsp->fRec1[1] + (fSlow3 * fTemp19));
			float fTemp21 = (1.02040815f * fTemp20);
			float fTemp22 = (min(max(fTemp21, 0.0f), 10.0f) + -0.625f);
			float fTemp23 = (1.77777779f * fTemp22);
			float fTemp24 = (1.33333337f * fabsf(fTemp20));
			float fTemp25 = (min(max(fTemp24, 0.0f), 10.0f) + -0.333333343f);
			float fTemp26 = (1.0f * fTemp25);
			dsp->fRec1[0] = ((fTemp20 <= 0.0f)?(0.0f - (0.75f * ((fTemp24 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp26 > 1.0f)?1.0f:((fTemp26 < -1.0f)?-1.0f:(fTemp25 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp25))))))))):fTemp24))):(0.980000019f * ((fTemp21 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp23 > 1.0f)?1.0f:((fTemp23 < -1.0f)?-1.0f:(fTemp22 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp22))))))))):fTemp21)));
			float fTemp27 = (dsp->fRec5[1] + (fSlow10 * dsp->fRec6[1]));
			float fTemp28 = (1.02040815f * fTemp27);
			float fTemp29 = (min(max(fTemp28, 0.0f), 10.0f) + -0.625f);
			float fTemp30 = (1.77777779f * fTemp29);
			float fTemp31 = (1.33333337f * fabsf(fTemp27));
			float fTemp32 = (min(max(fTemp31, 0.0f), 10.0f) + -0.333333343f);
			float fTemp33 = (1.0f * fTemp32);
			float fTemp34 = ((fTemp27 <= 0.0f)?(0.0f - (0.75f * ((fTemp31 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp33 > 1.0f)?1.0f:((fTemp33 < -1.0f)?-1.0f:(fTemp32 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp32))))))))):fTemp31))):(0.980000019f * ((fTemp28 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp30 > 1.0f)?1.0f:((fTemp30 < -1.0f)?-1.0f:(fTemp29 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp29))))))))):fTemp28)));
			dsp->fRec5[0] = fTemp34;
			float fTemp35 = (fTemp11 - (fTemp34 + (fSlow11 * dsp->fRec6[1])));
			float fTemp36 = (1.02040815f * fTemp35);
			float fTemp37 = (min(max(fTemp36, 0.0f), 10.0f) + -0.625f);
			float fTemp38 = (1.77777779f * fTemp37);
			float fTemp39 = (1.33333337f * fabsf(fTemp35));
			float fTemp40 = (min(max(fTemp39, 0.0f), 10.0f) + -0.333333343f);
			float fTemp41 = (1.0f * fTemp40);
			float fTemp42 = ((fTemp35 <= 0.0f)?(0.0f - (0.75f * ((fTemp39 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp41 > 1.0f)?1.0f:((fTemp41 < -1.0f)?-1.0f:(fTemp40 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp40))))))))):fTemp39))):(0.980000019f * ((fTemp36 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp38 > 1.0f)?1.0f:((fTemp38 < -1.0f)?-1.0f:(fTemp37 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp37))))))))):fTemp36)));
			float fTemp43 = (dsp->fRec6[1] + (fSlow10 * fTemp42));
			float fTemp44 = (1.02040815f * fTemp43);
			float fTemp45 = (min(max(fTemp44, 0.0f), 10.0f) + -0.625f);
			float fTemp46 = (1.77777779f * fTemp45);
			float fTemp47 = (1.33333337f * fabsf(fTemp43));
			float fTemp48 = (min(max(fTemp47, 0.0f), 10.0f) + -0.333333343f);
			float fTemp49 = (1.0f * fTemp48);
			dsp->fRec6[0] = ((fTemp43 <= 0.0f)?(0.0f - (0.75f * ((fTemp47 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp49 > 1.0f)?1.0f:((fTemp49 < -1.0f)?-1.0f:(fTemp48 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp48))))))))):fTemp47))):(0.980000019f * ((fTemp44 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp46 > 1.0f)?1.0f:((fTemp46 < -1.0f)?-1.0f:(fTemp45 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp45))))))))):fTemp44)));
			dsp->iRec8[0] = ((1103515245 * dsp->iRec8[1]) + 12345);
			dsp->fRec7[0] = ((4.65661287e-10f * (dsp->fRec4[0] * (float)dsp->iRec8[0])) - (dsp->fConst12 * ((dsp->fConst13 * dsp->fRec7[2]) + (dsp->fConst14 * dsp->fRec7[1]))));
			float fTemp50 = (fSlow0 * ((dsp->fRec1[0] + dsp->fRec6[0]) + (fSlow12 * (dsp->fRec7[2] + (dsp->fRec7[0] + (2.0f * dsp->fRec7[1]))))));
			float fTemp51 = (fTemp50 + -0.100000001f);
			float fTemp52 = (0.666666687f * fTemp51);
			output0[i] = (FAUSTFLOAT)(((fTemp52 > 1.0f)?1.0f:((fTemp52 < -1.0f)?-1.0f:(fTemp50 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp51)))))) + 0.100000001f);
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec7[2] = dsp->fRec7[1];
			dsp->fRec7[1] = dsp->fRec7[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
