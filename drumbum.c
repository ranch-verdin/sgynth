#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "drumbum"
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
	float fConst1;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst2;
	FAUSTFLOAT fVslider2;
	float fRec3[2];
	FAUSTFLOAT fButton1;
	float fVec1[2];
	float fRec4[2];
	int iVec2[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fVec3[2];
	float fRec2[2];
	float fConst3;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fRec0[2];
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	float fVec4[2];
	float fRec5[2];
	int iRec6[2];
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	float fRec7[2];
	float fRec1[2];
	
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
	m->declare(m->metaInterface, "filename", "drumbum");
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
	m->declare(m->metaInterface, "name", "drumbum");
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
	dsp->fVslider0 = (FAUSTFLOAT)100.0f;
	dsp->fVslider1 = (FAUSTFLOAT)10.0f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider2 = (FAUSTFLOAT)6.4000000000000004f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider3 = (FAUSTFLOAT)20.0f;
	dsp->fVslider4 = (FAUSTFLOAT)1.0f;
	dsp->fVslider5 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider6 = (FAUSTFLOAT)2.0f;
	dsp->fVslider7 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fVslider8 = (FAUSTFLOAT)2.0f;
	dsp->fVslider9 = (FAUSTFLOAT)10.0f;
	dsp->fVslider10 = (FAUSTFLOAT)20.0f;
	dsp->fVslider11 = (FAUSTFLOAT)1.0f;
	dsp->fVslider12 = (FAUSTFLOAT)0.95999999999999996f;
	dsp->fVslider13 = (FAUSTFLOAT)0.995f;
	
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
			dsp->fRec3[l1] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fVec1[l2] = 0.0f;
			
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
			dsp->iVec2[l4] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fVec3[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec2[l6] = 0.0f;
			
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
			dsp->iRec6[l10] = 0;
			
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
			dsp->fRec1[l12] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (1.0f / dsp->fConst0);
	dsp->fConst2 = (0.00100000005f * dsp->fConst0);
	dsp->fConst3 = (1000.0f / dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "bd");
	ui_interface->addButton(ui_interface->uiInterface, "bd", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "bl", &dsp->fButton1);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "freq");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider4, 1.0f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider3, 20.0f, 2.0f, 100.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "jump", &dsp->fVslider1, 10.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider0, 100.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_neg", &dsp->fVslider8, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "knee_pos", &dsp->fVslider6, 2.0f, 1.0f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "length", &dsp->fVslider2, 6.4000001f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_neg", &dsp->fVslider7, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "limit_pos", &dsp->fVslider5, 0.100000001f, 0.00100000005f, 1.0f, 0.00100000005f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "noise");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider11, 1.0f, 0.100000001f, 10.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider10, 20.0f, 2.0f, 100.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "jump", &dsp->fVslider9, 10.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bd", &dsp->fVslider12, 0.959999979f, 0.800000012f, 1.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider13, 0.995000005f, 0.800000012f, 1.0f, 0.00100000005f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (dsp->fConst1 * (float)dsp->fVslider0);
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (float)dsp->fButton0;
	float fSlow3 = (dsp->fConst2 * (float)dsp->fVslider2);
	float fSlow4 = (float)dsp->fButton1;
	float fSlow5 = (float)dsp->fVslider4;
	float fSlow6 = ((float)dsp->fVslider3 + fSlow5);
	float fSlow7 = (dsp->fConst2 * fSlow6);
	float fSlow8 = (dsp->fConst2 * fSlow5);
	float fSlow9 = (1.0f / (0.0f - (dsp->fConst2 * (fSlow5 - fSlow6))));
	float fSlow10 = (dsp->fConst3 / fSlow5);
	float fSlow11 = (float)dsp->fVslider5;
	float fSlow12 = (1.0f / fSlow11);
	float fSlow13 = (1.0f / (float)dsp->fVslider6);
	float fSlow14 = (1.0f - fSlow13);
	float fSlow15 = (2.0f / fSlow14);
	float fSlow16 = (float)dsp->fVslider7;
	float fSlow17 = (1.0f / fSlow16);
	float fSlow18 = (1.0f / (float)dsp->fVslider8);
	float fSlow19 = (1.0f - fSlow18);
	float fSlow20 = (2.0f / fSlow19);
	float fSlow21 = (float)dsp->fVslider9;
	float fSlow22 = (float)dsp->fVslider11;
	float fSlow23 = ((float)dsp->fVslider10 + fSlow22);
	float fSlow24 = (dsp->fConst2 * fSlow23);
	float fSlow25 = (dsp->fConst2 * fSlow22);
	float fSlow26 = (1.0f / (0.0f - (dsp->fConst2 * (fSlow22 - fSlow23))));
	float fSlow27 = (dsp->fConst3 / fSlow22);
	float fSlow28 = (float)dsp->fVslider12;
	float fSlow29 = (float)dsp->fVslider13;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = fSlow2;
			dsp->fRec3[0] = ((((fSlow2 - dsp->fVec0[1]) > 0.0f) > 0)?fSlow3:max(0.0f, (dsp->fRec3[1] + -1.0f)));
			int iTemp0 = (dsp->fRec3[0] > 0.0f);
			dsp->fVec1[0] = fSlow4;
			dsp->fRec4[0] = ((((fSlow4 - dsp->fVec1[1]) > 0.0f) > 0)?fSlow3:max(0.0f, (dsp->fRec4[1] + -1.0f)));
			int iTemp1 = (dsp->fRec4[0] > 0.0f);
			int iTemp2 = ((iTemp0 + iTemp1) > 0);
			dsp->iVec2[0] = iTemp2;
			int iTemp3 = (((iTemp2 - dsp->iVec2[1]) > 0) > 0);
			dsp->fVec3[0] = fSlow6;
			dsp->fRec2[0] = (iTemp3?0.0f:min(fSlow7, ((dsp->fRec2[1] + (dsp->fConst2 * (fSlow6 - dsp->fVec3[1]))) + 1.0f)));
			int iTemp4 = (dsp->fRec2[0] < fSlow8);
			float fTemp5 = sinf((3.14159274f * min(0.25f, (fSlow0 * ((fSlow1 * (iTemp4?((dsp->fRec2[0] < 0.0f)?0.0f:(iTemp4?(fSlow10 * dsp->fRec2[0]):1.0f)):((dsp->fRec2[0] < fSlow7)?((fSlow9 * (0.0f - (dsp->fRec2[0] - fSlow8))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp6 = (dsp->fRec0[1] + (2.0f * (fTemp5 * dsp->fRec1[1])));
			float fTemp7 = (fSlow12 * fTemp6);
			float fTemp8 = expf((0.0f - (fSlow15 * (min(max(fTemp7, 0.0f), 10.0f) - fSlow13))));
			float fTemp9 = (fSlow17 * fabsf(fTemp6));
			float fTemp10 = expf((0.0f - (fSlow20 * (min(max(fTemp9, 0.0f), 10.0f) - fSlow18))));
			float fTemp11 = ((fTemp6 <= 0.0f)?(0.0f - (fSlow16 * ((fTemp9 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp10) / (fTemp10 + 1.0f))))):fTemp9))):(fSlow11 * ((fTemp7 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp8) / (fTemp8 + 1.0f))))):fTemp7)));
			dsp->fRec0[0] = fTemp11;
			dsp->fVec4[0] = fSlow23;
			dsp->fRec5[0] = (iTemp3?0.0f:min(fSlow24, ((dsp->fRec5[1] + (dsp->fConst2 * (fSlow23 - dsp->fVec4[1]))) + 1.0f)));
			int iTemp12 = (dsp->fRec5[0] < fSlow25);
			dsp->iRec6[0] = ((1103515245 * dsp->iRec6[1]) + 12345);
			int iTemp13 = ((dsp->iVec2[1] <= 0) & (iTemp2 > 0));
			dsp->fRec7[0] = ((dsp->fRec7[1] * (float)(1 - iTemp13)) + ((float)iTemp13 * ((fSlow28 * (float)iTemp0) + (fSlow29 * (float)iTemp1))));
			float fTemp14 = ((fSlow21 * ((iTemp12?((dsp->fRec5[0] < 0.0f)?0.0f:(iTemp12?(fSlow27 * dsp->fRec5[0]):1.0f)):((dsp->fRec5[0] < fSlow24)?((fSlow26 * (0.0f - (dsp->fRec5[0] - fSlow25))) + 1.0f):0.0f)) * ((2.32830644e-10f * (float)dsp->iRec6[0]) + 0.5f))) - (dsp->fRec1[1] * min((2.0f * (1.0f - powf(dsp->fRec7[0], 0.25f))), min(2.0f, ((1.0f / fTemp5) - fTemp5)))));
			float fTemp15 = (fSlow12 * fTemp14);
			float fTemp16 = expf((0.0f - (fSlow15 * (min(max(fTemp15, 0.0f), 10.0f) - fSlow13))));
			float fTemp17 = (fSlow17 * fabsf(fTemp14));
			float fTemp18 = expf((0.0f - (fSlow20 * (min(max(fTemp17, 0.0f), 10.0f) - fSlow18))));
			float fTemp19 = (((fTemp14 <= 0.0f)?(0.0f - (fSlow16 * ((fTemp17 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp18) / (fTemp18 + 1.0f))))):fTemp17))):(fSlow11 * ((fTemp15 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp16) / (fTemp16 + 1.0f))))):fTemp15))) - fTemp11);
			float fTemp20 = (fSlow12 * fTemp19);
			float fTemp21 = expf((0.0f - (fSlow15 * (min(max(fTemp20, 0.0f), 10.0f) - fSlow13))));
			float fTemp22 = (fSlow17 * fabsf(fTemp19));
			float fTemp23 = expf((0.0f - (fSlow20 * (min(max(fTemp22, 0.0f), 10.0f) - fSlow18))));
			float fTemp24 = ((fTemp19 <= 0.0f)?(0.0f - (fSlow16 * ((fTemp22 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp23) / (fTemp23 + 1.0f))))):fTemp22))):(fSlow11 * ((fTemp20 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp21) / (fTemp21 + 1.0f))))):fTemp20)));
			float fTemp25 = (dsp->fRec1[1] + (2.0f * (fTemp5 * fTemp24)));
			float fTemp26 = (fSlow12 * fTemp25);
			float fTemp27 = expf((0.0f - (fSlow15 * (min(max(fTemp26, 0.0f), 10.0f) - fSlow13))));
			float fTemp28 = (fSlow17 * fabsf(fTemp25));
			float fTemp29 = expf((0.0f - (fSlow20 * (min(max(fTemp28, 0.0f), 10.0f) - fSlow18))));
			dsp->fRec1[0] = ((fTemp25 <= 0.0f)?(0.0f - (fSlow16 * ((fTemp28 > fSlow18)?(1.0f - (fSlow19 * (1.0f - ((1.0f - fTemp29) / (fTemp29 + 1.0f))))):fTemp28))):(fSlow11 * ((fTemp26 > fSlow13)?(1.0f - (fSlow14 * (1.0f - ((1.0f - fTemp27) / (fTemp27 + 1.0f))))):fTemp26)));
			output0[i] = (FAUSTFLOAT)dsp->fRec0[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec6[1] = dsp->iRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
