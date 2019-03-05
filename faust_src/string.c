#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "string"
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
	FAUSTFLOAT fVslider1;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	float fConst3;
	FAUSTFLOAT fHslider1;
	float fConst4;
	float fVec0[2];
	float fRec1[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	int iRec4[2];
	float fRec3[3];
	float fRec2[3];
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst5;
	FAUSTFLOAT fHslider4;
	float fVec2[2];
	float fRec5[2];
	float fConst6;
	float fConst7;
	int IOTA;
	float fVec3[4096];
	float fRec0[2];
	FAUSTFLOAT fVslider2;
	float fVec4[2];
	float fRec7[2];
	FAUSTFLOAT fButton1;
	float fVec5[2];
	float fRec8[2];
	float fVec6[4096];
	float fRec6[2];
	FAUSTFLOAT fVslider3;
	float fVec7[2];
	float fRec10[2];
	FAUSTFLOAT fButton2;
	float fVec8[2];
	float fRec11[2];
	float fVec9[4096];
	float fRec9[2];
	FAUSTFLOAT fVslider4;
	float fVec10[2];
	float fRec13[2];
	FAUSTFLOAT fButton3;
	float fVec11[2];
	float fRec14[2];
	float fVec12[4096];
	float fRec12[2];
	
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
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "0.0");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.0");
	m->declare(m->metaInterface, "filename", "string");
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
	m->declare(m->metaInterface, "name", "string");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
	m->declare(m->metaInterface, "spats.lib/name", "Faust Spatialization Library");
	m->declare(m->metaInterface, "spats.lib/version", "0.0");
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
	dsp->fVslider0 = (FAUSTFLOAT)0.69999999999999996f;
	dsp->fVslider1 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)-1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)2.0f;
	dsp->fHslider3 = (FAUSTFLOAT)0.5f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fHslider4 = (FAUSTFLOAT)1.0f;
	dsp->fVslider2 = (FAUSTFLOAT)440.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider3 = (FAUSTFLOAT)440.0f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fVslider4 = (FAUSTFLOAT)440.0f;
	dsp->fButton3 = (FAUSTFLOAT)0.0f;
	
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
			dsp->fRec1[l1] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->iRec4[l2] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 3); l3 = (l3 + 1)) {
			dsp->fRec3[l3] = 0.0f;
			
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
			dsp->fVec1[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fVec2[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec5[l7] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 4096); l8 = (l8 + 1)) {
			dsp->fVec3[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec0[l9] = 0.0f;
			
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
			dsp->fRec7[l11] = 0.0f;
			
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
			dsp->fRec8[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 4096); l14 = (l14 + 1)) {
			dsp->fVec6[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec6[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fVec7[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec10[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fVec8[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec11[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 4096); l20 = (l20 + 1)) {
			dsp->fVec9[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec9[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fVec10[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec13[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fVec11[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec14[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 4096); l26 = (l26 + 1)) {
			dsp->fVec12[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec12[l27] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (10000.0f / dsp->fConst0);
	dsp->fConst2 = (3.14159274f / dsp->fConst0);
	dsp->fConst3 = (1.0f / (dsp->fConst2 + 1.0f));
	dsp->fConst4 = (1.0f - dsp->fConst2);
	dsp->fConst5 = (0.00400000019f * dsp->fConst0);
	dsp->fConst6 = (0.00200000009f * dsp->fConst0);
	dsp->fConst7 = (500.0f / dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string");
	ui_interface->openVerticalBox(ui_interface->uiInterface, "params");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "expos", &dsp->fHslider3, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.00999999978f, 1.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sharpness", &dsp->fHslider4, 1.0f, 0.100000001f, 1.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, -1.0f, -1.0f, 1.0f, 2.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "strength", &dsp->fHslider2, 2.0f, 0.0f, 5.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider1, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider2, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton1);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider3, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider4, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton3);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.699999988f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (dsp->fConst0 / fSlow1);
	float fSlow3 = (fSlow2 + -1.99999499f);
	float fSlow4 = floorf(fSlow3);
	float fSlow5 = (fSlow2 + (-1.0f - fSlow4));
	float fSlow6 = (fSlow2 + (-2.0f - fSlow4));
	float fSlow7 = (fSlow2 + (-3.0f - fSlow4));
	float fSlow8 = (fSlow2 + (-4.0f - fSlow4));
	float fSlow9 = (fSlow2 + (-5.0f - fSlow4));
	float fSlow10 = (((((0.0f - fSlow5) * (0.0f - (0.5f * fSlow6))) * (0.0f - (0.333333343f * fSlow7))) * (0.0f - (0.25f * fSlow8))) * (0.0f - (0.200000003f * fSlow9)));
	float fSlow11 = (float)dsp->fHslider0;
	float fSlow12 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow1))));
	float fSlow13 = (float)dsp->fHslider1;
	float fSlow14 = (dsp->fConst3 * fSlow13);
	float fSlow15 = (float)dsp->fHslider2;
	float fSlow16 = (float)dsp->fHslider3;
	float fSlow17 = tanf((dsp->fConst2 * ((15000.0f * fSlow16) + 500.0f)));
	float fSlow18 = (1.0f / fSlow17);
	float fSlow19 = (((fSlow18 + 1.41421354f) / fSlow17) + 1.0f);
	float fSlow20 = (100.0f * (fSlow15 / (fSlow19 * fSlow1)));
	float fSlow21 = tanf((dsp->fConst2 * ((500.0f * fSlow16) + 40.0f)));
	float fSlow22 = (1.0f / fSlow21);
	float fSlow23 = (1.0f / (((fSlow22 + 1.41421354f) / fSlow21) + 1.0f));
	float fSlow24 = (1.0f / mydsp_faustpower2_f(fSlow21));
	float fSlow25 = (((fSlow22 + -1.41421354f) / fSlow21) + 1.0f);
	float fSlow26 = (2.0f * (1.0f - fSlow24));
	float fSlow27 = (2.0f * (0.0f - fSlow24));
	float fSlow28 = (1.0f / fSlow19);
	float fSlow29 = (((fSlow18 + -1.41421354f) / fSlow17) + 1.0f);
	float fSlow30 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow17))));
	float fSlow31 = (float)dsp->fButton0;
	float fSlow32 = (float)dsp->fHslider4;
	float fSlow33 = (dsp->fConst5 * fSlow32);
	float fSlow34 = (dsp->fConst6 * fSlow32);
	float fSlow35 = (dsp->fConst7 / fSlow32);
	int iSlow36 = (int)fSlow3;
	int iSlow37 = min(8192, max(0, iSlow36));
	float fSlow38 = (fSlow2 - fSlow4);
	float fSlow39 = ((((0.0f - fSlow6) * (0.0f - (0.5f * fSlow7))) * (0.0f - (0.333333343f * fSlow8))) * (0.0f - (0.25f * fSlow9)));
	int iSlow40 = min(8192, max(0, (iSlow36 + 1)));
	float fSlow41 = (0.5f * (((fSlow5 * (0.0f - fSlow7)) * (0.0f - (0.5f * fSlow8))) * (0.0f - (0.333333343f * fSlow9))));
	int iSlow42 = min(8192, max(0, (iSlow36 + 2)));
	float fSlow43 = (fSlow5 * fSlow6);
	float fSlow44 = (0.166666672f * ((fSlow43 * (0.0f - fSlow8)) * (0.0f - (0.5f * fSlow9))));
	int iSlow45 = min(8192, max(0, (iSlow36 + 3)));
	float fSlow46 = (fSlow43 * fSlow7);
	float fSlow47 = (0.0416666679f * (fSlow46 * (0.0f - fSlow9)));
	int iSlow48 = min(8192, max(0, (iSlow36 + 4)));
	float fSlow49 = (0.00833333377f * (fSlow46 * fSlow8));
	int iSlow50 = min(8192, max(0, (iSlow36 + 5)));
	float fSlow51 = (float)dsp->fVslider2;
	float fSlow52 = (dsp->fConst0 / fSlow51);
	float fSlow53 = (fSlow52 + -1.99999499f);
	float fSlow54 = floorf(fSlow53);
	float fSlow55 = (fSlow52 + (-1.0f - fSlow54));
	float fSlow56 = (fSlow52 + (-2.0f - fSlow54));
	float fSlow57 = (fSlow52 + (-3.0f - fSlow54));
	float fSlow58 = (fSlow52 + (-4.0f - fSlow54));
	float fSlow59 = (fSlow52 + (-5.0f - fSlow54));
	float fSlow60 = (((((0.0f - fSlow55) * (0.0f - (0.5f * fSlow56))) * (0.0f - (0.333333343f * fSlow57))) * (0.0f - (0.25f * fSlow58))) * (0.0f - (0.200000003f * fSlow59)));
	float fSlow61 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow51))));
	float fSlow62 = (100.0f * (fSlow15 / (fSlow19 * fSlow51)));
	float fSlow63 = (float)dsp->fButton1;
	int iSlow64 = (int)fSlow53;
	int iSlow65 = min(8192, max(0, iSlow64));
	float fSlow66 = (fSlow52 - fSlow54);
	float fSlow67 = ((((0.0f - fSlow56) * (0.0f - (0.5f * fSlow57))) * (0.0f - (0.333333343f * fSlow58))) * (0.0f - (0.25f * fSlow59)));
	int iSlow68 = min(8192, max(0, (iSlow64 + 1)));
	float fSlow69 = (0.5f * (((fSlow55 * (0.0f - fSlow57)) * (0.0f - (0.5f * fSlow58))) * (0.0f - (0.333333343f * fSlow59))));
	int iSlow70 = min(8192, max(0, (iSlow64 + 2)));
	float fSlow71 = (fSlow55 * fSlow56);
	float fSlow72 = (0.166666672f * ((fSlow71 * (0.0f - fSlow58)) * (0.0f - (0.5f * fSlow59))));
	int iSlow73 = min(8192, max(0, (iSlow64 + 3)));
	float fSlow74 = (fSlow71 * fSlow57);
	float fSlow75 = (0.0416666679f * (fSlow74 * (0.0f - fSlow59)));
	int iSlow76 = min(8192, max(0, (iSlow64 + 4)));
	float fSlow77 = (0.00833333377f * (fSlow74 * fSlow58));
	int iSlow78 = min(8192, max(0, (iSlow64 + 5)));
	float fSlow79 = (float)dsp->fVslider3;
	float fSlow80 = (dsp->fConst0 / fSlow79);
	float fSlow81 = (fSlow80 + -1.99999499f);
	float fSlow82 = floorf(fSlow81);
	float fSlow83 = (fSlow80 + (-1.0f - fSlow82));
	float fSlow84 = (fSlow80 + (-2.0f - fSlow82));
	float fSlow85 = (fSlow80 + (-3.0f - fSlow82));
	float fSlow86 = (fSlow80 + (-4.0f - fSlow82));
	float fSlow87 = (fSlow80 + (-5.0f - fSlow82));
	float fSlow88 = (((((0.0f - fSlow83) * (0.0f - (0.5f * fSlow84))) * (0.0f - (0.333333343f * fSlow85))) * (0.0f - (0.25f * fSlow86))) * (0.0f - (0.200000003f * fSlow87)));
	float fSlow89 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow79))));
	float fSlow90 = (100.0f * (fSlow15 / (fSlow19 * fSlow79)));
	float fSlow91 = (float)dsp->fButton2;
	int iSlow92 = (int)fSlow81;
	int iSlow93 = min(8192, max(0, iSlow92));
	float fSlow94 = (fSlow80 - fSlow82);
	float fSlow95 = ((((0.0f - fSlow84) * (0.0f - (0.5f * fSlow85))) * (0.0f - (0.333333343f * fSlow86))) * (0.0f - (0.25f * fSlow87)));
	int iSlow96 = min(8192, max(0, (iSlow92 + 1)));
	float fSlow97 = (0.5f * (((fSlow83 * (0.0f - fSlow85)) * (0.0f - (0.5f * fSlow86))) * (0.0f - (0.333333343f * fSlow87))));
	int iSlow98 = min(8192, max(0, (iSlow92 + 2)));
	float fSlow99 = (fSlow83 * fSlow84);
	float fSlow100 = (0.166666672f * ((fSlow99 * (0.0f - fSlow86)) * (0.0f - (0.5f * fSlow87))));
	int iSlow101 = min(8192, max(0, (iSlow92 + 3)));
	float fSlow102 = (fSlow99 * fSlow85);
	float fSlow103 = (0.0416666679f * (fSlow102 * (0.0f - fSlow87)));
	int iSlow104 = min(8192, max(0, (iSlow92 + 4)));
	float fSlow105 = (0.00833333377f * (fSlow102 * fSlow86));
	int iSlow106 = min(8192, max(0, (iSlow92 + 5)));
	float fSlow107 = (float)dsp->fVslider4;
	float fSlow108 = (dsp->fConst0 / fSlow107);
	float fSlow109 = (fSlow108 + -1.99999499f);
	float fSlow110 = floorf(fSlow109);
	float fSlow111 = (fSlow108 + (-1.0f - fSlow110));
	float fSlow112 = (fSlow108 + (-2.0f - fSlow110));
	float fSlow113 = (fSlow108 + (-3.0f - fSlow110));
	float fSlow114 = (fSlow108 + (-4.0f - fSlow110));
	float fSlow115 = (fSlow108 + (-5.0f - fSlow110));
	float fSlow116 = (((((0.0f - fSlow111) * (0.0f - (0.5f * fSlow112))) * (0.0f - (0.333333343f * fSlow113))) * (0.0f - (0.25f * fSlow114))) * (0.0f - (0.200000003f * fSlow115)));
	float fSlow117 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow107))));
	float fSlow118 = (100.0f * (fSlow15 / (fSlow19 * fSlow107)));
	float fSlow119 = (float)dsp->fButton3;
	int iSlow120 = (int)fSlow109;
	int iSlow121 = min(8192, max(0, iSlow120));
	float fSlow122 = (fSlow108 - fSlow110);
	float fSlow123 = ((((0.0f - fSlow112) * (0.0f - (0.5f * fSlow113))) * (0.0f - (0.333333343f * fSlow114))) * (0.0f - (0.25f * fSlow115)));
	int iSlow124 = min(8192, max(0, (iSlow120 + 1)));
	float fSlow125 = (0.5f * (((fSlow111 * (0.0f - fSlow113)) * (0.0f - (0.5f * fSlow114))) * (0.0f - (0.333333343f * fSlow115))));
	int iSlow126 = min(8192, max(0, (iSlow120 + 2)));
	float fSlow127 = (fSlow111 * fSlow112);
	float fSlow128 = (0.166666672f * ((fSlow127 * (0.0f - fSlow114)) * (0.0f - (0.5f * fSlow115))));
	int iSlow129 = min(8192, max(0, (iSlow120 + 3)));
	float fSlow130 = (fSlow127 * fSlow113);
	float fSlow131 = (0.0416666679f * (fSlow130 * (0.0f - fSlow115)));
	int iSlow132 = min(8192, max(0, (iSlow120 + 4)));
	float fSlow133 = (0.00833333377f * (fSlow130 * fSlow114));
	int iSlow134 = min(8192, max(0, (iSlow120 + 5)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = ((float)tanhf((float)(dsp->fRec0[1] + 0.100000001f)) + -0.100000001f);
			dsp->fVec0[0] = (fSlow14 * fTemp0);
			dsp->fRec1[0] = ((dsp->fConst3 * ((fSlow13 * fTemp0) + (dsp->fConst4 * dsp->fRec1[1]))) - dsp->fVec0[1]);
			dsp->iRec4[0] = ((1103515245 * dsp->iRec4[1]) + 12345);
			dsp->fRec3[0] = ((4.65661287e-10f * (float)dsp->iRec4[0]) - (fSlow23 * ((fSlow25 * dsp->fRec3[2]) + (fSlow26 * dsp->fRec3[1]))));
			dsp->fRec2[0] = ((fSlow23 * (((fSlow24 * dsp->fRec3[0]) + (fSlow27 * dsp->fRec3[1])) + (fSlow24 * dsp->fRec3[2]))) - (fSlow28 * ((fSlow29 * dsp->fRec2[2]) + (fSlow30 * dsp->fRec2[1]))));
			float fTemp1 = (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1])));
			dsp->fVec1[0] = fSlow31;
			dsp->fVec2[0] = fSlow32;
			float fTemp2 = (dsp->fConst5 * (fSlow32 - dsp->fVec2[1]));
			dsp->fRec5[0] = ((((fSlow31 - dsp->fVec1[1]) > 0.0f) > 0)?0.0f:min(fSlow33, ((dsp->fRec5[1] + fTemp2) + 1.0f)));
			int iTemp3 = (dsp->fRec5[0] < fSlow34);
			float fTemp4 = ((fSlow12 * dsp->fRec1[0]) + (fSlow20 * (fTemp1 * (iTemp3?((dsp->fRec5[0] < 0.0f)?0.0f:(iTemp3?(fSlow35 * dsp->fRec5[0]):1.0f)):((dsp->fRec5[0] < fSlow33)?((fSlow35 * (0.0f - (dsp->fRec5[0] - fSlow34))) + 1.0f):0.0f)))));
			dsp->fVec3[(dsp->IOTA & 4095)] = fTemp4;
			dsp->fRec0[0] = ((fSlow10 * dsp->fVec3[((dsp->IOTA - iSlow37) & 4095)]) + (fSlow38 * (((((fSlow39 * dsp->fVec3[((dsp->IOTA - iSlow40) & 4095)]) + (fSlow41 * dsp->fVec3[((dsp->IOTA - iSlow42) & 4095)])) + (fSlow44 * dsp->fVec3[((dsp->IOTA - iSlow45) & 4095)])) + (fSlow47 * dsp->fVec3[((dsp->IOTA - iSlow48) & 4095)])) + (fSlow49 * dsp->fVec3[((dsp->IOTA - iSlow50) & 4095)]))));
			float fTemp5 = ((float)tanhf((float)(dsp->fRec6[1] + 0.100000001f)) + -0.100000001f);
			dsp->fVec4[0] = (fSlow14 * fTemp5);
			dsp->fRec7[0] = ((dsp->fConst3 * ((fSlow13 * fTemp5) + (dsp->fConst4 * dsp->fRec7[1]))) - dsp->fVec4[1]);
			dsp->fVec5[0] = fSlow63;
			dsp->fRec8[0] = ((((fSlow63 - dsp->fVec5[1]) > 0.0f) > 0)?0.0f:min(fSlow33, ((fTemp2 + dsp->fRec8[1]) + 1.0f)));
			int iTemp6 = (dsp->fRec8[0] < fSlow34);
			float fTemp7 = ((fSlow61 * dsp->fRec7[0]) + (fSlow62 * (fTemp1 * (iTemp6?((dsp->fRec8[0] < 0.0f)?0.0f:(iTemp6?(fSlow35 * dsp->fRec8[0]):1.0f)):((dsp->fRec8[0] < fSlow33)?((fSlow35 * (0.0f - (dsp->fRec8[0] - fSlow34))) + 1.0f):0.0f)))));
			dsp->fVec6[(dsp->IOTA & 4095)] = fTemp7;
			dsp->fRec6[0] = ((fSlow60 * dsp->fVec6[((dsp->IOTA - iSlow65) & 4095)]) + (fSlow66 * (((((fSlow67 * dsp->fVec6[((dsp->IOTA - iSlow68) & 4095)]) + (fSlow69 * dsp->fVec6[((dsp->IOTA - iSlow70) & 4095)])) + (fSlow72 * dsp->fVec6[((dsp->IOTA - iSlow73) & 4095)])) + (fSlow75 * dsp->fVec6[((dsp->IOTA - iSlow76) & 4095)])) + (fSlow77 * dsp->fVec6[((dsp->IOTA - iSlow78) & 4095)]))));
			float fTemp8 = ((float)tanhf((float)(dsp->fRec9[1] + 0.100000001f)) + -0.100000001f);
			dsp->fVec7[0] = (fSlow14 * fTemp8);
			dsp->fRec10[0] = ((dsp->fConst3 * ((fSlow13 * fTemp8) + (dsp->fConst4 * dsp->fRec10[1]))) - dsp->fVec7[1]);
			dsp->fVec8[0] = fSlow91;
			dsp->fRec11[0] = ((((fSlow91 - dsp->fVec8[1]) > 0.0f) > 0)?0.0f:min(fSlow33, ((fTemp2 + dsp->fRec11[1]) + 1.0f)));
			int iTemp9 = (dsp->fRec11[0] < fSlow34);
			float fTemp10 = ((fSlow89 * dsp->fRec10[0]) + (fSlow90 * (fTemp1 * (iTemp9?((dsp->fRec11[0] < 0.0f)?0.0f:(iTemp9?(fSlow35 * dsp->fRec11[0]):1.0f)):((dsp->fRec11[0] < fSlow33)?((fSlow35 * (0.0f - (dsp->fRec11[0] - fSlow34))) + 1.0f):0.0f)))));
			dsp->fVec9[(dsp->IOTA & 4095)] = fTemp10;
			dsp->fRec9[0] = ((fSlow88 * dsp->fVec9[((dsp->IOTA - iSlow93) & 4095)]) + (fSlow94 * (((((fSlow95 * dsp->fVec9[((dsp->IOTA - iSlow96) & 4095)]) + (fSlow97 * dsp->fVec9[((dsp->IOTA - iSlow98) & 4095)])) + (fSlow100 * dsp->fVec9[((dsp->IOTA - iSlow101) & 4095)])) + (fSlow103 * dsp->fVec9[((dsp->IOTA - iSlow104) & 4095)])) + (fSlow105 * dsp->fVec9[((dsp->IOTA - iSlow106) & 4095)]))));
			float fTemp11 = ((float)tanhf((float)(dsp->fRec12[1] + 0.100000001f)) + -0.100000001f);
			dsp->fVec10[0] = (fSlow14 * fTemp11);
			dsp->fRec13[0] = ((dsp->fConst3 * ((fSlow13 * fTemp11) + (dsp->fConst4 * dsp->fRec13[1]))) - dsp->fVec10[1]);
			dsp->fVec11[0] = fSlow119;
			dsp->fRec14[0] = ((((fSlow119 - dsp->fVec11[1]) > 0.0f) > 0)?0.0f:min(fSlow33, ((fTemp2 + dsp->fRec14[1]) + 1.0f)));
			int iTemp12 = (dsp->fRec14[0] < fSlow34);
			float fTemp13 = ((fSlow117 * dsp->fRec13[0]) + (fSlow118 * (fTemp1 * (iTemp12?((dsp->fRec14[0] < 0.0f)?0.0f:(iTemp12?(fSlow35 * dsp->fRec14[0]):1.0f)):((dsp->fRec14[0] < fSlow33)?((fSlow35 * (0.0f - (dsp->fRec14[0] - fSlow34))) + 1.0f):0.0f)))));
			dsp->fVec12[(dsp->IOTA & 4095)] = fTemp13;
			dsp->fRec12[0] = ((fSlow116 * dsp->fVec12[((dsp->IOTA - iSlow121) & 4095)]) + (fSlow122 * (((((fSlow123 * dsp->fVec12[((dsp->IOTA - iSlow124) & 4095)]) + (fSlow125 * dsp->fVec12[((dsp->IOTA - iSlow126) & 4095)])) + (fSlow128 * dsp->fVec12[((dsp->IOTA - iSlow129) & 4095)])) + (fSlow131 * dsp->fVec12[((dsp->IOTA - iSlow132) & 4095)])) + (fSlow133 * dsp->fVec12[((dsp->IOTA - iSlow134) & 4095)]))));
			float fTemp14 = (fSlow0 * ((((0.800000012f * dsp->fRec0[0]) + (0.600000024f * dsp->fRec6[0])) + (0.400000006f * dsp->fRec9[0])) + (0.200000003f * dsp->fRec12[0])));
			float fTemp15 = (fTemp14 + 0.100000001f);
			float fTemp16 = (0.666666687f * fTemp15);
			output0[i] = (FAUSTFLOAT)(((fTemp16 > 1.0f)?1.0f:((fTemp16 < -1.0f)?-1.0f:(fTemp14 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp15)))))) + -0.100000001f);
			float fTemp17 = (fSlow0 * ((((0.200000003f * dsp->fRec0[0]) + (0.400000006f * dsp->fRec6[0])) + (0.600000024f * dsp->fRec9[0])) + (0.800000012f * dsp->fRec12[0])));
			float fTemp18 = (fTemp17 + 0.100000001f);
			float fTemp19 = (0.666666687f * fTemp18);
			output1[i] = (FAUSTFLOAT)(((fTemp19 > 1.0f)?1.0f:((fTemp19 < -1.0f)?-1.0f:(fTemp17 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp18)))))) + -0.100000001f);
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec4[1] = dsp->iRec4[0];
			dsp->fRec3[2] = dsp->fRec3[1];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
