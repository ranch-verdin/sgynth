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
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fConst4;
	float fVec0[2];
	float fRec1[2];
	float fConst5;
	float fConst6;
	float fConst7;
	FAUSTFLOAT fHslider6;
	int iRec3[2];
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst8;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	float fVec2[2];
	float fRec4[2];
	float fConst9;
	float fConst10;
	float fConst11;
	float fRec2[3];
	int IOTA;
	float fVec3[4096];
	float fRec0[2];
	FAUSTFLOAT fVslider2;
	float fVec4[2];
	float fRec6[2];
	FAUSTFLOAT fButton1;
	float fVec5[2];
	float fRec8[2];
	float fRec7[3];
	float fVec6[4096];
	float fRec5[2];
	FAUSTFLOAT fVslider3;
	float fVec7[2];
	float fRec10[2];
	FAUSTFLOAT fButton2;
	float fVec8[2];
	float fRec12[2];
	float fRec11[3];
	float fVec9[4096];
	float fRec9[2];
	FAUSTFLOAT fVslider4;
	float fVec10[2];
	float fRec14[2];
	FAUSTFLOAT fButton3;
	float fVec11[2];
	float fRec16[2];
	float fRec15[3];
	float fVec12[4096];
	float fRec13[2];
	
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
	dsp->fVslider0 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider3 = (FAUSTFLOAT)2.0f;
	dsp->fHslider4 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider5 = (FAUSTFLOAT)2.0f;
	dsp->fHslider6 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fHslider7 = (FAUSTFLOAT)0.5f;
	dsp->fHslider8 = (FAUSTFLOAT)0.5f;
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
			dsp->iRec3[l2] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->fVec1[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fVec2[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec4[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
			dsp->fRec2[l6] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 4096); l7 = (l7 + 1)) {
			dsp->fVec3[l7] = 0.0f;
			
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
			dsp->fVec4[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fRec6[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fVec5[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec8[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 3); l13 = (l13 + 1)) {
			dsp->fRec7[l13] = 0.0f;
			
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
			dsp->fRec5[l15] = 0.0f;
			
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
			dsp->fRec12[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			dsp->fRec11[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 4096); l21 = (l21 + 1)) {
			dsp->fVec9[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec9[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fVec10[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec14[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fVec11[l25] = 0.0f;
			
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
		for (l27 = 0; (l27 < 3); l27 = (l27 + 1)) {
			dsp->fRec15[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 4096); l28 = (l28 + 1)) {
			dsp->fVec12[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fRec13[l29] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (100000.0f / dsp->fConst0);
	dsp->fConst2 = (15.707963f / dsp->fConst0);
	dsp->fConst3 = (1.0f / (dsp->fConst2 + 1.0f));
	dsp->fConst4 = (1.0f - dsp->fConst2);
	dsp->fConst5 = tanf((18849.5566f / dsp->fConst0));
	dsp->fConst6 = (1.0f / dsp->fConst5);
	dsp->fConst7 = (1.0f / (((dsp->fConst6 + 1.41421354f) / dsp->fConst5) + 1.0f));
	dsp->fConst8 = (0.00100000005f * dsp->fConst0);
	dsp->fConst9 = (1000.0f / dsp->fConst0);
	dsp->fConst10 = (((dsp->fConst6 + -1.41421354f) / dsp->fConst5) + 1.0f);
	dsp->fConst11 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst5))));
	
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "attack", &dsp->fHslider8, 0.5f, 0.100000001f, 10.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "decay", &dsp->fHslider7, 0.5f, 0.100000001f, 50.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fHslider5, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fHslider3, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fHslider4, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fHslider2, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider6, 0.100000001f, 0.0f, 1.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.100000001f, 10.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, 1.0f, -1.0f, 1.0f, 2.0f);
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.200000003f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (dsp->fConst0 / fSlow1);
	float fSlow3 = (fSlow2 + -0.999994993f);
	float fSlow4 = floorf(fSlow3);
	float fSlow5 = (fSlow2 + (-1.0f - fSlow4));
	float fSlow6 = (fSlow2 + (-2.0f - fSlow4));
	float fSlow7 = (fSlow2 + (-3.0f - fSlow4));
	float fSlow8 = (((0.0f - fSlow5) * (0.0f - (0.5f * fSlow6))) * (0.0f - (0.333333343f * fSlow7)));
	float fSlow9 = (float)dsp->fHslider0;
	float fSlow10 = expf((0.0f - (dsp->fConst1 / (fSlow9 * fSlow1))));
	float fSlow11 = (float)dsp->fHslider1;
	float fSlow12 = (float)dsp->fHslider2;
	float fSlow13 = (1.0f / fSlow12);
	float fSlow14 = (1.0f / (float)dsp->fHslider3);
	float fSlow15 = (1.0f - fSlow14);
	float fSlow16 = (1.0f / fSlow15);
	float fSlow17 = (float)dsp->fHslider4;
	float fSlow18 = (1.0f / fSlow17);
	float fSlow19 = (1.0f / (float)dsp->fHslider5);
	float fSlow20 = (1.0f - fSlow19);
	float fSlow21 = (1.0f / fSlow20);
	float fSlow22 = (dsp->fConst3 * fSlow11);
	float fSlow23 = (float)dsp->fHslider6;
	float fSlow24 = (float)dsp->fButton0;
	float fSlow25 = (float)dsp->fHslider8;
	float fSlow26 = ((float)dsp->fHslider7 + fSlow25);
	float fSlow27 = (dsp->fConst8 * fSlow26);
	float fSlow28 = (dsp->fConst8 * fSlow25);
	float fSlow29 = (1.0f / (0.0f - (dsp->fConst8 * (fSlow25 - fSlow26))));
	float fSlow30 = (dsp->fConst9 / fSlow25);
	int iSlow31 = (int)fSlow3;
	int iSlow32 = min(8192, max(0, iSlow31));
	float fSlow33 = (fSlow2 - fSlow4);
	float fSlow34 = ((0.0f - fSlow6) * (0.0f - (0.5f * fSlow7)));
	int iSlow35 = min(8192, max(0, (iSlow31 + 1)));
	float fSlow36 = (0.5f * (fSlow5 * (0.0f - fSlow7)));
	int iSlow37 = min(8192, max(0, (iSlow31 + 2)));
	float fSlow38 = (0.166666672f * (fSlow5 * fSlow6));
	int iSlow39 = min(8192, max(0, (iSlow31 + 3)));
	float fSlow40 = (float)dsp->fVslider2;
	float fSlow41 = (dsp->fConst0 / fSlow40);
	float fSlow42 = (fSlow41 + -0.999994993f);
	float fSlow43 = floorf(fSlow42);
	float fSlow44 = (fSlow41 + (-1.0f - fSlow43));
	float fSlow45 = (fSlow41 + (-2.0f - fSlow43));
	float fSlow46 = (fSlow41 + (-3.0f - fSlow43));
	float fSlow47 = (((0.0f - fSlow44) * (0.0f - (0.5f * fSlow45))) * (0.0f - (0.333333343f * fSlow46)));
	float fSlow48 = expf((0.0f - (dsp->fConst1 / (fSlow9 * fSlow40))));
	float fSlow49 = (float)dsp->fButton1;
	int iSlow50 = (int)fSlow42;
	int iSlow51 = min(8192, max(0, iSlow50));
	float fSlow52 = (fSlow41 - fSlow43);
	float fSlow53 = ((0.0f - fSlow45) * (0.0f - (0.5f * fSlow46)));
	int iSlow54 = min(8192, max(0, (iSlow50 + 1)));
	float fSlow55 = (0.5f * (fSlow44 * (0.0f - fSlow46)));
	int iSlow56 = min(8192, max(0, (iSlow50 + 2)));
	float fSlow57 = (0.166666672f * (fSlow44 * fSlow45));
	int iSlow58 = min(8192, max(0, (iSlow50 + 3)));
	float fSlow59 = (float)dsp->fVslider3;
	float fSlow60 = (dsp->fConst0 / fSlow59);
	float fSlow61 = (fSlow60 + -0.999994993f);
	float fSlow62 = floorf(fSlow61);
	float fSlow63 = (fSlow60 + (-1.0f - fSlow62));
	float fSlow64 = (fSlow60 + (-2.0f - fSlow62));
	float fSlow65 = (fSlow60 + (-3.0f - fSlow62));
	float fSlow66 = (((0.0f - fSlow63) * (0.0f - (0.5f * fSlow64))) * (0.0f - (0.333333343f * fSlow65)));
	float fSlow67 = expf((0.0f - (dsp->fConst1 / (fSlow9 * fSlow59))));
	float fSlow68 = (float)dsp->fButton2;
	int iSlow69 = (int)fSlow61;
	int iSlow70 = min(8192, max(0, iSlow69));
	float fSlow71 = (fSlow60 - fSlow62);
	float fSlow72 = ((0.0f - fSlow64) * (0.0f - (0.5f * fSlow65)));
	int iSlow73 = min(8192, max(0, (iSlow69 + 1)));
	float fSlow74 = (0.5f * (fSlow63 * (0.0f - fSlow65)));
	int iSlow75 = min(8192, max(0, (iSlow69 + 2)));
	float fSlow76 = (0.166666672f * (fSlow63 * fSlow64));
	int iSlow77 = min(8192, max(0, (iSlow69 + 3)));
	float fSlow78 = (float)dsp->fVslider4;
	float fSlow79 = (dsp->fConst0 / fSlow78);
	float fSlow80 = (fSlow79 + -0.999994993f);
	float fSlow81 = floorf(fSlow80);
	float fSlow82 = (fSlow79 + (-1.0f - fSlow81));
	float fSlow83 = (fSlow79 + (-2.0f - fSlow81));
	float fSlow84 = (fSlow79 + (-3.0f - fSlow81));
	float fSlow85 = (((0.0f - fSlow82) * (0.0f - (0.5f * fSlow83))) * (0.0f - (0.333333343f * fSlow84)));
	float fSlow86 = expf((0.0f - (dsp->fConst1 / (fSlow9 * fSlow78))));
	float fSlow87 = (float)dsp->fButton3;
	int iSlow88 = (int)fSlow80;
	int iSlow89 = min(8192, max(0, iSlow88));
	float fSlow90 = (fSlow79 - fSlow81);
	float fSlow91 = ((0.0f - fSlow83) * (0.0f - (0.5f * fSlow84)));
	int iSlow92 = min(8192, max(0, (iSlow88 + 1)));
	float fSlow93 = (0.5f * (fSlow82 * (0.0f - fSlow84)));
	int iSlow94 = min(8192, max(0, (iSlow88 + 2)));
	float fSlow95 = (0.166666672f * (fSlow82 * fSlow83));
	int iSlow96 = min(8192, max(0, (iSlow88 + 3)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (fSlow13 * dsp->fRec0[1]);
			float fTemp1 = (fSlow18 * fabsf(dsp->fRec0[1]));
			float fTemp2 = ((dsp->fRec0[1] <= 0.0f)?(0.0f - (fSlow17 * ((fTemp1 > fSlow19)?(1.0f - (fSlow20 * (1.0f - (float)tanhf((float)(fSlow21 * (min(max(fTemp1, 0.0f), 10.0f) - fSlow19)))))):fTemp1))):(fSlow12 * ((fTemp0 > fSlow14)?(1.0f - (fSlow15 * (1.0f - (float)tanhf((float)(fSlow16 * (min(max(fTemp0, 0.0f), 10.0f) - fSlow14)))))):fTemp0)));
			dsp->fVec0[0] = (fSlow22 * fTemp2);
			dsp->fRec1[0] = ((dsp->fConst3 * ((fSlow11 * fTemp2) + (dsp->fConst4 * dsp->fRec1[1]))) - dsp->fVec0[1]);
			dsp->iRec3[0] = ((1103515245 * dsp->iRec3[1]) + 12345);
			float fTemp3 = ((fSlow23 * ((4.65661287e-10f * (float)dsp->iRec3[0]) + -1.0f)) + 1.0f);
			dsp->fVec1[0] = fSlow24;
			dsp->fVec2[0] = fSlow26;
			float fTemp4 = (dsp->fConst8 * (fSlow26 - dsp->fVec2[1]));
			dsp->fRec4[0] = ((((fSlow24 - dsp->fVec1[1]) > 0.0f) > 0)?0.0f:min(fSlow27, ((dsp->fRec4[1] + fTemp4) + 1.0f)));
			int iTemp5 = (dsp->fRec4[0] < fSlow28);
			dsp->fRec2[0] = ((fTemp3 * (iTemp5?((dsp->fRec4[0] < 0.0f)?0.0f:(iTemp5?(fSlow30 * dsp->fRec4[0]):1.0f)):((dsp->fRec4[0] < fSlow27)?((fSlow29 * (0.0f - (dsp->fRec4[0] - fSlow28))) + 1.0f):0.0f))) - (dsp->fConst7 * ((dsp->fConst10 * dsp->fRec2[2]) + (dsp->fConst11 * dsp->fRec2[1]))));
			float fTemp6 = ((fSlow10 * dsp->fRec1[0]) + (dsp->fConst7 * (dsp->fRec2[2] + (dsp->fRec2[0] + (2.0f * dsp->fRec2[1])))));
			dsp->fVec3[(dsp->IOTA & 4095)] = fTemp6;
			dsp->fRec0[0] = ((fSlow8 * dsp->fVec3[((dsp->IOTA - iSlow32) & 4095)]) + (fSlow33 * (((fSlow34 * dsp->fVec3[((dsp->IOTA - iSlow35) & 4095)]) + (fSlow36 * dsp->fVec3[((dsp->IOTA - iSlow37) & 4095)])) + (fSlow38 * dsp->fVec3[((dsp->IOTA - iSlow39) & 4095)]))));
			float fTemp7 = (fSlow13 * dsp->fRec5[1]);
			float fTemp8 = (fSlow18 * fabsf(dsp->fRec5[1]));
			float fTemp9 = ((dsp->fRec5[1] <= 0.0f)?(0.0f - (fSlow17 * ((fTemp8 > fSlow19)?(1.0f - (fSlow20 * (1.0f - (float)tanhf((float)(fSlow21 * (min(max(fTemp8, 0.0f), 10.0f) - fSlow19)))))):fTemp8))):(fSlow12 * ((fTemp7 > fSlow14)?(1.0f - (fSlow15 * (1.0f - (float)tanhf((float)(fSlow16 * (min(max(fTemp7, 0.0f), 10.0f) - fSlow14)))))):fTemp7)));
			dsp->fVec4[0] = (fSlow22 * fTemp9);
			dsp->fRec6[0] = ((dsp->fConst3 * ((fSlow11 * fTemp9) + (dsp->fConst4 * dsp->fRec6[1]))) - dsp->fVec4[1]);
			dsp->fVec5[0] = fSlow49;
			dsp->fRec8[0] = ((((fSlow49 - dsp->fVec5[1]) > 0.0f) > 0)?0.0f:min(fSlow27, ((fTemp4 + dsp->fRec8[1]) + 1.0f)));
			int iTemp10 = (dsp->fRec8[0] < fSlow28);
			dsp->fRec7[0] = ((fTemp3 * (iTemp10?((dsp->fRec8[0] < 0.0f)?0.0f:(iTemp10?(fSlow30 * dsp->fRec8[0]):1.0f)):((dsp->fRec8[0] < fSlow27)?((fSlow29 * (0.0f - (dsp->fRec8[0] - fSlow28))) + 1.0f):0.0f))) - (dsp->fConst7 * ((dsp->fConst10 * dsp->fRec7[2]) + (dsp->fConst11 * dsp->fRec7[1]))));
			float fTemp11 = ((fSlow48 * dsp->fRec6[0]) + (dsp->fConst7 * (dsp->fRec7[2] + (dsp->fRec7[0] + (2.0f * dsp->fRec7[1])))));
			dsp->fVec6[(dsp->IOTA & 4095)] = fTemp11;
			dsp->fRec5[0] = ((fSlow47 * dsp->fVec6[((dsp->IOTA - iSlow51) & 4095)]) + (fSlow52 * (((fSlow53 * dsp->fVec6[((dsp->IOTA - iSlow54) & 4095)]) + (fSlow55 * dsp->fVec6[((dsp->IOTA - iSlow56) & 4095)])) + (fSlow57 * dsp->fVec6[((dsp->IOTA - iSlow58) & 4095)]))));
			float fTemp12 = (fSlow13 * dsp->fRec9[1]);
			float fTemp13 = (fSlow18 * fabsf(dsp->fRec9[1]));
			float fTemp14 = ((dsp->fRec9[1] <= 0.0f)?(0.0f - (fSlow17 * ((fTemp13 > fSlow19)?(1.0f - (fSlow20 * (1.0f - (float)tanhf((float)(fSlow21 * (min(max(fTemp13, 0.0f), 10.0f) - fSlow19)))))):fTemp13))):(fSlow12 * ((fTemp12 > fSlow14)?(1.0f - (fSlow15 * (1.0f - (float)tanhf((float)(fSlow16 * (min(max(fTemp12, 0.0f), 10.0f) - fSlow14)))))):fTemp12)));
			dsp->fVec7[0] = (fSlow22 * fTemp14);
			dsp->fRec10[0] = ((dsp->fConst3 * ((fSlow11 * fTemp14) + (dsp->fConst4 * dsp->fRec10[1]))) - dsp->fVec7[1]);
			dsp->fVec8[0] = fSlow68;
			dsp->fRec12[0] = ((((fSlow68 - dsp->fVec8[1]) > 0.0f) > 0)?0.0f:min(fSlow27, ((fTemp4 + dsp->fRec12[1]) + 1.0f)));
			int iTemp15 = (dsp->fRec12[0] < fSlow28);
			dsp->fRec11[0] = ((fTemp3 * (iTemp15?((dsp->fRec12[0] < 0.0f)?0.0f:(iTemp15?(fSlow30 * dsp->fRec12[0]):1.0f)):((dsp->fRec12[0] < fSlow27)?((fSlow29 * (0.0f - (dsp->fRec12[0] - fSlow28))) + 1.0f):0.0f))) - (dsp->fConst7 * ((dsp->fConst10 * dsp->fRec11[2]) + (dsp->fConst11 * dsp->fRec11[1]))));
			float fTemp16 = ((fSlow67 * dsp->fRec10[0]) + (dsp->fConst7 * (dsp->fRec11[2] + (dsp->fRec11[0] + (2.0f * dsp->fRec11[1])))));
			dsp->fVec9[(dsp->IOTA & 4095)] = fTemp16;
			dsp->fRec9[0] = ((fSlow66 * dsp->fVec9[((dsp->IOTA - iSlow70) & 4095)]) + (fSlow71 * (((fSlow72 * dsp->fVec9[((dsp->IOTA - iSlow73) & 4095)]) + (fSlow74 * dsp->fVec9[((dsp->IOTA - iSlow75) & 4095)])) + (fSlow76 * dsp->fVec9[((dsp->IOTA - iSlow77) & 4095)]))));
			float fTemp17 = (fSlow13 * dsp->fRec13[1]);
			float fTemp18 = (fSlow18 * fabsf(dsp->fRec13[1]));
			float fTemp19 = ((dsp->fRec13[1] <= 0.0f)?(0.0f - (fSlow17 * ((fTemp18 > fSlow19)?(1.0f - (fSlow20 * (1.0f - (float)tanhf((float)(fSlow21 * (min(max(fTemp18, 0.0f), 10.0f) - fSlow19)))))):fTemp18))):(fSlow12 * ((fTemp17 > fSlow14)?(1.0f - (fSlow15 * (1.0f - (float)tanhf((float)(fSlow16 * (min(max(fTemp17, 0.0f), 10.0f) - fSlow14)))))):fTemp17)));
			dsp->fVec10[0] = (fSlow22 * fTemp19);
			dsp->fRec14[0] = ((dsp->fConst3 * ((fSlow11 * fTemp19) + (dsp->fConst4 * dsp->fRec14[1]))) - dsp->fVec10[1]);
			dsp->fVec11[0] = fSlow87;
			dsp->fRec16[0] = ((((fSlow87 - dsp->fVec11[1]) > 0.0f) > 0)?0.0f:min(fSlow27, ((fTemp4 + dsp->fRec16[1]) + 1.0f)));
			int iTemp20 = (dsp->fRec16[0] < fSlow28);
			dsp->fRec15[0] = ((fTemp3 * (iTemp20?((dsp->fRec16[0] < 0.0f)?0.0f:(iTemp20?(fSlow30 * dsp->fRec16[0]):1.0f)):((dsp->fRec16[0] < fSlow27)?((fSlow29 * (0.0f - (dsp->fRec16[0] - fSlow28))) + 1.0f):0.0f))) - (dsp->fConst7 * ((dsp->fConst10 * dsp->fRec15[2]) + (dsp->fConst11 * dsp->fRec15[1]))));
			float fTemp21 = ((fSlow86 * dsp->fRec14[0]) + (dsp->fConst7 * (dsp->fRec15[2] + (dsp->fRec15[0] + (2.0f * dsp->fRec15[1])))));
			dsp->fVec12[(dsp->IOTA & 4095)] = fTemp21;
			dsp->fRec13[0] = ((fSlow85 * dsp->fVec12[((dsp->IOTA - iSlow89) & 4095)]) + (fSlow90 * (((fSlow91 * dsp->fVec12[((dsp->IOTA - iSlow92) & 4095)]) + (fSlow93 * dsp->fVec12[((dsp->IOTA - iSlow94) & 4095)])) + (fSlow95 * dsp->fVec12[((dsp->IOTA - iSlow96) & 4095)]))));
			float fTemp22 = (fSlow0 * ((((0.800000012f * dsp->fRec0[0]) + (0.600000024f * dsp->fRec5[0])) + (0.400000006f * dsp->fRec9[0])) + (0.200000003f * dsp->fRec13[0])));
			float fTemp23 = (fTemp22 + 0.100000001f);
			float fTemp24 = (0.666666687f * fTemp23);
			output0[i] = (FAUSTFLOAT)(((fTemp24 > 1.0f)?1.0f:((fTemp24 < -1.0f)?-1.0f:(fTemp22 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp23)))))) + -0.100000001f);
			float fTemp25 = (fSlow0 * ((((0.200000003f * dsp->fRec0[0]) + (0.400000006f * dsp->fRec5[0])) + (0.600000024f * dsp->fRec9[0])) + (0.800000012f * dsp->fRec13[0])));
			float fTemp26 = (fTemp25 + 0.100000001f);
			float fTemp27 = (0.666666687f * fTemp26);
			output1[i] = (FAUSTFLOAT)(((fTemp27 > 1.0f)?1.0f:((fTemp27 < -1.0f)?-1.0f:(fTemp25 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp26)))))) + -0.100000001f);
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec3[1] = dsp->iRec3[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec7[2] = dsp->fRec7[1];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec11[2] = dsp->fRec11[1];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec15[2] = dsp->fRec15[1];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
