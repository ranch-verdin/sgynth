#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "organ"
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


typedef struct {
	
	int iRec3[2];
	
} mydspSIG0;

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)malloc(sizeof(mydspSIG0)); }
static void deletemydspSIG0(mydspSIG0* dsp) { free(dsp); }

int getNumInputsmydspSIG0(mydspSIG0* dsp) {
	return 0;
	
}
int getNumOutputsmydspSIG0(mydspSIG0* dsp) {
	return 1;
	
}
int getInputRatemydspSIG0(mydspSIG0* dsp, int channel) {
	int rate;
	switch (channel) {
		default: {
			rate = -1;
			break;
		}
		
	}
	return rate;
	
}
int getOutputRatemydspSIG0(mydspSIG0* dsp, int channel) {
	int rate;
	switch (channel) {
		case 0: {
			rate = 0;
			break;
		}
		default: {
			rate = -1;
			break;
		}
		
	}
	return rate;
	
}

static void instanceInitmydspSIG0(mydspSIG0* dsp, int samplingFreq) {
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->iRec3[l1] = 0;
			
		}
		
	}
	
}

static void fillmydspSIG0(mydspSIG0* dsp, int count, float* output) {
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->iRec3[0] = (dsp->iRec3[1] + 1);
			output[i] = cosf((9.58738019e-05f * (float)(dsp->iRec3[0] + -1)));
			dsp->iRec3[1] = dsp->iRec3[0];
			
		}
		
	}
	
};

