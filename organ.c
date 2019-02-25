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
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->iRec3[l2] = 0;
			
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
	int iVec0[2];
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
	float fConst9;
	float fConst10;
	float fRec12[2];
	float fRec13[2];
	int iRec14[2];
	float fRec11[2];
	float fRec10[2];
	float fRec9[2];
	float fRec8[2];
	float fRec7[2];
	float fRec6[2];
	float fRec4[2];
	FAUSTFLOAT fVslider9;
	float fConst11;
	float fConst12;
	float fRec22[2];
	float fRec23[2];
	float fRec21[2];
	float fRec20[2];
	float fRec19[2];
	float fRec18[2];
	float fRec17[2];
	float fRec16[2];
	float fRec15[2];
	FAUSTFLOAT fVslider10;
	float fConst13;
	float fConst14;
	float fConst15;
	float fRec31[2];
	float fRec32[2];
	float fRec30[2];
	float fRec29[2];
	float fRec28[2];
	float fRec27[2];
	float fRec26[2];
	float fRec25[2];
	float fRec24[2];
	FAUSTFLOAT fVslider11;
	float fConst16;
	float fConst17;
	float fRec40[2];
	float fRec41[2];
	float fRec39[2];
	float fRec38[2];
	float fRec37[2];
	float fRec36[2];
	float fRec35[2];
	float fRec34[2];
	float fRec33[2];
	FAUSTFLOAT fVslider12;
	float fConst18;
	float fConst19;
	float fRec49[2];
	float fRec50[2];
	float fRec48[2];
	float fRec47[2];
	float fRec46[2];
	float fRec45[2];
	float fRec44[2];
	float fRec43[2];
	float fRec42[2];
	FAUSTFLOAT fVslider13;
	float fConst20;
	float fConst21;
	float fRec58[2];
	float fRec59[2];
	float fRec57[2];
	float fRec56[2];
	float fRec55[2];
	float fRec54[2];
	float fRec53[2];
	float fRec52[2];
	float fRec51[2];
	FAUSTFLOAT fVslider14;
	float fConst22;
	float fConst23;
	float fRec67[2];
	float fRec68[2];
	float fRec66[2];
	float fRec65[2];
	float fRec64[2];
	float fRec63[2];
	float fRec62[2];
	float fRec61[2];
	float fRec60[2];
	float fConst24;
	float fConst25;
	float fRec1[3];
	float fVec1[2];
	float fConst26;
	float fRec0[2];
	FAUSTFLOAT fVslider15;
	float fRec71[2];
	FAUSTFLOAT fVslider16;
	float fRec79[2];
	float fRec80[2];
	float fRec78[2];
	float fRec77[2];
	float fRec76[2];
	float fRec75[2];
	float fRec74[2];
	float fRec73[2];
	float fRec72[2];
	float fRec88[2];
	float fRec89[2];
	float fRec87[2];
	float fRec86[2];
	float fRec85[2];
	float fRec84[2];
	float fRec83[2];
	float fRec82[2];
	float fRec81[2];
	float fRec97[2];
	float fRec98[2];
	float fRec96[2];
	float fRec95[2];
	float fRec94[2];
	float fRec93[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	float fRec106[2];
	float fRec107[2];
	float fRec105[2];
	float fRec104[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	float fRec99[2];
	float fRec115[2];
	float fRec116[2];
	float fRec114[2];
	float fRec113[2];
	float fRec112[2];
	float fRec111[2];
	float fRec110[2];
	float fRec109[2];
	float fRec108[2];
	float fRec124[2];
	float fRec125[2];
	float fRec123[2];
	float fRec122[2];
	float fRec121[2];
	float fRec120[2];
	float fRec119[2];
	float fRec118[2];
	float fRec117[2];
	float fRec133[2];
	float fRec134[2];
	float fRec132[2];
	float fRec131[2];
	float fRec130[2];
	float fRec129[2];
	float fRec128[2];
	float fRec127[2];
	float fRec126[2];
	float fRec70[3];
	float fVec2[2];
	float fRec69[2];
	FAUSTFLOAT fVslider17;
	float fRec137[2];
	FAUSTFLOAT fVslider18;
	float fRec145[2];
	float fRec146[2];
	float fRec144[2];
	float fRec143[2];
	float fRec142[2];
	float fRec141[2];
	float fRec140[2];
	float fRec139[2];
	float fRec138[2];
	float fRec154[2];
	float fRec155[2];
	float fRec153[2];
	float fRec152[2];
	float fRec151[2];
	float fRec150[2];
	float fRec149[2];
	float fRec148[2];
	float fRec147[2];
	float fRec163[2];
	float fRec164[2];
	float fRec162[2];
	float fRec161[2];
	float fRec160[2];
	float fRec159[2];
	float fRec158[2];
	float fRec157[2];
	float fRec156[2];
	float fRec172[2];
	float fRec173[2];
	float fRec171[2];
	float fRec170[2];
	float fRec169[2];
	float fRec168[2];
	float fRec167[2];
	float fRec166[2];
	float fRec165[2];
	float fRec181[2];
	float fRec182[2];
	float fRec180[2];
	float fRec179[2];
	float fRec178[2];
	float fRec177[2];
	float fRec176[2];
	float fRec175[2];
	float fRec174[2];
	float fRec190[2];
	float fRec191[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	float fRec185[2];
	float fRec184[2];
	float fRec183[2];
	float fRec199[2];
	float fRec200[2];
	float fRec198[2];
	float fRec197[2];
	float fRec196[2];
	float fRec195[2];
	float fRec194[2];
	float fRec193[2];
	float fRec192[2];
	float fRec136[3];
	float fVec3[2];
	float fRec135[2];
	FAUSTFLOAT fVslider19;
	float fRec203[2];
	FAUSTFLOAT fVslider20;
	float fRec211[2];
	float fRec212[2];
	float fRec210[2];
	float fRec209[2];
	float fRec208[2];
	float fRec207[2];
	float fRec206[2];
	float fRec205[2];
	float fRec204[2];
	float fRec220[2];
	float fRec221[2];
	float fRec219[2];
	float fRec218[2];
	float fRec217[2];
	float fRec216[2];
	float fRec215[2];
	float fRec214[2];
	float fRec213[2];
	float fRec229[2];
	float fRec230[2];
	float fRec228[2];
	float fRec227[2];
	float fRec226[2];
	float fRec225[2];
	float fRec224[2];
	float fRec223[2];
	float fRec222[2];
	float fRec238[2];
	float fRec239[2];
	float fRec237[2];
	float fRec236[2];
	float fRec235[2];
	float fRec234[2];
	float fRec233[2];
	float fRec232[2];
	float fRec231[2];
	float fRec247[2];
	float fRec248[2];
	float fRec246[2];
	float fRec245[2];
	float fRec244[2];
	float fRec243[2];
	float fRec242[2];
	float fRec241[2];
	float fRec240[2];
	float fRec256[2];
	float fRec257[2];
	float fRec255[2];
	float fRec254[2];
	float fRec253[2];
	float fRec252[2];
	float fRec251[2];
	float fRec250[2];
	float fRec249[2];
	float fRec265[2];
	float fRec266[2];
	float fRec264[2];
	float fRec263[2];
	float fRec262[2];
	float fRec261[2];
	float fRec260[2];
	float fRec259[2];
	float fRec258[2];
	float fRec202[3];
	float fVec4[2];
	float fRec201[2];
	
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
			dsp->iVec0[l0] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			dsp->fRec2[l1] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->fRec5[l3] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec12[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->fRec13[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->iRec14[l6] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec11[l7] = 0.0f;
			
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
			dsp->fRec9[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fRec8[l10] = 0.0f;
			
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
			dsp->fRec6[l12] = 0.0f;
			
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
			dsp->fRec22[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec23[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fRec21[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec20[l17] = 0.0f;
			
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
			dsp->fRec18[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fRec17[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec16[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec15[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec31[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec32[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec30[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec29[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec28[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec27[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fRec26[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fRec25[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec24[l31] = 0.0f;
			
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
			dsp->fRec39[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec38[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec37[l36] = 0.0f;
			
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
			dsp->fRec35[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec34[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fRec33[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec49[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec50[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->fRec48[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fRec47[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec46[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fRec45[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec44[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fRec43[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec42[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fRec58[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			dsp->fRec59[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fRec57[l52] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			dsp->fRec56[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			dsp->fRec55[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			dsp->fRec54[l55] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			dsp->fRec53[l56] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			dsp->fRec52[l57] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			dsp->fRec51[l58] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			dsp->fRec67[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			dsp->fRec68[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec66[l61] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			dsp->fRec65[l62] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			dsp->fRec64[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->fRec63[l64] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->fRec62[l65] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			dsp->fRec61[l66] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			dsp->fRec60[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 3); l68 = (l68 + 1)) {
			dsp->fRec1[l68] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			dsp->fVec1[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			dsp->fRec0[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			dsp->fRec71[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			dsp->fRec79[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fRec80[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fRec78[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			dsp->fRec77[l75] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			dsp->fRec76[l76] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			dsp->fRec75[l77] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			dsp->fRec74[l78] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			dsp->fRec73[l79] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			dsp->fRec72[l80] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			dsp->fRec88[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fRec89[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			dsp->fRec87[l83] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			dsp->fRec86[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			dsp->fRec85[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->fRec84[l86] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			dsp->fRec83[l87] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			dsp->fRec82[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fRec81[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec97[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			dsp->fRec98[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			dsp->fRec96[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			dsp->fRec95[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			dsp->fRec94[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fRec93[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			dsp->fRec92[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fRec91[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			dsp->fRec90[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			dsp->fRec106[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			dsp->fRec107[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			dsp->fRec105[l101] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			dsp->fRec104[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fRec103[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			dsp->fRec102[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			dsp->fRec101[l105] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			dsp->fRec100[l106] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			dsp->fRec99[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			dsp->fRec115[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fRec116[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			dsp->fRec114[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			dsp->fRec113[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			dsp->fRec112[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			dsp->fRec111[l113] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			dsp->fRec110[l114] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			dsp->fRec109[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			dsp->fRec108[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			dsp->fRec124[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			dsp->fRec125[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fRec123[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fRec122[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			dsp->fRec121[l121] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			dsp->fRec120[l122] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			dsp->fRec119[l123] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			dsp->fRec118[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			dsp->fRec117[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			dsp->fRec133[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			dsp->fRec134[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec132[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			dsp->fRec131[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			dsp->fRec130[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			dsp->fRec129[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			dsp->fRec128[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			dsp->fRec127[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			dsp->fRec126[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 3); l135 = (l135 + 1)) {
			dsp->fRec70[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			dsp->fVec2[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			dsp->fRec69[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			dsp->fRec137[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			dsp->fRec145[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			dsp->fRec146[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			dsp->fRec144[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			dsp->fRec143[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			dsp->fRec142[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fRec141[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec140[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			dsp->fRec139[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			dsp->fRec138[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			dsp->fRec154[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			dsp->fRec155[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			dsp->fRec153[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			dsp->fRec152[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			dsp->fRec151[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			dsp->fRec150[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			dsp->fRec149[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			dsp->fRec148[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			dsp->fRec147[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			dsp->fRec163[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			dsp->fRec164[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			dsp->fRec162[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			dsp->fRec161[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			dsp->fRec160[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			dsp->fRec159[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			dsp->fRec158[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			dsp->fRec157[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			dsp->fRec156[l165] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			dsp->fRec172[l166] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			dsp->fRec173[l167] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			dsp->fRec171[l168] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			dsp->fRec170[l169] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			dsp->fRec169[l170] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			dsp->fRec168[l171] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			dsp->fRec167[l172] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			dsp->fRec166[l173] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			dsp->fRec165[l174] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			dsp->fRec181[l175] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			dsp->fRec182[l176] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			dsp->fRec180[l177] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			dsp->fRec179[l178] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			dsp->fRec178[l179] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; (l180 < 2); l180 = (l180 + 1)) {
			dsp->fRec177[l180] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			dsp->fRec176[l181] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			dsp->fRec175[l182] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			dsp->fRec174[l183] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			dsp->fRec190[l184] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			dsp->fRec191[l185] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			dsp->fRec189[l186] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			dsp->fRec188[l187] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			dsp->fRec187[l188] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; (l189 < 2); l189 = (l189 + 1)) {
			dsp->fRec186[l189] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			dsp->fRec185[l190] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; (l191 < 2); l191 = (l191 + 1)) {
			dsp->fRec184[l191] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; (l192 < 2); l192 = (l192 + 1)) {
			dsp->fRec183[l192] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; (l193 < 2); l193 = (l193 + 1)) {
			dsp->fRec199[l193] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			dsp->fRec200[l194] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l195;
		for (l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			dsp->fRec198[l195] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l196;
		for (l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			dsp->fRec197[l196] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l197;
		for (l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			dsp->fRec196[l197] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l198;
		for (l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			dsp->fRec195[l198] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l199;
		for (l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			dsp->fRec194[l199] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l200;
		for (l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			dsp->fRec193[l200] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l201;
		for (l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			dsp->fRec192[l201] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l202;
		for (l202 = 0; (l202 < 3); l202 = (l202 + 1)) {
			dsp->fRec136[l202] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l203;
		for (l203 = 0; (l203 < 2); l203 = (l203 + 1)) {
			dsp->fVec3[l203] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l204;
		for (l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			dsp->fRec135[l204] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l205;
		for (l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			dsp->fRec203[l205] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l206;
		for (l206 = 0; (l206 < 2); l206 = (l206 + 1)) {
			dsp->fRec211[l206] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l207;
		for (l207 = 0; (l207 < 2); l207 = (l207 + 1)) {
			dsp->fRec212[l207] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l208;
		for (l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			dsp->fRec210[l208] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l209;
		for (l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			dsp->fRec209[l209] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l210;
		for (l210 = 0; (l210 < 2); l210 = (l210 + 1)) {
			dsp->fRec208[l210] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l211;
		for (l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			dsp->fRec207[l211] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l212;
		for (l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			dsp->fRec206[l212] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l213;
		for (l213 = 0; (l213 < 2); l213 = (l213 + 1)) {
			dsp->fRec205[l213] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l214;
		for (l214 = 0; (l214 < 2); l214 = (l214 + 1)) {
			dsp->fRec204[l214] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l215;
		for (l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			dsp->fRec220[l215] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l216;
		for (l216 = 0; (l216 < 2); l216 = (l216 + 1)) {
			dsp->fRec221[l216] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l217;
		for (l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			dsp->fRec219[l217] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l218;
		for (l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			dsp->fRec218[l218] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l219;
		for (l219 = 0; (l219 < 2); l219 = (l219 + 1)) {
			dsp->fRec217[l219] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l220;
		for (l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			dsp->fRec216[l220] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l221;
		for (l221 = 0; (l221 < 2); l221 = (l221 + 1)) {
			dsp->fRec215[l221] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l222;
		for (l222 = 0; (l222 < 2); l222 = (l222 + 1)) {
			dsp->fRec214[l222] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l223;
		for (l223 = 0; (l223 < 2); l223 = (l223 + 1)) {
			dsp->fRec213[l223] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l224;
		for (l224 = 0; (l224 < 2); l224 = (l224 + 1)) {
			dsp->fRec229[l224] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l225;
		for (l225 = 0; (l225 < 2); l225 = (l225 + 1)) {
			dsp->fRec230[l225] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l226;
		for (l226 = 0; (l226 < 2); l226 = (l226 + 1)) {
			dsp->fRec228[l226] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l227;
		for (l227 = 0; (l227 < 2); l227 = (l227 + 1)) {
			dsp->fRec227[l227] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l228;
		for (l228 = 0; (l228 < 2); l228 = (l228 + 1)) {
			dsp->fRec226[l228] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l229;
		for (l229 = 0; (l229 < 2); l229 = (l229 + 1)) {
			dsp->fRec225[l229] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l230;
		for (l230 = 0; (l230 < 2); l230 = (l230 + 1)) {
			dsp->fRec224[l230] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l231;
		for (l231 = 0; (l231 < 2); l231 = (l231 + 1)) {
			dsp->fRec223[l231] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l232;
		for (l232 = 0; (l232 < 2); l232 = (l232 + 1)) {
			dsp->fRec222[l232] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l233;
		for (l233 = 0; (l233 < 2); l233 = (l233 + 1)) {
			dsp->fRec238[l233] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l234;
		for (l234 = 0; (l234 < 2); l234 = (l234 + 1)) {
			dsp->fRec239[l234] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l235;
		for (l235 = 0; (l235 < 2); l235 = (l235 + 1)) {
			dsp->fRec237[l235] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l236;
		for (l236 = 0; (l236 < 2); l236 = (l236 + 1)) {
			dsp->fRec236[l236] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l237;
		for (l237 = 0; (l237 < 2); l237 = (l237 + 1)) {
			dsp->fRec235[l237] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l238;
		for (l238 = 0; (l238 < 2); l238 = (l238 + 1)) {
			dsp->fRec234[l238] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l239;
		for (l239 = 0; (l239 < 2); l239 = (l239 + 1)) {
			dsp->fRec233[l239] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l240;
		for (l240 = 0; (l240 < 2); l240 = (l240 + 1)) {
			dsp->fRec232[l240] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l241;
		for (l241 = 0; (l241 < 2); l241 = (l241 + 1)) {
			dsp->fRec231[l241] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l242;
		for (l242 = 0; (l242 < 2); l242 = (l242 + 1)) {
			dsp->fRec247[l242] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l243;
		for (l243 = 0; (l243 < 2); l243 = (l243 + 1)) {
			dsp->fRec248[l243] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l244;
		for (l244 = 0; (l244 < 2); l244 = (l244 + 1)) {
			dsp->fRec246[l244] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l245;
		for (l245 = 0; (l245 < 2); l245 = (l245 + 1)) {
			dsp->fRec245[l245] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l246;
		for (l246 = 0; (l246 < 2); l246 = (l246 + 1)) {
			dsp->fRec244[l246] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l247;
		for (l247 = 0; (l247 < 2); l247 = (l247 + 1)) {
			dsp->fRec243[l247] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l248;
		for (l248 = 0; (l248 < 2); l248 = (l248 + 1)) {
			dsp->fRec242[l248] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l249;
		for (l249 = 0; (l249 < 2); l249 = (l249 + 1)) {
			dsp->fRec241[l249] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l250;
		for (l250 = 0; (l250 < 2); l250 = (l250 + 1)) {
			dsp->fRec240[l250] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l251;
		for (l251 = 0; (l251 < 2); l251 = (l251 + 1)) {
			dsp->fRec256[l251] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l252;
		for (l252 = 0; (l252 < 2); l252 = (l252 + 1)) {
			dsp->fRec257[l252] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l253;
		for (l253 = 0; (l253 < 2); l253 = (l253 + 1)) {
			dsp->fRec255[l253] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l254;
		for (l254 = 0; (l254 < 2); l254 = (l254 + 1)) {
			dsp->fRec254[l254] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l255;
		for (l255 = 0; (l255 < 2); l255 = (l255 + 1)) {
			dsp->fRec253[l255] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l256;
		for (l256 = 0; (l256 < 2); l256 = (l256 + 1)) {
			dsp->fRec252[l256] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l257;
		for (l257 = 0; (l257 < 2); l257 = (l257 + 1)) {
			dsp->fRec251[l257] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l258;
		for (l258 = 0; (l258 < 2); l258 = (l258 + 1)) {
			dsp->fRec250[l258] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l259;
		for (l259 = 0; (l259 < 2); l259 = (l259 + 1)) {
			dsp->fRec249[l259] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l260;
		for (l260 = 0; (l260 < 2); l260 = (l260 + 1)) {
			dsp->fRec265[l260] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l261;
		for (l261 = 0; (l261 < 2); l261 = (l261 + 1)) {
			dsp->fRec266[l261] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l262;
		for (l262 = 0; (l262 < 2); l262 = (l262 + 1)) {
			dsp->fRec264[l262] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l263;
		for (l263 = 0; (l263 < 2); l263 = (l263 + 1)) {
			dsp->fRec263[l263] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l264;
		for (l264 = 0; (l264 < 2); l264 = (l264 + 1)) {
			dsp->fRec262[l264] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l265;
		for (l265 = 0; (l265 < 2); l265 = (l265 + 1)) {
			dsp->fRec261[l265] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l266;
		for (l266 = 0; (l266 < 2); l266 = (l266 + 1)) {
			dsp->fRec260[l266] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l267;
		for (l267 = 0; (l267 < 2); l267 = (l267 + 1)) {
			dsp->fRec259[l267] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l268;
		for (l268 = 0; (l268 < 2); l268 = (l268 + 1)) {
			dsp->fRec258[l268] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l269;
		for (l269 = 0; (l269 < 3); l269 = (l269 + 1)) {
			dsp->fRec202[l269] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l270;
		for (l270 = 0; (l270 < 2); l270 = (l270 + 1)) {
			dsp->fVec4[l270] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l271;
		for (l271 = 0; (l271 < 2); l271 = (l271 + 1)) {
			dsp->fRec201[l271] = 0.0f;
			
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
	dsp->fConst9 = (0.314159274f / dsp->fConst0);
	dsp->fConst10 = (0.628318548f / dsp->fConst0);
	dsp->fConst11 = (2.0f / dsp->fConst0);
	dsp->fConst12 = (1.2566371f / dsp->fConst0);
	dsp->fConst13 = (3.0f / dsp->fConst0);
	dsp->fConst14 = (0.942477822f / dsp->fConst0);
	dsp->fConst15 = (1.88495564f / dsp->fConst0);
	dsp->fConst16 = (4.0f / dsp->fConst0);
	dsp->fConst17 = (2.51327419f / dsp->fConst0);
	dsp->fConst18 = (1.57079637f / dsp->fConst0);
	dsp->fConst19 = (3.14159274f / dsp->fConst0);
	dsp->fConst20 = (6.0f / dsp->fConst0);
	dsp->fConst21 = (3.76991129f / dsp->fConst0);
	dsp->fConst22 = (8.0f / dsp->fConst0);
	dsp->fConst23 = (5.02654839f / dsp->fConst0);
	dsp->fConst24 = (((dsp->fConst4 + -1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst25 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst3))));
	dsp->fConst26 = (1.0f - dsp->fConst1);
	
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
	float fSlow13 = (dsp->fConst9 * fSlow10);
	float fSlow14 = (dsp->fConst10 * fSlow10);
	float fSlow15 = (float)dsp->fVslider9;
	float fSlow16 = (dsp->fConst11 * fSlow10);
	float fSlow17 = (dsp->fConst12 * fSlow10);
	float fSlow18 = (float)dsp->fVslider10;
	float fSlow19 = (dsp->fConst13 * fSlow10);
	float fSlow20 = (dsp->fConst14 * fSlow10);
	float fSlow21 = (dsp->fConst15 * fSlow10);
	float fSlow22 = (float)dsp->fVslider11;
	float fSlow23 = (dsp->fConst16 * fSlow10);
	float fSlow24 = (dsp->fConst17 * fSlow10);
	float fSlow25 = (float)dsp->fVslider12;
	float fSlow26 = (dsp->fConst8 * fSlow10);
	float fSlow27 = (dsp->fConst18 * fSlow10);
	float fSlow28 = (dsp->fConst19 * fSlow10);
	float fSlow29 = (float)dsp->fVslider13;
	float fSlow30 = (dsp->fConst20 * fSlow10);
	float fSlow31 = (dsp->fConst21 * fSlow10);
	float fSlow32 = (float)dsp->fVslider14;
	float fSlow33 = (dsp->fConst22 * fSlow10);
	float fSlow34 = (dsp->fConst23 * fSlow10);
	float fSlow35 = (float)dsp->fVslider15;
	int iSlow36 = (fSlow35 > 0.0f);
	float fSlow37 = expf((0.0f - (dsp->fConst6 / (iSlow36?fSlow6:fSlow5))));
	float fSlow38 = ((1.0f - fSlow37) * (iSlow36?fSlow35:0.0f));
	float fSlow39 = (float)dsp->fVslider16;
	float fSlow40 = (dsp->fConst7 * fSlow39);
	float fSlow41 = (dsp->fConst9 * fSlow39);
	float fSlow42 = (dsp->fConst10 * fSlow39);
	float fSlow43 = (dsp->fConst11 * fSlow39);
	float fSlow44 = (dsp->fConst12 * fSlow39);
	float fSlow45 = (dsp->fConst13 * fSlow39);
	float fSlow46 = (dsp->fConst14 * fSlow39);
	float fSlow47 = (dsp->fConst15 * fSlow39);
	float fSlow48 = (dsp->fConst16 * fSlow39);
	float fSlow49 = (dsp->fConst17 * fSlow39);
	float fSlow50 = (dsp->fConst8 * fSlow39);
	float fSlow51 = (dsp->fConst18 * fSlow39);
	float fSlow52 = (dsp->fConst19 * fSlow39);
	float fSlow53 = (dsp->fConst20 * fSlow39);
	float fSlow54 = (dsp->fConst21 * fSlow39);
	float fSlow55 = (dsp->fConst22 * fSlow39);
	float fSlow56 = (dsp->fConst23 * fSlow39);
	float fSlow57 = (float)dsp->fVslider17;
	int iSlow58 = (fSlow57 > 0.0f);
	float fSlow59 = expf((0.0f - (dsp->fConst6 / (iSlow58?fSlow6:fSlow5))));
	float fSlow60 = ((1.0f - fSlow59) * (iSlow58?fSlow57:0.0f));
	float fSlow61 = (float)dsp->fVslider18;
	float fSlow62 = (dsp->fConst7 * fSlow61);
	float fSlow63 = (dsp->fConst9 * fSlow61);
	float fSlow64 = (dsp->fConst10 * fSlow61);
	float fSlow65 = (dsp->fConst11 * fSlow61);
	float fSlow66 = (dsp->fConst12 * fSlow61);
	float fSlow67 = (dsp->fConst13 * fSlow61);
	float fSlow68 = (dsp->fConst14 * fSlow61);
	float fSlow69 = (dsp->fConst15 * fSlow61);
	float fSlow70 = (dsp->fConst16 * fSlow61);
	float fSlow71 = (dsp->fConst17 * fSlow61);
	float fSlow72 = (dsp->fConst8 * fSlow61);
	float fSlow73 = (dsp->fConst18 * fSlow61);
	float fSlow74 = (dsp->fConst19 * fSlow61);
	float fSlow75 = (dsp->fConst20 * fSlow61);
	float fSlow76 = (dsp->fConst21 * fSlow61);
	float fSlow77 = (dsp->fConst22 * fSlow61);
	float fSlow78 = (dsp->fConst23 * fSlow61);
	float fSlow79 = (float)dsp->fVslider19;
	int iSlow80 = (fSlow79 > 0.0f);
	float fSlow81 = expf((0.0f - (dsp->fConst6 / (iSlow80?fSlow6:fSlow5))));
	float fSlow82 = ((1.0f - fSlow81) * (iSlow80?fSlow79:0.0f));
	float fSlow83 = (float)dsp->fVslider20;
	float fSlow84 = (dsp->fConst7 * fSlow83);
	float fSlow85 = (dsp->fConst9 * fSlow83);
	float fSlow86 = (dsp->fConst10 * fSlow83);
	float fSlow87 = (dsp->fConst11 * fSlow83);
	float fSlow88 = (dsp->fConst12 * fSlow83);
	float fSlow89 = (dsp->fConst13 * fSlow83);
	float fSlow90 = (dsp->fConst14 * fSlow83);
	float fSlow91 = (dsp->fConst15 * fSlow83);
	float fSlow92 = (dsp->fConst16 * fSlow83);
	float fSlow93 = (dsp->fConst17 * fSlow83);
	float fSlow94 = (dsp->fConst8 * fSlow83);
	float fSlow95 = (dsp->fConst18 * fSlow83);
	float fSlow96 = (dsp->fConst19 * fSlow83);
	float fSlow97 = (dsp->fConst20 * fSlow83);
	float fSlow98 = (dsp->fConst21 * fSlow83);
	float fSlow99 = (dsp->fConst22 * fSlow83);
	float fSlow100 = (dsp->fConst23 * fSlow83);
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->iVec0[0] = 1;
			dsp->fRec2[0] = ((dsp->fRec2[1] * fSlow7) + fSlow8);
			dsp->fRec5[0] = (dsp->fConst8 + (dsp->fRec5[1] - floorf((dsp->fConst8 + dsp->fRec5[1]))));
			float fTemp0 = ((fSlow12 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec5[0])]) + 1.0f);
			float fTemp1 = (1.0f / tanf((fSlow13 * fTemp0)));
			float fTemp2 = (fTemp1 + 1.0f);
			float fTemp3 = (0.0f - ((1.0f - fTemp1) / fTemp2));
			float fTemp4 = (fSlow14 * fTemp0);
			float fTemp5 = sinf(fTemp4);
			float fTemp6 = cosf(fTemp4);
			dsp->fRec12[0] = ((dsp->fRec13[1] * fTemp5) + (dsp->fRec12[1] * fTemp6));
			int iTemp7 = (1 - dsp->iVec0[1]);
			dsp->fRec13[0] = (((dsp->fRec13[1] * fTemp6) + (dsp->fRec12[1] * (0.0f - fTemp5))) + (float)iTemp7);
			int iTemp8 = ((dsp->fRec12[1] <= 0.0f) & (dsp->fRec12[0] > 0.0f));
			dsp->iRec14[0] = ((1103515245 * dsp->iRec14[1]) + 12345);
			dsp->fRec11[0] = ((dsp->fRec11[1] * (float)(1 - iTemp8)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp8)));
			dsp->fRec10[0] = ((fTemp3 * dsp->fRec10[1]) + ((dsp->fRec11[0] + dsp->fRec11[1]) / fTemp2));
			dsp->fRec9[0] = ((fTemp3 * dsp->fRec9[1]) + ((dsp->fRec10[0] + dsp->fRec10[1]) / fTemp2));
			dsp->fRec8[0] = ((fTemp3 * dsp->fRec8[1]) + ((dsp->fRec9[0] + dsp->fRec9[1]) / fTemp2));
			dsp->fRec7[0] = ((fTemp3 * dsp->fRec7[1]) + ((dsp->fRec8[0] + dsp->fRec8[1]) / fTemp2));
			dsp->fRec6[0] = ((dsp->fRec6[1] * fTemp3) + ((dsp->fRec7[0] + dsp->fRec7[1]) / fTemp2));
			float fTemp9 = (dsp->fRec4[1] + (fSlow11 * (fTemp0 * ((0.00100000005f * dsp->fRec6[0]) + 1.0f))));
			dsp->fRec4[0] = (fTemp9 - floorf(fTemp9));
			float fTemp10 = (1.0f / tanf(fTemp4));
			float fTemp11 = (fTemp10 + 1.0f);
			float fTemp12 = (0.0f - ((1.0f - fTemp10) / fTemp11));
			float fTemp13 = (fSlow17 * fTemp0);
			float fTemp14 = sinf(fTemp13);
			float fTemp15 = cosf(fTemp13);
			dsp->fRec22[0] = ((dsp->fRec23[1] * fTemp14) + (dsp->fRec22[1] * fTemp15));
			dsp->fRec23[0] = (((dsp->fRec23[1] * fTemp15) + (dsp->fRec22[1] * (0.0f - fTemp14))) + (float)iTemp7);
			int iTemp16 = ((dsp->fRec22[1] <= 0.0f) & (dsp->fRec22[0] > 0.0f));
			dsp->fRec21[0] = ((dsp->fRec21[1] * (float)(1 - iTemp16)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp16)));
			dsp->fRec20[0] = ((fTemp12 * dsp->fRec20[1]) + ((dsp->fRec21[0] + dsp->fRec21[1]) / fTemp11));
			dsp->fRec19[0] = ((fTemp12 * dsp->fRec19[1]) + ((dsp->fRec20[0] + dsp->fRec20[1]) / fTemp11));
			dsp->fRec18[0] = ((fTemp12 * dsp->fRec18[1]) + ((dsp->fRec19[0] + dsp->fRec19[1]) / fTemp11));
			dsp->fRec17[0] = ((fTemp12 * dsp->fRec17[1]) + ((dsp->fRec18[0] + dsp->fRec18[1]) / fTemp11));
			dsp->fRec16[0] = ((dsp->fRec16[1] * fTemp12) + ((dsp->fRec17[0] + dsp->fRec17[1]) / fTemp11));
			float fTemp17 = (dsp->fRec15[1] + (fSlow16 * (fTemp0 * ((0.00100000005f * dsp->fRec16[0]) + 1.0f))));
			dsp->fRec15[0] = (fTemp17 - floorf(fTemp17));
			float fTemp18 = (1.0f / tanf((fSlow20 * fTemp0)));
			float fTemp19 = (fTemp18 + 1.0f);
			float fTemp20 = (0.0f - ((1.0f - fTemp18) / fTemp19));
			float fTemp21 = (fSlow21 * fTemp0);
			float fTemp22 = sinf(fTemp21);
			float fTemp23 = cosf(fTemp21);
			dsp->fRec31[0] = ((dsp->fRec32[1] * fTemp22) + (dsp->fRec31[1] * fTemp23));
			dsp->fRec32[0] = (((dsp->fRec32[1] * fTemp23) + (dsp->fRec31[1] * (0.0f - fTemp22))) + (float)iTemp7);
			int iTemp24 = ((dsp->fRec31[1] <= 0.0f) & (dsp->fRec31[0] > 0.0f));
			dsp->fRec30[0] = ((dsp->fRec30[1] * (float)(1 - iTemp24)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp24)));
			dsp->fRec29[0] = ((fTemp20 * dsp->fRec29[1]) + ((dsp->fRec30[0] + dsp->fRec30[1]) / fTemp19));
			dsp->fRec28[0] = ((fTemp20 * dsp->fRec28[1]) + ((dsp->fRec29[0] + dsp->fRec29[1]) / fTemp19));
			dsp->fRec27[0] = ((fTemp20 * dsp->fRec27[1]) + ((dsp->fRec28[0] + dsp->fRec28[1]) / fTemp19));
			dsp->fRec26[0] = ((fTemp20 * dsp->fRec26[1]) + ((dsp->fRec27[0] + dsp->fRec27[1]) / fTemp19));
			dsp->fRec25[0] = ((dsp->fRec25[1] * fTemp20) + ((dsp->fRec26[0] + dsp->fRec26[1]) / fTemp19));
			float fTemp25 = (dsp->fRec24[1] + (fSlow19 * (fTemp0 * ((0.00100000005f * dsp->fRec25[0]) + 1.0f))));
			dsp->fRec24[0] = (fTemp25 - floorf(fTemp25));
			float fTemp26 = (1.0f / tanf(fTemp13));
			float fTemp27 = (fTemp26 + 1.0f);
			float fTemp28 = (0.0f - ((1.0f - fTemp26) / fTemp27));
			float fTemp29 = (fSlow24 * fTemp0);
			float fTemp30 = sinf(fTemp29);
			float fTemp31 = cosf(fTemp29);
			dsp->fRec40[0] = ((dsp->fRec41[1] * fTemp30) + (dsp->fRec40[1] * fTemp31));
			dsp->fRec41[0] = (((dsp->fRec41[1] * fTemp31) + (dsp->fRec40[1] * (0.0f - fTemp30))) + (float)iTemp7);
			int iTemp32 = ((dsp->fRec40[1] <= 0.0f) & (dsp->fRec40[0] > 0.0f));
			dsp->fRec39[0] = ((dsp->fRec39[1] * (float)(1 - iTemp32)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp32)));
			dsp->fRec38[0] = ((fTemp28 * dsp->fRec38[1]) + ((dsp->fRec39[0] + dsp->fRec39[1]) / fTemp27));
			dsp->fRec37[0] = ((fTemp28 * dsp->fRec37[1]) + ((dsp->fRec38[0] + dsp->fRec38[1]) / fTemp27));
			dsp->fRec36[0] = ((fTemp28 * dsp->fRec36[1]) + ((dsp->fRec37[0] + dsp->fRec37[1]) / fTemp27));
			dsp->fRec35[0] = ((fTemp28 * dsp->fRec35[1]) + ((dsp->fRec36[0] + dsp->fRec36[1]) / fTemp27));
			dsp->fRec34[0] = ((dsp->fRec34[1] * fTemp28) + ((dsp->fRec35[0] + dsp->fRec35[1]) / fTemp27));
			float fTemp33 = (dsp->fRec33[1] + (fSlow23 * (fTemp0 * ((0.00100000005f * dsp->fRec34[0]) + 1.0f))));
			dsp->fRec33[0] = (fTemp33 - floorf(fTemp33));
			float fTemp34 = (1.0f / tanf((fSlow27 * fTemp0)));
			float fTemp35 = (fTemp34 + 1.0f);
			float fTemp36 = (0.0f - ((1.0f - fTemp34) / fTemp35));
			float fTemp37 = (fSlow28 * fTemp0);
			float fTemp38 = sinf(fTemp37);
			float fTemp39 = cosf(fTemp37);
			dsp->fRec49[0] = ((dsp->fRec50[1] * fTemp38) + (dsp->fRec49[1] * fTemp39));
			dsp->fRec50[0] = (((dsp->fRec50[1] * fTemp39) + (dsp->fRec49[1] * (0.0f - fTemp38))) + (float)iTemp7);
			int iTemp40 = ((dsp->fRec49[1] <= 0.0f) & (dsp->fRec49[0] > 0.0f));
			dsp->fRec48[0] = ((dsp->fRec48[1] * (float)(1 - iTemp40)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp40)));
			dsp->fRec47[0] = ((fTemp36 * dsp->fRec47[1]) + ((dsp->fRec48[0] + dsp->fRec48[1]) / fTemp35));
			dsp->fRec46[0] = ((fTemp36 * dsp->fRec46[1]) + ((dsp->fRec47[0] + dsp->fRec47[1]) / fTemp35));
			dsp->fRec45[0] = ((fTemp36 * dsp->fRec45[1]) + ((dsp->fRec46[0] + dsp->fRec46[1]) / fTemp35));
			dsp->fRec44[0] = ((fTemp36 * dsp->fRec44[1]) + ((dsp->fRec45[0] + dsp->fRec45[1]) / fTemp35));
			dsp->fRec43[0] = ((dsp->fRec43[1] * fTemp36) + ((dsp->fRec44[0] + dsp->fRec44[1]) / fTemp35));
			float fTemp41 = (dsp->fRec42[1] + (fSlow26 * (fTemp0 * ((0.00100000005f * dsp->fRec43[0]) + 1.0f))));
			dsp->fRec42[0] = (fTemp41 - floorf(fTemp41));
			float fTemp42 = (1.0f / tanf(fTemp21));
			float fTemp43 = (fTemp42 + 1.0f);
			float fTemp44 = (0.0f - ((1.0f - fTemp42) / fTemp43));
			float fTemp45 = (fSlow31 * fTemp0);
			float fTemp46 = sinf(fTemp45);
			float fTemp47 = cosf(fTemp45);
			dsp->fRec58[0] = ((dsp->fRec59[1] * fTemp46) + (dsp->fRec58[1] * fTemp47));
			dsp->fRec59[0] = (((dsp->fRec59[1] * fTemp47) + (dsp->fRec58[1] * (0.0f - fTemp46))) + (float)iTemp7);
			int iTemp48 = ((dsp->fRec58[1] <= 0.0f) & (dsp->fRec58[0] > 0.0f));
			dsp->fRec57[0] = ((dsp->fRec57[1] * (float)(1 - iTemp48)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp48)));
			dsp->fRec56[0] = ((fTemp44 * dsp->fRec56[1]) + ((dsp->fRec57[0] + dsp->fRec57[1]) / fTemp43));
			dsp->fRec55[0] = ((fTemp44 * dsp->fRec55[1]) + ((dsp->fRec56[0] + dsp->fRec56[1]) / fTemp43));
			dsp->fRec54[0] = ((fTemp44 * dsp->fRec54[1]) + ((dsp->fRec55[0] + dsp->fRec55[1]) / fTemp43));
			dsp->fRec53[0] = ((fTemp44 * dsp->fRec53[1]) + ((dsp->fRec54[0] + dsp->fRec54[1]) / fTemp43));
			dsp->fRec52[0] = ((dsp->fRec52[1] * fTemp44) + ((dsp->fRec53[0] + dsp->fRec53[1]) / fTemp43));
			float fTemp49 = (dsp->fRec51[1] + (fSlow30 * (fTemp0 * ((0.00100000005f * dsp->fRec52[0]) + 1.0f))));
			dsp->fRec51[0] = (fTemp49 - floorf(fTemp49));
			float fTemp50 = (1.0f / tanf(fTemp29));
			float fTemp51 = (fTemp50 + 1.0f);
			float fTemp52 = (0.0f - ((1.0f - fTemp50) / fTemp51));
			float fTemp53 = (fSlow34 * fTemp0);
			float fTemp54 = sinf(fTemp53);
			float fTemp55 = cosf(fTemp53);
			dsp->fRec67[0] = ((dsp->fRec68[1] * fTemp54) + (dsp->fRec67[1] * fTemp55));
			dsp->fRec68[0] = (((dsp->fRec68[1] * fTemp55) + (dsp->fRec67[1] * (0.0f - fTemp54))) + (float)iTemp7);
			int iTemp56 = ((dsp->fRec67[1] <= 0.0f) & (dsp->fRec67[0] > 0.0f));
			dsp->fRec66[0] = ((dsp->fRec66[1] * (float)(1 - iTemp56)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp56)));
			dsp->fRec65[0] = ((fTemp52 * dsp->fRec65[1]) + ((dsp->fRec66[0] + dsp->fRec66[1]) / fTemp51));
			dsp->fRec64[0] = ((fTemp52 * dsp->fRec64[1]) + ((dsp->fRec65[0] + dsp->fRec65[1]) / fTemp51));
			dsp->fRec63[0] = ((fTemp52 * dsp->fRec63[1]) + ((dsp->fRec64[0] + dsp->fRec64[1]) / fTemp51));
			dsp->fRec62[0] = ((fTemp52 * dsp->fRec62[1]) + ((dsp->fRec63[0] + dsp->fRec63[1]) / fTemp51));
			dsp->fRec61[0] = ((dsp->fRec61[1] * fTemp52) + ((dsp->fRec62[0] + dsp->fRec62[1]) / fTemp51));
			float fTemp57 = (dsp->fRec60[1] + (fSlow33 * (fTemp0 * ((0.00100000005f * dsp->fRec61[0]) + 1.0f))));
			dsp->fRec60[0] = (fTemp57 - floorf(fTemp57));
			dsp->fRec1[0] = ((fSlow2 * (dsp->fRec2[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec4[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec15[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec24[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec33[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec42[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec51[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec60[0])])))) - (dsp->fConst5 * ((dsp->fConst24 * dsp->fRec1[2]) + (dsp->fConst25 * dsp->fRec1[1]))));
			float fTemp58 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec1[2] + (dsp->fRec1[0] + (2.0f * dsp->fRec1[1])))))) - fSlow1);
			dsp->fVec1[0] = fTemp58;
			dsp->fRec0[0] = (dsp->fConst2 * ((fTemp58 - dsp->fVec1[1]) + (dsp->fConst26 * dsp->fRec0[1])));
			dsp->fRec71[0] = ((dsp->fRec71[1] * fSlow37) + fSlow38);
			float fTemp59 = (1.0f / tanf((fSlow41 * fTemp0)));
			float fTemp60 = (fTemp59 + 1.0f);
			float fTemp61 = (0.0f - ((1.0f - fTemp59) / fTemp60));
			float fTemp62 = (fSlow42 * fTemp0);
			float fTemp63 = sinf(fTemp62);
			float fTemp64 = cosf(fTemp62);
			dsp->fRec79[0] = ((dsp->fRec80[1] * fTemp63) + (dsp->fRec79[1] * fTemp64));
			dsp->fRec80[0] = (((dsp->fRec80[1] * fTemp64) + (dsp->fRec79[1] * (0.0f - fTemp63))) + (float)iTemp7);
			int iTemp65 = ((dsp->fRec79[1] <= 0.0f) & (dsp->fRec79[0] > 0.0f));
			dsp->fRec78[0] = ((dsp->fRec78[1] * (float)(1 - iTemp65)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp65)));
			dsp->fRec77[0] = ((fTemp61 * dsp->fRec77[1]) + ((dsp->fRec78[0] + dsp->fRec78[1]) / fTemp60));
			dsp->fRec76[0] = ((fTemp61 * dsp->fRec76[1]) + ((dsp->fRec77[0] + dsp->fRec77[1]) / fTemp60));
			dsp->fRec75[0] = ((fTemp61 * dsp->fRec75[1]) + ((dsp->fRec76[0] + dsp->fRec76[1]) / fTemp60));
			dsp->fRec74[0] = ((fTemp61 * dsp->fRec74[1]) + ((dsp->fRec75[0] + dsp->fRec75[1]) / fTemp60));
			dsp->fRec73[0] = ((dsp->fRec73[1] * fTemp61) + ((dsp->fRec74[0] + dsp->fRec74[1]) / fTemp60));
			float fTemp66 = (dsp->fRec72[1] + (fSlow40 * (fTemp0 * ((0.00100000005f * dsp->fRec73[0]) + 1.0f))));
			dsp->fRec72[0] = (fTemp66 - floorf(fTemp66));
			float fTemp67 = (1.0f / tanf(fTemp62));
			float fTemp68 = (fTemp67 + 1.0f);
			float fTemp69 = (0.0f - ((1.0f - fTemp67) / fTemp68));
			float fTemp70 = (fSlow44 * fTemp0);
			float fTemp71 = sinf(fTemp70);
			float fTemp72 = cosf(fTemp70);
			dsp->fRec88[0] = ((dsp->fRec89[1] * fTemp71) + (dsp->fRec88[1] * fTemp72));
			dsp->fRec89[0] = (((dsp->fRec89[1] * fTemp72) + (dsp->fRec88[1] * (0.0f - fTemp71))) + (float)iTemp7);
			int iTemp73 = ((dsp->fRec88[1] <= 0.0f) & (dsp->fRec88[0] > 0.0f));
			dsp->fRec87[0] = ((dsp->fRec87[1] * (float)(1 - iTemp73)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp73)));
			dsp->fRec86[0] = ((fTemp69 * dsp->fRec86[1]) + ((dsp->fRec87[0] + dsp->fRec87[1]) / fTemp68));
			dsp->fRec85[0] = ((fTemp69 * dsp->fRec85[1]) + ((dsp->fRec86[0] + dsp->fRec86[1]) / fTemp68));
			dsp->fRec84[0] = ((fTemp69 * dsp->fRec84[1]) + ((dsp->fRec85[0] + dsp->fRec85[1]) / fTemp68));
			dsp->fRec83[0] = ((fTemp69 * dsp->fRec83[1]) + ((dsp->fRec84[0] + dsp->fRec84[1]) / fTemp68));
			dsp->fRec82[0] = ((dsp->fRec82[1] * fTemp69) + ((dsp->fRec83[0] + dsp->fRec83[1]) / fTemp68));
			float fTemp74 = (dsp->fRec81[1] + (fSlow43 * (fTemp0 * ((0.00100000005f * dsp->fRec82[0]) + 1.0f))));
			dsp->fRec81[0] = (fTemp74 - floorf(fTemp74));
			float fTemp75 = (1.0f / tanf((fSlow46 * fTemp0)));
			float fTemp76 = (fTemp75 + 1.0f);
			float fTemp77 = (0.0f - ((1.0f - fTemp75) / fTemp76));
			float fTemp78 = (fSlow47 * fTemp0);
			float fTemp79 = sinf(fTemp78);
			float fTemp80 = cosf(fTemp78);
			dsp->fRec97[0] = ((dsp->fRec98[1] * fTemp79) + (dsp->fRec97[1] * fTemp80));
			dsp->fRec98[0] = (((dsp->fRec98[1] * fTemp80) + (dsp->fRec97[1] * (0.0f - fTemp79))) + (float)iTemp7);
			int iTemp81 = ((dsp->fRec97[1] <= 0.0f) & (dsp->fRec97[0] > 0.0f));
			dsp->fRec96[0] = ((dsp->fRec96[1] * (float)(1 - iTemp81)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp81)));
			dsp->fRec95[0] = ((fTemp77 * dsp->fRec95[1]) + ((dsp->fRec96[0] + dsp->fRec96[1]) / fTemp76));
			dsp->fRec94[0] = ((fTemp77 * dsp->fRec94[1]) + ((dsp->fRec95[0] + dsp->fRec95[1]) / fTemp76));
			dsp->fRec93[0] = ((fTemp77 * dsp->fRec93[1]) + ((dsp->fRec94[0] + dsp->fRec94[1]) / fTemp76));
			dsp->fRec92[0] = ((fTemp77 * dsp->fRec92[1]) + ((dsp->fRec93[0] + dsp->fRec93[1]) / fTemp76));
			dsp->fRec91[0] = ((dsp->fRec91[1] * fTemp77) + ((dsp->fRec92[0] + dsp->fRec92[1]) / fTemp76));
			float fTemp82 = (dsp->fRec90[1] + (fSlow45 * (fTemp0 * ((0.00100000005f * dsp->fRec91[0]) + 1.0f))));
			dsp->fRec90[0] = (fTemp82 - floorf(fTemp82));
			float fTemp83 = (1.0f / tanf(fTemp70));
			float fTemp84 = (fTemp83 + 1.0f);
			float fTemp85 = (0.0f - ((1.0f - fTemp83) / fTemp84));
			float fTemp86 = (fSlow49 * fTemp0);
			float fTemp87 = sinf(fTemp86);
			float fTemp88 = cosf(fTemp86);
			dsp->fRec106[0] = ((dsp->fRec107[1] * fTemp87) + (dsp->fRec106[1] * fTemp88));
			dsp->fRec107[0] = (((dsp->fRec107[1] * fTemp88) + (dsp->fRec106[1] * (0.0f - fTemp87))) + (float)iTemp7);
			int iTemp89 = ((dsp->fRec106[1] <= 0.0f) & (dsp->fRec106[0] > 0.0f));
			dsp->fRec105[0] = ((dsp->fRec105[1] * (float)(1 - iTemp89)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp89)));
			dsp->fRec104[0] = ((fTemp85 * dsp->fRec104[1]) + ((dsp->fRec105[0] + dsp->fRec105[1]) / fTemp84));
			dsp->fRec103[0] = ((fTemp85 * dsp->fRec103[1]) + ((dsp->fRec104[0] + dsp->fRec104[1]) / fTemp84));
			dsp->fRec102[0] = ((fTemp85 * dsp->fRec102[1]) + ((dsp->fRec103[0] + dsp->fRec103[1]) / fTemp84));
			dsp->fRec101[0] = ((fTemp85 * dsp->fRec101[1]) + ((dsp->fRec102[0] + dsp->fRec102[1]) / fTemp84));
			dsp->fRec100[0] = ((dsp->fRec100[1] * fTemp85) + ((dsp->fRec101[0] + dsp->fRec101[1]) / fTemp84));
			float fTemp90 = (dsp->fRec99[1] + (fSlow48 * (fTemp0 * ((0.00100000005f * dsp->fRec100[0]) + 1.0f))));
			dsp->fRec99[0] = (fTemp90 - floorf(fTemp90));
			float fTemp91 = (1.0f / tanf((fSlow51 * fTemp0)));
			float fTemp92 = (fTemp91 + 1.0f);
			float fTemp93 = (0.0f - ((1.0f - fTemp91) / fTemp92));
			float fTemp94 = (fSlow52 * fTemp0);
			float fTemp95 = sinf(fTemp94);
			float fTemp96 = cosf(fTemp94);
			dsp->fRec115[0] = ((dsp->fRec116[1] * fTemp95) + (dsp->fRec115[1] * fTemp96));
			dsp->fRec116[0] = (((dsp->fRec116[1] * fTemp96) + (dsp->fRec115[1] * (0.0f - fTemp95))) + (float)iTemp7);
			int iTemp97 = ((dsp->fRec115[1] <= 0.0f) & (dsp->fRec115[0] > 0.0f));
			dsp->fRec114[0] = ((dsp->fRec114[1] * (float)(1 - iTemp97)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp97)));
			dsp->fRec113[0] = ((fTemp93 * dsp->fRec113[1]) + ((dsp->fRec114[0] + dsp->fRec114[1]) / fTemp92));
			dsp->fRec112[0] = ((fTemp93 * dsp->fRec112[1]) + ((dsp->fRec113[0] + dsp->fRec113[1]) / fTemp92));
			dsp->fRec111[0] = ((fTemp93 * dsp->fRec111[1]) + ((dsp->fRec112[0] + dsp->fRec112[1]) / fTemp92));
			dsp->fRec110[0] = ((fTemp93 * dsp->fRec110[1]) + ((dsp->fRec111[0] + dsp->fRec111[1]) / fTemp92));
			dsp->fRec109[0] = ((dsp->fRec109[1] * fTemp93) + ((dsp->fRec110[0] + dsp->fRec110[1]) / fTemp92));
			float fTemp98 = (dsp->fRec108[1] + (fSlow50 * (fTemp0 * ((0.00100000005f * dsp->fRec109[0]) + 1.0f))));
			dsp->fRec108[0] = (fTemp98 - floorf(fTemp98));
			float fTemp99 = (1.0f / tanf(fTemp78));
			float fTemp100 = (fTemp99 + 1.0f);
			float fTemp101 = (0.0f - ((1.0f - fTemp99) / fTemp100));
			float fTemp102 = (fSlow54 * fTemp0);
			float fTemp103 = sinf(fTemp102);
			float fTemp104 = cosf(fTemp102);
			dsp->fRec124[0] = ((dsp->fRec125[1] * fTemp103) + (dsp->fRec124[1] * fTemp104));
			dsp->fRec125[0] = (((dsp->fRec125[1] * fTemp104) + (dsp->fRec124[1] * (0.0f - fTemp103))) + (float)iTemp7);
			int iTemp105 = ((dsp->fRec124[1] <= 0.0f) & (dsp->fRec124[0] > 0.0f));
			dsp->fRec123[0] = ((dsp->fRec123[1] * (float)(1 - iTemp105)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp105)));
			dsp->fRec122[0] = ((fTemp101 * dsp->fRec122[1]) + ((dsp->fRec123[0] + dsp->fRec123[1]) / fTemp100));
			dsp->fRec121[0] = ((fTemp101 * dsp->fRec121[1]) + ((dsp->fRec122[0] + dsp->fRec122[1]) / fTemp100));
			dsp->fRec120[0] = ((fTemp101 * dsp->fRec120[1]) + ((dsp->fRec121[0] + dsp->fRec121[1]) / fTemp100));
			dsp->fRec119[0] = ((fTemp101 * dsp->fRec119[1]) + ((dsp->fRec120[0] + dsp->fRec120[1]) / fTemp100));
			dsp->fRec118[0] = ((dsp->fRec118[1] * fTemp101) + ((dsp->fRec119[0] + dsp->fRec119[1]) / fTemp100));
			float fTemp106 = (dsp->fRec117[1] + (fSlow53 * (fTemp0 * ((0.00100000005f * dsp->fRec118[0]) + 1.0f))));
			dsp->fRec117[0] = (fTemp106 - floorf(fTemp106));
			float fTemp107 = (1.0f / tanf(fTemp86));
			float fTemp108 = (fTemp107 + 1.0f);
			float fTemp109 = (0.0f - ((1.0f - fTemp107) / fTemp108));
			float fTemp110 = (fSlow56 * fTemp0);
			float fTemp111 = sinf(fTemp110);
			float fTemp112 = cosf(fTemp110);
			dsp->fRec133[0] = ((dsp->fRec134[1] * fTemp111) + (dsp->fRec133[1] * fTemp112));
			dsp->fRec134[0] = (((dsp->fRec134[1] * fTemp112) + (dsp->fRec133[1] * (0.0f - fTemp111))) + (float)iTemp7);
			int iTemp113 = ((dsp->fRec133[1] <= 0.0f) & (dsp->fRec133[0] > 0.0f));
			dsp->fRec132[0] = ((dsp->fRec132[1] * (float)(1 - iTemp113)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp113)));
			dsp->fRec131[0] = ((fTemp109 * dsp->fRec131[1]) + ((dsp->fRec132[0] + dsp->fRec132[1]) / fTemp108));
			dsp->fRec130[0] = ((fTemp109 * dsp->fRec130[1]) + ((dsp->fRec131[0] + dsp->fRec131[1]) / fTemp108));
			dsp->fRec129[0] = ((fTemp109 * dsp->fRec129[1]) + ((dsp->fRec130[0] + dsp->fRec130[1]) / fTemp108));
			dsp->fRec128[0] = ((fTemp109 * dsp->fRec128[1]) + ((dsp->fRec129[0] + dsp->fRec129[1]) / fTemp108));
			dsp->fRec127[0] = ((dsp->fRec127[1] * fTemp109) + ((dsp->fRec128[0] + dsp->fRec128[1]) / fTemp108));
			float fTemp114 = (dsp->fRec126[1] + (fSlow55 * (fTemp0 * ((0.00100000005f * dsp->fRec127[0]) + 1.0f))));
			dsp->fRec126[0] = (fTemp114 - floorf(fTemp114));
			dsp->fRec70[0] = ((fSlow2 * (dsp->fRec71[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec72[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec81[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec90[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec99[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec108[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec117[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec126[0])])))) - (dsp->fConst5 * ((dsp->fConst24 * dsp->fRec70[2]) + (dsp->fConst25 * dsp->fRec70[1]))));
			float fTemp115 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec70[2] + (dsp->fRec70[0] + (2.0f * dsp->fRec70[1])))))) - fSlow1);
			dsp->fVec2[0] = fTemp115;
			dsp->fRec69[0] = (dsp->fConst2 * ((fTemp115 - dsp->fVec2[1]) + (dsp->fConst26 * dsp->fRec69[1])));
			dsp->fRec137[0] = ((dsp->fRec137[1] * fSlow59) + fSlow60);
			float fTemp116 = (1.0f / tanf((fSlow63 * fTemp0)));
			float fTemp117 = (fTemp116 + 1.0f);
			float fTemp118 = (0.0f - ((1.0f - fTemp116) / fTemp117));
			float fTemp119 = (fSlow64 * fTemp0);
			float fTemp120 = sinf(fTemp119);
			float fTemp121 = cosf(fTemp119);
			dsp->fRec145[0] = ((dsp->fRec146[1] * fTemp120) + (dsp->fRec145[1] * fTemp121));
			dsp->fRec146[0] = (((dsp->fRec146[1] * fTemp121) + (dsp->fRec145[1] * (0.0f - fTemp120))) + (float)iTemp7);
			int iTemp122 = ((dsp->fRec145[1] <= 0.0f) & (dsp->fRec145[0] > 0.0f));
			dsp->fRec144[0] = ((dsp->fRec144[1] * (float)(1 - iTemp122)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp122)));
			dsp->fRec143[0] = ((fTemp118 * dsp->fRec143[1]) + ((dsp->fRec144[0] + dsp->fRec144[1]) / fTemp117));
			dsp->fRec142[0] = ((fTemp118 * dsp->fRec142[1]) + ((dsp->fRec143[0] + dsp->fRec143[1]) / fTemp117));
			dsp->fRec141[0] = ((fTemp118 * dsp->fRec141[1]) + ((dsp->fRec142[0] + dsp->fRec142[1]) / fTemp117));
			dsp->fRec140[0] = ((fTemp118 * dsp->fRec140[1]) + ((dsp->fRec141[0] + dsp->fRec141[1]) / fTemp117));
			dsp->fRec139[0] = ((dsp->fRec139[1] * fTemp118) + ((dsp->fRec140[0] + dsp->fRec140[1]) / fTemp117));
			float fTemp123 = (dsp->fRec138[1] + (fSlow62 * (fTemp0 * ((0.00100000005f * dsp->fRec139[0]) + 1.0f))));
			dsp->fRec138[0] = (fTemp123 - floorf(fTemp123));
			float fTemp124 = (1.0f / tanf(fTemp119));
			float fTemp125 = (fTemp124 + 1.0f);
			float fTemp126 = (0.0f - ((1.0f - fTemp124) / fTemp125));
			float fTemp127 = (fSlow66 * fTemp0);
			float fTemp128 = sinf(fTemp127);
			float fTemp129 = cosf(fTemp127);
			dsp->fRec154[0] = ((dsp->fRec155[1] * fTemp128) + (dsp->fRec154[1] * fTemp129));
			dsp->fRec155[0] = (((dsp->fRec155[1] * fTemp129) + (dsp->fRec154[1] * (0.0f - fTemp128))) + (float)iTemp7);
			int iTemp130 = ((dsp->fRec154[1] <= 0.0f) & (dsp->fRec154[0] > 0.0f));
			dsp->fRec153[0] = ((dsp->fRec153[1] * (float)(1 - iTemp130)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp130)));
			dsp->fRec152[0] = ((fTemp126 * dsp->fRec152[1]) + ((dsp->fRec153[0] + dsp->fRec153[1]) / fTemp125));
			dsp->fRec151[0] = ((fTemp126 * dsp->fRec151[1]) + ((dsp->fRec152[0] + dsp->fRec152[1]) / fTemp125));
			dsp->fRec150[0] = ((fTemp126 * dsp->fRec150[1]) + ((dsp->fRec151[0] + dsp->fRec151[1]) / fTemp125));
			dsp->fRec149[0] = ((fTemp126 * dsp->fRec149[1]) + ((dsp->fRec150[0] + dsp->fRec150[1]) / fTemp125));
			dsp->fRec148[0] = ((dsp->fRec148[1] * fTemp126) + ((dsp->fRec149[0] + dsp->fRec149[1]) / fTemp125));
			float fTemp131 = (dsp->fRec147[1] + (fSlow65 * (fTemp0 * ((0.00100000005f * dsp->fRec148[0]) + 1.0f))));
			dsp->fRec147[0] = (fTemp131 - floorf(fTemp131));
			float fTemp132 = (1.0f / tanf((fSlow68 * fTemp0)));
			float fTemp133 = (fTemp132 + 1.0f);
			float fTemp134 = (0.0f - ((1.0f - fTemp132) / fTemp133));
			float fTemp135 = (fSlow69 * fTemp0);
			float fTemp136 = sinf(fTemp135);
			float fTemp137 = cosf(fTemp135);
			dsp->fRec163[0] = ((dsp->fRec164[1] * fTemp136) + (dsp->fRec163[1] * fTemp137));
			dsp->fRec164[0] = (((dsp->fRec164[1] * fTemp137) + (dsp->fRec163[1] * (0.0f - fTemp136))) + (float)iTemp7);
			int iTemp138 = ((dsp->fRec163[1] <= 0.0f) & (dsp->fRec163[0] > 0.0f));
			dsp->fRec162[0] = ((dsp->fRec162[1] * (float)(1 - iTemp138)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp138)));
			dsp->fRec161[0] = ((fTemp134 * dsp->fRec161[1]) + ((dsp->fRec162[0] + dsp->fRec162[1]) / fTemp133));
			dsp->fRec160[0] = ((fTemp134 * dsp->fRec160[1]) + ((dsp->fRec161[0] + dsp->fRec161[1]) / fTemp133));
			dsp->fRec159[0] = ((fTemp134 * dsp->fRec159[1]) + ((dsp->fRec160[0] + dsp->fRec160[1]) / fTemp133));
			dsp->fRec158[0] = ((fTemp134 * dsp->fRec158[1]) + ((dsp->fRec159[0] + dsp->fRec159[1]) / fTemp133));
			dsp->fRec157[0] = ((dsp->fRec157[1] * fTemp134) + ((dsp->fRec158[0] + dsp->fRec158[1]) / fTemp133));
			float fTemp139 = (dsp->fRec156[1] + (fSlow67 * (fTemp0 * ((0.00100000005f * dsp->fRec157[0]) + 1.0f))));
			dsp->fRec156[0] = (fTemp139 - floorf(fTemp139));
			float fTemp140 = (1.0f / tanf(fTemp127));
			float fTemp141 = (fTemp140 + 1.0f);
			float fTemp142 = (0.0f - ((1.0f - fTemp140) / fTemp141));
			float fTemp143 = (fSlow71 * fTemp0);
			float fTemp144 = sinf(fTemp143);
			float fTemp145 = cosf(fTemp143);
			dsp->fRec172[0] = ((dsp->fRec173[1] * fTemp144) + (dsp->fRec172[1] * fTemp145));
			dsp->fRec173[0] = (((dsp->fRec173[1] * fTemp145) + (dsp->fRec172[1] * (0.0f - fTemp144))) + (float)iTemp7);
			int iTemp146 = ((dsp->fRec172[1] <= 0.0f) & (dsp->fRec172[0] > 0.0f));
			dsp->fRec171[0] = ((dsp->fRec171[1] * (float)(1 - iTemp146)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp146)));
			dsp->fRec170[0] = ((fTemp142 * dsp->fRec170[1]) + ((dsp->fRec171[0] + dsp->fRec171[1]) / fTemp141));
			dsp->fRec169[0] = ((fTemp142 * dsp->fRec169[1]) + ((dsp->fRec170[0] + dsp->fRec170[1]) / fTemp141));
			dsp->fRec168[0] = ((fTemp142 * dsp->fRec168[1]) + ((dsp->fRec169[0] + dsp->fRec169[1]) / fTemp141));
			dsp->fRec167[0] = ((fTemp142 * dsp->fRec167[1]) + ((dsp->fRec168[0] + dsp->fRec168[1]) / fTemp141));
			dsp->fRec166[0] = ((dsp->fRec166[1] * fTemp142) + ((dsp->fRec167[0] + dsp->fRec167[1]) / fTemp141));
			float fTemp147 = (dsp->fRec165[1] + (fSlow70 * (fTemp0 * ((0.00100000005f * dsp->fRec166[0]) + 1.0f))));
			dsp->fRec165[0] = (fTemp147 - floorf(fTemp147));
			float fTemp148 = (1.0f / tanf((fSlow73 * fTemp0)));
			float fTemp149 = (fTemp148 + 1.0f);
			float fTemp150 = (0.0f - ((1.0f - fTemp148) / fTemp149));
			float fTemp151 = (fSlow74 * fTemp0);
			float fTemp152 = sinf(fTemp151);
			float fTemp153 = cosf(fTemp151);
			dsp->fRec181[0] = ((dsp->fRec182[1] * fTemp152) + (dsp->fRec181[1] * fTemp153));
			dsp->fRec182[0] = (((dsp->fRec182[1] * fTemp153) + (dsp->fRec181[1] * (0.0f - fTemp152))) + (float)iTemp7);
			int iTemp154 = ((dsp->fRec181[1] <= 0.0f) & (dsp->fRec181[0] > 0.0f));
			dsp->fRec180[0] = ((dsp->fRec180[1] * (float)(1 - iTemp154)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp154)));
			dsp->fRec179[0] = ((fTemp150 * dsp->fRec179[1]) + ((dsp->fRec180[0] + dsp->fRec180[1]) / fTemp149));
			dsp->fRec178[0] = ((fTemp150 * dsp->fRec178[1]) + ((dsp->fRec179[0] + dsp->fRec179[1]) / fTemp149));
			dsp->fRec177[0] = ((fTemp150 * dsp->fRec177[1]) + ((dsp->fRec178[0] + dsp->fRec178[1]) / fTemp149));
			dsp->fRec176[0] = ((fTemp150 * dsp->fRec176[1]) + ((dsp->fRec177[0] + dsp->fRec177[1]) / fTemp149));
			dsp->fRec175[0] = ((dsp->fRec175[1] * fTemp150) + ((dsp->fRec176[0] + dsp->fRec176[1]) / fTemp149));
			float fTemp155 = (dsp->fRec174[1] + (fSlow72 * (fTemp0 * ((0.00100000005f * dsp->fRec175[0]) + 1.0f))));
			dsp->fRec174[0] = (fTemp155 - floorf(fTemp155));
			float fTemp156 = (1.0f / tanf(fTemp135));
			float fTemp157 = (fTemp156 + 1.0f);
			float fTemp158 = (0.0f - ((1.0f - fTemp156) / fTemp157));
			float fTemp159 = (fSlow76 * fTemp0);
			float fTemp160 = sinf(fTemp159);
			float fTemp161 = cosf(fTemp159);
			dsp->fRec190[0] = ((dsp->fRec191[1] * fTemp160) + (dsp->fRec190[1] * fTemp161));
			dsp->fRec191[0] = (((dsp->fRec191[1] * fTemp161) + (dsp->fRec190[1] * (0.0f - fTemp160))) + (float)iTemp7);
			int iTemp162 = ((dsp->fRec190[1] <= 0.0f) & (dsp->fRec190[0] > 0.0f));
			dsp->fRec189[0] = ((dsp->fRec189[1] * (float)(1 - iTemp162)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp162)));
			dsp->fRec188[0] = ((fTemp158 * dsp->fRec188[1]) + ((dsp->fRec189[0] + dsp->fRec189[1]) / fTemp157));
			dsp->fRec187[0] = ((fTemp158 * dsp->fRec187[1]) + ((dsp->fRec188[0] + dsp->fRec188[1]) / fTemp157));
			dsp->fRec186[0] = ((fTemp158 * dsp->fRec186[1]) + ((dsp->fRec187[0] + dsp->fRec187[1]) / fTemp157));
			dsp->fRec185[0] = ((fTemp158 * dsp->fRec185[1]) + ((dsp->fRec186[0] + dsp->fRec186[1]) / fTemp157));
			dsp->fRec184[0] = ((dsp->fRec184[1] * fTemp158) + ((dsp->fRec185[0] + dsp->fRec185[1]) / fTemp157));
			float fTemp163 = (dsp->fRec183[1] + (fSlow75 * (fTemp0 * ((0.00100000005f * dsp->fRec184[0]) + 1.0f))));
			dsp->fRec183[0] = (fTemp163 - floorf(fTemp163));
			float fTemp164 = (1.0f / tanf(fTemp143));
			float fTemp165 = (fTemp164 + 1.0f);
			float fTemp166 = (0.0f - ((1.0f - fTemp164) / fTemp165));
			float fTemp167 = (fSlow78 * fTemp0);
			float fTemp168 = sinf(fTemp167);
			float fTemp169 = cosf(fTemp167);
			dsp->fRec199[0] = ((dsp->fRec200[1] * fTemp168) + (dsp->fRec199[1] * fTemp169));
			dsp->fRec200[0] = (((dsp->fRec200[1] * fTemp169) + (dsp->fRec199[1] * (0.0f - fTemp168))) + (float)iTemp7);
			int iTemp170 = ((dsp->fRec199[1] <= 0.0f) & (dsp->fRec199[0] > 0.0f));
			dsp->fRec198[0] = ((dsp->fRec198[1] * (float)(1 - iTemp170)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp170)));
			dsp->fRec197[0] = ((fTemp166 * dsp->fRec197[1]) + ((dsp->fRec198[0] + dsp->fRec198[1]) / fTemp165));
			dsp->fRec196[0] = ((fTemp166 * dsp->fRec196[1]) + ((dsp->fRec197[0] + dsp->fRec197[1]) / fTemp165));
			dsp->fRec195[0] = ((fTemp166 * dsp->fRec195[1]) + ((dsp->fRec196[0] + dsp->fRec196[1]) / fTemp165));
			dsp->fRec194[0] = ((fTemp166 * dsp->fRec194[1]) + ((dsp->fRec195[0] + dsp->fRec195[1]) / fTemp165));
			dsp->fRec193[0] = ((dsp->fRec193[1] * fTemp166) + ((dsp->fRec194[0] + dsp->fRec194[1]) / fTemp165));
			float fTemp171 = (dsp->fRec192[1] + (fSlow77 * (fTemp0 * ((0.00100000005f * dsp->fRec193[0]) + 1.0f))));
			dsp->fRec192[0] = (fTemp171 - floorf(fTemp171));
			dsp->fRec136[0] = ((fSlow2 * (dsp->fRec137[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec138[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec147[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec156[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec165[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec174[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec183[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec192[0])])))) - (dsp->fConst5 * ((dsp->fConst24 * dsp->fRec136[2]) + (dsp->fConst25 * dsp->fRec136[1]))));
			float fTemp172 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec136[2] + (dsp->fRec136[0] + (2.0f * dsp->fRec136[1])))))) - fSlow1);
			dsp->fVec3[0] = fTemp172;
			dsp->fRec135[0] = (dsp->fConst2 * ((fTemp172 - dsp->fVec3[1]) + (dsp->fConst26 * dsp->fRec135[1])));
			dsp->fRec203[0] = ((dsp->fRec203[1] * fSlow81) + fSlow82);
			float fTemp173 = (1.0f / tanf((fSlow85 * fTemp0)));
			float fTemp174 = (fTemp173 + 1.0f);
			float fTemp175 = (0.0f - ((1.0f - fTemp173) / fTemp174));
			float fTemp176 = (fSlow86 * fTemp0);
			float fTemp177 = sinf(fTemp176);
			float fTemp178 = cosf(fTemp176);
			dsp->fRec211[0] = ((dsp->fRec212[1] * fTemp177) + (dsp->fRec211[1] * fTemp178));
			dsp->fRec212[0] = (((dsp->fRec212[1] * fTemp178) + (dsp->fRec211[1] * (0.0f - fTemp177))) + (float)iTemp7);
			int iTemp179 = ((dsp->fRec211[1] <= 0.0f) & (dsp->fRec211[0] > 0.0f));
			dsp->fRec210[0] = ((dsp->fRec210[1] * (float)(1 - iTemp179)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp179)));
			dsp->fRec209[0] = ((fTemp175 * dsp->fRec209[1]) + ((dsp->fRec210[0] + dsp->fRec210[1]) / fTemp174));
			dsp->fRec208[0] = ((fTemp175 * dsp->fRec208[1]) + ((dsp->fRec209[0] + dsp->fRec209[1]) / fTemp174));
			dsp->fRec207[0] = ((fTemp175 * dsp->fRec207[1]) + ((dsp->fRec208[0] + dsp->fRec208[1]) / fTemp174));
			dsp->fRec206[0] = ((fTemp175 * dsp->fRec206[1]) + ((dsp->fRec207[0] + dsp->fRec207[1]) / fTemp174));
			dsp->fRec205[0] = ((dsp->fRec205[1] * fTemp175) + ((dsp->fRec206[0] + dsp->fRec206[1]) / fTemp174));
			float fTemp180 = (dsp->fRec204[1] + (fSlow84 * (fTemp0 * ((0.00100000005f * dsp->fRec205[0]) + 1.0f))));
			dsp->fRec204[0] = (fTemp180 - floorf(fTemp180));
			float fTemp181 = (1.0f / tanf(fTemp176));
			float fTemp182 = (fTemp181 + 1.0f);
			float fTemp183 = (0.0f - ((1.0f - fTemp181) / fTemp182));
			float fTemp184 = (fSlow88 * fTemp0);
			float fTemp185 = sinf(fTemp184);
			float fTemp186 = cosf(fTemp184);
			dsp->fRec220[0] = ((dsp->fRec221[1] * fTemp185) + (dsp->fRec220[1] * fTemp186));
			dsp->fRec221[0] = (((dsp->fRec221[1] * fTemp186) + (dsp->fRec220[1] * (0.0f - fTemp185))) + (float)iTemp7);
			int iTemp187 = ((dsp->fRec220[1] <= 0.0f) & (dsp->fRec220[0] > 0.0f));
			dsp->fRec219[0] = ((dsp->fRec219[1] * (float)(1 - iTemp187)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp187)));
			dsp->fRec218[0] = ((fTemp183 * dsp->fRec218[1]) + ((dsp->fRec219[0] + dsp->fRec219[1]) / fTemp182));
			dsp->fRec217[0] = ((fTemp183 * dsp->fRec217[1]) + ((dsp->fRec218[0] + dsp->fRec218[1]) / fTemp182));
			dsp->fRec216[0] = ((fTemp183 * dsp->fRec216[1]) + ((dsp->fRec217[0] + dsp->fRec217[1]) / fTemp182));
			dsp->fRec215[0] = ((fTemp183 * dsp->fRec215[1]) + ((dsp->fRec216[0] + dsp->fRec216[1]) / fTemp182));
			dsp->fRec214[0] = ((dsp->fRec214[1] * fTemp183) + ((dsp->fRec215[0] + dsp->fRec215[1]) / fTemp182));
			float fTemp188 = (dsp->fRec213[1] + (fSlow87 * (fTemp0 * ((0.00100000005f * dsp->fRec214[0]) + 1.0f))));
			dsp->fRec213[0] = (fTemp188 - floorf(fTemp188));
			float fTemp189 = (1.0f / tanf((fSlow90 * fTemp0)));
			float fTemp190 = (fTemp189 + 1.0f);
			float fTemp191 = (0.0f - ((1.0f - fTemp189) / fTemp190));
			float fTemp192 = (fSlow91 * fTemp0);
			float fTemp193 = sinf(fTemp192);
			float fTemp194 = cosf(fTemp192);
			dsp->fRec229[0] = ((dsp->fRec230[1] * fTemp193) + (dsp->fRec229[1] * fTemp194));
			dsp->fRec230[0] = (((dsp->fRec230[1] * fTemp194) + (dsp->fRec229[1] * (0.0f - fTemp193))) + (float)iTemp7);
			int iTemp195 = ((dsp->fRec229[1] <= 0.0f) & (dsp->fRec229[0] > 0.0f));
			dsp->fRec228[0] = ((dsp->fRec228[1] * (float)(1 - iTemp195)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp195)));
			dsp->fRec227[0] = ((fTemp191 * dsp->fRec227[1]) + ((dsp->fRec228[0] + dsp->fRec228[1]) / fTemp190));
			dsp->fRec226[0] = ((fTemp191 * dsp->fRec226[1]) + ((dsp->fRec227[0] + dsp->fRec227[1]) / fTemp190));
			dsp->fRec225[0] = ((fTemp191 * dsp->fRec225[1]) + ((dsp->fRec226[0] + dsp->fRec226[1]) / fTemp190));
			dsp->fRec224[0] = ((fTemp191 * dsp->fRec224[1]) + ((dsp->fRec225[0] + dsp->fRec225[1]) / fTemp190));
			dsp->fRec223[0] = ((dsp->fRec223[1] * fTemp191) + ((dsp->fRec224[0] + dsp->fRec224[1]) / fTemp190));
			float fTemp196 = (dsp->fRec222[1] + (fSlow89 * (fTemp0 * ((0.00100000005f * dsp->fRec223[0]) + 1.0f))));
			dsp->fRec222[0] = (fTemp196 - floorf(fTemp196));
			float fTemp197 = (1.0f / tanf(fTemp184));
			float fTemp198 = (fTemp197 + 1.0f);
			float fTemp199 = (0.0f - ((1.0f - fTemp197) / fTemp198));
			float fTemp200 = (fSlow93 * fTemp0);
			float fTemp201 = sinf(fTemp200);
			float fTemp202 = cosf(fTemp200);
			dsp->fRec238[0] = ((dsp->fRec239[1] * fTemp201) + (dsp->fRec238[1] * fTemp202));
			dsp->fRec239[0] = (((dsp->fRec239[1] * fTemp202) + (dsp->fRec238[1] * (0.0f - fTemp201))) + (float)iTemp7);
			int iTemp203 = ((dsp->fRec238[1] <= 0.0f) & (dsp->fRec238[0] > 0.0f));
			dsp->fRec237[0] = ((dsp->fRec237[1] * (float)(1 - iTemp203)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp203)));
			dsp->fRec236[0] = ((fTemp199 * dsp->fRec236[1]) + ((dsp->fRec237[0] + dsp->fRec237[1]) / fTemp198));
			dsp->fRec235[0] = ((fTemp199 * dsp->fRec235[1]) + ((dsp->fRec236[0] + dsp->fRec236[1]) / fTemp198));
			dsp->fRec234[0] = ((fTemp199 * dsp->fRec234[1]) + ((dsp->fRec235[0] + dsp->fRec235[1]) / fTemp198));
			dsp->fRec233[0] = ((fTemp199 * dsp->fRec233[1]) + ((dsp->fRec234[0] + dsp->fRec234[1]) / fTemp198));
			dsp->fRec232[0] = ((dsp->fRec232[1] * fTemp199) + ((dsp->fRec233[0] + dsp->fRec233[1]) / fTemp198));
			float fTemp204 = (dsp->fRec231[1] + (fSlow92 * (fTemp0 * ((0.00100000005f * dsp->fRec232[0]) + 1.0f))));
			dsp->fRec231[0] = (fTemp204 - floorf(fTemp204));
			float fTemp205 = (1.0f / tanf((fSlow95 * fTemp0)));
			float fTemp206 = (fTemp205 + 1.0f);
			float fTemp207 = (0.0f - ((1.0f - fTemp205) / fTemp206));
			float fTemp208 = (fSlow96 * fTemp0);
			float fTemp209 = sinf(fTemp208);
			float fTemp210 = cosf(fTemp208);
			dsp->fRec247[0] = ((dsp->fRec248[1] * fTemp209) + (dsp->fRec247[1] * fTemp210));
			dsp->fRec248[0] = (((dsp->fRec248[1] * fTemp210) + (dsp->fRec247[1] * (0.0f - fTemp209))) + (float)iTemp7);
			int iTemp211 = ((dsp->fRec247[1] <= 0.0f) & (dsp->fRec247[0] > 0.0f));
			dsp->fRec246[0] = ((dsp->fRec246[1] * (float)(1 - iTemp211)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp211)));
			dsp->fRec245[0] = ((fTemp207 * dsp->fRec245[1]) + ((dsp->fRec246[0] + dsp->fRec246[1]) / fTemp206));
			dsp->fRec244[0] = ((fTemp207 * dsp->fRec244[1]) + ((dsp->fRec245[0] + dsp->fRec245[1]) / fTemp206));
			dsp->fRec243[0] = ((fTemp207 * dsp->fRec243[1]) + ((dsp->fRec244[0] + dsp->fRec244[1]) / fTemp206));
			dsp->fRec242[0] = ((fTemp207 * dsp->fRec242[1]) + ((dsp->fRec243[0] + dsp->fRec243[1]) / fTemp206));
			dsp->fRec241[0] = ((dsp->fRec241[1] * fTemp207) + ((dsp->fRec242[0] + dsp->fRec242[1]) / fTemp206));
			float fTemp212 = (dsp->fRec240[1] + (fSlow94 * (fTemp0 * ((0.00100000005f * dsp->fRec241[0]) + 1.0f))));
			dsp->fRec240[0] = (fTemp212 - floorf(fTemp212));
			float fTemp213 = (1.0f / tanf(fTemp192));
			float fTemp214 = (fTemp213 + 1.0f);
			float fTemp215 = (0.0f - ((1.0f - fTemp213) / fTemp214));
			float fTemp216 = (fSlow98 * fTemp0);
			float fTemp217 = sinf(fTemp216);
			float fTemp218 = cosf(fTemp216);
			dsp->fRec256[0] = ((dsp->fRec257[1] * fTemp217) + (dsp->fRec256[1] * fTemp218));
			dsp->fRec257[0] = (((dsp->fRec257[1] * fTemp218) + (dsp->fRec256[1] * (0.0f - fTemp217))) + (float)iTemp7);
			int iTemp219 = ((dsp->fRec256[1] <= 0.0f) & (dsp->fRec256[0] > 0.0f));
			dsp->fRec255[0] = ((dsp->fRec255[1] * (float)(1 - iTemp219)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp219)));
			dsp->fRec254[0] = ((fTemp215 * dsp->fRec254[1]) + ((dsp->fRec255[0] + dsp->fRec255[1]) / fTemp214));
			dsp->fRec253[0] = ((fTemp215 * dsp->fRec253[1]) + ((dsp->fRec254[0] + dsp->fRec254[1]) / fTemp214));
			dsp->fRec252[0] = ((fTemp215 * dsp->fRec252[1]) + ((dsp->fRec253[0] + dsp->fRec253[1]) / fTemp214));
			dsp->fRec251[0] = ((fTemp215 * dsp->fRec251[1]) + ((dsp->fRec252[0] + dsp->fRec252[1]) / fTemp214));
			dsp->fRec250[0] = ((dsp->fRec250[1] * fTemp215) + ((dsp->fRec251[0] + dsp->fRec251[1]) / fTemp214));
			float fTemp220 = (dsp->fRec249[1] + (fSlow97 * (fTemp0 * ((0.00100000005f * dsp->fRec250[0]) + 1.0f))));
			dsp->fRec249[0] = (fTemp220 - floorf(fTemp220));
			float fTemp221 = (1.0f / tanf(fTemp200));
			float fTemp222 = (fTemp221 + 1.0f);
			float fTemp223 = (0.0f - ((1.0f - fTemp221) / fTemp222));
			float fTemp224 = (fSlow100 * fTemp0);
			float fTemp225 = sinf(fTemp224);
			float fTemp226 = cosf(fTemp224);
			dsp->fRec265[0] = ((dsp->fRec266[1] * fTemp225) + (dsp->fRec265[1] * fTemp226));
			dsp->fRec266[0] = (((dsp->fRec266[1] * fTemp226) + (dsp->fRec265[1] * (0.0f - fTemp225))) + (float)iTemp7);
			int iTemp227 = ((dsp->fRec265[1] <= 0.0f) & (dsp->fRec265[0] > 0.0f));
			dsp->fRec264[0] = ((dsp->fRec264[1] * (float)(1 - iTemp227)) + (4.65661287e-10f * (float)(dsp->iRec14[0] * iTemp227)));
			dsp->fRec263[0] = ((fTemp223 * dsp->fRec263[1]) + ((dsp->fRec264[0] + dsp->fRec264[1]) / fTemp222));
			dsp->fRec262[0] = ((fTemp223 * dsp->fRec262[1]) + ((dsp->fRec263[0] + dsp->fRec263[1]) / fTemp222));
			dsp->fRec261[0] = ((fTemp223 * dsp->fRec261[1]) + ((dsp->fRec262[0] + dsp->fRec262[1]) / fTemp222));
			dsp->fRec260[0] = ((fTemp223 * dsp->fRec260[1]) + ((dsp->fRec261[0] + dsp->fRec261[1]) / fTemp222));
			dsp->fRec259[0] = ((dsp->fRec259[1] * fTemp223) + ((dsp->fRec260[0] + dsp->fRec260[1]) / fTemp222));
			float fTemp228 = (dsp->fRec258[1] + (fSlow99 * (fTemp0 * ((0.00100000005f * dsp->fRec259[0]) + 1.0f))));
			dsp->fRec258[0] = (fTemp228 - floorf(fTemp228));
			dsp->fRec202[0] = ((fSlow2 * (dsp->fRec203[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec204[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec213[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec222[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec231[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec240[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec249[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec258[0])])))) - (dsp->fConst5 * ((dsp->fConst24 * dsp->fRec202[2]) + (dsp->fConst25 * dsp->fRec202[1]))));
			float fTemp229 = ((float)tanhf((float)(fSlow1 + (dsp->fConst5 * (dsp->fRec202[2] + (dsp->fRec202[0] + (2.0f * dsp->fRec202[1])))))) - fSlow1);
			dsp->fVec4[0] = fTemp229;
			dsp->fRec201[0] = (dsp->fConst2 * ((fTemp229 - dsp->fVec4[1]) + (dsp->fConst26 * dsp->fRec201[1])));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)(fSlow0 * (((dsp->fRec0[0] + dsp->fRec69[0]) + dsp->fRec135[0]) + dsp->fRec201[0])));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->iRec14[1] = dsp->iRec14[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec1[2] = dsp->fRec1[1];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec107[1] = dsp->fRec107[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec115[1] = dsp->fRec115[0];
			dsp->fRec116[1] = dsp->fRec116[0];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec113[1] = dsp->fRec113[0];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fRec111[1] = dsp->fRec111[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec124[1] = dsp->fRec124[0];
			dsp->fRec125[1] = dsp->fRec125[0];
			dsp->fRec123[1] = dsp->fRec123[0];
			dsp->fRec122[1] = dsp->fRec122[0];
			dsp->fRec121[1] = dsp->fRec121[0];
			dsp->fRec120[1] = dsp->fRec120[0];
			dsp->fRec119[1] = dsp->fRec119[0];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec133[1] = dsp->fRec133[0];
			dsp->fRec134[1] = dsp->fRec134[0];
			dsp->fRec132[1] = dsp->fRec132[0];
			dsp->fRec131[1] = dsp->fRec131[0];
			dsp->fRec130[1] = dsp->fRec130[0];
			dsp->fRec129[1] = dsp->fRec129[0];
			dsp->fRec128[1] = dsp->fRec128[0];
			dsp->fRec127[1] = dsp->fRec127[0];
			dsp->fRec126[1] = dsp->fRec126[0];
			dsp->fRec70[2] = dsp->fRec70[1];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec137[1] = dsp->fRec137[0];
			dsp->fRec145[1] = dsp->fRec145[0];
			dsp->fRec146[1] = dsp->fRec146[0];
			dsp->fRec144[1] = dsp->fRec144[0];
			dsp->fRec143[1] = dsp->fRec143[0];
			dsp->fRec142[1] = dsp->fRec142[0];
			dsp->fRec141[1] = dsp->fRec141[0];
			dsp->fRec140[1] = dsp->fRec140[0];
			dsp->fRec139[1] = dsp->fRec139[0];
			dsp->fRec138[1] = dsp->fRec138[0];
			dsp->fRec154[1] = dsp->fRec154[0];
			dsp->fRec155[1] = dsp->fRec155[0];
			dsp->fRec153[1] = dsp->fRec153[0];
			dsp->fRec152[1] = dsp->fRec152[0];
			dsp->fRec151[1] = dsp->fRec151[0];
			dsp->fRec150[1] = dsp->fRec150[0];
			dsp->fRec149[1] = dsp->fRec149[0];
			dsp->fRec148[1] = dsp->fRec148[0];
			dsp->fRec147[1] = dsp->fRec147[0];
			dsp->fRec163[1] = dsp->fRec163[0];
			dsp->fRec164[1] = dsp->fRec164[0];
			dsp->fRec162[1] = dsp->fRec162[0];
			dsp->fRec161[1] = dsp->fRec161[0];
			dsp->fRec160[1] = dsp->fRec160[0];
			dsp->fRec159[1] = dsp->fRec159[0];
			dsp->fRec158[1] = dsp->fRec158[0];
			dsp->fRec157[1] = dsp->fRec157[0];
			dsp->fRec156[1] = dsp->fRec156[0];
			dsp->fRec172[1] = dsp->fRec172[0];
			dsp->fRec173[1] = dsp->fRec173[0];
			dsp->fRec171[1] = dsp->fRec171[0];
			dsp->fRec170[1] = dsp->fRec170[0];
			dsp->fRec169[1] = dsp->fRec169[0];
			dsp->fRec168[1] = dsp->fRec168[0];
			dsp->fRec167[1] = dsp->fRec167[0];
			dsp->fRec166[1] = dsp->fRec166[0];
			dsp->fRec165[1] = dsp->fRec165[0];
			dsp->fRec181[1] = dsp->fRec181[0];
			dsp->fRec182[1] = dsp->fRec182[0];
			dsp->fRec180[1] = dsp->fRec180[0];
			dsp->fRec179[1] = dsp->fRec179[0];
			dsp->fRec178[1] = dsp->fRec178[0];
			dsp->fRec177[1] = dsp->fRec177[0];
			dsp->fRec176[1] = dsp->fRec176[0];
			dsp->fRec175[1] = dsp->fRec175[0];
			dsp->fRec174[1] = dsp->fRec174[0];
			dsp->fRec190[1] = dsp->fRec190[0];
			dsp->fRec191[1] = dsp->fRec191[0];
			dsp->fRec189[1] = dsp->fRec189[0];
			dsp->fRec188[1] = dsp->fRec188[0];
			dsp->fRec187[1] = dsp->fRec187[0];
			dsp->fRec186[1] = dsp->fRec186[0];
			dsp->fRec185[1] = dsp->fRec185[0];
			dsp->fRec184[1] = dsp->fRec184[0];
			dsp->fRec183[1] = dsp->fRec183[0];
			dsp->fRec199[1] = dsp->fRec199[0];
			dsp->fRec200[1] = dsp->fRec200[0];
			dsp->fRec198[1] = dsp->fRec198[0];
			dsp->fRec197[1] = dsp->fRec197[0];
			dsp->fRec196[1] = dsp->fRec196[0];
			dsp->fRec195[1] = dsp->fRec195[0];
			dsp->fRec194[1] = dsp->fRec194[0];
			dsp->fRec193[1] = dsp->fRec193[0];
			dsp->fRec192[1] = dsp->fRec192[0];
			dsp->fRec136[2] = dsp->fRec136[1];
			dsp->fRec136[1] = dsp->fRec136[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec135[1] = dsp->fRec135[0];
			dsp->fRec203[1] = dsp->fRec203[0];
			dsp->fRec211[1] = dsp->fRec211[0];
			dsp->fRec212[1] = dsp->fRec212[0];
			dsp->fRec210[1] = dsp->fRec210[0];
			dsp->fRec209[1] = dsp->fRec209[0];
			dsp->fRec208[1] = dsp->fRec208[0];
			dsp->fRec207[1] = dsp->fRec207[0];
			dsp->fRec206[1] = dsp->fRec206[0];
			dsp->fRec205[1] = dsp->fRec205[0];
			dsp->fRec204[1] = dsp->fRec204[0];
			dsp->fRec220[1] = dsp->fRec220[0];
			dsp->fRec221[1] = dsp->fRec221[0];
			dsp->fRec219[1] = dsp->fRec219[0];
			dsp->fRec218[1] = dsp->fRec218[0];
			dsp->fRec217[1] = dsp->fRec217[0];
			dsp->fRec216[1] = dsp->fRec216[0];
			dsp->fRec215[1] = dsp->fRec215[0];
			dsp->fRec214[1] = dsp->fRec214[0];
			dsp->fRec213[1] = dsp->fRec213[0];
			dsp->fRec229[1] = dsp->fRec229[0];
			dsp->fRec230[1] = dsp->fRec230[0];
			dsp->fRec228[1] = dsp->fRec228[0];
			dsp->fRec227[1] = dsp->fRec227[0];
			dsp->fRec226[1] = dsp->fRec226[0];
			dsp->fRec225[1] = dsp->fRec225[0];
			dsp->fRec224[1] = dsp->fRec224[0];
			dsp->fRec223[1] = dsp->fRec223[0];
			dsp->fRec222[1] = dsp->fRec222[0];
			dsp->fRec238[1] = dsp->fRec238[0];
			dsp->fRec239[1] = dsp->fRec239[0];
			dsp->fRec237[1] = dsp->fRec237[0];
			dsp->fRec236[1] = dsp->fRec236[0];
			dsp->fRec235[1] = dsp->fRec235[0];
			dsp->fRec234[1] = dsp->fRec234[0];
			dsp->fRec233[1] = dsp->fRec233[0];
			dsp->fRec232[1] = dsp->fRec232[0];
			dsp->fRec231[1] = dsp->fRec231[0];
			dsp->fRec247[1] = dsp->fRec247[0];
			dsp->fRec248[1] = dsp->fRec248[0];
			dsp->fRec246[1] = dsp->fRec246[0];
			dsp->fRec245[1] = dsp->fRec245[0];
			dsp->fRec244[1] = dsp->fRec244[0];
			dsp->fRec243[1] = dsp->fRec243[0];
			dsp->fRec242[1] = dsp->fRec242[0];
			dsp->fRec241[1] = dsp->fRec241[0];
			dsp->fRec240[1] = dsp->fRec240[0];
			dsp->fRec256[1] = dsp->fRec256[0];
			dsp->fRec257[1] = dsp->fRec257[0];
			dsp->fRec255[1] = dsp->fRec255[0];
			dsp->fRec254[1] = dsp->fRec254[0];
			dsp->fRec253[1] = dsp->fRec253[0];
			dsp->fRec252[1] = dsp->fRec252[0];
			dsp->fRec251[1] = dsp->fRec251[0];
			dsp->fRec250[1] = dsp->fRec250[0];
			dsp->fRec249[1] = dsp->fRec249[0];
			dsp->fRec265[1] = dsp->fRec265[0];
			dsp->fRec266[1] = dsp->fRec266[0];
			dsp->fRec264[1] = dsp->fRec264[0];
			dsp->fRec263[1] = dsp->fRec263[0];
			dsp->fRec262[1] = dsp->fRec262[0];
			dsp->fRec261[1] = dsp->fRec261[0];
			dsp->fRec260[1] = dsp->fRec260[0];
			dsp->fRec259[1] = dsp->fRec259[0];
			dsp->fRec258[1] = dsp->fRec258[0];
			dsp->fRec202[2] = dsp->fRec202[1];
			dsp->fRec202[1] = dsp->fRec202[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec201[1] = dsp->fRec201[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
