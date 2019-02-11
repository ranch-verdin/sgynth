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

#include <math.h>
#include <stdlib.h>


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
	FAUSTFLOAT fVslider0;
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
	FAUSTFLOAT fHslider6;
	int iRec2[2];
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fConst5;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	float fVec2[2];
	float fRec3[2];
	float fConst6;
	int IOTA;
	float fVec3[4096];
	float fRec0[2];
	FAUSTFLOAT fVslider1;
	float fVec4[2];
	float fRec5[2];
	FAUSTFLOAT fButton1;
	float fVec5[2];
	float fRec6[2];
	float fVec6[4096];
	float fRec4[2];
	FAUSTFLOAT fVslider2;
	float fVec7[2];
	float fRec8[2];
	FAUSTFLOAT fButton2;
	float fVec8[2];
	float fRec9[2];
	float fVec9[4096];
	float fRec7[2];
	FAUSTFLOAT fVslider3;
	float fVec10[2];
	float fRec11[2];
	FAUSTFLOAT fButton3;
	float fVec11[2];
	float fRec12[2];
	float fVec12[4096];
	float fRec10[2];
	
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
	dsp->fVslider0 = (FAUSTFLOAT)440.0f;
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
	dsp->fVslider1 = (FAUSTFLOAT)440.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider2 = (FAUSTFLOAT)440.0f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fVslider3 = (FAUSTFLOAT)440.0f;
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
			dsp->iRec2[l2] = 0;
			
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
			dsp->fRec3[l5] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 4096); l6 = (l6 + 1)) {
			dsp->fVec3[l6] = 0.0f;
			
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
			dsp->fVec4[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec5[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fVec5[l10] = 0.0f;
			
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
		for (l12 = 0; (l12 < 4096); l12 = (l12 + 1)) {
			dsp->fVec6[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec4[l13] = 0.0f;
			
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
			dsp->fRec8[l15] = 0.0f;
			
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
			dsp->fRec9[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 4096); l18 = (l18 + 1)) {
			dsp->fVec9[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec7[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fVec10[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec11[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fVec11[l22] = 0.0f;
			
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
		for (l24 = 0; (l24 < 4096); l24 = (l24 + 1)) {
			dsp->fVec12[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec10[l25] = 0.0f;
			
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
	dsp->fConst5 = (0.00100000005f * dsp->fConst0);
	dsp->fConst6 = (1000.0f / dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "thing");
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider0, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton0);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider1, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton1);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider2, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider3, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton3);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (dsp->fConst0 / fSlow0);
	float fSlow2 = (fSlow1 + -0.999994993f);
	float fSlow3 = floorf(fSlow2);
	float fSlow4 = (fSlow1 + (-1.0f - fSlow3));
	float fSlow5 = (fSlow1 + (-2.0f - fSlow3));
	float fSlow6 = (fSlow1 + (-3.0f - fSlow3));
	float fSlow7 = (((0.0f - fSlow4) * (0.0f - (0.5f * fSlow5))) * (0.0f - (0.333333343f * fSlow6)));
	float fSlow8 = (float)dsp->fHslider0;
	float fSlow9 = expf((0.0f - (dsp->fConst1 / (fSlow8 * fSlow0))));
	float fSlow10 = (float)dsp->fHslider1;
	float fSlow11 = (float)dsp->fHslider2;
	float fSlow12 = (1.0f / fSlow11);
	float fSlow13 = (1.0f / (float)dsp->fHslider3);
	float fSlow14 = (1.0f - fSlow13);
	float fSlow15 = (2.0f / fSlow14);
	float fSlow16 = (float)dsp->fHslider4;
	float fSlow17 = (1.0f / fSlow16);
	float fSlow18 = (1.0f / (float)dsp->fHslider5);
	float fSlow19 = (1.0f - fSlow18);
	float fSlow20 = (2.0f / fSlow19);
	float fSlow21 = (dsp->fConst3 * fSlow10);
	float fSlow22 = (float)dsp->fHslider6;
	float fSlow23 = (float)dsp->fButton0;
	float fSlow24 = (float)dsp->fHslider8;
	float fSlow25 = ((float)dsp->fHslider7 + fSlow24);
	float fSlow26 = (dsp->fConst5 * fSlow25);
	float fSlow27 = (dsp->fConst5 * fSlow24);
	float fSlow28 = (1.0f / (0.0f - (dsp->fConst5 * (fSlow24 - fSlow25))));
	float fSlow29 = (dsp->fConst6 / fSlow24);
	int iSlow30 = (int)fSlow2;
	int iSlow31 = min(8192, max(0, iSlow30));
	float fSlow32 = (fSlow1 - fSlow3);
	float fSlow33 = ((0.0f - fSlow5) * (0.0f - (0.5f * fSlow6)));
	int iSlow34 = min(8192, max(0, (iSlow30 + 1)));
	float fSlow35 = (0.5f * (fSlow4 * (0.0f - fSlow6)));
	int iSlow36 = min(8192, max(0, (iSlow30 + 2)));
	float fSlow37 = (0.166666672f * (fSlow4 * fSlow5));
	int iSlow38 = min(8192, max(0, (iSlow30 + 3)));
	float fSlow39 = (float)dsp->fVslider1;
	float fSlow40 = (dsp->fConst0 / fSlow39);
	float fSlow41 = (fSlow40 + -0.999994993f);
	float fSlow42 = floorf(fSlow41);
	float fSlow43 = (fSlow40 + (-1.0f - fSlow42));
	float fSlow44 = (fSlow40 + (-2.0f - fSlow42));
	float fSlow45 = (fSlow40 + (-3.0f - fSlow42));
	float fSlow46 = (((0.0f - fSlow43) * (0.0f - (0.5f * fSlow44))) * (0.0f - (0.333333343f * fSlow45)));
	float fSlow47 = expf((0.0f - (dsp->fConst1 / (fSlow8 * fSlow39))));
	float fSlow48 = (float)dsp->fButton1;
	int iSlow49 = (int)fSlow41;
	int iSlow50 = min(8192, max(0, iSlow49));
	float fSlow51 = (fSlow40 - fSlow42);
	float fSlow52 = ((0.0f - fSlow44) * (0.0f - (0.5f * fSlow45)));
	int iSlow53 = min(8192, max(0, (iSlow49 + 1)));
	float fSlow54 = (0.5f * (fSlow43 * (0.0f - fSlow45)));
	int iSlow55 = min(8192, max(0, (iSlow49 + 2)));
	float fSlow56 = (0.166666672f * (fSlow43 * fSlow44));
	int iSlow57 = min(8192, max(0, (iSlow49 + 3)));
	float fSlow58 = (float)dsp->fVslider2;
	float fSlow59 = (dsp->fConst0 / fSlow58);
	float fSlow60 = (fSlow59 + -0.999994993f);
	float fSlow61 = floorf(fSlow60);
	float fSlow62 = (fSlow59 + (-1.0f - fSlow61));
	float fSlow63 = (fSlow59 + (-2.0f - fSlow61));
	float fSlow64 = (fSlow59 + (-3.0f - fSlow61));
	float fSlow65 = (((0.0f - fSlow62) * (0.0f - (0.5f * fSlow63))) * (0.0f - (0.333333343f * fSlow64)));
	float fSlow66 = expf((0.0f - (dsp->fConst1 / (fSlow8 * fSlow58))));
	float fSlow67 = (float)dsp->fButton2;
	int iSlow68 = (int)fSlow60;
	int iSlow69 = min(8192, max(0, iSlow68));
	float fSlow70 = (fSlow59 - fSlow61);
	float fSlow71 = ((0.0f - fSlow63) * (0.0f - (0.5f * fSlow64)));
	int iSlow72 = min(8192, max(0, (iSlow68 + 1)));
	float fSlow73 = (0.5f * (fSlow62 * (0.0f - fSlow64)));
	int iSlow74 = min(8192, max(0, (iSlow68 + 2)));
	float fSlow75 = (0.166666672f * (fSlow62 * fSlow63));
	int iSlow76 = min(8192, max(0, (iSlow68 + 3)));
	float fSlow77 = (float)dsp->fVslider3;
	float fSlow78 = (dsp->fConst0 / fSlow77);
	float fSlow79 = (fSlow78 + -0.999994993f);
	float fSlow80 = floorf(fSlow79);
	float fSlow81 = (fSlow78 + (-1.0f - fSlow80));
	float fSlow82 = (fSlow78 + (-2.0f - fSlow80));
	float fSlow83 = (fSlow78 + (-3.0f - fSlow80));
	float fSlow84 = (((0.0f - fSlow81) * (0.0f - (0.5f * fSlow82))) * (0.0f - (0.333333343f * fSlow83)));
	float fSlow85 = expf((0.0f - (dsp->fConst1 / (fSlow8 * fSlow77))));
	float fSlow86 = (float)dsp->fButton3;
	int iSlow87 = (int)fSlow79;
	int iSlow88 = min(8192, max(0, iSlow87));
	float fSlow89 = (fSlow78 - fSlow80);
	float fSlow90 = ((0.0f - fSlow82) * (0.0f - (0.5f * fSlow83)));
	int iSlow91 = min(8192, max(0, (iSlow87 + 1)));
	float fSlow92 = (0.5f * (fSlow81 * (0.0f - fSlow83)));
	int iSlow93 = min(8192, max(0, (iSlow87 + 2)));
	float fSlow94 = (0.166666672f * (fSlow81 * fSlow82));
	int iSlow95 = min(8192, max(0, (iSlow87 + 3)));
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (fSlow12 * dsp->fRec0[1]);
			float fTemp1 = expf((0.0f - (fSlow15 * (min(max(fTemp0, 0.0f), 10.0f) - fSlow13))));
			float fTemp2 = (fSlow17 * fabsf(dsp->fRec0[1]));
			float fTemp3 = expf((0.0f - (fSlow20 * (min(max(fTemp2, 0.0f), 10.0f) - fSlow18))));
			float fTemp4 = ((dsp->fRec0[1] <= 0.0f)?(0.0f - (fSlow16 * ((fTemp2 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp3) / (fTemp3 + 1.0f))))):fTemp2))):(fSlow11 * ((fTemp0 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp1) / (fTemp1 + 1.0f))))):fTemp0)));
			dsp->fVec0[0] = (fSlow21 * fTemp4);
			dsp->fRec1[0] = ((dsp->fConst3 * ((fSlow10 * fTemp4) + (dsp->fConst4 * dsp->fRec1[1]))) - dsp->fVec0[1]);
			dsp->iRec2[0] = ((1103515245 * dsp->iRec2[1]) + 12345);
			float fTemp5 = ((fSlow22 * ((4.65661287e-10f * (float)dsp->iRec2[0]) + -1.0f)) + 1.0f);
			dsp->fVec1[0] = fSlow23;
			dsp->fVec2[0] = fSlow25;
			float fTemp6 = (dsp->fConst5 * (fSlow25 - dsp->fVec2[1]));
			dsp->fRec3[0] = ((((fSlow23 - dsp->fVec1[1]) > 0.0f) > 0)?0.0f:min(fSlow26, ((dsp->fRec3[1] + fTemp6) + 1.0f)));
			int iTemp7 = (dsp->fRec3[0] < fSlow27);
			float fTemp8 = ((fSlow9 * dsp->fRec1[0]) + (fTemp5 * (iTemp7?((dsp->fRec3[0] < 0.0f)?0.0f:(iTemp7?(fSlow29 * dsp->fRec3[0]):1.0f)):((dsp->fRec3[0] < fSlow26)?((fSlow28 * (0.0f - (dsp->fRec3[0] - fSlow27))) + 1.0f):0.0f))));
			dsp->fVec3[(dsp->IOTA & 4095)] = fTemp8;
			dsp->fRec0[0] = ((fSlow7 * dsp->fVec3[((dsp->IOTA - iSlow31) & 4095)]) + (fSlow32 * (((fSlow33 * dsp->fVec3[((dsp->IOTA - iSlow34) & 4095)]) + (fSlow35 * dsp->fVec3[((dsp->IOTA - iSlow36) & 4095)])) + (fSlow37 * dsp->fVec3[((dsp->IOTA - iSlow38) & 4095)]))));
			float fTemp9 = (fSlow12 * dsp->fRec4[1]);
			float fTemp10 = expf((0.0f - (fSlow15 * (min(max(fTemp9, 0.0f), 10.0f) - fSlow13))));
			float fTemp11 = (fSlow17 * fabsf(dsp->fRec4[1]));
			float fTemp12 = expf((0.0f - (fSlow20 * (min(max(fTemp11, 0.0f), 10.0f) - fSlow18))));
			float fTemp13 = ((dsp->fRec4[1] <= 0.0f)?(0.0f - (fSlow16 * ((fTemp11 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp12) / (fTemp12 + 1.0f))))):fTemp11))):(fSlow11 * ((fTemp9 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp10) / (fTemp10 + 1.0f))))):fTemp9)));
			dsp->fVec4[0] = (fSlow21 * fTemp13);
			dsp->fRec5[0] = ((dsp->fConst3 * ((fSlow10 * fTemp13) + (dsp->fConst4 * dsp->fRec5[1]))) - dsp->fVec4[1]);
			dsp->fVec5[0] = fSlow48;
			dsp->fRec6[0] = ((((fSlow48 - dsp->fVec5[1]) > 0.0f) > 0)?0.0f:min(fSlow26, ((fTemp6 + dsp->fRec6[1]) + 1.0f)));
			int iTemp14 = (dsp->fRec6[0] < fSlow27);
			float fTemp15 = ((fSlow47 * dsp->fRec5[0]) + (fTemp5 * (iTemp14?((dsp->fRec6[0] < 0.0f)?0.0f:(iTemp14?(fSlow29 * dsp->fRec6[0]):1.0f)):((dsp->fRec6[0] < fSlow26)?((fSlow28 * (0.0f - (dsp->fRec6[0] - fSlow27))) + 1.0f):0.0f))));
			dsp->fVec6[(dsp->IOTA & 4095)] = fTemp15;
			dsp->fRec4[0] = ((fSlow46 * dsp->fVec6[((dsp->IOTA - iSlow50) & 4095)]) + (fSlow51 * (((fSlow52 * dsp->fVec6[((dsp->IOTA - iSlow53) & 4095)]) + (fSlow54 * dsp->fVec6[((dsp->IOTA - iSlow55) & 4095)])) + (fSlow56 * dsp->fVec6[((dsp->IOTA - iSlow57) & 4095)]))));
			float fTemp16 = (fSlow12 * dsp->fRec7[1]);
			float fTemp17 = expf((0.0f - (fSlow15 * (min(max(fTemp16, 0.0f), 10.0f) - fSlow13))));
			float fTemp18 = (fSlow17 * fabsf(dsp->fRec7[1]));
			float fTemp19 = expf((0.0f - (fSlow20 * (min(max(fTemp18, 0.0f), 10.0f) - fSlow18))));
			float fTemp20 = ((dsp->fRec7[1] <= 0.0f)?(0.0f - (fSlow16 * ((fTemp18 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp19) / (fTemp19 + 1.0f))))):fTemp18))):(fSlow11 * ((fTemp16 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp17) / (fTemp17 + 1.0f))))):fTemp16)));
			dsp->fVec7[0] = (fSlow21 * fTemp20);
			dsp->fRec8[0] = ((dsp->fConst3 * ((fSlow10 * fTemp20) + (dsp->fConst4 * dsp->fRec8[1]))) - dsp->fVec7[1]);
			dsp->fVec8[0] = fSlow67;
			dsp->fRec9[0] = ((((fSlow67 - dsp->fVec8[1]) > 0.0f) > 0)?0.0f:min(fSlow26, ((fTemp6 + dsp->fRec9[1]) + 1.0f)));
			int iTemp21 = (dsp->fRec9[0] < fSlow27);
			float fTemp22 = ((fSlow66 * dsp->fRec8[0]) + (fTemp5 * (iTemp21?((dsp->fRec9[0] < 0.0f)?0.0f:(iTemp21?(fSlow29 * dsp->fRec9[0]):1.0f)):((dsp->fRec9[0] < fSlow26)?((fSlow28 * (0.0f - (dsp->fRec9[0] - fSlow27))) + 1.0f):0.0f))));
			dsp->fVec9[(dsp->IOTA & 4095)] = fTemp22;
			dsp->fRec7[0] = ((fSlow65 * dsp->fVec9[((dsp->IOTA - iSlow69) & 4095)]) + (fSlow70 * (((fSlow71 * dsp->fVec9[((dsp->IOTA - iSlow72) & 4095)]) + (fSlow73 * dsp->fVec9[((dsp->IOTA - iSlow74) & 4095)])) + (fSlow75 * dsp->fVec9[((dsp->IOTA - iSlow76) & 4095)]))));
			float fTemp23 = (fSlow12 * dsp->fRec10[1]);
			float fTemp24 = expf((0.0f - (fSlow15 * (min(max(fTemp23, 0.0f), 10.0f) - fSlow13))));
			float fTemp25 = (fSlow17 * fabsf(dsp->fRec10[1]));
			float fTemp26 = expf((0.0f - (fSlow20 * (min(max(fTemp25, 0.0f), 10.0f) - fSlow18))));
			float fTemp27 = ((dsp->fRec10[1] <= 0.0f)?(0.0f - (fSlow16 * ((fTemp25 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp26) / (fTemp26 + 1.0f))))):fTemp25))):(fSlow11 * ((fTemp23 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp24) / (fTemp24 + 1.0f))))):fTemp23)));
			dsp->fVec10[0] = (fSlow21 * fTemp27);
			dsp->fRec11[0] = ((dsp->fConst3 * ((fSlow10 * fTemp27) + (dsp->fConst4 * dsp->fRec11[1]))) - dsp->fVec10[1]);
			dsp->fVec11[0] = fSlow86;
			dsp->fRec12[0] = ((((fSlow86 - dsp->fVec11[1]) > 0.0f) > 0)?0.0f:min(fSlow26, ((fTemp6 + dsp->fRec12[1]) + 1.0f)));
			int iTemp28 = (dsp->fRec12[0] < fSlow27);
			float fTemp29 = ((fSlow85 * dsp->fRec11[0]) + (fTemp5 * (iTemp28?((dsp->fRec12[0] < 0.0f)?0.0f:(iTemp28?(fSlow29 * dsp->fRec12[0]):1.0f)):((dsp->fRec12[0] < fSlow26)?((fSlow28 * (0.0f - (dsp->fRec12[0] - fSlow27))) + 1.0f):0.0f))));
			dsp->fVec12[(dsp->IOTA & 4095)] = fTemp29;
			dsp->fRec10[0] = ((fSlow84 * dsp->fVec12[((dsp->IOTA - iSlow88) & 4095)]) + (fSlow89 * (((fSlow90 * dsp->fVec12[((dsp->IOTA - iSlow91) & 4095)]) + (fSlow92 * dsp->fVec12[((dsp->IOTA - iSlow93) & 4095)])) + (fSlow94 * dsp->fVec12[((dsp->IOTA - iSlow95) & 4095)]))));
			output0[i] = (FAUSTFLOAT)(((dsp->fRec0[0] + dsp->fRec4[0]) + dsp->fRec7[0]) + dsp->fRec10[0]);
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec2[1] = dsp->iRec2[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