static float ftbl0mydspSIG0[65536];
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
	float fConst1;
	float fConst2;
	FAUSTFLOAT fVslider1;
	float fConst3;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fVslider2;
	float fConst6;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fRec2[2];
	FAUSTFLOAT fVslider6;
	float fConst7;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst8;
	float fRec5[2];
	float fRec4[2];
	FAUSTFLOAT fVslider9;
	float fConst9;
	float fRec6[2];
	FAUSTFLOAT fVslider10;
	float fConst10;
	float fRec7[2];
	FAUSTFLOAT fVslider11;
	float fConst11;
	float fRec8[2];
	FAUSTFLOAT fVslider12;
	float fRec9[2];
	FAUSTFLOAT fVslider13;
	float fConst12;
	float fRec10[2];
	FAUSTFLOAT fVslider14;
	float fConst13;
	float fRec11[2];
	float fConst14;
	float fConst15;
	float fRec1[3];
	float fVec0[2];
	float fConst16;
	float fRec0[2];
	FAUSTFLOAT fVslider15;
	float fRec14[2];
	FAUSTFLOAT fVslider16;
	float fRec15[2];
	float fRec16[2];
	float fRec17[2];
	float fRec18[2];
	float fRec19[2];
	float fRec20[2];
	float fRec21[2];
	float fRec13[3];
	float fVec1[2];
	float fRec12[2];
	FAUSTFLOAT fVslider17;
	float fRec24[2];
	FAUSTFLOAT fVslider18;
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	float fRec28[2];
	float fRec29[2];
	float fRec30[2];
	float fRec31[2];
	float fRec23[3];
	float fVec2[2];
	float fRec22[2];
	FAUSTFLOAT fVslider19;
	float fRec34[2];
	FAUSTFLOAT fVslider20;
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	float fRec38[2];
	float fRec39[2];
	float fRec40[2];
	float fRec41[2];
	float fRec33[3];
	float fVec3[2];
	float fRec32[2];
	
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
	m->declare(m->metaInterface, "filename", "organ");
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
	m->declare(m->metaInterface, "name", "organ");
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
	mydspSIG0* sig0 = newmydspSIG0();
	instanceInitmydspSIG0(sig0, samplingFreq);
	fillmydspSIG0(sig0, 65536, ftbl0mydspSIG0);
	deletemydspSIG0(sig0);
	
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider2 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider3 = (FAUSTFLOAT)0.0f;
	dsp->fVslider4 = (FAUSTFLOAT)1.0f;
	dsp->fVslider5 = (FAUSTFLOAT)1.0f;
	dsp->fVslider6 = (FAUSTFLOAT)0.5f;
	dsp->fVslider7 = (FAUSTFLOAT)100.0f;
	dsp->fVslider8 = (FAUSTFLOAT)1.0f;
	dsp->fVslider9 = (FAUSTFLOAT)0.5f;
	dsp->fVslider10 = (FAUSTFLOAT)0.5f;
	dsp->fVslider11 = (FAUSTFLOAT)0.5f;
	dsp->fVslider12 = (FAUSTFLOAT)0.5f;
	dsp->fVslider13 = (FAUSTFLOAT)0.5f;
	dsp->fVslider14 = (FAUSTFLOAT)0.5f;
	dsp->fVslider15 = (FAUSTFLOAT)0.0f;
	dsp->fVslider16 = (FAUSTFLOAT)100.0f;
	dsp->fVslider17 = (FAUSTFLOAT)0.0f;
	dsp->fVslider18 = (FAUSTFLOAT)100.0f;
	dsp->fVslider19 = (FAUSTFLOAT)0.0f;
	dsp->fVslider20 = (FAUSTFLOAT)100.0f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->fRec2[l0] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec5[l2] = 0.0f;
			
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
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec6[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec7[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec8[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec9[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec10[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec11[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			dsp->fRec1[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fVec0[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec0[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec14[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec15[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec16[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fRec17[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec18[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fRec19[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec20[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fRec21[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 3); l21 = (l21 + 1)) {
			dsp->fRec13[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fVec1[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec12[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec24[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec25[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec26[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec27[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec28[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fRec29[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fRec30[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec31[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 3); l32 = (l32 + 1)) {
			dsp->fRec23[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fVec2[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec22[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec34[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec35[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec36[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fRec37[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec38[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fRec39[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec40[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec41[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 3); l43 = (l43 + 1)) {
			dsp->fRec33[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fVec3[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec32[l45] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (15.707963f / dsp->fConst0);
	dsp->fConst2 = (1.0f / (dsp->fConst1 + 1.0f));
	dsp->fConst3 = tanf((18849.5566f / dsp->fConst0));
	dsp->fConst4 = (1.0f / dsp->fConst3);
	dsp->fConst5 = (1.0f / (((dsp->fConst4 + 1.41421354f) / dsp->fConst3) + 1.0f));
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (1.0f / dsp->fConst0);
	dsp->fConst8 = (5.0f / dsp->fConst0);
	dsp->fConst9 = (2.0f / dsp->fConst0);
	dsp->fConst10 = (3.0f / dsp->fConst0);
	dsp->fConst11 = (4.0f / dsp->fConst0);
	dsp->fConst12 = (6.0f / dsp->fConst0);
	dsp->fConst13 = (8.0f / dsp->fConst0);
	dsp->fConst14 = (((dsp->fConst4 + -1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst15 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst3))));
	dsp->fConst16 = (1.0f - dsp->fConst1);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "organ");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a1", &dsp->fVslider6, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a2", &dsp->fVslider9, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a3", &dsp->fVslider10, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a4", &dsp->fVslider11, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a5", &dsp->fVslider12, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a6", &dsp->fVslider13, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a8", &dsp->fVslider14, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider5, 1.0f, 0.100000001f, 100.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "colour", &dsp->fVslider1, 0.100000001f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "drive", &dsp->fVslider2, 0.100000001f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider4, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vibrato", &dsp->fVslider8, 1.0f, 0.0f, 10.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider7, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider3, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider16, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider15, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider18, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider17, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider20, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider19, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.100000001f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (float)dsp->fVslider2;
	float fSlow3 = (float)dsp->fVslider3;
	int iSlow4 = (fSlow3 > 0.0f);
	float fSlow5 = (0.00100000005f * (float)dsp->fVslider4);
	float fSlow6 = (0.00100000005f * (float)dsp->fVslider5);
	float fSlow7 = expf((0.0f - (dsp->fConst6 / (iSlow4?fSlow6:fSlow5))));
	float fSlow8 = ((1.0f - fSlow7) * (iSlow4?fSlow3:0.0f));
	float fSlow9 = (float)dsp->fVslider6;
	float fSlow10 = (float)dsp->fVslider7;
	float fSlow11 = (dsp->fConst7 * fSlow10);
	float fSlow12 = (0.00999999978f * (float)dsp->fVslider8);
	float fSlow13 = (float)dsp->fVslider9;
	float fSlow14 = (dsp->fConst9 * fSlow10);
	float fSlow15 = (float)dsp->fVslider10;
	float fSlow16 = (dsp->fConst10 * fSlow10);
	float fSlow17 = (float)dsp->fVslider11;
	float fSlow18 = (dsp->fConst11 * fSlow10);
	float fSlow19 = (float)dsp->fVslider12;
	float fSlow20 = (dsp->fConst8 * fSlow10);
	float fSlow21 = (float)dsp->fVslider13;
	float fSlow22 = (dsp->fConst12 * fSlow10);
	float fSlow23 = (float)dsp->fVslider14;
	float fSlow24 = (dsp->fConst13 * fSlow10);
	float fSlow25 = (float)dsp->fVslider15;
	int iSlow26 = (fSlow25 > 0.0f);
	float fSlow27 = expf((0.0f - (dsp->fConst6 / (iSlow26?fSlow6:fSlow5))));
	float fSlow28 = ((1.0f - fSlow27) * (iSlow26?fSlow25:0.0f));
	float fSlow29 = (float)dsp->fVslider16;
	float fSlow30 = (dsp->fConst7 * fSlow29);
	float fSlow31 = (dsp->fConst9 * fSlow29);
	float fSlow32 = (dsp->fConst10 * fSlow29);
	float fSlow33 = (dsp->fConst11 * fSlow29);
	float fSlow34 = (dsp->fConst8 * fSlow29);
	float fSlow35 = (dsp->fConst12 * fSlow29);
	float fSlow36 = (dsp->fConst13 * fSlow29);
	float fSlow37 = (float)dsp->fVslider17;
	int iSlow38 = (fSlow37 > 0.0f);
	float fSlow39 = expf((0.0f - (dsp->fConst6 / (iSlow38?fSlow6:fSlow5))));
	float fSlow40 = ((1.0f - fSlow39) * (iSlow38?fSlow37:0.0f));
	float fSlow41 = (float)dsp->fVslider18;
	float fSlow42 = (dsp->fConst7 * fSlow41);
	float fSlow43 = (dsp->fConst9 * fSlow41);
	float fSlow44 = (dsp->fConst10 * fSlow41);
	float fSlow45 = (dsp->fConst11 * fSlow41);
	float fSlow46 = (dsp->fConst8 * fSlow41);
	float fSlow47 = (dsp->fConst12 * fSlow41);
	float fSlow48 = (dsp->fConst13 * fSlow41);
	float fSlow49 = (float)dsp->fVslider19;
	int iSlow50 = (fSlow49 > 0.0f);
	float fSlow51 = expf((0.0f - (dsp->fConst6 / (iSlow50?fSlow6:fSlow5))));
	float fSlow52 = ((1.0f - fSlow51) * (iSlow50?fSlow49:0.0f));
	float fSlow53 = (float)dsp->fVslider20;
	float fSlow54 = (dsp->fConst7 * fSlow53);
	float fSlow55 = (dsp->fConst9 * fSlow53);
	float fSlow56 = (dsp->fConst10 * fSlow53);
	float fSlow57 = (dsp->fConst11 * fSlow53);
	float fSlow58 = (dsp->fConst8 * fSlow53);
	float fSlow59 = (dsp->fConst12 * fSlow53);
	float fSlow60 = (dsp->fConst13 * fSlow53);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fRec2[0] = ((dsp->fRec2[1] * fSlow7) + fSlow8);
			dsp->fRec5[0] = (dsp->fConst8 + (dsp->fRec5[1] - floorf((dsp->fConst8 + dsp->fRec5[1]))));
			float fTemp0 = ((fSlow12 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec5[0])]) + 1.0f);
			float fTemp1 = (dsp->fRec4[1] + (fSlow11 * fTemp0));
			dsp->fRec4[0] = (fTemp1 - floorf(fTemp1));
			float fTemp2 = (dsp->fRec6[1] + (fSlow14 * fTemp0));
			dsp->fRec6[0] = (fTemp2 - floorf(fTemp2));
			float fTemp3 = (dsp->fRec7[1] + (fSlow16 * fTemp0));
			dsp->fRec7[0] = (fTemp3 - floorf(fTemp3));
			float fTemp4 = (dsp->fRec8[1] + (fSlow18 * fTemp0));
			dsp->fRec8[0] = (fTemp4 - floorf(fTemp4));
			float fTemp5 = (dsp->fRec9[1] + (fSlow20 * fTemp0));
			dsp->fRec9[0] = (fTemp5 - floorf(fTemp5));
			float fTemp6 = (dsp->fRec10[1] + (fSlow22 * fTemp0));
			dsp->fRec10[0] = (fTemp6 - floorf(fTemp6));
			float fTemp7 = (dsp->fRec11[1] + (fSlow24 * fTemp0));
			dsp->fRec11[0] = (fTemp7 - floorf(fTemp7));
			dsp->fRec1[0] = ((fSlow2 * (dsp->fRec2[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec4[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec6[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec7[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec8[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec9[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec10[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec11[0])])))) - (dsp->fConst5 * ((dsp->fConst14 * dsp->fRec1[2]) + (dsp->fConst15 * dsp->fRec1[1]))));
			float fTemp8 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec1[2] + (dsp->fRec1[0] + (2.0f * dsp->fRec1[1])))))) - fSlow1);
			dsp->fVec0[0] = fTemp8;
			dsp->fRec0[0] = (dsp->fConst2 * ((fTemp8 - dsp->fVec0[1]) + (dsp->fConst16 * dsp->fRec0[1])));
			dsp->fRec14[0] = ((dsp->fRec14[1] * fSlow27) + fSlow28);
			float fTemp9 = (dsp->fRec15[1] + (fSlow30 * fTemp0));
			dsp->fRec15[0] = (fTemp9 - floorf(fTemp9));
			float fTemp10 = (dsp->fRec16[1] + (fSlow31 * fTemp0));
			dsp->fRec16[0] = (fTemp10 - floorf(fTemp10));
			float fTemp11 = (dsp->fRec17[1] + (fSlow32 * fTemp0));
			dsp->fRec17[0] = (fTemp11 - floorf(fTemp11));
			float fTemp12 = (dsp->fRec18[1] + (fSlow33 * fTemp0));
			dsp->fRec18[0] = (fTemp12 - floorf(fTemp12));
			float fTemp13 = (dsp->fRec19[1] + (fSlow34 * fTemp0));
			dsp->fRec19[0] = (fTemp13 - floorf(fTemp13));
			float fTemp14 = (dsp->fRec20[1] + (fSlow35 * fTemp0));
			dsp->fRec20[0] = (fTemp14 - floorf(fTemp14));
			float fTemp15 = (dsp->fRec21[1] + (fSlow36 * fTemp0));
			dsp->fRec21[0] = (fTemp15 - floorf(fTemp15));
			dsp->fRec13[0] = ((fSlow2 * (dsp->fRec14[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec15[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec16[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec17[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec18[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec19[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec20[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec21[0])])))) - (dsp->fConst5 * ((dsp->fConst14 * dsp->fRec13[2]) + (dsp->fConst15 * dsp->fRec13[1]))));
			float fTemp16 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec13[2] + (dsp->fRec13[0] + (2.0f * dsp->fRec13[1])))))) - fSlow1);
			dsp->fVec1[0] = fTemp16;
			dsp->fRec12[0] = (dsp->fConst2 * ((fTemp16 - dsp->fVec1[1]) + (dsp->fConst16 * dsp->fRec12[1])));
			dsp->fRec24[0] = ((dsp->fRec24[1] * fSlow39) + fSlow40);
			float fTemp17 = (dsp->fRec25[1] + (fSlow42 * fTemp0));
			dsp->fRec25[0] = (fTemp17 - floorf(fTemp17));
			float fTemp18 = (dsp->fRec26[1] + (fSlow43 * fTemp0));
			dsp->fRec26[0] = (fTemp18 - floorf(fTemp18));
			float fTemp19 = (dsp->fRec27[1] + (fSlow44 * fTemp0));
			dsp->fRec27[0] = (fTemp19 - floorf(fTemp19));
			float fTemp20 = (dsp->fRec28[1] + (fSlow45 * fTemp0));
			dsp->fRec28[0] = (fTemp20 - floorf(fTemp20));
			float fTemp21 = (dsp->fRec29[1] + (fSlow46 * fTemp0));
			dsp->fRec29[0] = (fTemp21 - floorf(fTemp21));
			float fTemp22 = (dsp->fRec30[1] + (fSlow47 * fTemp0));
			dsp->fRec30[0] = (fTemp22 - floorf(fTemp22));
			float fTemp23 = (dsp->fRec31[1] + (fSlow48 * fTemp0));
			dsp->fRec31[0] = (fTemp23 - floorf(fTemp23));
			dsp->fRec23[0] = ((fSlow2 * (dsp->fRec24[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec25[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec26[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec27[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec28[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec29[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec30[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec31[0])])))) - (dsp->fConst5 * ((dsp->fConst14 * dsp->fRec23[2]) + (dsp->fConst15 * dsp->fRec23[1]))));
			float fTemp24 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec23[2] + (dsp->fRec23[0] + (2.0f * dsp->fRec23[1])))))) - fSlow1);
			dsp->fVec2[0] = fTemp24;
			dsp->fRec22[0] = (dsp->fConst2 * ((fTemp24 - dsp->fVec2[1]) + (dsp->fConst16 * dsp->fRec22[1])));
			dsp->fRec34[0] = ((dsp->fRec34[1] * fSlow51) + fSlow52);
			float fTemp25 = (dsp->fRec35[1] + (fSlow54 * fTemp0));
			dsp->fRec35[0] = (fTemp25 - floorf(fTemp25));
			float fTemp26 = (dsp->fRec36[1] + (fSlow55 * fTemp0));
			dsp->fRec36[0] = (fTemp26 - floorf(fTemp26));
			float fTemp27 = (dsp->fRec37[1] + (fSlow56 * fTemp0));
			dsp->fRec37[0] = (fTemp27 - floorf(fTemp27));
			float fTemp28 = (dsp->fRec38[1] + (fSlow57 * fTemp0));
			dsp->fRec38[0] = (fTemp28 - floorf(fTemp28));
			float fTemp29 = (dsp->fRec39[1] + (fSlow58 * fTemp0));
			dsp->fRec39[0] = (fTemp29 - floorf(fTemp29));
			float fTemp30 = (dsp->fRec40[1] + (fSlow59 * fTemp0));
			dsp->fRec40[0] = (fTemp30 - floorf(fTemp30));
			float fTemp31 = (dsp->fRec41[1] + (fSlow60 * fTemp0));
			dsp->fRec41[0] = (fTemp31 - floorf(fTemp31));
			dsp->fRec33[0] = ((fSlow2 * (dsp->fRec34[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec35[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec36[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec37[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec38[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec39[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec40[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec41[0])])))) - (dsp->fConst5 * ((dsp->fConst14 * dsp->fRec33[2]) + (dsp->fConst15 * dsp->fRec33[1]))));
			float fTemp32 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec33[2] + (dsp->fRec33[0] + (2.0f * dsp->fRec33[1])))))) - fSlow1);
			dsp->fVec3[0] = fTemp32;
			dsp->fRec32[0] = (dsp->fConst2 * ((fTemp32 - dsp->fVec3[1]) + (dsp->fConst16 * dsp->fRec32[1])));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)(fSlow0 * (((dsp->fRec0[0] + dsp->fRec12[0]) + dsp->fRec22[0]) + dsp->fRec32[0])));
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec1[2] = dsp->fRec1[1];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec13[2] = dsp->fRec13[1];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec23[2] = dsp->fRec23[1];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec33[2] = dsp->fRec33[1];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
