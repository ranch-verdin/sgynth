#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "clack"
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
	FAUSTFLOAT fVslider1;
	float fRec0[2];
	int iRec2[2];
	float fRec1[2];
	float fConst2;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst3;
	float fRec4[2];
	FAUSTFLOAT fVslider2;
	float fRec3[2];
	
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
	m->declare(m->metaInterface, "filename", "clack");
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
	m->declare(m->metaInterface, "name", "clack");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
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
	dsp->fVslider0 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)3000.0f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider2 = (FAUSTFLOAT)90.0f;
	
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			dsp->fRec0[l0] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->iRec2[l1] = 0;
			
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
			dsp->fVec0[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec4[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec3[l5] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = (1.0f / dsp->fConst0);
	dsp->fConst2 = (6.90999985f / dsp->fConst0);
	dsp->fConst3 = (0.00639999984f * dsp->fConst0);
	
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider1, 3000.0f, 2000.0f, 5000.0f, 10.0f);
	ui_interface->addButton(ui_interface->uiInterface, "cp", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider2, 90.0f, 2.0f, 1500.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = sinf((3.14159274f * min(0.25f, (dsp->fConst1 * (float)dsp->fVslider1))));
	float fSlow2 = (2.0f * fSlow1);
	float fSlow3 = min(-0.135579944f, min(2.0f, ((1.0f / fSlow1) - fSlow1)));
	float fSlow4 = (float)dsp->fButton0;
	float fSlow5 = (0.00100000005f * (float)dsp->fVslider2);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			float fTemp0 = (dsp->fRec0[1] + (fSlow2 * dsp->fRec1[1]));
			float fTemp1 = (1.25313282f * fTemp0);
			float fTemp2 = (1.3831259f * fabsf(fTemp0));
			float fTemp3 = ((fTemp0 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp2 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp2, 0.0f), 10.0f) + -0.200000003f)))))):fTemp2))):(0.797999978f * ((fTemp1 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp1, 0.0f), 10.0f) + -0.434782594f)))))):fTemp1)));
			dsp->fRec0[0] = fTemp3;
			dsp->iRec2[0] = ((1103515245 * dsp->iRec2[1]) + 12345);
			float fTemp4 = ((4.65661287e-10f * (float)dsp->iRec2[0]) - (fTemp3 + (fSlow3 * dsp->fRec1[1])));
			float fTemp5 = (1.25313282f * fTemp4);
			float fTemp6 = (1.3831259f * fabsf(fTemp4));
			float fTemp7 = ((fTemp4 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp6 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp6, 0.0f), 10.0f) + -0.200000003f)))))):fTemp6))):(0.797999978f * ((fTemp5 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp5, 0.0f), 10.0f) + -0.434782594f)))))):fTemp5)));
			float fTemp8 = (dsp->fRec1[1] + (fSlow2 * fTemp7));
			float fTemp9 = (1.25313282f * fTemp8);
			float fTemp10 = (1.3831259f * fabsf(fTemp8));
			dsp->fRec1[0] = ((fTemp8 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp10 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp10, 0.0f), 10.0f) + -0.200000003f)))))):fTemp10))):(0.797999978f * ((fTemp9 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp9, 0.0f), 10.0f) + -0.434782594f)))))):fTemp9)));
			dsp->fVec0[0] = fSlow4;
			dsp->fRec4[0] = ((((fSlow4 - dsp->fVec0[1]) > 0.0f) > 0)?dsp->fConst3:max(0.0f, (dsp->fRec4[1] + -1.0f)));
			int iTemp11 = (dsp->fRec4[0] > 0.0f);
			int iTemp12 = (iTemp11 > 0);
			float fTemp13 = expf((0.0f - (dsp->fConst2 / (iTemp12?0.00800000038f:fSlow5))));
			dsp->fRec3[0] = ((dsp->fRec3[1] * fTemp13) + ((iTemp12?(float)iTemp11:0.0f) * (1.0f - fTemp13)));
			float fTemp14 = (fSlow0 * (dsp->fRec1[0] * dsp->fRec3[0]));
			output0[i] = (FAUSTFLOAT)((fTemp14 > 1.0f)?1.0f:((fTemp14 < -1.0f)?-1.0f:fTemp14));
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->iRec2[1] = dsp->iRec2[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
