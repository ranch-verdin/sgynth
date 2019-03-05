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
	float fVec0[2];
	FAUSTFLOAT fVslider1;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	float fConst3;
	FAUSTFLOAT fHslider1;
	float fConst4;
	float fVec1[2];
	float fRec1[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	int iRec4[2];
	float fRec3[3];
	float fRec2[3];
	FAUSTFLOAT fButton0;
	float fVec2[2];
	float fConst5;
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
			dsp->iRec4[l3] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			dsp->fRec3[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 3); l5 = (l5 + 1)) {
			dsp->fRec2[l5] = 0.0f;
			
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.00999999978f, 2.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, -1.0f, -1.0f, 1.0f, 2.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "strength", &dsp->fHslider2, 2.0f, 0.0f, 5.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider4, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton3);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider3, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider2, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton1);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider1, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
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
	float fSlow15 = (float)dsp->fHslider3;
	float fSlow16 = tanf((dsp->fConst2 * ((15000.0f * fSlow15) + 500.0f)));
	float fSlow17 = (1.0f / fSlow16);
	float fSlow18 = (((fSlow17 + 1.41421354f) / fSlow16) + 1.0f);
	float fSlow19 = ((float)dsp->fHslider2 / fSlow18);
	float fSlow20 = tanf((dsp->fConst2 * ((500.0f * fSlow15) + 40.0f)));
	float fSlow21 = (1.0f / fSlow20);
	float fSlow22 = (1.0f / (((fSlow21 + 1.41421354f) / fSlow20) + 1.0f));
	float fSlow23 = (1.0f / mydsp_faustpower2_f(fSlow20));
	float fSlow24 = (((fSlow21 + -1.41421354f) / fSlow20) + 1.0f);
	float fSlow25 = (2.0f * (1.0f - fSlow23));
	float fSlow26 = (2.0f * (0.0f - fSlow23));
	float fSlow27 = (1.0f / fSlow18);
	float fSlow28 = (((fSlow17 + -1.41421354f) / fSlow16) + 1.0f);
	float fSlow29 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow16))));
	float fSlow30 = (float)dsp->fButton0;
	int iSlow31 = (int)fSlow3;
	int iSlow32 = min(8192, max(0, iSlow31));
	float fSlow33 = (fSlow2 - fSlow4);
	float fSlow34 = ((((0.0f - fSlow6) * (0.0f - (0.5f * fSlow7))) * (0.0f - (0.333333343f * fSlow8))) * (0.0f - (0.25f * fSlow9)));
	int iSlow35 = min(8192, max(0, (iSlow31 + 1)));
	float fSlow36 = (0.5f * (((fSlow5 * (0.0f - fSlow7)) * (0.0f - (0.5f * fSlow8))) * (0.0f - (0.333333343f * fSlow9))));
	int iSlow37 = min(8192, max(0, (iSlow31 + 2)));
	float fSlow38 = (fSlow5 * fSlow6);
	float fSlow39 = (0.166666672f * ((fSlow38 * (0.0f - fSlow8)) * (0.0f - (0.5f * fSlow9))));
	int iSlow40 = min(8192, max(0, (iSlow31 + 3)));
	float fSlow41 = (fSlow38 * fSlow7);
	float fSlow42 = (0.0416666679f * (fSlow41 * (0.0f - fSlow9)));
	int iSlow43 = min(8192, max(0, (iSlow31 + 4)));
	float fSlow44 = (0.00833333377f * (fSlow41 * fSlow8));
	int iSlow45 = min(8192, max(0, (iSlow31 + 5)));
	float fSlow46 = (float)dsp->fVslider2;
	float fSlow47 = (dsp->fConst0 / fSlow46);
	float fSlow48 = (fSlow47 + -1.99999499f);
	float fSlow49 = floorf(fSlow48);
	float fSlow50 = (fSlow47 + (-1.0f - fSlow49));
	float fSlow51 = (fSlow47 + (-2.0f - fSlow49));
	float fSlow52 = (fSlow47 + (-3.0f - fSlow49));
	float fSlow53 = (fSlow47 + (-4.0f - fSlow49));
	float fSlow54 = (fSlow47 + (-5.0f - fSlow49));
	float fSlow55 = (((((0.0f - fSlow50) * (0.0f - (0.5f * fSlow51))) * (0.0f - (0.333333343f * fSlow52))) * (0.0f - (0.25f * fSlow53))) * (0.0f - (0.200000003f * fSlow54)));
	float fSlow56 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow46))));
	float fSlow57 = (float)dsp->fButton1;
	int iSlow58 = (int)fSlow48;
	int iSlow59 = min(8192, max(0, iSlow58));
	float fSlow60 = (fSlow47 - fSlow49);
	float fSlow61 = ((((0.0f - fSlow51) * (0.0f - (0.5f * fSlow52))) * (0.0f - (0.333333343f * fSlow53))) * (0.0f - (0.25f * fSlow54)));
	int iSlow62 = min(8192, max(0, (iSlow58 + 1)));
	float fSlow63 = (0.5f * (((fSlow50 * (0.0f - fSlow52)) * (0.0f - (0.5f * fSlow53))) * (0.0f - (0.333333343f * fSlow54))));
	int iSlow64 = min(8192, max(0, (iSlow58 + 2)));
	float fSlow65 = (fSlow50 * fSlow51);
	float fSlow66 = (0.166666672f * ((fSlow65 * (0.0f - fSlow53)) * (0.0f - (0.5f * fSlow54))));
	int iSlow67 = min(8192, max(0, (iSlow58 + 3)));
	float fSlow68 = (fSlow65 * fSlow52);
	float fSlow69 = (0.0416666679f * (fSlow68 * (0.0f - fSlow54)));
	int iSlow70 = min(8192, max(0, (iSlow58 + 4)));
	float fSlow71 = (0.00833333377f * (fSlow68 * fSlow53));
	int iSlow72 = min(8192, max(0, (iSlow58 + 5)));
	float fSlow73 = (float)dsp->fVslider3;
	float fSlow74 = (dsp->fConst0 / fSlow73);
	float fSlow75 = (fSlow74 + -1.99999499f);
	float fSlow76 = floorf(fSlow75);
	float fSlow77 = (fSlow74 + (-1.0f - fSlow76));
	float fSlow78 = (fSlow74 + (-2.0f - fSlow76));
	float fSlow79 = (fSlow74 + (-3.0f - fSlow76));
	float fSlow80 = (fSlow74 + (-4.0f - fSlow76));
	float fSlow81 = (fSlow74 + (-5.0f - fSlow76));
	float fSlow82 = (((((0.0f - fSlow77) * (0.0f - (0.5f * fSlow78))) * (0.0f - (0.333333343f * fSlow79))) * (0.0f - (0.25f * fSlow80))) * (0.0f - (0.200000003f * fSlow81)));
	float fSlow83 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow73))));
	float fSlow84 = (float)dsp->fButton2;
	int iSlow85 = (int)fSlow75;
	int iSlow86 = min(8192, max(0, iSlow85));
	float fSlow87 = (fSlow74 - fSlow76);
	float fSlow88 = ((((0.0f - fSlow78) * (0.0f - (0.5f * fSlow79))) * (0.0f - (0.333333343f * fSlow80))) * (0.0f - (0.25f * fSlow81)));
	int iSlow89 = min(8192, max(0, (iSlow85 + 1)));
	float fSlow90 = (0.5f * (((fSlow77 * (0.0f - fSlow79)) * (0.0f - (0.5f * fSlow80))) * (0.0f - (0.333333343f * fSlow81))));
	int iSlow91 = min(8192, max(0, (iSlow85 + 2)));
	float fSlow92 = (fSlow77 * fSlow78);
	float fSlow93 = (0.166666672f * ((fSlow92 * (0.0f - fSlow80)) * (0.0f - (0.5f * fSlow81))));
	int iSlow94 = min(8192, max(0, (iSlow85 + 3)));
	float fSlow95 = (fSlow92 * fSlow79);
	float fSlow96 = (0.0416666679f * (fSlow95 * (0.0f - fSlow81)));
	int iSlow97 = min(8192, max(0, (iSlow85 + 4)));
	float fSlow98 = (0.00833333377f * (fSlow95 * fSlow80));
	int iSlow99 = min(8192, max(0, (iSlow85 + 5)));
	float fSlow100 = (float)dsp->fVslider4;
	float fSlow101 = (dsp->fConst0 / fSlow100);
	float fSlow102 = (fSlow101 + -1.99999499f);
	float fSlow103 = floorf(fSlow102);
	float fSlow104 = (fSlow101 + (-1.0f - fSlow103));
	float fSlow105 = (fSlow101 + (-2.0f - fSlow103));
	float fSlow106 = (fSlow101 + (-3.0f - fSlow103));
	float fSlow107 = (fSlow101 + (-4.0f - fSlow103));
	float fSlow108 = (fSlow101 + (-5.0f - fSlow103));
	float fSlow109 = (((((0.0f - fSlow104) * (0.0f - (0.5f * fSlow105))) * (0.0f - (0.333333343f * fSlow106))) * (0.0f - (0.25f * fSlow107))) * (0.0f - (0.200000003f * fSlow108)));
	float fSlow110 = expf((0.0f - (dsp->fConst1 / (fSlow11 * fSlow100))));
	float fSlow111 = (float)dsp->fButton3;
	int iSlow112 = (int)fSlow102;
	int iSlow113 = min(8192, max(0, iSlow112));
	float fSlow114 = (fSlow101 - fSlow103);
	float fSlow115 = ((((0.0f - fSlow105) * (0.0f - (0.5f * fSlow106))) * (0.0f - (0.333333343f * fSlow107))) * (0.0f - (0.25f * fSlow108)));
	int iSlow116 = min(8192, max(0, (iSlow112 + 1)));
	float fSlow117 = (0.5f * (((fSlow104 * (0.0f - fSlow106)) * (0.0f - (0.5f * fSlow107))) * (0.0f - (0.333333343f * fSlow108))));
	int iSlow118 = min(8192, max(0, (iSlow112 + 2)));
	float fSlow119 = (fSlow104 * fSlow105);
	float fSlow120 = (0.166666672f * ((fSlow119 * (0.0f - fSlow107)) * (0.0f - (0.5f * fSlow108))));
	int iSlow121 = min(8192, max(0, (iSlow112 + 3)));
	float fSlow122 = (fSlow119 * fSlow106);
	float fSlow123 = (0.0416666679f * (fSlow122 * (0.0f - fSlow108)));
	int iSlow124 = min(8192, max(0, (iSlow112 + 4)));
	float fSlow125 = (0.00833333377f * (fSlow122 * fSlow107));
	int iSlow126 = min(8192, max(0, (iSlow112 + 5)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			float fTemp0 = ((0.5f * ((dsp->fRec0[1] + (float)tanhf((float)(dsp->fRec0[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f);
			dsp->fVec1[0] = (fSlow14 * fTemp0);
			dsp->fRec1[0] = ((dsp->fConst3 * ((fSlow13 * fTemp0) + (dsp->fConst4 * dsp->fRec1[1]))) - dsp->fVec1[1]);
			dsp->iRec4[0] = ((1103515245 * dsp->iRec4[1]) + 12345);
			dsp->fRec3[0] = ((4.65661287e-10f * (float)dsp->iRec4[0]) - (fSlow22 * ((fSlow24 * dsp->fRec3[2]) + (fSlow25 * dsp->fRec3[1]))));
			dsp->fRec2[0] = ((fSlow22 * (((fSlow23 * dsp->fRec3[0]) + (fSlow26 * dsp->fRec3[1])) + (fSlow23 * dsp->fRec3[2]))) - (fSlow27 * ((fSlow28 * dsp->fRec2[2]) + (fSlow29 * dsp->fRec2[1]))));
			float fTemp1 = (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1])));
			dsp->fVec2[0] = fSlow30;
			float fTemp2 = (1.0f - (0.00400000019f * (dsp->fVec0[1] - dsp->fConst0)));
			dsp->fRec5[0] = ((((fSlow30 - dsp->fVec2[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec5[1] + fTemp2)));
			int iTemp3 = (dsp->fRec5[0] < dsp->fConst6);
			float fTemp4 = ((fSlow12 * dsp->fRec1[0]) + (fSlow19 * (fTemp1 * (iTemp3?((dsp->fRec5[0] < 0.0f)?0.0f:(iTemp3?(dsp->fConst7 * dsp->fRec5[0]):1.0f)):((dsp->fRec5[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec5[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec3[(dsp->IOTA & 4095)] = fTemp4;
			dsp->fRec0[0] = ((fSlow10 * dsp->fVec3[((dsp->IOTA - iSlow32) & 4095)]) + (fSlow33 * (((((fSlow34 * dsp->fVec3[((dsp->IOTA - iSlow35) & 4095)]) + (fSlow36 * dsp->fVec3[((dsp->IOTA - iSlow37) & 4095)])) + (fSlow39 * dsp->fVec3[((dsp->IOTA - iSlow40) & 4095)])) + (fSlow42 * dsp->fVec3[((dsp->IOTA - iSlow43) & 4095)])) + (fSlow44 * dsp->fVec3[((dsp->IOTA - iSlow45) & 4095)]))));
			float fTemp5 = ((0.5f * ((dsp->fRec6[1] + (float)tanhf((float)(dsp->fRec6[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f);
			dsp->fVec4[0] = (fSlow14 * fTemp5);
			dsp->fRec7[0] = ((dsp->fConst3 * ((fSlow13 * fTemp5) + (dsp->fConst4 * dsp->fRec7[1]))) - dsp->fVec4[1]);
			dsp->fVec5[0] = fSlow57;
			dsp->fRec8[0] = ((((fSlow57 - dsp->fVec5[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec8[1] + fTemp2)));
			int iTemp6 = (dsp->fRec8[0] < dsp->fConst6);
			float fTemp7 = ((fSlow56 * dsp->fRec7[0]) + (fSlow19 * (fTemp1 * (iTemp6?((dsp->fRec8[0] < 0.0f)?0.0f:(iTemp6?(dsp->fConst7 * dsp->fRec8[0]):1.0f)):((dsp->fRec8[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec8[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec6[(dsp->IOTA & 4095)] = fTemp7;
			dsp->fRec6[0] = ((fSlow55 * dsp->fVec6[((dsp->IOTA - iSlow59) & 4095)]) + (fSlow60 * (((((fSlow61 * dsp->fVec6[((dsp->IOTA - iSlow62) & 4095)]) + (fSlow63 * dsp->fVec6[((dsp->IOTA - iSlow64) & 4095)])) + (fSlow66 * dsp->fVec6[((dsp->IOTA - iSlow67) & 4095)])) + (fSlow69 * dsp->fVec6[((dsp->IOTA - iSlow70) & 4095)])) + (fSlow71 * dsp->fVec6[((dsp->IOTA - iSlow72) & 4095)]))));
			float fTemp8 = ((0.5f * ((dsp->fRec9[1] + (float)tanhf((float)(dsp->fRec9[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f);
			dsp->fVec7[0] = (fSlow14 * fTemp8);
			dsp->fRec10[0] = ((dsp->fConst3 * ((fSlow13 * fTemp8) + (dsp->fConst4 * dsp->fRec10[1]))) - dsp->fVec7[1]);
			dsp->fVec8[0] = fSlow84;
			dsp->fRec11[0] = ((((fSlow84 - dsp->fVec8[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec11[1] + fTemp2)));
			int iTemp9 = (dsp->fRec11[0] < dsp->fConst6);
			float fTemp10 = ((fSlow83 * dsp->fRec10[0]) + (fSlow19 * (fTemp1 * (iTemp9?((dsp->fRec11[0] < 0.0f)?0.0f:(iTemp9?(dsp->fConst7 * dsp->fRec11[0]):1.0f)):((dsp->fRec11[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec11[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec9[(dsp->IOTA & 4095)] = fTemp10;
			dsp->fRec9[0] = ((fSlow82 * dsp->fVec9[((dsp->IOTA - iSlow86) & 4095)]) + (fSlow87 * (((((fSlow88 * dsp->fVec9[((dsp->IOTA - iSlow89) & 4095)]) + (fSlow90 * dsp->fVec9[((dsp->IOTA - iSlow91) & 4095)])) + (fSlow93 * dsp->fVec9[((dsp->IOTA - iSlow94) & 4095)])) + (fSlow96 * dsp->fVec9[((dsp->IOTA - iSlow97) & 4095)])) + (fSlow98 * dsp->fVec9[((dsp->IOTA - iSlow99) & 4095)]))));
			float fTemp11 = ((0.5f * ((dsp->fRec12[1] + (float)tanhf((float)(dsp->fRec12[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f);
			dsp->fVec10[0] = (fSlow14 * fTemp11);
			dsp->fRec13[0] = ((dsp->fConst3 * ((fSlow13 * fTemp11) + (dsp->fConst4 * dsp->fRec13[1]))) - dsp->fVec10[1]);
			dsp->fVec11[0] = fSlow111;
			dsp->fRec14[0] = ((((fSlow111 - dsp->fVec11[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec14[1] + fTemp2)));
			int iTemp12 = (dsp->fRec14[0] < dsp->fConst6);
			float fTemp13 = ((fSlow110 * dsp->fRec13[0]) + (fSlow19 * (fTemp1 * (iTemp12?((dsp->fRec14[0] < 0.0f)?0.0f:(iTemp12?(dsp->fConst7 * dsp->fRec14[0]):1.0f)):((dsp->fRec14[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec14[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec12[(dsp->IOTA & 4095)] = fTemp13;
			dsp->fRec12[0] = ((fSlow109 * dsp->fVec12[((dsp->IOTA - iSlow113) & 4095)]) + (fSlow114 * (((((fSlow115 * dsp->fVec12[((dsp->IOTA - iSlow116) & 4095)]) + (fSlow117 * dsp->fVec12[((dsp->IOTA - iSlow118) & 4095)])) + (fSlow120 * dsp->fVec12[((dsp->IOTA - iSlow121) & 4095)])) + (fSlow123 * dsp->fVec12[((dsp->IOTA - iSlow124) & 4095)])) + (fSlow125 * dsp->fVec12[((dsp->IOTA - iSlow126) & 4095)]))));
			float fTemp14 = (fSlow0 * ((((0.600000024f * dsp->fRec0[0]) + (0.400000006f * dsp->fRec6[0])) + (0.300000012f * dsp->fRec9[0])) + (0.200000003f * dsp->fRec12[0])));
			float fTemp15 = (fTemp14 + 0.100000001f);
			float fTemp16 = (0.666666687f * fTemp15);
			output0[i] = (FAUSTFLOAT)(((fTemp16 > 1.0f)?1.0f:((fTemp16 < -1.0f)?-1.0f:(fTemp14 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp15)))))) + -0.100000001f);
			float fTemp17 = (fSlow0 * ((((0.400000006f * dsp->fRec0[0]) + (0.600000024f * dsp->fRec6[0])) + (0.699999988f * dsp->fRec9[0])) + (0.800000012f * dsp->fRec12[0])));
			float fTemp18 = (fTemp17 + 0.100000001f);
			float fTemp19 = (0.666666687f * fTemp18);
			output1[i] = (FAUSTFLOAT)(((fTemp19 > 1.0f)?1.0f:((fTemp19 < -1.0f)?-1.0f:(fTemp17 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp18)))))) + -0.100000001f);
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec4[1] = dsp->iRec4[0];
			dsp->fRec3[2] = dsp->fRec3[1];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
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
