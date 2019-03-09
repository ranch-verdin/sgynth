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
	
	int iRec4[2];
	
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
			dsp->iRec4[l1] = 0;
			
		}
		
	}
	
}

static void fillmydspSIG0(mydspSIG0* dsp, int count, float* output) {
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->iRec4[0] = (dsp->iRec4[1] + 1);
			output[i] = cosf((9.58738019e-05f * (float)(dsp->iRec4[0] + -1)));
			dsp->iRec4[1] = dsp->iRec4[0];
			
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
	float fConst3;
	FAUSTFLOAT fVslider1;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	float fConst6;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fRec3[2];
	FAUSTFLOAT fVslider7;
	float fConst7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fConst8;
	float fRec6[2];
	int iRec8[2];
	float fRec7[2];
	float fRec5[2];
	FAUSTFLOAT fVslider10;
	float fRec17[2];
	float fRec16[2];
	FAUSTFLOAT fVslider11;
	float fRec19[2];
	float fRec18[2];
	FAUSTFLOAT fVslider12;
	float fRec21[2];
	float fRec20[2];
	FAUSTFLOAT fVslider13;
	float fRec23[2];
	float fRec22[2];
	FAUSTFLOAT fVslider14;
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fVslider15;
	float fRec27[2];
	float fRec26[2];
	float fConst9;
	float fConst10;
	float fRec2[3];
	float fVec0[2];
	float fConst11;
	float fRec1[2];
	FAUSTFLOAT fVslider16;
	float fRec30[2];
	FAUSTFLOAT fVslider17;
	float fRec31[2];
	float fRec32[2];
	float fRec33[2];
	float fRec34[2];
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	float fRec29[3];
	float fVec1[2];
	float fRec28[2];
	FAUSTFLOAT fVslider18;
	float fRec40[2];
	FAUSTFLOAT fVslider19;
	float fRec41[2];
	float fRec42[2];
	float fRec43[2];
	float fRec44[2];
	float fRec45[2];
	float fRec46[2];
	float fRec47[2];
	float fRec39[3];
	float fVec2[2];
	float fRec38[2];
	FAUSTFLOAT fVslider20;
	float fRec50[2];
	FAUSTFLOAT fVslider21;
	float fRec51[2];
	float fRec52[2];
	float fRec53[2];
	float fRec54[2];
	float fRec55[2];
	float fRec56[2];
	float fRec57[2];
	float fRec49[3];
	float fVec3[2];
	float fRec48[2];
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
	mydspSIG0* sig0 = newmydspSIG0();
	instanceInitmydspSIG0(sig0, samplingFreq);
	fillmydspSIG0(sig0, 65536, ftbl0mydspSIG0);
	deletemydspSIG0(sig0);
	
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)0.5f;
	dsp->fVslider2 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider3 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider4 = (FAUSTFLOAT)0.0f;
	dsp->fVslider5 = (FAUSTFLOAT)1.0f;
	dsp->fVslider6 = (FAUSTFLOAT)1.0f;
	dsp->fVslider7 = (FAUSTFLOAT)0.5f;
	dsp->fVslider8 = (FAUSTFLOAT)100.0f;
	dsp->fVslider9 = (FAUSTFLOAT)1.0f;
	dsp->fVslider10 = (FAUSTFLOAT)0.5f;
	dsp->fVslider11 = (FAUSTFLOAT)0.5f;
	dsp->fVslider12 = (FAUSTFLOAT)0.5f;
	dsp->fVslider13 = (FAUSTFLOAT)0.5f;
	dsp->fVslider14 = (FAUSTFLOAT)0.5f;
	dsp->fVslider15 = (FAUSTFLOAT)0.5f;
	dsp->fVslider16 = (FAUSTFLOAT)0.0f;
	dsp->fVslider17 = (FAUSTFLOAT)100.0f;
	dsp->fVslider18 = (FAUSTFLOAT)0.0f;
	dsp->fVslider19 = (FAUSTFLOAT)100.0f;
	dsp->fVslider20 = (FAUSTFLOAT)0.0f;
	dsp->fVslider21 = (FAUSTFLOAT)100.0f;
	
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
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec6[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->iRec8[l3] = 0;
			
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
			dsp->fRec5[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec17[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec16[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec19[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec18[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fRec21[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec20[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec23[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec22[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec25[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec24[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fRec27[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec26[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 3); l18 = (l18 + 1)) {
			dsp->fRec2[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fVec0[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fRec1[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec30[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec31[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec32[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec33[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec34[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec35[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec36[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec37[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 3); l29 = (l29 + 1)) {
			dsp->fRec29[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fVec1[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec28[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			dsp->fRec40[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fRec41[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec42[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec43[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec44[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec45[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fRec46[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec47[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 3); l40 = (l40 + 1)) {
			dsp->fRec39[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fVec2[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec38[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->fRec50[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fRec51[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec52[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fRec53[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec54[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fRec55[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec56[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fRec57[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			dsp->fRec49[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fVec3[l52] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			dsp->fRec48[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 3); l54 = (l54 + 1)) {
			dsp->fRec0[l54] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst2 = (1.0f / dsp->fConst1);
	dsp->fConst3 = (1.0f / (((dsp->fConst2 + 1.41421354f) / dsp->fConst1) + 1.0f));
	dsp->fConst4 = (15.707963f / dsp->fConst0);
	dsp->fConst5 = (1.0f / (dsp->fConst4 + 1.0f));
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (1.0f / dsp->fConst0);
	dsp->fConst8 = (5.0f / dsp->fConst0);
	dsp->fConst9 = (((dsp->fConst2 + -1.41421354f) / dsp->fConst1) + 1.0f);
	dsp->fConst10 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst1))));
	dsp->fConst11 = (1.0f - dsp->fConst4);
	
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a1", &dsp->fVslider7, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a2", &dsp->fVslider10, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a3", &dsp->fVslider11, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a4", &dsp->fVslider12, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a5", &dsp->fVslider13, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a6", &dsp->fVslider14, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "a8", &dsp->fVslider15, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider6, 1.0f, 0.100000001f, 100.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "drive", &dsp->fVslider3, 0.100000001f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "drivecolour", &dsp->fVslider2, 0.100000001f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider5, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vibrato", &dsp->fVslider9, 1.0f, 0.0f, 10.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider8, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider4, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider17, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider16, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider19, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider18, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "voice4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider21, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider20, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider1, 0.5f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "volcolour", &dsp->fVslider0, 0.100000001f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (float)dsp->fVslider2;
	float fSlow3 = (float)dsp->fVslider3;
	float fSlow4 = (float)dsp->fVslider4;
	int iSlow5 = (fSlow4 > 0.0f);
	float fSlow6 = (0.00100000005f * (float)dsp->fVslider5);
	float fSlow7 = (0.00100000005f * (float)dsp->fVslider6);
	float fSlow8 = expf((0.0f - (dsp->fConst6 / (iSlow5?fSlow7:fSlow6))));
	float fSlow9 = ((1.0f - fSlow8) * (iSlow5?fSlow4:0.0f));
	float fSlow10 = (float)dsp->fVslider7;
	float fSlow11 = (dsp->fConst7 * (float)dsp->fVslider8);
	float fSlow12 = (0.00999999978f * (float)dsp->fVslider9);
	float fSlow13 = (float)dsp->fVslider10;
	float fSlow14 = (float)dsp->fVslider11;
	float fSlow15 = (float)dsp->fVslider12;
	float fSlow16 = (float)dsp->fVslider13;
	float fSlow17 = (float)dsp->fVslider14;
	float fSlow18 = (float)dsp->fVslider15;
	float fSlow19 = (float)dsp->fVslider16;
	int iSlow20 = (fSlow19 > 0.0f);
	float fSlow21 = expf((0.0f - (dsp->fConst6 / (iSlow20?fSlow7:fSlow6))));
	float fSlow22 = ((1.0f - fSlow21) * (iSlow20?fSlow19:0.0f));
	float fSlow23 = (dsp->fConst7 * (float)dsp->fVslider17);
	float fSlow24 = (float)dsp->fVslider18;
	int iSlow25 = (fSlow24 > 0.0f);
	float fSlow26 = expf((0.0f - (dsp->fConst6 / (iSlow25?fSlow7:fSlow6))));
	float fSlow27 = ((1.0f - fSlow26) * (iSlow25?fSlow24:0.0f));
	float fSlow28 = (dsp->fConst7 * (float)dsp->fVslider19);
	float fSlow29 = (float)dsp->fVslider20;
	int iSlow30 = (fSlow29 > 0.0f);
	float fSlow31 = expf((0.0f - (dsp->fConst6 / (iSlow30?fSlow7:fSlow6))));
	float fSlow32 = ((1.0f - fSlow31) * (iSlow30?fSlow29:0.0f));
	float fSlow33 = (dsp->fConst7 * (float)dsp->fVslider21);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fRec3[0] = ((dsp->fRec3[1] * fSlow8) + fSlow9);
			dsp->fRec6[0] = (dsp->fConst8 + (dsp->fRec6[1] - floorf((dsp->fConst8 + dsp->fRec6[1]))));
			float fTemp0 = ((fSlow12 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec6[0])]) + 1.0f);
			int iTemp1 = (1103515245 * (dsp->iRec8[1] + 12345));
			int iTemp2 = (1103515245 * (iTemp1 + 12345));
			int iTemp3 = (1103515245 * (iTemp2 + 12345));
			int iTemp4 = (1103515245 * (iTemp3 + 12345));
			int iTemp5 = (1103515245 * (iTemp4 + 12345));
			int iTemp6 = (1103515245 * (iTemp5 + 12345));
			int iTemp7 = (1103515245 * (iTemp6 + 12345));
			int iTemp8 = (1103515245 * (iTemp7 + 12345));
			dsp->iRec8[0] = (1103515245 * (iTemp8 + 12345));
			int iRec9 = iTemp8;
			int iRec10 = iTemp7;
			int iRec11 = iTemp6;
			int iRec12 = iTemp5;
			int iRec13 = iTemp4;
			int iRec14 = iTemp3;
			int iRec15 = iTemp1;
			dsp->fRec7[0] = ((0.998000026f * dsp->fRec7[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec9)));
			float fTemp9 = (fTemp0 * ((0.100000001f * dsp->fRec7[0]) + 1.0f));
			float fTemp10 = (dsp->fRec5[1] + (fSlow11 * fTemp9));
			dsp->fRec5[0] = (fTemp10 - floorf(fTemp10));
			dsp->fRec17[0] = ((0.998000026f * dsp->fRec17[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec10)));
			float fTemp11 = (fTemp0 * ((0.100000001f * dsp->fRec17[0]) + 2.0f));
			float fTemp12 = (dsp->fRec16[1] + (fSlow11 * fTemp11));
			dsp->fRec16[0] = (fTemp12 - floorf(fTemp12));
			dsp->fRec19[0] = ((0.998000026f * dsp->fRec19[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec11)));
			float fTemp13 = (fTemp0 * ((0.100000001f * dsp->fRec19[0]) + 3.0f));
			float fTemp14 = (dsp->fRec18[1] + (fSlow11 * fTemp13));
			dsp->fRec18[0] = (fTemp14 - floorf(fTemp14));
			dsp->fRec21[0] = ((0.998000026f * dsp->fRec21[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec12)));
			float fTemp15 = (fTemp0 * ((0.100000001f * dsp->fRec21[0]) + 4.0f));
			float fTemp16 = (dsp->fRec20[1] + (fSlow11 * fTemp15));
			dsp->fRec20[0] = (fTemp16 - floorf(fTemp16));
			dsp->fRec23[0] = ((0.998000026f * dsp->fRec23[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec13)));
			float fTemp17 = (fTemp0 * ((0.100000001f * dsp->fRec23[0]) + 5.0f));
			float fTemp18 = (dsp->fRec22[1] + (fSlow11 * fTemp17));
			dsp->fRec22[0] = (fTemp18 - floorf(fTemp18));
			dsp->fRec25[0] = ((0.998000026f * dsp->fRec25[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec14)));
			float fTemp19 = (fTemp0 * ((0.100000001f * dsp->fRec25[0]) + 6.0f));
			float fTemp20 = (dsp->fRec24[1] + (fSlow11 * fTemp19));
			dsp->fRec24[0] = (fTemp20 - floorf(fTemp20));
			dsp->fRec27[0] = ((0.998000026f * dsp->fRec27[1]) + (0.00200000009f * (4.65661287e-10f * (float)iRec15)));
			float fTemp21 = (fTemp0 * ((0.100000001f * dsp->fRec27[0]) + 8.0f));
			float fTemp22 = (dsp->fRec26[1] + (fSlow11 * fTemp21));
			dsp->fRec26[0] = (fTemp22 - floorf(fTemp22));
			dsp->fRec2[0] = ((fSlow3 * (dsp->fRec3[0] * (((((((fSlow10 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec5[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec16[0])])) + (fSlow14 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec18[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec20[0])])) + (fSlow16 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec22[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec24[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec26[0])])))) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec2[2]) + (dsp->fConst10 * dsp->fRec2[1]))));
			float fTemp23 = ((float)tanhf((float)(fSlow2 + (dsp->fConst3 * (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1])))))) - fSlow2);
			dsp->fVec0[0] = fTemp23;
			dsp->fRec1[0] = (dsp->fConst5 * ((fTemp23 - dsp->fVec0[1]) + (dsp->fConst11 * dsp->fRec1[1])));
			dsp->fRec30[0] = ((dsp->fRec30[1] * fSlow21) + fSlow22);
			float fTemp24 = (dsp->fRec31[1] + (fSlow23 * fTemp9));
			dsp->fRec31[0] = (fTemp24 - floorf(fTemp24));
			float fTemp25 = (dsp->fRec32[1] + (fSlow23 * fTemp11));
			dsp->fRec32[0] = (fTemp25 - floorf(fTemp25));
			float fTemp26 = (dsp->fRec33[1] + (fSlow23 * fTemp13));
			dsp->fRec33[0] = (fTemp26 - floorf(fTemp26));
			float fTemp27 = (dsp->fRec34[1] + (fSlow23 * fTemp15));
			dsp->fRec34[0] = (fTemp27 - floorf(fTemp27));
			float fTemp28 = (dsp->fRec35[1] + (fSlow23 * fTemp17));
			dsp->fRec35[0] = (fTemp28 - floorf(fTemp28));
			float fTemp29 = (dsp->fRec36[1] + (fSlow23 * fTemp19));
			dsp->fRec36[0] = (fTemp29 - floorf(fTemp29));
			float fTemp30 = (dsp->fRec37[1] + (fSlow23 * fTemp21));
			dsp->fRec37[0] = (fTemp30 - floorf(fTemp30));
			dsp->fRec29[0] = ((fSlow3 * (dsp->fRec30[0] * (((((((fSlow10 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec31[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec32[0])])) + (fSlow14 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec33[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec34[0])])) + (fSlow16 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec35[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec36[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec37[0])])))) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec29[2]) + (dsp->fConst10 * dsp->fRec29[1]))));
			float fTemp31 = ((float)tanhf((float)(fSlow2 + (dsp->fConst3 * (dsp->fRec29[2] + (dsp->fRec29[0] + (2.0f * dsp->fRec29[1])))))) - fSlow2);
			dsp->fVec1[0] = fTemp31;
			dsp->fRec28[0] = (dsp->fConst5 * ((fTemp31 - dsp->fVec1[1]) + (dsp->fConst11 * dsp->fRec28[1])));
			dsp->fRec40[0] = ((dsp->fRec40[1] * fSlow26) + fSlow27);
			float fTemp32 = (dsp->fRec41[1] + (fSlow28 * fTemp9));
			dsp->fRec41[0] = (fTemp32 - floorf(fTemp32));
			float fTemp33 = (dsp->fRec42[1] + (fSlow28 * fTemp11));
			dsp->fRec42[0] = (fTemp33 - floorf(fTemp33));
			float fTemp34 = (dsp->fRec43[1] + (fSlow28 * fTemp13));
			dsp->fRec43[0] = (fTemp34 - floorf(fTemp34));
			float fTemp35 = (dsp->fRec44[1] + (fSlow28 * fTemp15));
			dsp->fRec44[0] = (fTemp35 - floorf(fTemp35));
			float fTemp36 = (dsp->fRec45[1] + (fSlow28 * fTemp17));
			dsp->fRec45[0] = (fTemp36 - floorf(fTemp36));
			float fTemp37 = (dsp->fRec46[1] + (fSlow28 * fTemp19));
			dsp->fRec46[0] = (fTemp37 - floorf(fTemp37));
			float fTemp38 = (dsp->fRec47[1] + (fSlow28 * fTemp21));
			dsp->fRec47[0] = (fTemp38 - floorf(fTemp38));
			dsp->fRec39[0] = ((fSlow3 * (dsp->fRec40[0] * (((((((fSlow10 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec41[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec42[0])])) + (fSlow14 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec43[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec44[0])])) + (fSlow16 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec45[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec46[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec47[0])])))) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec39[2]) + (dsp->fConst10 * dsp->fRec39[1]))));
			float fTemp39 = ((float)tanhf((float)(fSlow2 + (dsp->fConst3 * (dsp->fRec39[2] + (dsp->fRec39[0] + (2.0f * dsp->fRec39[1])))))) - fSlow2);
			dsp->fVec2[0] = fTemp39;
			dsp->fRec38[0] = (dsp->fConst5 * ((fTemp39 - dsp->fVec2[1]) + (dsp->fConst11 * dsp->fRec38[1])));
			dsp->fRec50[0] = ((dsp->fRec50[1] * fSlow31) + fSlow32);
			float fTemp40 = (dsp->fRec51[1] + (fSlow33 * fTemp9));
			dsp->fRec51[0] = (fTemp40 - floorf(fTemp40));
			float fTemp41 = (dsp->fRec52[1] + (fSlow33 * fTemp11));
			dsp->fRec52[0] = (fTemp41 - floorf(fTemp41));
			float fTemp42 = (dsp->fRec53[1] + (fSlow33 * fTemp13));
			dsp->fRec53[0] = (fTemp42 - floorf(fTemp42));
			float fTemp43 = (dsp->fRec54[1] + (fSlow33 * fTemp15));
			dsp->fRec54[0] = (fTemp43 - floorf(fTemp43));
			float fTemp44 = (dsp->fRec55[1] + (fSlow33 * fTemp17));
			dsp->fRec55[0] = (fTemp44 - floorf(fTemp44));
			float fTemp45 = (dsp->fRec56[1] + (fSlow33 * fTemp19));
			dsp->fRec56[0] = (fTemp45 - floorf(fTemp45));
			float fTemp46 = (dsp->fRec57[1] + (fSlow33 * fTemp21));
			dsp->fRec57[0] = (fTemp46 - floorf(fTemp46));
			dsp->fRec49[0] = ((fSlow3 * (dsp->fRec50[0] * (((((((fSlow10 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec51[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec52[0])])) + (fSlow14 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec53[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec54[0])])) + (fSlow16 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec55[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec56[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec57[0])])))) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec49[2]) + (dsp->fConst10 * dsp->fRec49[1]))));
			float fTemp47 = ((float)tanhf((float)(fSlow2 + (dsp->fConst3 * (dsp->fRec49[2] + (dsp->fRec49[0] + (2.0f * dsp->fRec49[1])))))) - fSlow2);
			dsp->fVec3[0] = fTemp47;
			dsp->fRec48[0] = (dsp->fConst5 * ((fTemp47 - dsp->fVec3[1]) + (dsp->fConst11 * dsp->fRec48[1])));
			dsp->fRec0[0] = ((fSlow1 * (((dsp->fRec1[0] + dsp->fRec28[0]) + dsp->fRec38[0]) + dsp->fRec48[0])) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec0[2]) + (dsp->fConst10 * dsp->fRec0[1]))));
			float fTemp48 = (fSlow0 + (float)tanhf((float)((dsp->fConst3 * (dsp->fRec0[2] + (dsp->fRec0[0] + (2.0f * dsp->fRec0[1])))) - fSlow0)));
			output0[i] = (FAUSTFLOAT)fTemp48;
			output1[i] = (FAUSTFLOAT)fTemp48;
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec29[2] = dsp->fRec29[1];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec39[2] = dsp->fRec39[1];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec49[2] = dsp->fRec49[1];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
