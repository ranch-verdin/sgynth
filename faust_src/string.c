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
	
	int fSamplingFreq;
	float fConst0;
	float fVec0[2];
	float fConst1;
	float fConst2;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	float fConst3;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	float fConst4;
	FAUSTFLOAT fHslider3;
	int iRec4[2];
	float fRec3[3];
	float fRec2[3];
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst5;
	float fRec5[2];
	float fConst6;
	float fConst7;
	int IOTA;
	float fVec2[4096];
	float fRec1[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fButton1;
	float fVec3[2];
	float fRec7[2];
	float fVec4[4096];
	float fRec6[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fButton2;
	float fVec5[2];
	float fRec9[2];
	float fVec6[4096];
	float fRec8[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fButton3;
	float fVec7[2];
	float fRec11[2];
	float fVec8[4096];
	float fRec10[2];
	float fVec9[2];
	float fConst8;
	float fRec0[2];
	float fVec10[2];
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
			dsp->iRec4[l1] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 3); l2 = (l2 + 1)) {
			dsp->fRec3[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 3); l3 = (l3 + 1)) {
			dsp->fRec2[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fVec1[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec5[l5] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 4096); l6 = (l6 + 1)) {
			dsp->fVec2[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec1[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fVec3[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec7[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 4096); l10 = (l10 + 1)) {
			dsp->fVec4[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec6[l11] = 0.0f;
			
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
			dsp->fRec9[l13] = 0.0f;
			
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
			dsp->fRec8[l15] = 0.0f;
			
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
			dsp->fRec11[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 4096); l18 = (l18 + 1)) {
			dsp->fVec8[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec10[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fVec9[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec0[l21] = 0.0f;
			
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
			dsp->fRec12[l23] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (15.707963f / dsp->fConst0);
	dsp->fConst2 = (1.0f / (dsp->fConst1 + 1.0f));
	dsp->fConst3 = (10000000.0f / dsp->fConst0);
	dsp->fConst4 = (3.14159274f / dsp->fConst0);
	dsp->fConst5 = (0.00400000019f * dsp->fConst0);
	dsp->fConst6 = (0.00200000009f * dsp->fConst0);
	dsp->fConst7 = (500.0f / dsp->fConst0);
	dsp->fConst8 = (1.0f - dsp->fConst1);
	
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
	float fSlow12 = (float)dsp->fHslider1;
	float fSlow13 = (expf((0.0f - (dsp->fConst3 / (fSlow11 * mydsp_faustpower2_f(fSlow1))))) * fSlow12);
	float fSlow14 = (float)dsp->fHslider3;
	float fSlow15 = tanf((dsp->fConst4 * ((15000.0f * fSlow14) + 500.0f)));
	float fSlow16 = (1.0f / fSlow15);
	float fSlow17 = (((fSlow16 + 1.41421354f) / fSlow15) + 1.0f);
	float fSlow18 = ((float)dsp->fHslider2 / fSlow17);
	float fSlow19 = tanf((dsp->fConst4 * ((500.0f * fSlow14) + 40.0f)));
	float fSlow20 = (1.0f / fSlow19);
	float fSlow21 = (1.0f / (((fSlow20 + 1.41421354f) / fSlow19) + 1.0f));
	float fSlow22 = (1.0f / mydsp_faustpower2_f(fSlow19));
	float fSlow23 = (((fSlow20 + -1.41421354f) / fSlow19) + 1.0f);
	float fSlow24 = (2.0f * (1.0f - fSlow22));
	float fSlow25 = (2.0f * (0.0f - fSlow22));
	float fSlow26 = (1.0f / fSlow17);
	float fSlow27 = (((fSlow16 + -1.41421354f) / fSlow15) + 1.0f);
	float fSlow28 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow15))));
	float fSlow29 = (float)dsp->fButton0;
	int iSlow30 = (int)fSlow3;
	int iSlow31 = min(8192, max(0, iSlow30));
	float fSlow32 = (fSlow2 - fSlow4);
	float fSlow33 = ((((0.0f - fSlow6) * (0.0f - (0.5f * fSlow7))) * (0.0f - (0.333333343f * fSlow8))) * (0.0f - (0.25f * fSlow9)));
	int iSlow34 = min(8192, max(0, (iSlow30 + 1)));
	float fSlow35 = (0.5f * (((fSlow5 * (0.0f - fSlow7)) * (0.0f - (0.5f * fSlow8))) * (0.0f - (0.333333343f * fSlow9))));
	int iSlow36 = min(8192, max(0, (iSlow30 + 2)));
	float fSlow37 = (fSlow5 * fSlow6);
	float fSlow38 = (0.166666672f * ((fSlow37 * (0.0f - fSlow8)) * (0.0f - (0.5f * fSlow9))));
	int iSlow39 = min(8192, max(0, (iSlow30 + 3)));
	float fSlow40 = (fSlow37 * fSlow7);
	float fSlow41 = (0.0416666679f * (fSlow40 * (0.0f - fSlow9)));
	int iSlow42 = min(8192, max(0, (iSlow30 + 4)));
	float fSlow43 = (0.00833333377f * (fSlow40 * fSlow8));
	int iSlow44 = min(8192, max(0, (iSlow30 + 5)));
	float fSlow45 = (float)dsp->fVslider2;
	float fSlow46 = (dsp->fConst0 / fSlow45);
	float fSlow47 = (fSlow46 + -1.99999499f);
	float fSlow48 = floorf(fSlow47);
	float fSlow49 = (fSlow46 + (-1.0f - fSlow48));
	float fSlow50 = (fSlow46 + (-2.0f - fSlow48));
	float fSlow51 = (fSlow46 + (-3.0f - fSlow48));
	float fSlow52 = (fSlow46 + (-4.0f - fSlow48));
	float fSlow53 = (fSlow46 + (-5.0f - fSlow48));
	float fSlow54 = (((((0.0f - fSlow49) * (0.0f - (0.5f * fSlow50))) * (0.0f - (0.333333343f * fSlow51))) * (0.0f - (0.25f * fSlow52))) * (0.0f - (0.200000003f * fSlow53)));
	float fSlow55 = (expf((0.0f - (dsp->fConst3 / (fSlow11 * mydsp_faustpower2_f(fSlow45))))) * fSlow12);
	float fSlow56 = (float)dsp->fButton1;
	int iSlow57 = (int)fSlow47;
	int iSlow58 = min(8192, max(0, iSlow57));
	float fSlow59 = (fSlow46 - fSlow48);
	float fSlow60 = ((((0.0f - fSlow50) * (0.0f - (0.5f * fSlow51))) * (0.0f - (0.333333343f * fSlow52))) * (0.0f - (0.25f * fSlow53)));
	int iSlow61 = min(8192, max(0, (iSlow57 + 1)));
	float fSlow62 = (0.5f * (((fSlow49 * (0.0f - fSlow51)) * (0.0f - (0.5f * fSlow52))) * (0.0f - (0.333333343f * fSlow53))));
	int iSlow63 = min(8192, max(0, (iSlow57 + 2)));
	float fSlow64 = (fSlow49 * fSlow50);
	float fSlow65 = (0.166666672f * ((fSlow64 * (0.0f - fSlow52)) * (0.0f - (0.5f * fSlow53))));
	int iSlow66 = min(8192, max(0, (iSlow57 + 3)));
	float fSlow67 = (fSlow64 * fSlow51);
	float fSlow68 = (0.0416666679f * (fSlow67 * (0.0f - fSlow53)));
	int iSlow69 = min(8192, max(0, (iSlow57 + 4)));
	float fSlow70 = (0.00833333377f * (fSlow67 * fSlow52));
	int iSlow71 = min(8192, max(0, (iSlow57 + 5)));
	float fSlow72 = (float)dsp->fVslider3;
	float fSlow73 = (dsp->fConst0 / fSlow72);
	float fSlow74 = (fSlow73 + -1.99999499f);
	float fSlow75 = floorf(fSlow74);
	float fSlow76 = (fSlow73 + (-1.0f - fSlow75));
	float fSlow77 = (fSlow73 + (-2.0f - fSlow75));
	float fSlow78 = (fSlow73 + (-3.0f - fSlow75));
	float fSlow79 = (fSlow73 + (-4.0f - fSlow75));
	float fSlow80 = (fSlow73 + (-5.0f - fSlow75));
	float fSlow81 = (((((0.0f - fSlow76) * (0.0f - (0.5f * fSlow77))) * (0.0f - (0.333333343f * fSlow78))) * (0.0f - (0.25f * fSlow79))) * (0.0f - (0.200000003f * fSlow80)));
	float fSlow82 = (expf((0.0f - (dsp->fConst3 / (fSlow11 * mydsp_faustpower2_f(fSlow72))))) * fSlow12);
	float fSlow83 = (float)dsp->fButton2;
	int iSlow84 = (int)fSlow74;
	int iSlow85 = min(8192, max(0, iSlow84));
	float fSlow86 = (fSlow73 - fSlow75);
	float fSlow87 = ((((0.0f - fSlow77) * (0.0f - (0.5f * fSlow78))) * (0.0f - (0.333333343f * fSlow79))) * (0.0f - (0.25f * fSlow80)));
	int iSlow88 = min(8192, max(0, (iSlow84 + 1)));
	float fSlow89 = (0.5f * (((fSlow76 * (0.0f - fSlow78)) * (0.0f - (0.5f * fSlow79))) * (0.0f - (0.333333343f * fSlow80))));
	int iSlow90 = min(8192, max(0, (iSlow84 + 2)));
	float fSlow91 = (fSlow76 * fSlow77);
	float fSlow92 = (0.166666672f * ((fSlow91 * (0.0f - fSlow79)) * (0.0f - (0.5f * fSlow80))));
	int iSlow93 = min(8192, max(0, (iSlow84 + 3)));
	float fSlow94 = (fSlow91 * fSlow78);
	float fSlow95 = (0.0416666679f * (fSlow94 * (0.0f - fSlow80)));
	int iSlow96 = min(8192, max(0, (iSlow84 + 4)));
	float fSlow97 = (0.00833333377f * (fSlow94 * fSlow79));
	int iSlow98 = min(8192, max(0, (iSlow84 + 5)));
	float fSlow99 = (float)dsp->fVslider4;
	float fSlow100 = (dsp->fConst0 / fSlow99);
	float fSlow101 = (fSlow100 + -1.99999499f);
	float fSlow102 = floorf(fSlow101);
	float fSlow103 = (fSlow100 + (-1.0f - fSlow102));
	float fSlow104 = (fSlow100 + (-2.0f - fSlow102));
	float fSlow105 = (fSlow100 + (-3.0f - fSlow102));
	float fSlow106 = (fSlow100 + (-4.0f - fSlow102));
	float fSlow107 = (fSlow100 + (-5.0f - fSlow102));
	float fSlow108 = (((((0.0f - fSlow103) * (0.0f - (0.5f * fSlow104))) * (0.0f - (0.333333343f * fSlow105))) * (0.0f - (0.25f * fSlow106))) * (0.0f - (0.200000003f * fSlow107)));
	float fSlow109 = (expf((0.0f - (dsp->fConst3 / (fSlow11 * mydsp_faustpower2_f(fSlow99))))) * fSlow12);
	float fSlow110 = (float)dsp->fButton3;
	int iSlow111 = (int)fSlow101;
	int iSlow112 = min(8192, max(0, iSlow111));
	float fSlow113 = (fSlow100 - fSlow102);
	float fSlow114 = ((((0.0f - fSlow104) * (0.0f - (0.5f * fSlow105))) * (0.0f - (0.333333343f * fSlow106))) * (0.0f - (0.25f * fSlow107)));
	int iSlow115 = min(8192, max(0, (iSlow111 + 1)));
	float fSlow116 = (0.5f * (((fSlow103 * (0.0f - fSlow105)) * (0.0f - (0.5f * fSlow106))) * (0.0f - (0.333333343f * fSlow107))));
	int iSlow117 = min(8192, max(0, (iSlow111 + 2)));
	float fSlow118 = (fSlow103 * fSlow104);
	float fSlow119 = (0.166666672f * ((fSlow118 * (0.0f - fSlow106)) * (0.0f - (0.5f * fSlow107))));
	int iSlow120 = min(8192, max(0, (iSlow111 + 3)));
	float fSlow121 = (fSlow118 * fSlow105);
	float fSlow122 = (0.0416666679f * (fSlow121 * (0.0f - fSlow107)));
	int iSlow123 = min(8192, max(0, (iSlow111 + 4)));
	float fSlow124 = (0.00833333377f * (fSlow121 * fSlow106));
	int iSlow125 = min(8192, max(0, (iSlow111 + 5)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iRec4[0] = ((1103515245 * dsp->iRec4[1]) + 12345);
			dsp->fRec3[0] = ((4.65661287e-10f * (float)dsp->iRec4[0]) - (fSlow21 * ((fSlow23 * dsp->fRec3[2]) + (fSlow24 * dsp->fRec3[1]))));
			dsp->fRec2[0] = ((fSlow21 * (((fSlow22 * dsp->fRec3[0]) + (fSlow25 * dsp->fRec3[1])) + (fSlow22 * dsp->fRec3[2]))) - (fSlow26 * ((fSlow27 * dsp->fRec2[2]) + (fSlow28 * dsp->fRec2[1]))));
			float fTemp0 = (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1])));
			dsp->fVec1[0] = fSlow29;
			float fTemp1 = (1.0f - (0.00400000019f * (dsp->fVec0[1] - dsp->fConst0)));
			dsp->fRec5[0] = ((((fSlow29 - dsp->fVec1[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec5[1] + fTemp1)));
			int iTemp2 = (dsp->fRec5[0] < dsp->fConst6);
			float fTemp3 = ((fSlow13 * ((0.5f * ((dsp->fRec1[1] + (float)tanhf((float)(dsp->fRec1[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) + (fSlow18 * (fTemp0 * (iTemp2?((dsp->fRec5[0] < 0.0f)?0.0f:(iTemp2?(dsp->fConst7 * dsp->fRec5[0]):1.0f)):((dsp->fRec5[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec5[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec2[(dsp->IOTA & 4095)] = fTemp3;
			dsp->fRec1[0] = ((fSlow10 * dsp->fVec2[((dsp->IOTA - iSlow31) & 4095)]) + (fSlow32 * (((((fSlow33 * dsp->fVec2[((dsp->IOTA - iSlow34) & 4095)]) + (fSlow35 * dsp->fVec2[((dsp->IOTA - iSlow36) & 4095)])) + (fSlow38 * dsp->fVec2[((dsp->IOTA - iSlow39) & 4095)])) + (fSlow41 * dsp->fVec2[((dsp->IOTA - iSlow42) & 4095)])) + (fSlow43 * dsp->fVec2[((dsp->IOTA - iSlow44) & 4095)]))));
			dsp->fVec3[0] = fSlow56;
			dsp->fRec7[0] = ((((fSlow56 - dsp->fVec3[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec7[1] + fTemp1)));
			int iTemp4 = (dsp->fRec7[0] < dsp->fConst6);
			float fTemp5 = ((fSlow55 * ((0.5f * ((dsp->fRec6[1] + (float)tanhf((float)(dsp->fRec6[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) + (fSlow18 * (fTemp0 * (iTemp4?((dsp->fRec7[0] < 0.0f)?0.0f:(iTemp4?(dsp->fConst7 * dsp->fRec7[0]):1.0f)):((dsp->fRec7[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec7[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec4[(dsp->IOTA & 4095)] = fTemp5;
			dsp->fRec6[0] = ((fSlow54 * dsp->fVec4[((dsp->IOTA - iSlow58) & 4095)]) + (fSlow59 * (((((fSlow60 * dsp->fVec4[((dsp->IOTA - iSlow61) & 4095)]) + (fSlow62 * dsp->fVec4[((dsp->IOTA - iSlow63) & 4095)])) + (fSlow65 * dsp->fVec4[((dsp->IOTA - iSlow66) & 4095)])) + (fSlow68 * dsp->fVec4[((dsp->IOTA - iSlow69) & 4095)])) + (fSlow70 * dsp->fVec4[((dsp->IOTA - iSlow71) & 4095)]))));
			dsp->fVec5[0] = fSlow83;
			dsp->fRec9[0] = ((((fSlow83 - dsp->fVec5[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec9[1] + fTemp1)));
			int iTemp6 = (dsp->fRec9[0] < dsp->fConst6);
			float fTemp7 = ((fSlow82 * ((0.5f * ((dsp->fRec8[1] + (float)tanhf((float)(dsp->fRec8[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) + (fSlow18 * (fTemp0 * (iTemp6?((dsp->fRec9[0] < 0.0f)?0.0f:(iTemp6?(dsp->fConst7 * dsp->fRec9[0]):1.0f)):((dsp->fRec9[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec9[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec6[(dsp->IOTA & 4095)] = fTemp7;
			dsp->fRec8[0] = ((fSlow81 * dsp->fVec6[((dsp->IOTA - iSlow85) & 4095)]) + (fSlow86 * (((((fSlow87 * dsp->fVec6[((dsp->IOTA - iSlow88) & 4095)]) + (fSlow89 * dsp->fVec6[((dsp->IOTA - iSlow90) & 4095)])) + (fSlow92 * dsp->fVec6[((dsp->IOTA - iSlow93) & 4095)])) + (fSlow95 * dsp->fVec6[((dsp->IOTA - iSlow96) & 4095)])) + (fSlow97 * dsp->fVec6[((dsp->IOTA - iSlow98) & 4095)]))));
			dsp->fVec7[0] = fSlow110;
			dsp->fRec11[0] = ((((fSlow110 - dsp->fVec7[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst5, (dsp->fRec11[1] + fTemp1)));
			int iTemp8 = (dsp->fRec11[0] < dsp->fConst6);
			float fTemp9 = ((fSlow109 * ((0.5f * ((dsp->fRec10[1] + (float)tanhf((float)(dsp->fRec10[1] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) + (fSlow18 * (fTemp0 * (iTemp8?((dsp->fRec11[0] < 0.0f)?0.0f:(iTemp8?(dsp->fConst7 * dsp->fRec11[0]):1.0f)):((dsp->fRec11[0] < dsp->fConst5)?((dsp->fConst7 * (0.0f - (dsp->fRec11[0] - dsp->fConst6))) + 1.0f):0.0f)))));
			dsp->fVec8[(dsp->IOTA & 4095)] = fTemp9;
			dsp->fRec10[0] = ((fSlow108 * dsp->fVec8[((dsp->IOTA - iSlow112) & 4095)]) + (fSlow113 * (((((fSlow114 * dsp->fVec8[((dsp->IOTA - iSlow115) & 4095)]) + (fSlow116 * dsp->fVec8[((dsp->IOTA - iSlow117) & 4095)])) + (fSlow119 * dsp->fVec8[((dsp->IOTA - iSlow120) & 4095)])) + (fSlow122 * dsp->fVec8[((dsp->IOTA - iSlow123) & 4095)])) + (fSlow124 * dsp->fVec8[((dsp->IOTA - iSlow125) & 4095)]))));
			float fTemp10 = (fSlow0 * ((((0.600000024f * dsp->fRec1[0]) + (0.400000006f * dsp->fRec6[0])) + (0.300000012f * dsp->fRec8[0])) + (0.200000003f * dsp->fRec10[0])));
			float fTemp11 = (fTemp10 + 0.100000001f);
			float fTemp12 = (0.666666687f * fTemp11);
			float fTemp13 = (((fTemp12 > 1.0f)?1.0f:((fTemp12 < -1.0f)?-1.0f:(fTemp10 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp11)))))) + -0.100000001f);
			dsp->fVec9[0] = fTemp13;
			dsp->fRec0[0] = (dsp->fConst2 * ((fTemp13 - dsp->fVec9[1]) + (dsp->fConst8 * dsp->fRec0[1])));
			output0[i] = (FAUSTFLOAT)dsp->fRec0[0];
			float fTemp14 = (fSlow0 * ((((0.400000006f * dsp->fRec1[0]) + (0.600000024f * dsp->fRec6[0])) + (0.699999988f * dsp->fRec8[0])) + (0.800000012f * dsp->fRec10[0])));
			float fTemp15 = (fTemp14 + 0.100000001f);
			float fTemp16 = (0.666666687f * fTemp15);
			float fTemp17 = (((fTemp16 > 1.0f)?1.0f:((fTemp16 < -1.0f)?-1.0f:(fTemp14 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp15)))))) + -0.100000001f);
			dsp->fVec10[0] = fTemp17;
			dsp->fRec12[0] = (dsp->fConst2 * ((fTemp17 - dsp->fVec10[1]) + (dsp->fConst8 * dsp->fRec12[1])));
			output1[i] = (FAUSTFLOAT)dsp->fRec12[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iRec4[1] = dsp->iRec4[0];
			dsp->fRec3[2] = dsp->fRec3[1];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
