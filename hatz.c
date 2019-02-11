#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "hatz"
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
	
	int iVec0[2];
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst2;
	FAUSTFLOAT fVslider0;
	float fRec1[2];
	FAUSTFLOAT fButton1;
	float fVec2[2];
	float fRec2[2];
	int iVec3[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	float fRec3[2];
	FAUSTFLOAT fVslider3;
	float fRec0[2];
	FAUSTFLOAT fVslider4;
	float fConst3;
	FAUSTFLOAT fVslider5;
	float fConst4;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	float fRec5[2];
	float fRec8[2];
	float fConst5;
	FAUSTFLOAT fVslider11;
	float fVec4[2];
	float fRec11[2];
	float fVec5[2];
	FAUSTFLOAT fVslider12;
	float fVec6[2];
	float fRec12[2];
	float fVec7[2];
	FAUSTFLOAT fVslider13;
	float fVec8[2];
	float fRec13[2];
	float fVec9[2];
	FAUSTFLOAT fVslider14;
	float fVec10[2];
	float fRec14[2];
	float fVec11[2];
	FAUSTFLOAT fVslider15;
	float fVec12[2];
	float fRec15[2];
	float fVec13[2];
	FAUSTFLOAT fVslider16;
	float fVec14[2];
	float fRec16[2];
	float fVec15[2];
	float fConst6;
	int IOTA;
	float fVec16[512];
	float fVec17[512];
	float fVec18[512];
	float fVec19[512];
	float fVec20[512];
	float fVec21[512];
	FAUSTFLOAT fVslider17;
	float fRec9[2];
	float fRec6[2];
	float fRec4[3];
	FAUSTFLOAT fVslider18;
	int iRec17[2];
	
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
	m->declare(m->metaInterface, "filename", "hatz");
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
	m->declare(m->metaInterface, "name", "hatz");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
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
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider0 = (FAUSTFLOAT)6.4000000000000004f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider1 = (FAUSTFLOAT)84.700000000000003f;
	dsp->fVslider2 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider3 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider4 = (FAUSTFLOAT)0.54000000000000004f;
	dsp->fVslider5 = (FAUSTFLOAT)13593.0f;
	dsp->fVslider6 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider7 = (FAUSTFLOAT)0.70599999999999996f;
	dsp->fVslider8 = (FAUSTFLOAT)1.8999999999999999f;
	dsp->fVslider9 = (FAUSTFLOAT)0.42099999999999999f;
	dsp->fVslider10 = (FAUSTFLOAT)3.8999999999999999f;
	dsp->fVslider11 = (FAUSTFLOAT)394.0f;
	dsp->fVslider12 = (FAUSTFLOAT)309.0f;
	dsp->fVslider13 = (FAUSTFLOAT)493.0f;
	dsp->fVslider14 = (FAUSTFLOAT)361.0f;
	dsp->fVslider15 = (FAUSTFLOAT)422.0f;
	dsp->fVslider16 = (FAUSTFLOAT)315.0f;
	dsp->fVslider17 = (FAUSTFLOAT)1.04f;
	dsp->fVslider18 = (FAUSTFLOAT)0.029999999999999999f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->iVec0[l0] = 0;
			
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
			dsp->fRec1[l2] = 0.0f;
			
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
			dsp->fRec2[l4] = 0.0f;
			
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
			dsp->fRec3[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec0[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec5[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec8[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fVec4[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec11[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fVec5[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fVec6[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec12[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fVec7[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fVec8[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec13[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fVec9[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fVec10[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fRec14[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fVec11[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fVec12[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec15[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fVec13[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fVec14[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec16[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fVec15[l27] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 512); l28 = (l28 + 1)) {
			dsp->fVec16[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 512); l29 = (l29 + 1)) {
			dsp->fVec17[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 512); l30 = (l30 + 1)) {
			dsp->fVec18[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 512); l31 = (l31 + 1)) {
			dsp->fVec19[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 512); l32 = (l32 + 1)) {
			dsp->fVec20[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 512); l33 = (l33 + 1)) {
			dsp->fVec21[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec9[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec6[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 3); l36 = (l36 + 1)) {
			dsp->fRec4[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->iRec17[l37] = 0;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (6.90999985f / dsp->fConst0);
	dsp->fConst2 = (0.00100000005f * dsp->fConst0);
	dsp->fConst3 = (3.14159274f / dsp->fConst0);
	dsp->fConst4 = (1.0f / dsp->fConst0);
	dsp->fConst5 = (0.25f * dsp->fConst0);
	dsp->fConst6 = (0.5f * dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "hatz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider3, 0.100000001f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_hh", &dsp->fVslider1, 84.6999969f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider2, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "hpfreq", &dsp->fVslider6, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fVslider10, 3.9000001f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fVslider8, 1.89999998f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fVslider9, 0.421000004f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fVslider7, 0.70599997f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "lpfreq", &dsp->fVslider5, 13593.0f, 1000.0f, 15000.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q", &dsp->fVslider17, 1.03999996f, 0.100000001f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "length", &dsp->fVslider0, 6.4000001f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "noise_level", &dsp->fVslider18, 0.0299999993f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton1);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq1", &dsp->fVslider11, 394.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq2", &dsp->fVslider12, 309.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq3", &dsp->fVslider13, 493.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq4", &dsp->fVslider14, 361.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq5", &dsp->fVslider15, 422.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq6", &dsp->fVslider16, 315.0f, 300.0f, 500.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone_level", &dsp->fVslider4, 0.540000021f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)dsp->fButton0;
	float fSlow1 = (dsp->fConst2 * (float)dsp->fVslider0);
	float fSlow2 = (float)dsp->fButton1;
	float fSlow3 = (float)dsp->fVslider1;
	float fSlow4 = (float)dsp->fVslider2;
	float fSlow5 = (0.00100000005f * (float)dsp->fVslider3);
	float fSlow6 = tanf((dsp->fConst3 * (float)dsp->fVslider5));
	float fSlow7 = (1.0f / fSlow6);
	float fSlow8 = (((fSlow7 + 1.41421354f) / fSlow6) + 1.0f);
	float fSlow9 = ((float)dsp->fVslider4 / fSlow8);
	float fSlow10 = sinf((3.14159274f * min(0.25f, (dsp->fConst4 * (float)dsp->fVslider6))));
	float fSlow11 = (2.0f * fSlow10);
	float fSlow12 = (float)dsp->fVslider7;
	float fSlow13 = (1.0f / fSlow12);
	float fSlow14 = (1.0f / (float)dsp->fVslider8);
	float fSlow15 = (1.0f - fSlow14);
	float fSlow16 = (2.0f / fSlow15);
	float fSlow17 = (float)dsp->fVslider9;
	float fSlow18 = (1.0f / fSlow17);
	float fSlow19 = (1.0f / (float)dsp->fVslider10);
	float fSlow20 = (1.0f - fSlow19);
	float fSlow21 = (2.0f / fSlow20);
	float fSlow22 = max((float)dsp->fVslider11, 23.4489498f);
	float fSlow23 = max(20.0f, fabsf(fSlow22));
	float fSlow24 = (1.0f / fSlow23);
	float fSlow25 = max((float)dsp->fVslider12, 23.4489498f);
	float fSlow26 = max(20.0f, fabsf(fSlow25));
	float fSlow27 = (1.0f / fSlow26);
	float fSlow28 = max((float)dsp->fVslider13, 23.4489498f);
	float fSlow29 = max(20.0f, fabsf(fSlow28));
	float fSlow30 = (1.0f / fSlow29);
	float fSlow31 = max((float)dsp->fVslider14, 23.4489498f);
	float fSlow32 = max(20.0f, fabsf(fSlow31));
	float fSlow33 = (1.0f / fSlow32);
	float fSlow34 = max((float)dsp->fVslider15, 23.4489498f);
	float fSlow35 = max(20.0f, fabsf(fSlow34));
	float fSlow36 = (1.0f / fSlow35);
	float fSlow37 = max((float)dsp->fVslider16, 23.4489498f);
	float fSlow38 = max(20.0f, fabsf(fSlow37));
	float fSlow39 = (1.0f / fSlow38);
	float fSlow40 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow37)));
	float fSlow41 = floorf(fSlow40);
	float fSlow42 = (fSlow40 - fSlow41);
	float fSlow43 = (dsp->fConst5 / fSlow38);
	int iSlow44 = (int)fSlow40;
	int iSlow45 = (iSlow44 + 1);
	float fSlow46 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow34)));
	float fSlow47 = floorf(fSlow46);
	float fSlow48 = (fSlow46 - fSlow47);
	float fSlow49 = (dsp->fConst5 / fSlow35);
	int iSlow50 = (int)fSlow46;
	int iSlow51 = (iSlow50 + 1);
	float fSlow52 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow31)));
	float fSlow53 = floorf(fSlow52);
	float fSlow54 = (fSlow52 - fSlow53);
	float fSlow55 = (dsp->fConst5 / fSlow32);
	int iSlow56 = (int)fSlow52;
	int iSlow57 = (iSlow56 + 1);
	float fSlow58 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow28)));
	float fSlow59 = floorf(fSlow58);
	float fSlow60 = (fSlow58 - fSlow59);
	float fSlow61 = (dsp->fConst5 / fSlow29);
	int iSlow62 = (int)fSlow58;
	int iSlow63 = (iSlow62 + 1);
	float fSlow64 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow25)));
	float fSlow65 = floorf(fSlow64);
	float fSlow66 = (fSlow64 - fSlow65);
	float fSlow67 = (dsp->fConst5 / fSlow26);
	int iSlow68 = (int)fSlow64;
	int iSlow69 = (iSlow68 + 1);
	float fSlow70 = max(0.0f, min(2047.0f, (dsp->fConst6 / fSlow22)));
	float fSlow71 = floorf(fSlow70);
	float fSlow72 = (fSlow71 + (1.0f - fSlow70));
	float fSlow73 = (dsp->fConst5 / fSlow23);
	int iSlow74 = (int)fSlow70;
	float fSlow75 = (fSlow70 - fSlow71);
	int iSlow76 = (iSlow74 + 1);
	float fSlow77 = (fSlow65 + (1.0f - fSlow64));
	float fSlow78 = (fSlow59 + (1.0f - fSlow58));
	float fSlow79 = (fSlow53 + (1.0f - fSlow52));
	float fSlow80 = (fSlow47 + (1.0f - fSlow46));
	float fSlow81 = (fSlow41 + (1.0f - fSlow40));
	float fSlow82 = min((2.0f * (1.0f - powf((float)dsp->fVslider17, 0.25f))), min(2.0f, ((1.0f / fSlow10) - fSlow10)));
	float fSlow83 = (1.0f / fSlow8);
	float fSlow84 = (((fSlow7 + -1.41421354f) / fSlow6) + 1.0f);
	float fSlow85 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow6))));
	float fSlow86 = (4.65661287e-10f * (float)dsp->fVslider18);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->iVec0[0] = 1;
			dsp->fVec1[0] = fSlow0;
			dsp->fRec1[0] = ((((fSlow0 - dsp->fVec1[1]) > 0.0f) > 0)?fSlow1:max(0.0f, (dsp->fRec1[1] + -1.0f)));
			int iTemp0 = (dsp->fRec1[0] > 0.0f);
			dsp->fVec2[0] = fSlow2;
			dsp->fRec2[0] = ((((fSlow2 - dsp->fVec2[1]) > 0.0f) > 0)?fSlow1:max(0.0f, (dsp->fRec2[1] + -1.0f)));
			int iTemp1 = (dsp->fRec2[0] > 0.0f);
			int iTemp2 = ((iTemp0 + iTemp1) > 0);
			dsp->iVec3[0] = iTemp2;
			int iTemp3 = (iTemp2 > 0);
			int iTemp4 = ((dsp->iVec3[1] <= 0) & iTemp3);
			dsp->fRec3[0] = ((dsp->fRec3[1] * (float)(1 - iTemp4)) + (0.00100000005f * ((float)iTemp4 * ((fSlow3 * (float)iTemp0) + (fSlow4 * (float)iTemp1)))));
			float fTemp5 = expf((0.0f - (dsp->fConst1 / (iTemp3?fSlow5:dsp->fRec3[0]))));
			dsp->fRec0[0] = ((dsp->fRec0[1] * fTemp5) + ((iTemp3?(float)iTemp2:0.0f) * (1.0f - fTemp5)));
			float fTemp6 = (dsp->fRec5[1] + (fSlow11 * dsp->fRec6[1]));
			float fTemp7 = (fSlow13 * fTemp6);
			float fTemp8 = expf((0.0f - (fSlow16 * (min(max(fTemp7, 0.0f), 10.0f) - fSlow14))));
			float fTemp9 = (fSlow18 * fabsf(fTemp6));
			float fTemp10 = expf((0.0f - (fSlow21 * (min(max(fTemp9, 0.0f), 10.0f) - fSlow19))));
			float fTemp11 = ((fTemp6 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp9 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp10) / (fTemp10 + 1.0f))))):fTemp9))):(fSlow12 * ((fTemp7 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp8) / (fTemp8 + 1.0f))))):fTemp7)));
			dsp->fRec5[0] = fTemp11;
			float fTemp12 = (dsp->fRec8[1] + (fSlow11 * dsp->fRec9[1]));
			float fTemp13 = (fSlow13 * fTemp12);
			float fTemp14 = expf((0.0f - (fSlow16 * (min(max(fTemp13, 0.0f), 10.0f) - fSlow14))));
			float fTemp15 = (fSlow18 * fabsf(fTemp12));
			float fTemp16 = expf((0.0f - (fSlow21 * (min(max(fTemp15, 0.0f), 10.0f) - fSlow19))));
			float fTemp17 = ((fTemp12 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp15 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp16) / (fTemp16 + 1.0f))))):fTemp15))):(fSlow12 * ((fTemp13 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp14) / (fTemp14 + 1.0f))))):fTemp13)));
			dsp->fRec8[0] = fTemp17;
			dsp->fVec4[0] = fSlow23;
			float fTemp18 = (dsp->fRec11[1] + (dsp->fConst4 * dsp->fVec4[1]));
			dsp->fRec11[0] = (fTemp18 - floorf(fTemp18));
			float fTemp19 = mydsp_faustpower2_f(((2.0f * dsp->fRec11[0]) + -1.0f));
			dsp->fVec5[0] = fTemp19;
			float fTemp20 = (fTemp19 - dsp->fVec5[1]);
			dsp->fVec6[0] = fSlow26;
			float fTemp21 = (dsp->fRec12[1] + (dsp->fConst4 * dsp->fVec6[1]));
			dsp->fRec12[0] = (fTemp21 - floorf(fTemp21));
			float fTemp22 = mydsp_faustpower2_f(((2.0f * dsp->fRec12[0]) + -1.0f));
			dsp->fVec7[0] = fTemp22;
			float fTemp23 = (fTemp22 - dsp->fVec7[1]);
			dsp->fVec8[0] = fSlow29;
			float fTemp24 = (dsp->fRec13[1] + (dsp->fConst4 * dsp->fVec8[1]));
			dsp->fRec13[0] = (fTemp24 - floorf(fTemp24));
			float fTemp25 = mydsp_faustpower2_f(((2.0f * dsp->fRec13[0]) + -1.0f));
			dsp->fVec9[0] = fTemp25;
			float fTemp26 = (fTemp25 - dsp->fVec9[1]);
			dsp->fVec10[0] = fSlow32;
			float fTemp27 = (dsp->fRec14[1] + (dsp->fConst4 * dsp->fVec10[1]));
			dsp->fRec14[0] = (fTemp27 - floorf(fTemp27));
			float fTemp28 = mydsp_faustpower2_f(((2.0f * dsp->fRec14[0]) + -1.0f));
			dsp->fVec11[0] = fTemp28;
			float fTemp29 = (fTemp28 - dsp->fVec11[1]);
			dsp->fVec12[0] = fSlow35;
			float fTemp30 = (dsp->fRec15[1] + (dsp->fConst4 * dsp->fVec12[1]));
			dsp->fRec15[0] = (fTemp30 - floorf(fTemp30));
			float fTemp31 = mydsp_faustpower2_f(((2.0f * dsp->fRec15[0]) + -1.0f));
			dsp->fVec13[0] = fTemp31;
			float fTemp32 = (fTemp31 - dsp->fVec13[1]);
			dsp->fVec14[0] = fSlow38;
			float fTemp33 = (dsp->fRec16[1] + (dsp->fConst4 * dsp->fVec14[1]));
			dsp->fRec16[0] = (fTemp33 - floorf(fTemp33));
			float fTemp34 = mydsp_faustpower2_f(((2.0f * dsp->fRec16[0]) + -1.0f));
			dsp->fVec15[0] = fTemp34;
			float fTemp35 = (fTemp34 - dsp->fVec15[1]);
			float fTemp36 = (fSlow43 * (fTemp35 * (float)dsp->iVec0[1]));
			dsp->fVec16[(dsp->IOTA & 511)] = fTemp36;
			float fTemp37 = (fSlow49 * (fTemp32 * (float)dsp->iVec0[1]));
			dsp->fVec17[(dsp->IOTA & 511)] = fTemp37;
			float fTemp38 = (fSlow55 * (fTemp29 * (float)dsp->iVec0[1]));
			dsp->fVec18[(dsp->IOTA & 511)] = fTemp38;
			float fTemp39 = (fSlow61 * (fTemp26 * (float)dsp->iVec0[1]));
			dsp->fVec19[(dsp->IOTA & 511)] = fTemp39;
			float fTemp40 = (fSlow67 * (fTemp23 * (float)dsp->iVec0[1]));
			dsp->fVec20[(dsp->IOTA & 511)] = fTemp40;
			float fTemp41 = (fSlow73 * (fTemp20 * (float)dsp->iVec0[1]));
			dsp->fVec21[(dsp->IOTA & 511)] = fTemp41;
			float fTemp42 = ((dsp->fConst5 * (((((((fSlow24 * fTemp20) + (fSlow27 * fTemp23)) + (fSlow30 * fTemp26)) + (fSlow33 * fTemp29)) + (fSlow36 * fTemp32)) + (fSlow39 * fTemp35)) * (float)dsp->iVec0[1])) - (((fSlow42 * dsp->fVec16[((dsp->IOTA - iSlow45) & 511)]) + (((fSlow48 * dsp->fVec17[((dsp->IOTA - iSlow51) & 511)]) + (((fSlow54 * dsp->fVec18[((dsp->IOTA - iSlow57) & 511)]) + (((fSlow60 * dsp->fVec19[((dsp->IOTA - iSlow63) & 511)]) + (((fSlow66 * dsp->fVec20[((dsp->IOTA - iSlow69) & 511)]) + (((fSlow72 * dsp->fVec21[((dsp->IOTA - iSlow74) & 511)]) + (fSlow75 * dsp->fVec21[((dsp->IOTA - iSlow76) & 511)])) + (fSlow77 * dsp->fVec20[((dsp->IOTA - iSlow68) & 511)]))) + (fSlow78 * dsp->fVec19[((dsp->IOTA - iSlow62) & 511)]))) + (fSlow79 * dsp->fVec18[((dsp->IOTA - iSlow56) & 511)]))) + (fSlow80 * dsp->fVec17[((dsp->IOTA - iSlow50) & 511)]))) + (fSlow81 * dsp->fVec16[((dsp->IOTA - iSlow44) & 511)]))) + (fSlow82 * dsp->fRec9[1])));
			float fTemp43 = (fSlow13 * fTemp42);
			float fTemp44 = expf((0.0f - (fSlow16 * (min(max(fTemp43, 0.0f), 10.0f) - fSlow14))));
			float fTemp45 = (fSlow18 * fabsf(fTemp42));
			float fTemp46 = expf((0.0f - (fSlow21 * (min(max(fTemp45, 0.0f), 10.0f) - fSlow19))));
			float fTemp47 = (((fTemp42 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp45 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp46) / (fTemp46 + 1.0f))))):fTemp45))):(fSlow12 * ((fTemp43 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp44) / (fTemp44 + 1.0f))))):fTemp43))) - fTemp17);
			float fTemp48 = (fSlow13 * fTemp47);
			float fTemp49 = expf((0.0f - (fSlow16 * (min(max(fTemp48, 0.0f), 10.0f) - fSlow14))));
			float fTemp50 = (fSlow18 * fabsf(fTemp47));
			float fTemp51 = expf((0.0f - (fSlow21 * (min(max(fTemp50, 0.0f), 10.0f) - fSlow19))));
			float fTemp52 = ((fTemp47 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp50 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp51) / (fTemp51 + 1.0f))))):fTemp50))):(fSlow12 * ((fTemp48 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp49) / (fTemp49 + 1.0f))))):fTemp48)));
			float fTemp53 = (dsp->fRec9[1] + (fSlow11 * fTemp52));
			float fTemp54 = (fSlow13 * fTemp53);
			float fTemp55 = expf((0.0f - (fSlow16 * (min(max(fTemp54, 0.0f), 10.0f) - fSlow14))));
			float fTemp56 = (fSlow18 * fabsf(fTemp53));
			float fTemp57 = expf((0.0f - (fSlow21 * (min(max(fTemp56, 0.0f), 10.0f) - fSlow19))));
			dsp->fRec9[0] = ((fTemp53 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp56 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp57) / (fTemp57 + 1.0f))))):fTemp56))):(fSlow12 * ((fTemp54 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp55) / (fTemp55 + 1.0f))))):fTemp54)));
			float fRec10 = fTemp52;
			float fTemp58 = (fRec10 - (fSlow82 * dsp->fRec6[1]));
			float fTemp59 = (fSlow13 * fTemp58);
			float fTemp60 = expf((0.0f - (fSlow16 * (min(max(fTemp59, 0.0f), 10.0f) - fSlow14))));
			float fTemp61 = (fSlow18 * fabsf(fTemp58));
			float fTemp62 = expf((0.0f - (fSlow21 * (min(max(fTemp61, 0.0f), 10.0f) - fSlow19))));
			float fTemp63 = (((fTemp58 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp61 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp62) / (fTemp62 + 1.0f))))):fTemp61))):(fSlow12 * ((fTemp59 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp60) / (fTemp60 + 1.0f))))):fTemp59))) - fTemp11);
			float fTemp64 = (fSlow13 * fTemp63);
			float fTemp65 = expf((0.0f - (fSlow16 * (min(max(fTemp64, 0.0f), 10.0f) - fSlow14))));
			float fTemp66 = (fSlow18 * fabsf(fTemp63));
			float fTemp67 = expf((0.0f - (fSlow21 * (min(max(fTemp66, 0.0f), 10.0f) - fSlow19))));
			float fTemp68 = ((fTemp63 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp66 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp67) / (fTemp67 + 1.0f))))):fTemp66))):(fSlow12 * ((fTemp64 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp65) / (fTemp65 + 1.0f))))):fTemp64)));
			float fTemp69 = (dsp->fRec6[1] + (fSlow11 * fTemp68));
			float fTemp70 = (fSlow13 * fTemp69);
			float fTemp71 = expf((0.0f - (fSlow16 * (min(max(fTemp70, 0.0f), 10.0f) - fSlow14))));
			float fTemp72 = (fSlow18 * fabsf(fTemp69));
			float fTemp73 = expf((0.0f - (fSlow21 * (min(max(fTemp72, 0.0f), 10.0f) - fSlow19))));
			dsp->fRec6[0] = ((fTemp69 <= 0.0f)?(0.0f - (fSlow17 * ((fTemp72 > fSlow19)?(1.0f - (fSlow20 * (1.0f - ((1.0f - fTemp73) / (fTemp73 + 1.0f))))):fTemp72))):(fSlow12 * ((fTemp70 > fSlow14)?(1.0f - (fSlow15 * (1.0f - ((1.0f - fTemp71) / (fTemp71 + 1.0f))))):fTemp70)));
			float fRec7 = fTemp68;
			dsp->fRec4[0] = (fRec7 - (fSlow83 * ((fSlow84 * dsp->fRec4[2]) + (fSlow85 * dsp->fRec4[1]))));
			dsp->iRec17[0] = ((1103515245 * dsp->iRec17[1]) + 12345);
			output0[i] = (FAUSTFLOAT)(dsp->fRec0[0] * ((fSlow9 * (dsp->fRec4[2] + (dsp->fRec4[0] + (2.0f * dsp->fRec4[1])))) + (fSlow86 * (float)dsp->iRec17[0])));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[2] = dsp->fRec4[1];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iRec17[1] = dsp->iRec17[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
