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
	
	int iVec0[2];
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst2;
	float fRec1[2];
	FAUSTFLOAT fButton1;
	float fVec2[2];
	float fRec2[2];
	int iVec3[2];
	FAUSTFLOAT fVslider0;
	float fRec3[2];
	float fRec0[2];
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	FAUSTFLOAT fVslider1;
	float fRec5[2];
	float fRec8[2];
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fVec4[2];
	float fRec12[2];
	float fVec5[2];
	int IOTA;
	float fVec6[256];
	float fConst12;
	float fConst13;
	float fConst14;
	int iConst15;
	float fConst16;
	int iConst17;
	float fVec7[2];
	float fRec13[2];
	float fVec8[2];
	float fVec9[512];
	float fConst18;
	float fConst19;
	float fConst20;
	int iConst21;
	float fConst22;
	int iConst23;
	float fVec10[2];
	float fRec14[2];
	float fVec11[2];
	float fVec12[256];
	float fConst24;
	float fConst25;
	float fConst26;
	int iConst27;
	float fConst28;
	int iConst29;
	float fVec13[2];
	float fRec15[2];
	float fVec14[2];
	float fVec15[512];
	float fConst30;
	float fConst31;
	float fConst32;
	int iConst33;
	float fConst34;
	int iConst35;
	float fVec16[2];
	float fRec16[2];
	float fVec17[2];
	float fVec18[256];
	float fConst36;
	float fConst37;
	float fConst38;
	int iConst39;
	float fConst40;
	int iConst41;
	float fVec19[2];
	float fRec17[2];
	float fVec20[2];
	float fVec21[512];
	float fConst42;
	float fConst43;
	float fConst44;
	int iConst45;
	float fConst46;
	int iConst47;
	float fConst48;
	float fConst49;
	float fRec11[3];
	float fConst50;
	float fRec9[2];
	float fRec6[2];
	float fConst51;
	float fConst52;
	float fConst53;
	float fRec4[3];
	int iRec18[2];
	FAUSTFLOAT fVslider2;
	
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
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider0 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider2 = (FAUSTFLOAT)0.20000000000000001f;
	
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
			dsp->fRec12[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fVec5[l12] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 256); l13 = (l13 + 1)) {
			dsp->fVec6[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fVec7[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec13[l15] = 0.0f;
			
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
		for (l17 = 0; (l17 < 512); l17 = (l17 + 1)) {
			dsp->fVec9[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fVec10[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec14[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fVec11[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 256); l21 = (l21 + 1)) {
			dsp->fVec12[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fVec13[l22] = 0.0f;
			
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
			dsp->fVec14[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 512); l25 = (l25 + 1)) {
			dsp->fVec15[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fVec16[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec16[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fVec17[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 256); l29 = (l29 + 1)) {
			dsp->fVec18[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fVec19[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec17[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
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
		for (l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			dsp->fRec11[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec9[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec6[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 3); l37 = (l37 + 1)) {
			dsp->fRec4[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->iRec18[l38] = 0;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (6.90999985f / dsp->fConst0);
	dsp->fConst2 = (0.00639999984f * dsp->fConst0);
	dsp->fConst3 = tanf((42703.668f / dsp->fConst0));
	dsp->fConst4 = (1.0f / dsp->fConst3);
	dsp->fConst5 = (((dsp->fConst4 + 1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst6 = (0.680000007f / dsp->fConst5);
	dsp->fConst7 = (1.0f / dsp->fConst0);
	dsp->fConst8 = tanf((3141.59277f / dsp->fConst0));
	dsp->fConst9 = (1.0f / dsp->fConst8);
	dsp->fConst10 = (1.0f / (((dsp->fConst9 + 1.41421354f) / dsp->fConst8) + 1.0f));
	dsp->fConst11 = (1.0f / mydsp_faustpower2_f(dsp->fConst8));
	dsp->fConst12 = max(0.0f, min(2047.0f, (0.00126903551f * dsp->fConst0)));
	dsp->fConst13 = floorf(dsp->fConst12);
	dsp->fConst14 = (dsp->fConst13 + (1.0f - dsp->fConst12));
	dsp->iConst15 = (int)dsp->fConst12;
	dsp->fConst16 = (dsp->fConst12 - dsp->fConst13);
	dsp->iConst17 = (dsp->iConst15 + 1);
	dsp->fConst18 = max(0.0f, min(2047.0f, (0.00161812303f * dsp->fConst0)));
	dsp->fConst19 = floorf(dsp->fConst18);
	dsp->fConst20 = (dsp->fConst19 + (1.0f - dsp->fConst18));
	dsp->iConst21 = (int)dsp->fConst18;
	dsp->fConst22 = (dsp->fConst18 - dsp->fConst19);
	dsp->iConst23 = (dsp->iConst21 + 1);
	dsp->fConst24 = max(0.0f, min(2047.0f, (0.00101419876f * dsp->fConst0)));
	dsp->fConst25 = floorf(dsp->fConst24);
	dsp->fConst26 = (dsp->fConst25 + (1.0f - dsp->fConst24));
	dsp->iConst27 = (int)dsp->fConst24;
	dsp->fConst28 = (dsp->fConst24 - dsp->fConst25);
	dsp->iConst29 = (dsp->iConst27 + 1);
	dsp->fConst30 = max(0.0f, min(2047.0f, (0.00138504151f * dsp->fConst0)));
	dsp->fConst31 = floorf(dsp->fConst30);
	dsp->fConst32 = (dsp->fConst31 + (1.0f - dsp->fConst30));
	dsp->iConst33 = (int)dsp->fConst30;
	dsp->fConst34 = (dsp->fConst30 - dsp->fConst31);
	dsp->iConst35 = (dsp->iConst33 + 1);
	dsp->fConst36 = max(0.0f, min(2047.0f, (0.00118483417f * dsp->fConst0)));
	dsp->fConst37 = floorf(dsp->fConst36);
	dsp->fConst38 = (dsp->fConst37 + (1.0f - dsp->fConst36));
	dsp->iConst39 = (int)dsp->fConst36;
	dsp->fConst40 = (dsp->fConst36 - dsp->fConst37);
	dsp->iConst41 = (dsp->iConst39 + 1);
	dsp->fConst42 = max(0.0f, min(2047.0f, (0.00246305414f * dsp->fConst0)));
	dsp->fConst43 = floorf(dsp->fConst42);
	dsp->fConst44 = (dsp->fConst43 + (1.0f - dsp->fConst42));
	dsp->iConst45 = (int)dsp->fConst42;
	dsp->fConst46 = (dsp->fConst42 - dsp->fConst43);
	dsp->iConst47 = (dsp->iConst45 + 1);
	dsp->fConst48 = (((dsp->fConst9 + -1.41421354f) / dsp->fConst8) + 1.0f);
	dsp->fConst49 = (2.0f * (1.0f - dsp->fConst11));
	dsp->fConst50 = (2.0f * (0.0f - dsp->fConst11));
	dsp->fConst51 = (1.0f / dsp->fConst5);
	dsp->fConst52 = (((dsp->fConst4 + -1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst53 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst3))));
	
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider0, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider1, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton1);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider2, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fButton0;
	float fSlow1 = (float)dsp->fButton1;
	float fSlow2 = (0.00100000005f * (float)dsp->fVslider0);
	float fSlow3 = sinf((3.14159274f * min(0.25f, (dsp->fConst7 * (float)dsp->fVslider1))));
	float fSlow4 = (2.0f * fSlow3);
	float fSlow5 = min(0.519834399f, min(2.0f, ((1.0f / fSlow3) - fSlow3)));
	float fSlow6 = (float)dsp->fVslider2;
	float fSlow7 = ((fSlow6 > 1.0f)?1.0f:((fSlow6 < -1.0f)?-1.0f:fSlow6));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->iVec0[0] = 1;
			dsp->fVec1[0] = fSlow0;
			dsp->fRec1[0] = ((((fSlow0 - dsp->fVec1[1]) > 0.0f) > 0)?dsp->fConst2:max(0.0f, (dsp->fRec1[1] + -1.0f)));
			int iTemp0 = (dsp->fRec1[0] > 0.0f);
			dsp->fVec2[0] = fSlow1;
			dsp->fRec2[0] = ((((fSlow1 - dsp->fVec2[1]) > 0.0f) > 0)?dsp->fConst2:max(0.0f, (dsp->fRec2[1] + -1.0f)));
			int iTemp1 = (dsp->fRec2[0] > 0.0f);
			int iTemp2 = ((iTemp0 + iTemp1) > 0);
			dsp->iVec3[0] = iTemp2;
			int iTemp3 = (iTemp2 > 0);
			int iTemp4 = ((dsp->iVec3[1] <= 0) & iTemp3);
			dsp->fRec3[0] = ((dsp->fRec3[1] * (float)(1 - iTemp4)) + ((float)iTemp4 * ((0.0839999989f * (float)iTemp0) + (fSlow2 * (float)iTemp1))));
			float fTemp5 = expf((0.0f - (dsp->fConst1 / (iTemp3?9.99999975e-05f:dsp->fRec3[0]))));
			dsp->fRec0[0] = ((dsp->fRec0[1] * fTemp5) + ((iTemp3?(float)iTemp2:0.0f) * (1.0f - fTemp5)));
			float fTemp6 = (dsp->fRec5[1] + (fSlow4 * dsp->fRec6[1]));
			float fTemp7 = (0.666666687f * fTemp6);
			float fTemp8 = ((fTemp7 > 1.0f)?1.0f:((fTemp7 < -1.0f)?-1.0f:(fTemp6 - (0.148148149f * mydsp_faustpower3_f(fTemp6)))));
			dsp->fRec5[0] = fTemp8;
			float fTemp9 = (dsp->fRec8[1] + (fSlow4 * dsp->fRec9[1]));
			float fTemp10 = (0.666666687f * fTemp9);
			float fTemp11 = ((fTemp10 > 1.0f)?1.0f:((fTemp10 < -1.0f)?-1.0f:(fTemp9 - (0.148148149f * mydsp_faustpower3_f(fTemp9)))));
			dsp->fRec8[0] = fTemp11;
			dsp->fVec4[0] = 394.0f;
			float fTemp12 = (dsp->fRec12[1] + (dsp->fConst7 * dsp->fVec4[1]));
			dsp->fRec12[0] = (fTemp12 - floorf(fTemp12));
			float fTemp13 = mydsp_faustpower2_f(((2.0f * dsp->fRec12[0]) + -1.0f));
			dsp->fVec5[0] = fTemp13;
			float fTemp14 = ((fTemp13 - dsp->fVec5[1]) * (float)dsp->iVec0[1]);
			dsp->fVec6[(dsp->IOTA & 255)] = fTemp14;
			dsp->fVec7[0] = 309.0f;
			float fTemp15 = (dsp->fRec13[1] + (dsp->fConst7 * dsp->fVec7[1]));
			dsp->fRec13[0] = (fTemp15 - floorf(fTemp15));
			float fTemp16 = mydsp_faustpower2_f(((2.0f * dsp->fRec13[0]) + -1.0f));
			dsp->fVec8[0] = fTemp16;
			float fTemp17 = ((fTemp16 - dsp->fVec8[1]) * (float)dsp->iVec0[1]);
			dsp->fVec9[(dsp->IOTA & 511)] = fTemp17;
			dsp->fVec10[0] = 493.0f;
			float fTemp18 = (dsp->fRec14[1] + (dsp->fConst7 * dsp->fVec10[1]));
			dsp->fRec14[0] = (fTemp18 - floorf(fTemp18));
			float fTemp19 = mydsp_faustpower2_f(((2.0f * dsp->fRec14[0]) + -1.0f));
			dsp->fVec11[0] = fTemp19;
			float fTemp20 = ((fTemp19 - dsp->fVec11[1]) * (float)dsp->iVec0[1]);
			dsp->fVec12[(dsp->IOTA & 255)] = fTemp20;
			dsp->fVec13[0] = 361.0f;
			float fTemp21 = (dsp->fRec15[1] + (dsp->fConst7 * dsp->fVec13[1]));
			dsp->fRec15[0] = (fTemp21 - floorf(fTemp21));
			float fTemp22 = mydsp_faustpower2_f(((2.0f * dsp->fRec15[0]) + -1.0f));
			dsp->fVec14[0] = fTemp22;
			float fTemp23 = ((fTemp22 - dsp->fVec14[1]) * (float)dsp->iVec0[1]);
			dsp->fVec15[(dsp->IOTA & 511)] = fTemp23;
			dsp->fVec16[0] = 422.0f;
			float fTemp24 = (dsp->fRec16[1] + (dsp->fConst7 * dsp->fVec16[1]));
			dsp->fRec16[0] = (fTemp24 - floorf(fTemp24));
			float fTemp25 = mydsp_faustpower2_f(((2.0f * dsp->fRec16[0]) + -1.0f));
			dsp->fVec17[0] = fTemp25;
			float fTemp26 = ((fTemp25 - dsp->fVec17[1]) * (float)dsp->iVec0[1]);
			dsp->fVec18[(dsp->IOTA & 255)] = fTemp26;
			dsp->fVec19[0] = 203.0f;
			float fTemp27 = (dsp->fRec17[1] + (dsp->fConst7 * dsp->fVec19[1]));
			dsp->fRec17[0] = (fTemp27 - floorf(fTemp27));
			float fTemp28 = mydsp_faustpower2_f(((2.0f * dsp->fRec17[0]) + -1.0f));
			dsp->fVec20[0] = fTemp28;
			float fTemp29 = ((fTemp28 - dsp->fVec20[1]) * (float)dsp->iVec0[1]);
			dsp->fVec21[(dsp->IOTA & 511)] = fTemp29;
			dsp->fRec11[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp14 - (dsp->fConst14 * dsp->fVec6[((dsp->IOTA - dsp->iConst15) & 255)])) - (dsp->fConst16 * dsp->fVec6[((dsp->IOTA - dsp->iConst17) & 255)]))) + (0.000809061516f * ((fTemp17 - (dsp->fConst20 * dsp->fVec9[((dsp->IOTA - dsp->iConst21) & 511)])) - (dsp->fConst22 * dsp->fVec9[((dsp->IOTA - dsp->iConst23) & 511)])))) + (0.000507099379f * ((fTemp20 - (dsp->fConst26 * dsp->fVec12[((dsp->IOTA - dsp->iConst27) & 255)])) - (dsp->fConst28 * dsp->fVec12[((dsp->IOTA - dsp->iConst29) & 255)])))) + (0.000692520756f * ((fTemp23 - (dsp->fConst32 * dsp->fVec15[((dsp->IOTA - dsp->iConst33) & 511)])) - (dsp->fConst34 * dsp->fVec15[((dsp->IOTA - dsp->iConst35) & 511)])))) + (0.000592417084f * ((fTemp26 - (dsp->fConst38 * dsp->fVec18[((dsp->IOTA - dsp->iConst39) & 255)])) - (dsp->fConst40 * dsp->fVec18[((dsp->IOTA - dsp->iConst41) & 255)])))) + (0.00123152707f * ((fTemp29 - (dsp->fConst44 * dsp->fVec21[((dsp->IOTA - dsp->iConst45) & 511)])) - (dsp->fConst46 * dsp->fVec21[((dsp->IOTA - dsp->iConst47) & 511)]))))) - (dsp->fConst10 * ((dsp->fConst48 * dsp->fRec11[2]) + (dsp->fConst49 * dsp->fRec11[1]))));
			float fTemp30 = (dsp->fConst10 * (((dsp->fConst11 * dsp->fRec11[0]) + (dsp->fConst50 * dsp->fRec11[1])) + (dsp->fConst11 * dsp->fRec11[2])));
			float fTemp31 = (fTemp11 + (fSlow5 * dsp->fRec9[1]));
			float fTemp32 = (fTemp30 - fTemp31);
			float fTemp33 = (0.666666687f * fTemp32);
			float fTemp34 = ((fTemp33 > 1.0f)?1.0f:((fTemp33 < -1.0f)?-1.0f:(fTemp30 - (fTemp31 + (0.148148149f * mydsp_faustpower3_f(fTemp32))))));
			float fTemp35 = (dsp->fRec9[1] + (fSlow4 * fTemp34));
			float fTemp36 = (0.666666687f * fTemp35);
			dsp->fRec9[0] = ((fTemp36 > 1.0f)?1.0f:((fTemp36 < -1.0f)?-1.0f:(fTemp35 - (0.148148149f * mydsp_faustpower3_f(fTemp35)))));
			float fRec10 = fTemp34;
			float fTemp37 = (fTemp8 + (fSlow5 * dsp->fRec6[1]));
			float fTemp38 = (fRec10 - fTemp37);
			float fTemp39 = (0.666666687f * fTemp38);
			float fTemp40 = ((fTemp39 > 1.0f)?1.0f:((fTemp39 < -1.0f)?-1.0f:(fRec10 - (fTemp37 + (0.148148149f * mydsp_faustpower3_f(fTemp38))))));
			float fTemp41 = (dsp->fRec6[1] + (fSlow4 * fTemp40));
			float fTemp42 = (0.666666687f * fTemp41);
			dsp->fRec6[0] = ((fTemp42 > 1.0f)?1.0f:((fTemp42 < -1.0f)?-1.0f:(fTemp41 - (0.148148149f * mydsp_faustpower3_f(fTemp41)))));
			float fRec7 = fTemp40;
			dsp->fRec4[0] = (fRec7 - (dsp->fConst51 * ((dsp->fConst52 * dsp->fRec4[2]) + (dsp->fConst53 * dsp->fRec4[1]))));
			dsp->iRec18[0] = ((1103515245 * dsp->iRec18[1]) + 12345);
			float fTemp43 = ((dsp->fRec0[0] * ((dsp->fConst6 * (dsp->fRec4[2] + (dsp->fRec4[0] + (2.0f * dsp->fRec4[1])))) + (9.31322554e-12f * (float)dsp->iRec18[0]))) * fSlow7);
			output0[i] = (FAUSTFLOAT)fTemp43;
			output1[i] = (FAUSTFLOAT)fTemp43;
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
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec11[2] = dsp->fRec11[1];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[2] = dsp->fRec4[1];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iRec18[1] = dsp->iRec18[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
