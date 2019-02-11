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
	float fConst2;
	float fConst3;
	float fConst4;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst5;
	FAUSTFLOAT fVslider5;
	float fRec3[2];
	FAUSTFLOAT fVslider6;
	float fConst6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fRec4[2];
	float fConst7;
	float fConst8;
	float fRec2[3];
	FAUSTFLOAT fVslider9;
	float fRec1[2];
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	float fRec5[2];
	FAUSTFLOAT fVslider15;
	float fRec6[2];
	FAUSTFLOAT fVslider16;
	FAUSTFLOAT fVslider17;
	float fConst9;
	FAUSTFLOAT fVslider18;
	int iRec8[2];
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
	dsp->fVslider0 = (FAUSTFLOAT)100.0f;
	dsp->fVslider1 = (FAUSTFLOAT)0.70599999999999996f;
	dsp->fVslider2 = (FAUSTFLOAT)1.8999999999999999f;
	dsp->fVslider3 = (FAUSTFLOAT)0.42099999999999999f;
	dsp->fVslider4 = (FAUSTFLOAT)3.8999999999999999f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider5 = (FAUSTFLOAT)6.4000000000000004f;
	dsp->fVslider6 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider7 = (FAUSTFLOAT)20.0f;
	dsp->fVslider8 = (FAUSTFLOAT)1.0f;
	dsp->fVslider9 = (FAUSTFLOAT)0.97999999999999998f;
	dsp->fVslider10 = (FAUSTFLOAT)240.0f;
	dsp->fVslider11 = (FAUSTFLOAT)0.70599999999999996f;
	dsp->fVslider12 = (FAUSTFLOAT)1.8999999999999999f;
	dsp->fVslider13 = (FAUSTFLOAT)0.42099999999999999f;
	dsp->fVslider14 = (FAUSTFLOAT)3.8999999999999999f;
	dsp->fVslider15 = (FAUSTFLOAT)0.95999999999999996f;
	dsp->fVslider16 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider17 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider18 = (FAUSTFLOAT)8000.0f;
	
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
	dsp->fConst1 = (1.0f / dsp->fConst0);
	dsp->fConst2 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst3 = (1.0f / dsp->fConst2);
	dsp->fConst4 = (1.0f / (((dsp->fConst3 + 1.41421354f) / dsp->fConst2) + 1.0f));
	dsp->fConst5 = (0.00100000005f * dsp->fConst0);
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (((dsp->fConst3 + -1.41421354f) / dsp->fConst2) + 1.0f);
	dsp->fConst8 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst2))));
	dsp->fConst9 = (3.14159274f / dsp->fConst0);
	
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider8, 1.0f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "clip1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fVslider4, 3.9000001f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fVslider2, 1.89999998f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fVslider3, 0.421000004f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fVslider1, 0.70599997f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "clip2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fVslider14, 3.9000001f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fVslider12, 1.89999998f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fVslider13, 0.421000004f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fVslider11, 0.70599997f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider7, 20.0f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq1", &dsp->fVslider0, 100.0f, 10.0f, 1000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq1", &dsp->fVslider10, 240.0f, 10.0f, 1000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "length", &dsp->fVslider5, 6.4000001f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q1", &dsp->fVslider9, 0.980000019f, 0.800000012f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q2", &dsp->fVslider15, 0.959999979f, 0.800000012f, 1.0f, 0.00100000005f);
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider17, 0.200000003f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzlefreq", &dsp->fVslider18, 8000.0f, 5000.0f, 10000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "snappy", &dsp->fVslider6, 0.100000001f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider16, 0.200000003f, 0.0f, 10.0f, 0.00999999978f);
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
	float fSlow12 = (float)dsp->fButton0;
	float fSlow13 = (dsp->fConst5 * (float)dsp->fVslider5);
	float fSlow14 = (float)dsp->fVslider6;
	float fSlow15 = (0.00100000005f * (float)dsp->fVslider7);
	float fSlow16 = (0.00100000005f * (float)dsp->fVslider8);
	float fSlow17 = min((2.0f * (1.0f - powf((float)dsp->fVslider9, 0.25f))), min(2.0f, ((1.0f / fSlow0) - fSlow0)));
	float fSlow18 = sinf((3.14159274f * min(0.25f, (dsp->fConst1 * (float)dsp->fVslider10))));
	float fSlow19 = (2.0f * fSlow18);
	float fSlow20 = (float)dsp->fVslider11;
	float fSlow21 = (1.0f / fSlow20);
	float fSlow22 = (1.0f / (float)dsp->fVslider12);
	float fSlow23 = (1.0f - fSlow22);
	float fSlow24 = (2.0f / fSlow23);
	float fSlow25 = (float)dsp->fVslider13;
	float fSlow26 = (1.0f / fSlow25);
	float fSlow27 = (1.0f / (float)dsp->fVslider14);
	float fSlow28 = (1.0f - fSlow27);
	float fSlow29 = (2.0f / fSlow28);
	float fSlow30 = min((2.0f * (1.0f - powf((float)dsp->fVslider15, 0.25f))), min(2.0f, ((1.0f / fSlow18) - fSlow18)));
	float fSlow31 = tanf((dsp->fConst9 * (float)dsp->fVslider18));
	float fSlow32 = (1.0f / fSlow31);
	float fSlow33 = (((fSlow32 + 1.41421354f) / fSlow31) + 1.0f);
	float fSlow34 = (((float)dsp->fVslider16 * (float)dsp->fVslider17) / fSlow33);
	float fSlow35 = (1.0f / fSlow33);
	float fSlow36 = (((fSlow32 + -1.41421354f) / fSlow31) + 1.0f);
	float fSlow37 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow31))));
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
			dsp->fVec0[0] = fSlow12;
			dsp->fRec3[0] = ((((fSlow12 - dsp->fVec0[1]) > 0.0f) > 0)?fSlow13:max(0.0f, (dsp->fRec3[1] + -1.0f)));
			int iTemp6 = (dsp->fRec3[0] > 0.0f);
			int iTemp7 = (iTemp6 > 0);
			float fTemp8 = expf((0.0f - (dsp->fConst6 / (iTemp7?fSlow16:fSlow15))));
			dsp->fRec4[0] = ((dsp->fRec4[1] * fTemp8) + ((iTemp7?(float)iTemp6:0.0f) * (1.0f - fTemp8)));
			dsp->fRec2[0] = (((float)iTemp6 + (fSlow14 * dsp->fRec4[0])) - (dsp->fConst4 * ((dsp->fConst7 * dsp->fRec2[2]) + (dsp->fConst8 * dsp->fRec2[1]))));
			float fTemp9 = (dsp->fConst4 * (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1]))));
			float fTemp10 = (fTemp9 - (fSlow17 * dsp->fRec1[1]));
			float fTemp11 = (fSlow3 * fTemp10);
			float fTemp12 = expf((0.0f - (fSlow6 * (min(max(fTemp11, 0.0f), 10.0f) - fSlow4))));
			float fTemp13 = (fSlow8 * fabsf(fTemp10));
			float fTemp14 = expf((0.0f - (fSlow11 * (min(max(fTemp13, 0.0f), 10.0f) - fSlow9))));
			float fTemp15 = (((fTemp10 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp13 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp14) / (fTemp14 + 1.0f))))):fTemp13))):(fSlow2 * ((fTemp11 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp12) / (fTemp12 + 1.0f))))):fTemp11))) - fTemp5);
			float fTemp16 = (fSlow3 * fTemp15);
			float fTemp17 = expf((0.0f - (fSlow6 * (min(max(fTemp16, 0.0f), 10.0f) - fSlow4))));
			float fTemp18 = (fSlow8 * fabsf(fTemp15));
			float fTemp19 = expf((0.0f - (fSlow11 * (min(max(fTemp18, 0.0f), 10.0f) - fSlow9))));
			float fTemp20 = ((fTemp15 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp18 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp19) / (fTemp19 + 1.0f))))):fTemp18))):(fSlow2 * ((fTemp16 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp17) / (fTemp17 + 1.0f))))):fTemp16)));
			float fTemp21 = (dsp->fRec1[1] + (fSlow1 * fTemp20));
			float fTemp22 = (fSlow3 * fTemp21);
			float fTemp23 = expf((0.0f - (fSlow6 * (min(max(fTemp22, 0.0f), 10.0f) - fSlow4))));
			float fTemp24 = (fSlow8 * fabsf(fTemp21));
			float fTemp25 = expf((0.0f - (fSlow11 * (min(max(fTemp24, 0.0f), 10.0f) - fSlow9))));
			dsp->fRec1[0] = ((fTemp21 <= 0.0f)?(0.0f - (fSlow7 * ((fTemp24 > fSlow9)?(1.0f - (fSlow10 * (1.0f - ((1.0f - fTemp25) / (fTemp25 + 1.0f))))):fTemp24))):(fSlow2 * ((fTemp22 > fSlow4)?(1.0f - (fSlow5 * (1.0f - ((1.0f - fTemp23) / (fTemp23 + 1.0f))))):fTemp22)));
			float fTemp26 = (dsp->fRec5[1] + (fSlow19 * dsp->fRec6[1]));
			float fTemp27 = (fSlow21 * fTemp26);
			float fTemp28 = expf((0.0f - (fSlow24 * (min(max(fTemp27, 0.0f), 10.0f) - fSlow22))));
			float fTemp29 = (fSlow26 * fabsf(fTemp26));
			float fTemp30 = expf((0.0f - (fSlow29 * (min(max(fTemp29, 0.0f), 10.0f) - fSlow27))));
			float fTemp31 = ((fTemp26 <= 0.0f)?(0.0f - (fSlow25 * ((fTemp29 > fSlow27)?(1.0f - (fSlow28 * (1.0f - ((1.0f - fTemp30) / (fTemp30 + 1.0f))))):fTemp29))):(fSlow20 * ((fTemp27 > fSlow22)?(1.0f - (fSlow23 * (1.0f - ((1.0f - fTemp28) / (fTemp28 + 1.0f))))):fTemp27)));
			dsp->fRec5[0] = fTemp31;
			float fTemp32 = (fTemp9 - (fSlow30 * dsp->fRec6[1]));
			float fTemp33 = (fSlow21 * fTemp32);
			float fTemp34 = expf((0.0f - (fSlow24 * (min(max(fTemp33, 0.0f), 10.0f) - fSlow22))));
			float fTemp35 = (fSlow26 * fabsf(fTemp32));
			float fTemp36 = expf((0.0f - (fSlow29 * (min(max(fTemp35, 0.0f), 10.0f) - fSlow27))));
			float fTemp37 = (((fTemp32 <= 0.0f)?(0.0f - (fSlow25 * ((fTemp35 > fSlow27)?(1.0f - (fSlow28 * (1.0f - ((1.0f - fTemp36) / (fTemp36 + 1.0f))))):fTemp35))):(fSlow20 * ((fTemp33 > fSlow22)?(1.0f - (fSlow23 * (1.0f - ((1.0f - fTemp34) / (fTemp34 + 1.0f))))):fTemp33))) - fTemp31);
			float fTemp38 = (fSlow21 * fTemp37);
			float fTemp39 = expf((0.0f - (fSlow24 * (min(max(fTemp38, 0.0f), 10.0f) - fSlow22))));
			float fTemp40 = (fSlow26 * fabsf(fTemp37));
			float fTemp41 = expf((0.0f - (fSlow29 * (min(max(fTemp40, 0.0f), 10.0f) - fSlow27))));
			float fTemp42 = ((fTemp37 <= 0.0f)?(0.0f - (fSlow25 * ((fTemp40 > fSlow27)?(1.0f - (fSlow28 * (1.0f - ((1.0f - fTemp41) / (fTemp41 + 1.0f))))):fTemp40))):(fSlow20 * ((fTemp38 > fSlow22)?(1.0f - (fSlow23 * (1.0f - ((1.0f - fTemp39) / (fTemp39 + 1.0f))))):fTemp38)));
			float fTemp43 = (dsp->fRec6[1] + (fSlow19 * fTemp42));
			float fTemp44 = (fSlow21 * fTemp43);
			float fTemp45 = expf((0.0f - (fSlow24 * (min(max(fTemp44, 0.0f), 10.0f) - fSlow22))));
			float fTemp46 = (fSlow26 * fabsf(fTemp43));
			float fTemp47 = expf((0.0f - (fSlow29 * (min(max(fTemp46, 0.0f), 10.0f) - fSlow27))));
			dsp->fRec6[0] = ((fTemp43 <= 0.0f)?(0.0f - (fSlow25 * ((fTemp46 > fSlow27)?(1.0f - (fSlow28 * (1.0f - ((1.0f - fTemp47) / (fTemp47 + 1.0f))))):fTemp46))):(fSlow20 * ((fTemp44 > fSlow22)?(1.0f - (fSlow23 * (1.0f - ((1.0f - fTemp45) / (fTemp45 + 1.0f))))):fTemp44)));
			dsp->iRec8[0] = ((1103515245 * dsp->iRec8[1]) + 12345);
			dsp->fRec7[0] = ((4.65661287e-10f * (dsp->fRec4[0] * (float)dsp->iRec8[0])) - (fSlow35 * ((fSlow36 * dsp->fRec7[2]) + (fSlow37 * dsp->fRec7[1]))));
			output0[i] = (FAUSTFLOAT)((dsp->fRec1[0] + dsp->fRec6[0]) + (fSlow34 * (dsp->fRec7[2] + (dsp->fRec7[0] + (2.0f * dsp->fRec7[1])))));
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
