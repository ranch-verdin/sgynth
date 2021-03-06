#include "faustglue.h"
#define min fmin
#define max fmax
/* ------------------------------------------------------------
name: "sgynth"
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
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->iRec4[l3] = 0;
			
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
	float fConst1;
	float fConst2;
	int iVec1[2];
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
	float fVec2[2];
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
	float fVec3[2];
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
	float fVec4[2];
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
	float fVec5[2];
	float fRec48[2];
	float fRec0[3];
	FAUSTFLOAT fVslider22;
	float fConst12;
	FAUSTFLOAT fVslider23;
	float fRec58[2];
	int iRec60[2];
	FAUSTFLOAT fVslider24;
	float fRec59[2];
	FAUSTFLOAT fButton0;
	float fVec6[2];
	float fConst13;
	float fRec62[2];
	int IOTA;
	int iVec7[8192];
	int iConst14;
	int iConst15;
	int iConst16;
	int iConst17;
	FAUSTFLOAT fVslider25;
	float fRec61[2];
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	FAUSTFLOAT fVslider26;
	FAUSTFLOAT fVslider27;
	FAUSTFLOAT fVslider28;
	float fRec66[2];
	FAUSTFLOAT fVslider29;
	FAUSTFLOAT fVslider30;
	FAUSTFLOAT fVslider31;
	FAUSTFLOAT fVslider32;
	int iRec68[2];
	FAUSTFLOAT fVslider33;
	FAUSTFLOAT fVslider34;
	FAUSTFLOAT fVslider35;
	float fRec67[2];
	float fRec64[2];
	float fConst22;
	FAUSTFLOAT fVslider36;
	float fRec70[2];
	float fRec71[2];
	float fConst23;
	float fConst24;
	float fRec69[3];
	FAUSTFLOAT fVslider37;
	float fRec65[2];
	float fRec63[3];
	FAUSTFLOAT fVslider38;
	float fConst25;
	FAUSTFLOAT fVslider39;
	float fRec73[2];
	FAUSTFLOAT fButton1;
	float fVec8[2];
	float fConst26;
	float fRec76[2];
	FAUSTFLOAT fVslider40;
	float fRec77[2];
	float fRec75[3];
	float fRec74[2];
	float fConst27;
	float fRec78[2];
	float fRec79[2];
	float fConst28;
	float fConst29;
	float fConst30;
	float fConst31;
	float fConst32;
	float fRec80[3];
	FAUSTFLOAT fButton2;
	float fVec9[2];
	float fConst33;
	float fRec82[2];
	FAUSTFLOAT fButton3;
	float fVec10[2];
	float fRec83[2];
	int iVec11[2];
	FAUSTFLOAT fVslider41;
	float fRec84[2];
	float fRec81[2];
	float fConst34;
	float fConst35;
	float fConst36;
	float fConst37;
	FAUSTFLOAT fVslider42;
	float fRec86[2];
	float fRec89[2];
	float fConst38;
	float fConst39;
	float fConst40;
	float fConst41;
	float fVec12[2];
	float fRec93[2];
	float fVec13[2];
	float fVec14[256];
	float fConst42;
	float fConst43;
	float fConst44;
	int iConst45;
	float fConst46;
	int iConst47;
	float fVec15[2];
	float fRec94[2];
	float fVec16[2];
	float fVec17[512];
	float fConst48;
	float fConst49;
	float fConst50;
	int iConst51;
	float fConst52;
	int iConst53;
	float fVec18[2];
	float fRec95[2];
	float fVec19[2];
	float fVec20[256];
	float fConst54;
	float fConst55;
	float fConst56;
	int iConst57;
	float fConst58;
	int iConst59;
	float fVec21[2];
	float fRec96[2];
	float fVec22[2];
	float fVec23[512];
	float fConst60;
	float fConst61;
	float fConst62;
	int iConst63;
	float fConst64;
	int iConst65;
	float fVec24[2];
	float fRec97[2];
	float fVec25[2];
	float fVec26[256];
	float fConst66;
	float fConst67;
	float fConst68;
	int iConst69;
	float fConst70;
	int iConst71;
	float fVec27[2];
	float fRec98[2];
	float fVec28[2];
	float fVec29[512];
	float fConst72;
	float fConst73;
	float fConst74;
	int iConst75;
	float fConst76;
	int iConst77;
	float fConst78;
	float fConst79;
	float fRec92[3];
	float fConst80;
	float fRec90[2];
	float fRec87[2];
	float fConst81;
	float fConst82;
	float fConst83;
	float fRec85[3];
	FAUSTFLOAT fVslider43;
	FAUSTFLOAT fVslider44;
	FAUSTFLOAT fVslider45;
	FAUSTFLOAT fVslider46;
	FAUSTFLOAT fButton4;
	float fVec30[2];
	float fConst84;
	float fRec102[2];
	FAUSTFLOAT fButton5;
	float fVec31[2];
	float fRec103[2];
	int iVec32[2];
	FAUSTFLOAT fVslider47;
	float fVec33[2];
	float fRec101[2];
	float fConst85;
	float fConst86;
	float fRec99[2];
	float fConst87;
	float fRec104[2];
	float fConst88;
	float fConst89;
	FAUSTFLOAT fVslider48;
	float fRec105[2];
	float fRec100[2];
	FAUSTFLOAT fVslider49;
	FAUSTFLOAT fVslider50;
	float fConst90;
	FAUSTFLOAT fHslider0;
	float fConst91;
	float fConst92;
	float fConst93;
	FAUSTFLOAT fHslider1;
	float fConst94;
	float fConst95;
	float fRec109[3];
	float fConst96;
	float fConst97;
	float fConst98;
	float fConst99;
	float fConst100;
	float fConst101;
	float fRec111[2];
	float fRec110[2];
	float fConst102;
	float fConst103;
	float fConst104;
	float fRec108[3];
	FAUSTFLOAT fHslider2;
	float fConst105;
	FAUSTFLOAT fHslider3;
	float fRec113[3];
	float fRec112[3];
	FAUSTFLOAT fButton6;
	float fVec34[2];
	float fConst106;
	float fRec114[2];
	float fConst107;
	float fConst108;
	float fVec35[4096];
	float fRec107[1024];
	FAUSTFLOAT fVslider51;
	float fRec117[3];
	float fRec119[2];
	float fRec118[2];
	float fRec116[3];
	FAUSTFLOAT fButton7;
	float fVec36[2];
	float fRec120[2];
	float fVec37[4096];
	float fRec115[1024];
	FAUSTFLOAT fVslider52;
	float fRec123[3];
	float fRec125[2];
	float fRec124[2];
	float fRec122[3];
	FAUSTFLOAT fButton8;
	float fVec38[2];
	float fRec126[2];
	float fVec39[4096];
	float fRec121[1024];
	FAUSTFLOAT fVslider53;
	float fRec129[3];
	float fRec131[2];
	float fRec130[2];
	float fRec128[3];
	FAUSTFLOAT fButton9;
	float fVec40[2];
	float fRec132[2];
	float fVec41[4096];
	float fRec127[1024];
	float fVec42[2];
	float fRec106[2];
	float fConst109;
	FAUSTFLOAT fVslider54;
	float fConst110;
	float fConst111;
	FAUSTFLOAT fVslider55;
	FAUSTFLOAT fVslider56;
	FAUSTFLOAT fVslider57;
	float fRec144[2];
	float fRec143[2];
	float fVec43[8192];
	float fConst112;
	int iConst113;
	FAUSTFLOAT fVslider58;
	float fVec44[2];
	float fRec145[2];
	float fVec45[16384];
	FAUSTFLOAT fVslider59;
	float fVec46[1024];
	int iConst114;
	float fRec141[2];
	float fConst115;
	float fConst116;
	float fRec149[2];
	float fRec148[2];
	float fVec47[16384];
	float fConst117;
	int iConst118;
	float fVec48[2048];
	int iConst119;
	float fRec146[2];
	float fConst120;
	float fConst121;
	float fRec153[2];
	float fRec152[2];
	float fVec49[8192];
	float fConst122;
	int iConst123;
	float fVec50[2048];
	int iConst124;
	float fRec150[2];
	float fConst125;
	float fConst126;
	float fRec157[2];
	float fRec156[2];
	float fVec51[8192];
	float fConst127;
	int iConst128;
	float fVec52[1024];
	int iConst129;
	float fRec154[2];
	float fConst130;
	float fConst131;
	float fRec161[2];
	float fRec160[2];
	float fVec53[8192];
	float fConst132;
	int iConst133;
	float fVec54[16384];
	float fVec55[1024];
	int iConst134;
	float fRec158[2];
	float fConst135;
	float fConst136;
	float fRec165[2];
	float fRec164[2];
	float fVec56[4096];
	float fConst137;
	int iConst138;
	float fVec57[2048];
	int iConst139;
	float fRec162[2];
	float fConst140;
	float fConst141;
	float fRec169[2];
	float fRec168[2];
	float fVec58[8192];
	float fConst142;
	int iConst143;
	float fVec59[1024];
	int iConst144;
	float fRec166[2];
	float fConst145;
	float fConst146;
	float fRec173[2];
	float fRec172[2];
	float fVec60[8192];
	float fConst147;
	int iConst148;
	float fVec61[1024];
	int iConst149;
	float fRec170[2];
	float fRec133[3];
	float fRec134[3];
	float fRec135[3];
	float fRec136[3];
	float fRec137[3];
	float fRec138[3];
	float fRec139[3];
	float fRec140[3];
	float fConst150;
	FAUSTFLOAT fVslider60;
	FAUSTFLOAT fVslider61;
	float fConst151;
	FAUSTFLOAT fVslider62;
	float fRec176[2];
	float fRec175[2];
	FAUSTFLOAT fVslider63;
	float fRec174[2];
	
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)malloc(sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "analyzers.lib/name", "Faust Analyzer Library");
	m->declare(m->metaInterface, "analyzers.lib/version", "0.0");
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/version", "0.0");
	m->declare(m->metaInterface, "compressors.lib/name", "Faust Compressor Effect Library");
	m->declare(m->metaInterface, "compressors.lib/version", "0.0");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "0.0");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "0.0");
	m->declare(m->metaInterface, "filename", "sgynth");
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
	m->declare(m->metaInterface, "name", "sgynth");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "0.0");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/version", "0.0");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.0");
	m->declare(m->metaInterface, "routes.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "routes.lib/version", "0.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "0.0");
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
	dsp->fVslider22 = (FAUSTFLOAT)1.5f;
	dsp->fVslider23 = (FAUSTFLOAT)1500.0f;
	dsp->fVslider24 = (FAUSTFLOAT)1.3f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider25 = (FAUSTFLOAT)300.0f;
	dsp->fVslider26 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider27 = (FAUSTFLOAT)0.5f;
	dsp->fVslider28 = (FAUSTFLOAT)100.0f;
	dsp->fVslider29 = (FAUSTFLOAT)0.80000000000000004f;
	dsp->fVslider30 = (FAUSTFLOAT)20.0f;
	dsp->fVslider31 = (FAUSTFLOAT)0.0f;
	dsp->fVslider32 = (FAUSTFLOAT)50.0f;
	dsp->fVslider33 = (FAUSTFLOAT)150.0f;
	dsp->fVslider34 = (FAUSTFLOAT)300.0f;
	dsp->fVslider35 = (FAUSTFLOAT)0.0f;
	dsp->fVslider36 = (FAUSTFLOAT)1.0f;
	dsp->fVslider37 = (FAUSTFLOAT)1.2f;
	dsp->fVslider38 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider39 = (FAUSTFLOAT)1.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider40 = (FAUSTFLOAT)0.5f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fButton3 = (FAUSTFLOAT)0.0f;
	dsp->fVslider41 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider42 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider43 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider44 = (FAUSTFLOAT)1.0f;
	dsp->fVslider45 = (FAUSTFLOAT)60.0f;
	dsp->fVslider46 = (FAUSTFLOAT)4.7300000000000004f;
	dsp->fButton4 = (FAUSTFLOAT)0.0f;
	dsp->fButton5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider47 = (FAUSTFLOAT)12.0f;
	dsp->fVslider48 = (FAUSTFLOAT)0.98899999999999999f;
	dsp->fVslider49 = (FAUSTFLOAT)0.69999999999999996f;
	dsp->fVslider50 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)2.0f;
	dsp->fHslider3 = (FAUSTFLOAT)0.5f;
	dsp->fButton6 = (FAUSTFLOAT)0.0f;
	dsp->fVslider51 = (FAUSTFLOAT)440.0f;
	dsp->fButton7 = (FAUSTFLOAT)0.0f;
	dsp->fVslider52 = (FAUSTFLOAT)440.0f;
	dsp->fButton8 = (FAUSTFLOAT)0.0f;
	dsp->fVslider53 = (FAUSTFLOAT)440.0f;
	dsp->fButton9 = (FAUSTFLOAT)0.0f;
	dsp->fVslider54 = (FAUSTFLOAT)6000.0f;
	dsp->fVslider55 = (FAUSTFLOAT)1.0f;
	dsp->fVslider56 = (FAUSTFLOAT)1.0f;
	dsp->fVslider57 = (FAUSTFLOAT)200.0f;
	dsp->fVslider58 = (FAUSTFLOAT)1.5f;
	dsp->fVslider59 = (FAUSTFLOAT)20.0f;
	dsp->fVslider60 = (FAUSTFLOAT)10.0f;
	dsp->fVslider61 = (FAUSTFLOAT)3.0f;
	dsp->fVslider62 = (FAUSTFLOAT)50.0f;
	dsp->fVslider63 = (FAUSTFLOAT)-9.0f;
	
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
			dsp->iVec1[l1] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			dsp->fRec3[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec6[l4] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			dsp->iRec8[l5] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec7[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec5[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec17[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec16[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fRec19[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec18[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec21[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec20[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec23[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec22[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fRec25[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec24[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fRec27[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec26[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			dsp->fRec2[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fVec2[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec1[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec30[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec31[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec32[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec33[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec34[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec35[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fRec36[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fRec37[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 3); l31 = (l31 + 1)) {
			dsp->fRec29[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			dsp->fVec3[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fRec28[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec40[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec41[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec42[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec43[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fRec44[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec45[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fRec46[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec47[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 3); l42 = (l42 + 1)) {
			dsp->fRec39[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->fVec4[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fRec38[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec50[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fRec51[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec52[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fRec53[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec54[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fRec55[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			dsp->fRec56[l51] = 0.0f;
			
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
		for (l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			dsp->fRec49[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			dsp->fVec5[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			dsp->fRec48[l55] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; (l56 < 3); l56 = (l56 + 1)) {
			dsp->fRec0[l56] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			dsp->fRec58[l57] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			dsp->iRec60[l58] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			dsp->fRec59[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			dsp->fVec6[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec62[l61] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 8192); l62 = (l62 + 1)) {
			dsp->iVec7[l62] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			dsp->fRec61[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->fRec66[l64] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->iRec68[l65] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			dsp->fRec67[l66] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			dsp->fRec64[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			dsp->fRec70[l68] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			dsp->fRec71[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 3); l70 = (l70 + 1)) {
			dsp->fRec69[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			dsp->fRec65[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 3); l72 = (l72 + 1)) {
			dsp->fRec63[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fRec73[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fVec8[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			dsp->fRec76[l75] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			dsp->fRec77[l76] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; (l77 < 3); l77 = (l77 + 1)) {
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
			dsp->fRec78[l79] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			dsp->fRec79[l80] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; (l81 < 3); l81 = (l81 + 1)) {
			dsp->fRec80[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fVec9[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			dsp->fRec82[l83] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			dsp->fVec10[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			dsp->fRec83[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->iVec11[l86] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			dsp->fRec84[l87] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			dsp->fRec81[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fRec86[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec89[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			dsp->fVec12[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			dsp->fRec93[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			dsp->fVec13[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 256); l94 = (l94 + 1)) {
			dsp->fVec14[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fVec15[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			dsp->fRec94[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fVec16[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 512); l98 = (l98 + 1)) {
			dsp->fVec17[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			dsp->fVec18[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			dsp->fRec95[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			dsp->fVec19[l101] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 256); l102 = (l102 + 1)) {
			dsp->fVec20[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fVec21[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			dsp->fRec96[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			dsp->fVec22[l105] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; (l106 < 512); l106 = (l106 + 1)) {
			dsp->fVec23[l106] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			dsp->fVec24[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			dsp->fRec97[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fVec25[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 256); l110 = (l110 + 1)) {
			dsp->fVec26[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			dsp->fVec27[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			dsp->fRec98[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			dsp->fVec28[l113] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; (l114 < 512); l114 = (l114 + 1)) {
			dsp->fVec29[l114] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; (l115 < 3); l115 = (l115 + 1)) {
			dsp->fRec92[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			dsp->fRec90[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			dsp->fRec87[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 3); l118 = (l118 + 1)) {
			dsp->fRec85[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fVec30[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fRec102[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			dsp->fVec31[l121] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			dsp->fRec103[l122] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			dsp->iVec32[l123] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			dsp->fVec33[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			dsp->fRec101[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			dsp->fRec99[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			dsp->fRec104[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec105[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			dsp->fRec100[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 3); l130 = (l130 + 1)) {
			dsp->fRec109[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			dsp->fRec111[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			dsp->fRec110[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 3); l133 = (l133 + 1)) {
			dsp->fRec108[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 3); l134 = (l134 + 1)) {
			dsp->fRec113[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 3); l135 = (l135 + 1)) {
			dsp->fRec112[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			dsp->fVec34[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			dsp->fRec114[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 4096); l138 = (l138 + 1)) {
			dsp->fVec35[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 1024); l139 = (l139 + 1)) {
			dsp->fRec107[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 3); l140 = (l140 + 1)) {
			dsp->fRec117[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			dsp->fRec119[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			dsp->fRec118[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 3); l143 = (l143 + 1)) {
			dsp->fRec116[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fVec36[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec120[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 4096); l146 = (l146 + 1)) {
			dsp->fVec37[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 1024); l147 = (l147 + 1)) {
			dsp->fRec115[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 3); l148 = (l148 + 1)) {
			dsp->fRec123[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			dsp->fRec125[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			dsp->fRec124[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 3); l151 = (l151 + 1)) {
			dsp->fRec122[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			dsp->fVec38[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			dsp->fRec126[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 4096); l154 = (l154 + 1)) {
			dsp->fVec39[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 1024); l155 = (l155 + 1)) {
			dsp->fRec121[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 3); l156 = (l156 + 1)) {
			dsp->fRec129[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			dsp->fRec131[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			dsp->fRec130[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 3); l159 = (l159 + 1)) {
			dsp->fRec128[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			dsp->fVec40[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			dsp->fRec132[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 4096); l162 = (l162 + 1)) {
			dsp->fVec41[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 1024); l163 = (l163 + 1)) {
			dsp->fRec127[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			dsp->fVec42[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			dsp->fRec106[l165] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			dsp->fRec144[l166] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			dsp->fRec143[l167] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; (l168 < 8192); l168 = (l168 + 1)) {
			dsp->fVec43[l168] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			dsp->fVec44[l169] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			dsp->fRec145[l170] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; (l171 < 16384); l171 = (l171 + 1)) {
			dsp->fVec45[l171] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; (l172 < 1024); l172 = (l172 + 1)) {
			dsp->fVec46[l172] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			dsp->fRec141[l173] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			dsp->fRec149[l174] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			dsp->fRec148[l175] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; (l176 < 16384); l176 = (l176 + 1)) {
			dsp->fVec47[l176] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; (l177 < 2048); l177 = (l177 + 1)) {
			dsp->fVec48[l177] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			dsp->fRec146[l178] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			dsp->fRec153[l179] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; (l180 < 2); l180 = (l180 + 1)) {
			dsp->fRec152[l180] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; (l181 < 8192); l181 = (l181 + 1)) {
			dsp->fVec49[l181] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; (l182 < 2048); l182 = (l182 + 1)) {
			dsp->fVec50[l182] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			dsp->fRec150[l183] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			dsp->fRec157[l184] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			dsp->fRec156[l185] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; (l186 < 8192); l186 = (l186 + 1)) {
			dsp->fVec51[l186] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; (l187 < 1024); l187 = (l187 + 1)) {
			dsp->fVec52[l187] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			dsp->fRec154[l188] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; (l189 < 2); l189 = (l189 + 1)) {
			dsp->fRec161[l189] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			dsp->fRec160[l190] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; (l191 < 8192); l191 = (l191 + 1)) {
			dsp->fVec53[l191] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; (l192 < 16384); l192 = (l192 + 1)) {
			dsp->fVec54[l192] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; (l193 < 1024); l193 = (l193 + 1)) {
			dsp->fVec55[l193] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			dsp->fRec158[l194] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l195;
		for (l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			dsp->fRec165[l195] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l196;
		for (l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			dsp->fRec164[l196] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l197;
		for (l197 = 0; (l197 < 4096); l197 = (l197 + 1)) {
			dsp->fVec56[l197] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l198;
		for (l198 = 0; (l198 < 2048); l198 = (l198 + 1)) {
			dsp->fVec57[l198] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l199;
		for (l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			dsp->fRec162[l199] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l200;
		for (l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			dsp->fRec169[l200] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l201;
		for (l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			dsp->fRec168[l201] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l202;
		for (l202 = 0; (l202 < 8192); l202 = (l202 + 1)) {
			dsp->fVec58[l202] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l203;
		for (l203 = 0; (l203 < 1024); l203 = (l203 + 1)) {
			dsp->fVec59[l203] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l204;
		for (l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			dsp->fRec166[l204] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l205;
		for (l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			dsp->fRec173[l205] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l206;
		for (l206 = 0; (l206 < 2); l206 = (l206 + 1)) {
			dsp->fRec172[l206] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l207;
		for (l207 = 0; (l207 < 8192); l207 = (l207 + 1)) {
			dsp->fVec60[l207] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l208;
		for (l208 = 0; (l208 < 1024); l208 = (l208 + 1)) {
			dsp->fVec61[l208] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l209;
		for (l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			dsp->fRec170[l209] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l210;
		for (l210 = 0; (l210 < 3); l210 = (l210 + 1)) {
			dsp->fRec133[l210] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l211;
		for (l211 = 0; (l211 < 3); l211 = (l211 + 1)) {
			dsp->fRec134[l211] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l212;
		for (l212 = 0; (l212 < 3); l212 = (l212 + 1)) {
			dsp->fRec135[l212] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l213;
		for (l213 = 0; (l213 < 3); l213 = (l213 + 1)) {
			dsp->fRec136[l213] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l214;
		for (l214 = 0; (l214 < 3); l214 = (l214 + 1)) {
			dsp->fRec137[l214] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l215;
		for (l215 = 0; (l215 < 3); l215 = (l215 + 1)) {
			dsp->fRec138[l215] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l216;
		for (l216 = 0; (l216 < 3); l216 = (l216 + 1)) {
			dsp->fRec139[l216] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l217;
		for (l217 = 0; (l217 < 3); l217 = (l217 + 1)) {
			dsp->fRec140[l217] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l218;
		for (l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			dsp->fRec176[l218] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l219;
		for (l219 = 0; (l219 < 2); l219 = (l219 + 1)) {
			dsp->fRec175[l219] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l220;
		for (l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			dsp->fRec174[l220] = 0.0f;
			
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
	dsp->fConst12 = (1.0f / dsp->fConst0);
	dsp->fConst13 = (0.00100000005f * dsp->fConst0);
	dsp->iConst14 = (int)min(dsp->fConst0, max(0.0f, (0.0109999999f * dsp->fConst0)));
	dsp->iConst15 = (int)min(dsp->fConst0, max(0.0f, (0.0241999999f * dsp->fConst0)));
	dsp->iConst16 = (int)min(dsp->fConst0, max(0.0f, (0.0307999998f * dsp->fConst0)));
	dsp->iConst17 = (int)min(dsp->fConst0, max(0.0f, (0.0351999998f * dsp->fConst0)));
	dsp->fConst18 = tanf((18849.5566f / dsp->fConst0));
	dsp->fConst19 = (1.0f / dsp->fConst18);
	dsp->fConst20 = (((dsp->fConst19 + 1.41421354f) / dsp->fConst18) + 1.0f);
	dsp->fConst21 = (1.0f / dsp->fConst20);
	dsp->fConst22 = (0.419999987f / dsp->fConst20);
	dsp->fConst23 = (((dsp->fConst19 + -1.41421354f) / dsp->fConst18) + 1.0f);
	dsp->fConst24 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst18))));
	dsp->fConst25 = (180.0f / dsp->fConst0);
	dsp->fConst26 = (0.0027999999f * dsp->fConst0);
	dsp->fConst27 = (330.0f / dsp->fConst0);
	dsp->fConst28 = tanf((25472.0332f / dsp->fConst0));
	dsp->fConst29 = (1.0f / dsp->fConst28);
	dsp->fConst30 = (1.0f / (((dsp->fConst29 + 1.41421354f) / dsp->fConst28) + 1.0f));
	dsp->fConst31 = (((dsp->fConst29 + -1.41421354f) / dsp->fConst28) + 1.0f);
	dsp->fConst32 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst28))));
	dsp->fConst33 = (0.00639999984f * dsp->fConst0);
	dsp->fConst34 = tanf((42703.668f / dsp->fConst0));
	dsp->fConst35 = (1.0f / dsp->fConst34);
	dsp->fConst36 = (((dsp->fConst35 + 1.41421354f) / dsp->fConst34) + 1.0f);
	dsp->fConst37 = (0.680000007f / dsp->fConst36);
	dsp->fConst38 = tanf((3141.59277f / dsp->fConst0));
	dsp->fConst39 = (1.0f / dsp->fConst38);
	dsp->fConst40 = (1.0f / (((dsp->fConst39 + 1.41421354f) / dsp->fConst38) + 1.0f));
	dsp->fConst41 = (1.0f / mydsp_faustpower2_f(dsp->fConst38));
	dsp->fConst42 = max(0.0f, min(2047.0f, (0.00126903551f * dsp->fConst0)));
	dsp->fConst43 = floorf(dsp->fConst42);
	dsp->fConst44 = (dsp->fConst43 + (1.0f - dsp->fConst42));
	dsp->iConst45 = (int)dsp->fConst42;
	dsp->fConst46 = (dsp->fConst42 - dsp->fConst43);
	dsp->iConst47 = (dsp->iConst45 + 1);
	dsp->fConst48 = max(0.0f, min(2047.0f, (0.00161812303f * dsp->fConst0)));
	dsp->fConst49 = floorf(dsp->fConst48);
	dsp->fConst50 = (dsp->fConst49 + (1.0f - dsp->fConst48));
	dsp->iConst51 = (int)dsp->fConst48;
	dsp->fConst52 = (dsp->fConst48 - dsp->fConst49);
	dsp->iConst53 = (dsp->iConst51 + 1);
	dsp->fConst54 = max(0.0f, min(2047.0f, (0.00101419876f * dsp->fConst0)));
	dsp->fConst55 = floorf(dsp->fConst54);
	dsp->fConst56 = (dsp->fConst55 + (1.0f - dsp->fConst54));
	dsp->iConst57 = (int)dsp->fConst54;
	dsp->fConst58 = (dsp->fConst54 - dsp->fConst55);
	dsp->iConst59 = (dsp->iConst57 + 1);
	dsp->fConst60 = max(0.0f, min(2047.0f, (0.00138504151f * dsp->fConst0)));
	dsp->fConst61 = floorf(dsp->fConst60);
	dsp->fConst62 = (dsp->fConst61 + (1.0f - dsp->fConst60));
	dsp->iConst63 = (int)dsp->fConst60;
	dsp->fConst64 = (dsp->fConst60 - dsp->fConst61);
	dsp->iConst65 = (dsp->iConst63 + 1);
	dsp->fConst66 = max(0.0f, min(2047.0f, (0.00118483417f * dsp->fConst0)));
	dsp->fConst67 = floorf(dsp->fConst66);
	dsp->fConst68 = (dsp->fConst67 + (1.0f - dsp->fConst66));
	dsp->iConst69 = (int)dsp->fConst66;
	dsp->fConst70 = (dsp->fConst66 - dsp->fConst67);
	dsp->iConst71 = (dsp->iConst69 + 1);
	dsp->fConst72 = max(0.0f, min(2047.0f, (0.00246305414f * dsp->fConst0)));
	dsp->fConst73 = floorf(dsp->fConst72);
	dsp->fConst74 = (dsp->fConst73 + (1.0f - dsp->fConst72));
	dsp->iConst75 = (int)dsp->fConst72;
	dsp->fConst76 = (dsp->fConst72 - dsp->fConst73);
	dsp->iConst77 = (dsp->iConst75 + 1);
	dsp->fConst78 = (((dsp->fConst39 + -1.41421354f) / dsp->fConst38) + 1.0f);
	dsp->fConst79 = (2.0f * (1.0f - dsp->fConst41));
	dsp->fConst80 = (2.0f * (0.0f - dsp->fConst41));
	dsp->fConst81 = (1.0f / dsp->fConst36);
	dsp->fConst82 = (((dsp->fConst35 + -1.41421354f) / dsp->fConst34) + 1.0f);
	dsp->fConst83 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst34))));
	dsp->fConst84 = (0.00700000022f * dsp->fConst0);
	dsp->fConst85 = (0.00600000005f * dsp->fConst0);
	dsp->fConst86 = (166.666672f / dsp->fConst0);
	dsp->fConst87 = (0.00609999988f * dsp->fConst0);
	dsp->fConst88 = (9.99999975e-05f * dsp->fConst0);
	dsp->fConst89 = (10000.0f / dsp->fConst0);
	dsp->fConst90 = (10000000.0f / dsp->fConst0);
	dsp->fConst91 = tanf((47123.8906f / dsp->fConst0));
	dsp->fConst92 = (1.0f / dsp->fConst91);
	dsp->fConst93 = (1.0f / (((dsp->fConst92 + 1.41421354f) / dsp->fConst91) + 1.0f));
	dsp->fConst94 = (((dsp->fConst92 + -1.41421354f) / dsp->fConst91) + 1.0f);
	dsp->fConst95 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst91))));
	dsp->fConst96 = mydsp_faustpower2_f(dsp->fConst7);
	dsp->fConst97 = (2.0f * dsp->fConst96);
	dsp->fConst98 = (4.0f * (mydsp_faustpower2_f(dsp->fConst0) * tanf((6283.18555f / dsp->fConst0))));
	dsp->fConst99 = (6911.50391f / dsp->fConst0);
	dsp->fConst100 = expf((0.0f - (66.6666641f / dsp->fConst0)));
	dsp->fConst101 = expf((0.0f - (13.333333f / dsp->fConst0)));
	dsp->fConst102 = (2.0f / dsp->fConst0);
	dsp->fConst103 = (2.0f * dsp->fConst0);
	dsp->fConst104 = (0.5f / dsp->fConst0);
	dsp->fConst105 = (3.14159274f / dsp->fConst0);
	dsp->fConst106 = (0.00400000019f * dsp->fConst0);
	dsp->fConst107 = (0.00200000009f * dsp->fConst0);
	dsp->fConst108 = (500.0f / dsp->fConst0);
	dsp->fConst109 = (6.28318548f / dsp->fConst0);
	dsp->fConst110 = floorf(((0.219990999f * dsp->fConst0) + 0.5f));
	dsp->fConst111 = ((0.0f - (6.90775537f * dsp->fConst110)) / dsp->fConst0);
	dsp->fConst112 = floorf(((0.0191229992f * dsp->fConst0) + 0.5f));
	dsp->iConst113 = (int)min(4096.0f, max(0.0f, (dsp->fConst110 - dsp->fConst112)));
	dsp->iConst114 = (int)min(512.0f, max(0.0f, (dsp->fConst112 + -1.0f)));
	dsp->fConst115 = floorf(((0.256891012f * dsp->fConst0) + 0.5f));
	dsp->fConst116 = ((0.0f - (6.90775537f * dsp->fConst115)) / dsp->fConst0);
	dsp->fConst117 = floorf(((0.0273330007f * dsp->fConst0) + 0.5f));
	dsp->iConst118 = (int)min(8192.0f, max(0.0f, (dsp->fConst115 - dsp->fConst117)));
	dsp->iConst119 = (int)min(1024.0f, max(0.0f, (dsp->fConst117 + -1.0f)));
	dsp->fConst120 = floorf(((0.192303002f * dsp->fConst0) + 0.5f));
	dsp->fConst121 = ((0.0f - (6.90775537f * dsp->fConst120)) / dsp->fConst0);
	dsp->fConst122 = floorf(((0.0292910002f * dsp->fConst0) + 0.5f));
	dsp->iConst123 = (int)min(4096.0f, max(0.0f, (dsp->fConst120 - dsp->fConst122)));
	dsp->iConst124 = (int)min(1024.0f, max(0.0f, (dsp->fConst122 + -1.0f)));
	dsp->fConst125 = floorf(((0.210389003f * dsp->fConst0) + 0.5f));
	dsp->fConst126 = ((0.0f - (6.90775537f * dsp->fConst125)) / dsp->fConst0);
	dsp->fConst127 = floorf(((0.0244210009f * dsp->fConst0) + 0.5f));
	dsp->iConst128 = (int)min(4096.0f, max(0.0f, (dsp->fConst125 - dsp->fConst127)));
	dsp->iConst129 = (int)min(512.0f, max(0.0f, (dsp->fConst127 + -1.0f)));
	dsp->fConst130 = floorf(((0.125f * dsp->fConst0) + 0.5f));
	dsp->fConst131 = ((0.0f - (6.90775537f * dsp->fConst130)) / dsp->fConst0);
	dsp->fConst132 = floorf(((0.0134579996f * dsp->fConst0) + 0.5f));
	dsp->iConst133 = (int)min(4096.0f, max(0.0f, (dsp->fConst130 - dsp->fConst132)));
	dsp->iConst134 = (int)min(512.0f, max(0.0f, (dsp->fConst132 + -1.0f)));
	dsp->fConst135 = floorf(((0.127837002f * dsp->fConst0) + 0.5f));
	dsp->fConst136 = ((0.0f - (6.90775537f * dsp->fConst135)) / dsp->fConst0);
	dsp->fConst137 = floorf(((0.0316039994f * dsp->fConst0) + 0.5f));
	dsp->iConst138 = (int)min(2048.0f, max(0.0f, (dsp->fConst135 - dsp->fConst137)));
	dsp->iConst139 = (int)min(1024.0f, max(0.0f, (dsp->fConst137 + -1.0f)));
	dsp->fConst140 = floorf(((0.174713001f * dsp->fConst0) + 0.5f));
	dsp->fConst141 = ((0.0f - (6.90775537f * dsp->fConst140)) / dsp->fConst0);
	dsp->fConst142 = floorf(((0.0229039993f * dsp->fConst0) + 0.5f));
	dsp->iConst143 = (int)min(4096.0f, max(0.0f, (dsp->fConst140 - dsp->fConst142)));
	dsp->iConst144 = (int)min(512.0f, max(0.0f, (dsp->fConst142 + -1.0f)));
	dsp->fConst145 = floorf(((0.153128996f * dsp->fConst0) + 0.5f));
	dsp->fConst146 = ((0.0f - (6.90775537f * dsp->fConst145)) / dsp->fConst0);
	dsp->fConst147 = floorf(((0.0203460008f * dsp->fConst0) + 0.5f));
	dsp->iConst148 = (int)min(4096.0f, max(0.0f, (dsp->fConst145 - dsp->fConst147)));
	dsp->iConst149 = (int)min(512.0f, max(0.0f, (dsp->fConst147 + -1.0f)));
	dsp->fConst150 = (2000.0f / dsp->fConst0);
	dsp->fConst151 = (1000.0f / dsp->fConst0);
	
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
	ui_interface->openTabBox(ui_interface->uiInterface, "sgynth");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "bd");
	ui_interface->addButton(ui_interface->uiInterface, "bd", &dsp->fButton4);
	ui_interface->addButton(ui_interface->uiInterface, "bl", &dsp->fButton5);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "freq");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulp", &dsp->fVslider46, 4.73000002f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulpdecay", &dsp->fVslider47, 12.0f, 0.0f, 100.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider45, 60.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider48, 0.989000022f, 0.800000012f, 0.990999997f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider44, 1.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "compressor");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider60, 10.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "ratio", &dsp->fVslider61, 3.0f, 1.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider62, 50.0f, 0.0f, 500.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "threshold", &dsp->fVslider63, -9.0f, -40.0f, 0.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider23, 1500.0f, 1000.0f, 3000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapq", &dsp->fVslider24, 1.29999995f, 0.5f, 5.0f, 0.00100000005f);
	ui_interface->addButton(ui_interface->uiInterface, "cp", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider25, 300.0f, 2.0f, 1500.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider22, 1.5f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "hatz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider41, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider42, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton2);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton3);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider43, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
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
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "reverb");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider59, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider59, "tooltip", "reverb pre-delay");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider59, "unit", "ms");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "pre_del", &dsp->fVslider59, 20.0f, 0.0f, 200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider57, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider57, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider57, "tooltip", "low band cutoff frequency");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider57, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "lf_fc", &dsp->fVslider57, 200.0f, 30.0f, 1200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider56, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider56, "tooltip", "-60db decay time for low band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider56, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "low_rt60", &dsp->fVslider56, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "tooltip", "-60db decay time for middle band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "mid_rt60", &dsp->fVslider55, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider54, "5", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider54, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider54, "tooltip", "damping frequency (decay time is 1/2 mid)");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider54, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "hf_damp", &dsp->fVslider54, 6000.0f, 1200.0f, 9800.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "level", &dsp->fVslider58, 1.5f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "sd");
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton1);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider40, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider39, 1.0f, 1.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider38, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string");
	ui_interface->openVerticalBox(ui_interface->uiInterface, "params");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "expos", &dsp->fHslider3, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.00999999978f, 2.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, 1.0f, -1.0f, 1.0f, 2.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "strength", &dsp->fHslider2, 2.0f, 0.0f, 5.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider53, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton9);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider52, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton8);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider51, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton7);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider50, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton6);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider49, 0.699999988f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "wub");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider28, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider31, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "params");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider33, 150.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "basefreq", &dsp->fVslider29, 0.800000012f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider34, 300.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "env", &dsp->fVslider30, 20.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q", &dsp->fVslider37, 1.20000005f, 0.800000012f, 5.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider32, 50.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sustain", &dsp->fVslider35, 0.0f, 0.0f, 1.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider36, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider26, 0.200000003f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "portamento", &dsp->fVslider27, 0.5f, 0.00999999978f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
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
	float fSlow34 = (float)dsp->fVslider22;
	float fSlow35 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (float)dsp->fVslider23))));
	float fSlow36 = (2.0f * fSlow35);
	float fSlow37 = min((2.0f * (1.0f - powf((float)dsp->fVslider24, 0.25f))), min(2.0f, ((1.0f / fSlow35) - fSlow35)));
	float fSlow38 = (float)dsp->fButton0;
	float fSlow39 = (0.00100000005f * (float)dsp->fVslider25);
	float fSlow40 = (float)dsp->fVslider26;
	float fSlow41 = (float)dsp->fVslider27;
	float fSlow42 = (0.00100000005f * (fSlow41 * (float)dsp->fVslider28));
	float fSlow43 = (1.0f - (0.00100000005f * fSlow41));
	float fSlow44 = (float)dsp->fVslider29;
	float fSlow45 = (float)dsp->fVslider30;
	float fSlow46 = (float)dsp->fVslider31;
	int iSlow47 = (fSlow46 > 0.0f);
	float fSlow48 = (0.00100000005f * (float)dsp->fVslider32);
	float fSlow49 = (float)dsp->fVslider33;
	int iSlow50 = (int)(dsp->fConst13 * fSlow49);
	float fSlow51 = (0.00100000005f * (float)dsp->fVslider34);
	float fSlow52 = (0.00100000005f * fSlow49);
	float fSlow53 = ((float)iSlow47 * (float)dsp->fVslider35);
	float fSlow54 = expf((0.0f - (dsp->fConst6 / (iSlow47?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider36)))));
	float fSlow55 = ((1.0f - fSlow54) * (iSlow47?fSlow46:0.0f));
	float fSlow56 = (2.0f * (1.0f - powf((float)dsp->fVslider37, 0.25f)));
	float fSlow57 = (4.0f * (float)dsp->fVslider38);
	float fSlow58 = (float)dsp->fVslider39;
	float fSlow59 = sinf((3.14159274f * min(0.25f, (dsp->fConst25 * fSlow58))));
	float fSlow60 = (2.0f * fSlow59);
	float fSlow61 = (float)dsp->fButton1;
	float fSlow62 = (float)dsp->fVslider40;
	float fSlow63 = (0.5f * (fSlow62 + 0.200000003f));
	float fSlow64 = ((2.0f * fSlow62) + 0.5f);
	float fSlow65 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow64)), 0.25f))), min(2.0f, ((1.0f / fSlow59) - fSlow59)));
	float fSlow66 = sinf((3.14159274f * min(0.25f, (dsp->fConst27 * fSlow58))));
	float fSlow67 = (2.0f * fSlow66);
	float fSlow68 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow64)), 0.25f))), min(2.0f, ((1.0f / fSlow66) - fSlow66)));
	float fSlow69 = (dsp->fConst30 * fSlow62);
	float fSlow70 = (float)dsp->fButton2;
	float fSlow71 = (float)dsp->fButton3;
	float fSlow72 = (0.00100000005f * (float)dsp->fVslider41);
	float fSlow73 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (float)dsp->fVslider42))));
	float fSlow74 = (2.0f * fSlow73);
	float fSlow75 = min(0.519834399f, min(2.0f, ((1.0f / fSlow73) - fSlow73)));
	float fSlow76 = (float)dsp->fVslider43;
	float fSlow77 = ((fSlow76 > 1.0f)?1.0f:((fSlow76 < -1.0f)?-1.0f:fSlow76));
	float fSlow78 = (float)dsp->fVslider44;
	float fSlow79 = (dsp->fConst12 * (float)dsp->fVslider45);
	float fSlow80 = (float)dsp->fVslider46;
	float fSlow81 = (float)dsp->fButton4;
	float fSlow82 = (float)dsp->fButton5;
	float fSlow83 = ((0.00100000005f * (float)dsp->fVslider47) + 0.00600000005f);
	float fSlow84 = (dsp->fConst0 * fSlow83);
	float fSlow85 = (dsp->fConst12 / (fSlow83 + -0.00600000005f));
	float fSlow86 = (float)dsp->fVslider48;
	float fSlow87 = (float)dsp->fVslider49;
	float fSlow88 = (float)dsp->fVslider50;
	float fSlow89 = (dsp->fConst0 / fSlow88);
	float fSlow90 = (fSlow89 + -1.99999499f);
	float fSlow91 = floorf(fSlow90);
	float fSlow92 = (fSlow89 + (-1.0f - fSlow91));
	float fSlow93 = (fSlow89 + (-2.0f - fSlow91));
	float fSlow94 = (fSlow89 + (-3.0f - fSlow91));
	float fSlow95 = (fSlow89 + (-4.0f - fSlow91));
	float fSlow96 = (fSlow89 + (-5.0f - fSlow91));
	float fSlow97 = (((((0.0f - fSlow92) * (0.0f - (0.5f * fSlow93))) * (0.0f - (0.333333343f * fSlow94))) * (0.0f - (0.25f * fSlow95))) * (0.0f - (0.200000003f * fSlow96)));
	float fSlow98 = (float)dsp->fHslider0;
	float fSlow99 = expf((0.0f - (dsp->fConst90 / (fSlow98 * mydsp_faustpower2_f(fSlow88)))));
	float fSlow100 = (float)dsp->fHslider1;
	float fSlow101 = (float)dsp->fHslider3;
	float fSlow102 = tanf((dsp->fConst105 * ((15000.0f * fSlow101) + 500.0f)));
	float fSlow103 = (1.0f / fSlow102);
	float fSlow104 = (((fSlow103 + 1.41421354f) / fSlow102) + 1.0f);
	float fSlow105 = ((float)dsp->fHslider2 / fSlow104);
	float fSlow106 = tanf((dsp->fConst105 * ((500.0f * fSlow101) + 40.0f)));
	float fSlow107 = (1.0f / fSlow106);
	float fSlow108 = (1.0f / (((fSlow107 + 1.41421354f) / fSlow106) + 1.0f));
	float fSlow109 = (1.0f / mydsp_faustpower2_f(fSlow106));
	float fSlow110 = (((fSlow107 + -1.41421354f) / fSlow106) + 1.0f);
	float fSlow111 = (2.0f * (1.0f - fSlow109));
	float fSlow112 = (2.0f * (0.0f - fSlow109));
	float fSlow113 = (1.0f / fSlow104);
	float fSlow114 = (((fSlow103 + -1.41421354f) / fSlow102) + 1.0f);
	float fSlow115 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow102))));
	float fSlow116 = (float)dsp->fButton6;
	int iSlow117 = (int)fSlow90;
	int iSlow118 = min(8192, max(0, iSlow117));
	float fSlow119 = (fSlow89 - fSlow91);
	float fSlow120 = ((((0.0f - fSlow93) * (0.0f - (0.5f * fSlow94))) * (0.0f - (0.333333343f * fSlow95))) * (0.0f - (0.25f * fSlow96)));
	int iSlow121 = min(8192, max(0, (iSlow117 + 1)));
	float fSlow122 = (0.5f * (((fSlow92 * (0.0f - fSlow94)) * (0.0f - (0.5f * fSlow95))) * (0.0f - (0.333333343f * fSlow96))));
	int iSlow123 = min(8192, max(0, (iSlow117 + 2)));
	float fSlow124 = (fSlow92 * fSlow93);
	float fSlow125 = (0.166666672f * ((fSlow124 * (0.0f - fSlow95)) * (0.0f - (0.5f * fSlow96))));
	int iSlow126 = min(8192, max(0, (iSlow117 + 3)));
	float fSlow127 = (fSlow124 * fSlow94);
	float fSlow128 = (0.0416666679f * (fSlow127 * (0.0f - fSlow96)));
	int iSlow129 = min(8192, max(0, (iSlow117 + 4)));
	float fSlow130 = (0.00833333377f * (fSlow127 * fSlow95));
	int iSlow131 = min(8192, max(0, (iSlow117 + 5)));
	float fSlow132 = (float)dsp->fVslider51;
	float fSlow133 = (dsp->fConst0 / fSlow132);
	float fSlow134 = (fSlow133 + -1.99999499f);
	float fSlow135 = floorf(fSlow134);
	float fSlow136 = (fSlow133 + (-1.0f - fSlow135));
	float fSlow137 = (fSlow133 + (-2.0f - fSlow135));
	float fSlow138 = (fSlow133 + (-3.0f - fSlow135));
	float fSlow139 = (fSlow133 + (-4.0f - fSlow135));
	float fSlow140 = (fSlow133 + (-5.0f - fSlow135));
	float fSlow141 = (((((0.0f - fSlow136) * (0.0f - (0.5f * fSlow137))) * (0.0f - (0.333333343f * fSlow138))) * (0.0f - (0.25f * fSlow139))) * (0.0f - (0.200000003f * fSlow140)));
	float fSlow142 = expf((0.0f - (dsp->fConst90 / (fSlow98 * mydsp_faustpower2_f(fSlow132)))));
	float fSlow143 = (float)dsp->fButton7;
	int iSlow144 = (int)fSlow134;
	int iSlow145 = min(8192, max(0, iSlow144));
	float fSlow146 = (fSlow133 - fSlow135);
	float fSlow147 = ((((0.0f - fSlow137) * (0.0f - (0.5f * fSlow138))) * (0.0f - (0.333333343f * fSlow139))) * (0.0f - (0.25f * fSlow140)));
	int iSlow148 = min(8192, max(0, (iSlow144 + 1)));
	float fSlow149 = (0.5f * (((fSlow136 * (0.0f - fSlow138)) * (0.0f - (0.5f * fSlow139))) * (0.0f - (0.333333343f * fSlow140))));
	int iSlow150 = min(8192, max(0, (iSlow144 + 2)));
	float fSlow151 = (fSlow136 * fSlow137);
	float fSlow152 = (0.166666672f * ((fSlow151 * (0.0f - fSlow139)) * (0.0f - (0.5f * fSlow140))));
	int iSlow153 = min(8192, max(0, (iSlow144 + 3)));
	float fSlow154 = (fSlow151 * fSlow138);
	float fSlow155 = (0.0416666679f * (fSlow154 * (0.0f - fSlow140)));
	int iSlow156 = min(8192, max(0, (iSlow144 + 4)));
	float fSlow157 = (0.00833333377f * (fSlow154 * fSlow139));
	int iSlow158 = min(8192, max(0, (iSlow144 + 5)));
	float fSlow159 = (float)dsp->fVslider52;
	float fSlow160 = (dsp->fConst0 / fSlow159);
	float fSlow161 = (fSlow160 + -1.99999499f);
	float fSlow162 = floorf(fSlow161);
	float fSlow163 = (fSlow160 + (-1.0f - fSlow162));
	float fSlow164 = (fSlow160 + (-2.0f - fSlow162));
	float fSlow165 = (fSlow160 + (-3.0f - fSlow162));
	float fSlow166 = (fSlow160 + (-4.0f - fSlow162));
	float fSlow167 = (fSlow160 + (-5.0f - fSlow162));
	float fSlow168 = (((((0.0f - fSlow163) * (0.0f - (0.5f * fSlow164))) * (0.0f - (0.333333343f * fSlow165))) * (0.0f - (0.25f * fSlow166))) * (0.0f - (0.200000003f * fSlow167)));
	float fSlow169 = expf((0.0f - (dsp->fConst90 / (fSlow98 * mydsp_faustpower2_f(fSlow159)))));
	float fSlow170 = (float)dsp->fButton8;
	int iSlow171 = (int)fSlow161;
	int iSlow172 = min(8192, max(0, iSlow171));
	float fSlow173 = (fSlow160 - fSlow162);
	float fSlow174 = ((((0.0f - fSlow164) * (0.0f - (0.5f * fSlow165))) * (0.0f - (0.333333343f * fSlow166))) * (0.0f - (0.25f * fSlow167)));
	int iSlow175 = min(8192, max(0, (iSlow171 + 1)));
	float fSlow176 = (0.5f * (((fSlow163 * (0.0f - fSlow165)) * (0.0f - (0.5f * fSlow166))) * (0.0f - (0.333333343f * fSlow167))));
	int iSlow177 = min(8192, max(0, (iSlow171 + 2)));
	float fSlow178 = (fSlow163 * fSlow164);
	float fSlow179 = (0.166666672f * ((fSlow178 * (0.0f - fSlow166)) * (0.0f - (0.5f * fSlow167))));
	int iSlow180 = min(8192, max(0, (iSlow171 + 3)));
	float fSlow181 = (fSlow178 * fSlow165);
	float fSlow182 = (0.0416666679f * (fSlow181 * (0.0f - fSlow167)));
	int iSlow183 = min(8192, max(0, (iSlow171 + 4)));
	float fSlow184 = (0.00833333377f * (fSlow181 * fSlow166));
	int iSlow185 = min(8192, max(0, (iSlow171 + 5)));
	float fSlow186 = (float)dsp->fVslider53;
	float fSlow187 = (dsp->fConst0 / fSlow186);
	float fSlow188 = (fSlow187 + -1.99999499f);
	float fSlow189 = floorf(fSlow188);
	float fSlow190 = (fSlow187 + (-1.0f - fSlow189));
	float fSlow191 = (fSlow187 + (-2.0f - fSlow189));
	float fSlow192 = (fSlow187 + (-3.0f - fSlow189));
	float fSlow193 = (fSlow187 + (-4.0f - fSlow189));
	float fSlow194 = (fSlow187 + (-5.0f - fSlow189));
	float fSlow195 = (((((0.0f - fSlow190) * (0.0f - (0.5f * fSlow191))) * (0.0f - (0.333333343f * fSlow192))) * (0.0f - (0.25f * fSlow193))) * (0.0f - (0.200000003f * fSlow194)));
	float fSlow196 = expf((0.0f - (dsp->fConst90 / (fSlow98 * mydsp_faustpower2_f(fSlow186)))));
	float fSlow197 = (float)dsp->fButton9;
	int iSlow198 = (int)fSlow188;
	int iSlow199 = min(8192, max(0, iSlow198));
	float fSlow200 = (fSlow187 - fSlow189);
	float fSlow201 = ((((0.0f - fSlow191) * (0.0f - (0.5f * fSlow192))) * (0.0f - (0.333333343f * fSlow193))) * (0.0f - (0.25f * fSlow194)));
	int iSlow202 = min(8192, max(0, (iSlow198 + 1)));
	float fSlow203 = (0.5f * (((fSlow190 * (0.0f - fSlow192)) * (0.0f - (0.5f * fSlow193))) * (0.0f - (0.333333343f * fSlow194))));
	int iSlow204 = min(8192, max(0, (iSlow198 + 2)));
	float fSlow205 = (fSlow190 * fSlow191);
	float fSlow206 = (0.166666672f * ((fSlow205 * (0.0f - fSlow193)) * (0.0f - (0.5f * fSlow194))));
	int iSlow207 = min(8192, max(0, (iSlow198 + 3)));
	float fSlow208 = (fSlow205 * fSlow192);
	float fSlow209 = (0.0416666679f * (fSlow208 * (0.0f - fSlow194)));
	int iSlow210 = min(8192, max(0, (iSlow198 + 4)));
	float fSlow211 = (0.00833333377f * (fSlow208 * fSlow193));
	int iSlow212 = min(8192, max(0, (iSlow198 + 5)));
	float fSlow213 = cosf((dsp->fConst109 * (float)dsp->fVslider54));
	float fSlow214 = (float)dsp->fVslider55;
	float fSlow215 = expf((dsp->fConst111 / fSlow214));
	float fSlow216 = mydsp_faustpower2_f(fSlow215);
	float fSlow217 = (1.0f - (fSlow213 * fSlow216));
	float fSlow218 = (1.0f - fSlow216);
	float fSlow219 = (fSlow217 / fSlow218);
	float fSlow220 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow217) / mydsp_faustpower2_f(fSlow218)) + -1.0f)));
	float fSlow221 = (fSlow219 - fSlow220);
	float fSlow222 = (fSlow215 * (fSlow220 + (1.0f - fSlow219)));
	float fSlow223 = (float)dsp->fVslider56;
	float fSlow224 = ((expf((dsp->fConst111 / fSlow223)) / fSlow215) + -1.0f);
	float fSlow225 = (1.0f / tanf((dsp->fConst105 * (float)dsp->fVslider57)));
	float fSlow226 = (fSlow225 + 1.0f);
	float fSlow227 = (0.0f - ((1.0f - fSlow225) / fSlow226));
	float fSlow228 = (1.0f / fSlow226);
	float fSlow229 = (float)dsp->fVslider58;
	int iSlow230 = (int)min(8192.0f, max(0.0f, (dsp->fConst13 * (float)dsp->fVslider59)));
	float fSlow231 = expf((dsp->fConst116 / fSlow214));
	float fSlow232 = mydsp_faustpower2_f(fSlow231);
	float fSlow233 = (1.0f - (fSlow213 * fSlow232));
	float fSlow234 = (1.0f - fSlow232);
	float fSlow235 = (fSlow233 / fSlow234);
	float fSlow236 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow233) / mydsp_faustpower2_f(fSlow234)) + -1.0f)));
	float fSlow237 = (fSlow235 - fSlow236);
	float fSlow238 = (fSlow231 * (fSlow236 + (1.0f - fSlow235)));
	float fSlow239 = ((expf((dsp->fConst116 / fSlow223)) / fSlow231) + -1.0f);
	float fSlow240 = expf((dsp->fConst121 / fSlow214));
	float fSlow241 = mydsp_faustpower2_f(fSlow240);
	float fSlow242 = (1.0f - (fSlow213 * fSlow241));
	float fSlow243 = (1.0f - fSlow241);
	float fSlow244 = (fSlow242 / fSlow243);
	float fSlow245 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow242) / mydsp_faustpower2_f(fSlow243)) + -1.0f)));
	float fSlow246 = (fSlow244 - fSlow245);
	float fSlow247 = (fSlow240 * (fSlow245 + (1.0f - fSlow244)));
	float fSlow248 = ((expf((dsp->fConst121 / fSlow223)) / fSlow240) + -1.0f);
	float fSlow249 = expf((dsp->fConst126 / fSlow214));
	float fSlow250 = mydsp_faustpower2_f(fSlow249);
	float fSlow251 = (1.0f - (fSlow213 * fSlow250));
	float fSlow252 = (1.0f - fSlow250);
	float fSlow253 = (fSlow251 / fSlow252);
	float fSlow254 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow251) / mydsp_faustpower2_f(fSlow252)) + -1.0f)));
	float fSlow255 = (fSlow253 - fSlow254);
	float fSlow256 = (fSlow249 * (fSlow254 + (1.0f - fSlow253)));
	float fSlow257 = ((expf((dsp->fConst126 / fSlow223)) / fSlow249) + -1.0f);
	float fSlow258 = expf((dsp->fConst131 / fSlow214));
	float fSlow259 = mydsp_faustpower2_f(fSlow258);
	float fSlow260 = (1.0f - (fSlow213 * fSlow259));
	float fSlow261 = (1.0f - fSlow259);
	float fSlow262 = (fSlow260 / fSlow261);
	float fSlow263 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow260) / mydsp_faustpower2_f(fSlow261)) + -1.0f)));
	float fSlow264 = (fSlow262 - fSlow263);
	float fSlow265 = (fSlow258 * (fSlow263 + (1.0f - fSlow262)));
	float fSlow266 = ((expf((dsp->fConst131 / fSlow223)) / fSlow258) + -1.0f);
	float fSlow267 = expf((dsp->fConst136 / fSlow214));
	float fSlow268 = mydsp_faustpower2_f(fSlow267);
	float fSlow269 = (1.0f - (fSlow213 * fSlow268));
	float fSlow270 = (1.0f - fSlow268);
	float fSlow271 = (fSlow269 / fSlow270);
	float fSlow272 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow269) / mydsp_faustpower2_f(fSlow270)) + -1.0f)));
	float fSlow273 = (fSlow271 - fSlow272);
	float fSlow274 = (fSlow267 * (fSlow272 + (1.0f - fSlow271)));
	float fSlow275 = ((expf((dsp->fConst136 / fSlow223)) / fSlow267) + -1.0f);
	float fSlow276 = expf((dsp->fConst141 / fSlow214));
	float fSlow277 = mydsp_faustpower2_f(fSlow276);
	float fSlow278 = (1.0f - (fSlow213 * fSlow277));
	float fSlow279 = (1.0f - fSlow277);
	float fSlow280 = (fSlow278 / fSlow279);
	float fSlow281 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow278) / mydsp_faustpower2_f(fSlow279)) + -1.0f)));
	float fSlow282 = (fSlow280 - fSlow281);
	float fSlow283 = (fSlow276 * (fSlow281 + (1.0f - fSlow280)));
	float fSlow284 = ((expf((dsp->fConst141 / fSlow223)) / fSlow276) + -1.0f);
	float fSlow285 = expf((dsp->fConst146 / fSlow214));
	float fSlow286 = mydsp_faustpower2_f(fSlow285);
	float fSlow287 = (1.0f - (fSlow286 * fSlow213));
	float fSlow288 = (1.0f - fSlow286);
	float fSlow289 = (fSlow287 / fSlow288);
	float fSlow290 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow287) / mydsp_faustpower2_f(fSlow288)) + -1.0f)));
	float fSlow291 = (fSlow289 - fSlow290);
	float fSlow292 = (fSlow285 * (fSlow290 + (1.0f - fSlow289)));
	float fSlow293 = ((expf((dsp->fConst146 / fSlow223)) / fSlow285) + -1.0f);
	float fSlow294 = (float)dsp->fVslider60;
	float fSlow295 = expf((0.0f - (dsp->fConst150 / fSlow294)));
	float fSlow296 = (((1.0f / (float)dsp->fVslider61) + -1.0f) * (1.0f - fSlow295));
	float fSlow297 = expf((0.0f - (dsp->fConst151 / fSlow294)));
	float fSlow298 = expf((0.0f - (dsp->fConst151 / (float)dsp->fVslider62)));
	float fSlow299 = (float)dsp->fVslider63;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iVec1[0] = 1;
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
			dsp->fVec2[0] = fTemp23;
			dsp->fRec1[0] = (dsp->fConst5 * ((fTemp23 - dsp->fVec2[1]) + (dsp->fConst11 * dsp->fRec1[1])));
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
			dsp->fVec3[0] = fTemp31;
			dsp->fRec28[0] = (dsp->fConst5 * ((fTemp31 - dsp->fVec3[1]) + (dsp->fConst11 * dsp->fRec28[1])));
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
			dsp->fVec4[0] = fTemp39;
			dsp->fRec38[0] = (dsp->fConst5 * ((fTemp39 - dsp->fVec4[1]) + (dsp->fConst11 * dsp->fRec38[1])));
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
			dsp->fVec5[0] = fTemp47;
			dsp->fRec48[0] = (dsp->fConst5 * ((fTemp47 - dsp->fVec5[1]) + (dsp->fConst11 * dsp->fRec48[1])));
			dsp->fRec0[0] = ((fSlow1 * (((dsp->fRec1[0] + dsp->fRec28[0]) + dsp->fRec38[0]) + dsp->fRec48[0])) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec0[2]) + (dsp->fConst10 * dsp->fRec0[1]))));
			float fTemp48 = (fSlow0 + (float)tanhf((float)((dsp->fConst3 * (dsp->fRec0[2] + (dsp->fRec0[0] + (2.0f * dsp->fRec0[1])))) - fSlow0)));
			float fTemp49 = (float)tanhf((float)((dsp->fRec58[1] + (fSlow36 * dsp->fRec59[1])) + 0.200000003f));
			dsp->fRec58[0] = (fTemp49 + -0.200000003f);
			dsp->iRec60[0] = ((1103515245 * dsp->iRec60[1]) + 12345);
			float fTemp50 = (4.65661287e-10f * (float)dsp->iRec60[0]);
			float fTemp51 = ((float)tanhf((float)(fTemp50 + (0.400000006f - (fTemp49 + (fSlow37 * dsp->fRec59[1]))))) + -0.200000003f);
			dsp->fRec59[0] = ((float)tanhf((float)((dsp->fRec59[1] + (fSlow36 * fTemp51)) + 0.200000003f)) + -0.200000003f);
			dsp->fVec6[0] = fSlow38;
			dsp->fRec62[0] = ((((fSlow38 - dsp->fVec6[1]) > 0.0f) > 0)?dsp->fConst13:max(0.0f, (dsp->fRec62[1] + -1.0f)));
			int iTemp52 = (dsp->fRec62[0] > 0.0f);
			dsp->iVec7[(dsp->IOTA & 8191)] = iTemp52;
			int iTemp53 = ((((iTemp52 + dsp->iVec7[((dsp->IOTA - dsp->iConst14) & 8191)]) + dsp->iVec7[((dsp->IOTA - dsp->iConst15) & 8191)]) + dsp->iVec7[((dsp->IOTA - dsp->iConst16) & 8191)]) + dsp->iVec7[((dsp->IOTA - dsp->iConst17) & 8191)]);
			int iTemp54 = (iTemp53 > 0);
			float fTemp55 = expf((0.0f - (dsp->fConst6 / (iTemp54?9.99999975e-05f:fSlow39))));
			dsp->fRec61[0] = ((dsp->fRec61[1] * fTemp55) + ((iTemp54?(float)iTemp53:0.0f) * (1.0f - fTemp55)));
			float fTemp56 = (float)tanhf((float)(fSlow34 * (dsp->fRec59[0] * dsp->fRec61[0])));
			float fTemp57 = (fTemp48 + fTemp56);
			dsp->fRec66[0] = (fSlow42 + (fSlow43 * dsp->fRec66[1]));
			dsp->iRec68[0] = (iSlow47 * (dsp->iRec68[1] + 1));
			int iTemp58 = (dsp->iRec68[0] < iSlow50);
			float fTemp59 = expf((0.0f - (dsp->fConst6 / (iSlow47?(iTemp58?fSlow52:fSlow51):fSlow48))));
			dsp->fRec67[0] = ((dsp->fRec67[1] * fTemp59) + ((iSlow47?(iTemp58?(float)iSlow47:fSlow53):0.0f) * (1.0f - fTemp59)));
			float fTemp60 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (dsp->fRec66[0] * (fSlow44 + (fSlow45 * dsp->fRec67[0])))))));
			float fTemp61 = (dsp->fRec64[1] + (2.0f * (fTemp60 * dsp->fRec65[1])));
			float fTemp62 = (fTemp61 + 0.119999997f);
			float fTemp63 = (0.666666687f * fTemp62);
			float fTemp64 = ((fTemp63 > 1.0f)?1.0f:((fTemp63 < -1.0f)?-1.0f:(fTemp61 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp62))))));
			dsp->fRec64[0] = (fTemp64 + -0.119999997f);
			dsp->fRec70[0] = ((dsp->fRec70[1] * fSlow54) + fSlow55);
			float fTemp65 = max(1.00000001e-07f, fabsf(dsp->fRec66[0]));
			float fTemp66 = (dsp->fRec71[1] + (dsp->fConst7 * fTemp65));
			float fTemp67 = (fTemp66 + -1.0f);
			int iTemp68 = (fTemp67 < 0.0f);
			dsp->fRec71[0] = (iTemp68?fTemp66:fTemp67);
			float fRec72 = (iTemp68?fTemp66:(fTemp66 + ((1.0f - (dsp->fConst0 / fTemp65)) * fTemp67)));
			dsp->fRec69[0] = ((dsp->fRec70[0] * ((2.0f * fRec72) + -1.0f)) - (dsp->fConst21 * ((dsp->fConst23 * dsp->fRec69[2]) + (dsp->fConst24 * dsp->fRec69[1]))));
			float fTemp69 = (dsp->fConst22 * (dsp->fRec69[2] + (dsp->fRec69[0] + (2.0f * dsp->fRec69[1]))));
			float fTemp70 = (fTemp64 + (dsp->fRec65[1] * min(fSlow56, min(2.0f, ((1.0f / fTemp60) - fTemp60)))));
			float fTemp71 = (fTemp69 + (0.239999995f - fTemp70));
			float fTemp72 = (0.666666687f * fTemp71);
			float fTemp73 = (((fTemp72 > 1.0f)?1.0f:((fTemp72 < -1.0f)?-1.0f:(fTemp69 + (0.239999995f - (fTemp70 + (0.148148149f * mydsp_faustpower3_f(fTemp71))))))) + -0.119999997f);
			float fTemp74 = (dsp->fRec65[1] + (2.0f * (fTemp60 * fTemp73)));
			float fTemp75 = (fTemp74 + 0.119999997f);
			float fTemp76 = (0.666666687f * fTemp75);
			dsp->fRec65[0] = (((fTemp76 > 1.0f)?1.0f:((fTemp76 < -1.0f)?-1.0f:(fTemp74 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp75)))))) + -0.119999997f);
			dsp->fRec63[0] = ((fSlow40 * dsp->fRec64[0]) - (dsp->fConst21 * ((dsp->fConst23 * dsp->fRec63[2]) + (dsp->fConst24 * dsp->fRec63[1]))));
			float fTemp77 = (dsp->fConst21 * (dsp->fRec63[2] + (dsp->fRec63[0] + (2.0f * dsp->fRec63[1]))));
			float fTemp78 = (fTemp77 + 0.200000003f);
			float fTemp79 = (0.666666687f * fTemp78);
			float fTemp80 = (((fTemp79 > 1.0f)?1.0f:((fTemp79 < -1.0f)?-1.0f:(fTemp77 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp78)))))) + -0.200000003f);
			float fTemp81 = (dsp->fRec73[1] + (fSlow60 * dsp->fRec74[1]));
			float fTemp82 = (1.02040815f * fTemp81);
			float fTemp83 = (min(max(fTemp82, 0.0f), 10.0f) + -0.625f);
			float fTemp84 = (1.77777779f * fTemp83);
			float fTemp85 = (1.33333337f * fabsf(fTemp81));
			float fTemp86 = (min(max(fTemp85, 0.0f), 10.0f) + -0.333333343f);
			float fTemp87 = (1.0f * fTemp86);
			float fTemp88 = ((fTemp81 <= 0.0f)?(0.0f - (0.75f * ((fTemp85 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp87 > 1.0f)?1.0f:((fTemp87 < -1.0f)?-1.0f:(fTemp86 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp86))))))))):fTemp85))):(0.980000019f * ((fTemp82 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp84 > 1.0f)?1.0f:((fTemp84 < -1.0f)?-1.0f:(fTemp83 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp83))))))))):fTemp82)));
			dsp->fRec73[0] = fTemp88;
			dsp->fVec8[0] = fSlow61;
			dsp->fRec76[0] = ((((fSlow61 - dsp->fVec8[1]) > 0.0f) > 0)?dsp->fConst26:max(0.0f, (dsp->fRec76[1] + -1.0f)));
			int iTemp89 = (dsp->fRec76[0] > 0.0f);
			int iTemp90 = (iTemp89 > 0);
			float fTemp91 = expf((0.0f - (dsp->fConst6 / (iTemp90?9.99999975e-05f:fSlow63))));
			dsp->fRec77[0] = ((dsp->fRec77[1] * fTemp91) + ((iTemp90?(float)iTemp89:0.0f) * (1.0f - fTemp91)));
			dsp->fRec75[0] = (((float)iTemp89 + (0.289999992f * dsp->fRec77[0])) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec75[2]) + (dsp->fConst10 * dsp->fRec75[1]))));
			float fTemp92 = (dsp->fConst3 * (dsp->fRec75[2] + (dsp->fRec75[0] + (2.0f * dsp->fRec75[1]))));
			float fTemp93 = (fTemp92 - (fTemp88 + (fSlow65 * dsp->fRec74[1])));
			float fTemp94 = (1.02040815f * fTemp93);
			float fTemp95 = (min(max(fTemp94, 0.0f), 10.0f) + -0.625f);
			float fTemp96 = (1.77777779f * fTemp95);
			float fTemp97 = (1.33333337f * fabsf(fTemp93));
			float fTemp98 = (min(max(fTemp97, 0.0f), 10.0f) + -0.333333343f);
			float fTemp99 = (1.0f * fTemp98);
			float fTemp100 = ((fTemp93 <= 0.0f)?(0.0f - (0.75f * ((fTemp97 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp99 > 1.0f)?1.0f:((fTemp99 < -1.0f)?-1.0f:(fTemp98 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp98))))))))):fTemp97))):(0.980000019f * ((fTemp94 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp96 > 1.0f)?1.0f:((fTemp96 < -1.0f)?-1.0f:(fTemp95 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp95))))))))):fTemp94)));
			float fTemp101 = (dsp->fRec74[1] + (fSlow60 * fTemp100));
			float fTemp102 = (1.02040815f * fTemp101);
			float fTemp103 = (min(max(fTemp102, 0.0f), 10.0f) + -0.625f);
			float fTemp104 = (1.77777779f * fTemp103);
			float fTemp105 = (1.33333337f * fabsf(fTemp101));
			float fTemp106 = (min(max(fTemp105, 0.0f), 10.0f) + -0.333333343f);
			float fTemp107 = (1.0f * fTemp106);
			dsp->fRec74[0] = ((fTemp101 <= 0.0f)?(0.0f - (0.75f * ((fTemp105 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp107 > 1.0f)?1.0f:((fTemp107 < -1.0f)?-1.0f:(fTemp106 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp106))))))))):fTemp105))):(0.980000019f * ((fTemp102 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp104 > 1.0f)?1.0f:((fTemp104 < -1.0f)?-1.0f:(fTemp103 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp103))))))))):fTemp102)));
			float fTemp108 = (dsp->fRec78[1] + (fSlow67 * dsp->fRec79[1]));
			float fTemp109 = (1.02040815f * fTemp108);
			float fTemp110 = (min(max(fTemp109, 0.0f), 10.0f) + -0.625f);
			float fTemp111 = (1.77777779f * fTemp110);
			float fTemp112 = (1.33333337f * fabsf(fTemp108));
			float fTemp113 = (min(max(fTemp112, 0.0f), 10.0f) + -0.333333343f);
			float fTemp114 = (1.0f * fTemp113);
			float fTemp115 = ((fTemp108 <= 0.0f)?(0.0f - (0.75f * ((fTemp112 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp114 > 1.0f)?1.0f:((fTemp114 < -1.0f)?-1.0f:(fTemp113 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp113))))))))):fTemp112))):(0.980000019f * ((fTemp109 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp111 > 1.0f)?1.0f:((fTemp111 < -1.0f)?-1.0f:(fTemp110 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp110))))))))):fTemp109)));
			dsp->fRec78[0] = fTemp115;
			float fTemp116 = (fTemp92 - (fTemp115 + (fSlow68 * dsp->fRec79[1])));
			float fTemp117 = (1.02040815f * fTemp116);
			float fTemp118 = (min(max(fTemp117, 0.0f), 10.0f) + -0.625f);
			float fTemp119 = (1.77777779f * fTemp118);
			float fTemp120 = (1.33333337f * fabsf(fTemp116));
			float fTemp121 = (min(max(fTemp120, 0.0f), 10.0f) + -0.333333343f);
			float fTemp122 = (1.0f * fTemp121);
			float fTemp123 = ((fTemp116 <= 0.0f)?(0.0f - (0.75f * ((fTemp120 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp122 > 1.0f)?1.0f:((fTemp122 < -1.0f)?-1.0f:(fTemp121 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp121))))))))):fTemp120))):(0.980000019f * ((fTemp117 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp119 > 1.0f)?1.0f:((fTemp119 < -1.0f)?-1.0f:(fTemp118 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp118))))))))):fTemp117)));
			float fTemp124 = (dsp->fRec79[1] + (fSlow67 * fTemp123));
			float fTemp125 = (1.02040815f * fTemp124);
			float fTemp126 = (min(max(fTemp125, 0.0f), 10.0f) + -0.625f);
			float fTemp127 = (1.77777779f * fTemp126);
			float fTemp128 = (1.33333337f * fabsf(fTemp124));
			float fTemp129 = (min(max(fTemp128, 0.0f), 10.0f) + -0.333333343f);
			float fTemp130 = (1.0f * fTemp129);
			dsp->fRec79[0] = ((fTemp124 <= 0.0f)?(0.0f - (0.75f * ((fTemp128 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp130 > 1.0f)?1.0f:((fTemp130 < -1.0f)?-1.0f:(fTemp129 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp129))))))))):fTemp128))):(0.980000019f * ((fTemp125 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp127 > 1.0f)?1.0f:((fTemp127 < -1.0f)?-1.0f:(fTemp126 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp126))))))))):fTemp125)));
			dsp->fRec80[0] = ((4.65661287e-10f * ((float)dsp->iRec60[0] * dsp->fRec77[0])) - (dsp->fConst30 * ((dsp->fConst31 * dsp->fRec80[2]) + (dsp->fConst32 * dsp->fRec80[1]))));
			float fTemp131 = (fSlow57 * ((dsp->fRec74[0] + dsp->fRec79[0]) + (fSlow69 * (dsp->fRec80[2] + (dsp->fRec80[0] + (2.0f * dsp->fRec80[1]))))));
			float fTemp132 = (fTemp131 + -0.100000001f);
			float fTemp133 = (0.666666687f * fTemp132);
			float fTemp134 = (((fTemp133 > 1.0f)?1.0f:((fTemp133 < -1.0f)?-1.0f:(fTemp131 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp132)))))) + 0.100000001f);
			dsp->fVec9[0] = fSlow70;
			dsp->fRec82[0] = ((((fSlow70 - dsp->fVec9[1]) > 0.0f) > 0)?dsp->fConst33:max(0.0f, (dsp->fRec82[1] + -1.0f)));
			int iTemp135 = (dsp->fRec82[0] > 0.0f);
			dsp->fVec10[0] = fSlow71;
			dsp->fRec83[0] = ((((fSlow71 - dsp->fVec10[1]) > 0.0f) > 0)?dsp->fConst33:max(0.0f, (dsp->fRec83[1] + -1.0f)));
			int iTemp136 = (dsp->fRec83[0] > 0.0f);
			int iTemp137 = ((iTemp135 + iTemp136) > 0);
			dsp->iVec11[0] = iTemp137;
			int iTemp138 = (iTemp137 > 0);
			int iTemp139 = ((dsp->iVec11[1] <= 0) & iTemp138);
			dsp->fRec84[0] = ((dsp->fRec84[1] * (float)(1 - iTemp139)) + ((float)iTemp139 * ((0.0839999989f * (float)iTemp135) + (fSlow72 * (float)iTemp136))));
			float fTemp140 = expf((0.0f - (dsp->fConst6 / (iTemp138?9.99999975e-05f:dsp->fRec84[0]))));
			dsp->fRec81[0] = ((dsp->fRec81[1] * fTemp140) + ((iTemp138?(float)iTemp137:0.0f) * (1.0f - fTemp140)));
			float fTemp141 = (dsp->fRec86[1] + (fSlow74 * dsp->fRec87[1]));
			float fTemp142 = (0.666666687f * fTemp141);
			float fTemp143 = ((fTemp142 > 1.0f)?1.0f:((fTemp142 < -1.0f)?-1.0f:(fTemp141 - (0.148148149f * mydsp_faustpower3_f(fTemp141)))));
			dsp->fRec86[0] = fTemp143;
			float fTemp144 = (dsp->fRec89[1] + (fSlow74 * dsp->fRec90[1]));
			float fTemp145 = (0.666666687f * fTemp144);
			float fTemp146 = ((fTemp145 > 1.0f)?1.0f:((fTemp145 < -1.0f)?-1.0f:(fTemp144 - (0.148148149f * mydsp_faustpower3_f(fTemp144)))));
			dsp->fRec89[0] = fTemp146;
			dsp->fVec12[0] = 394.0f;
			float fTemp147 = (dsp->fRec93[1] + (dsp->fConst12 * dsp->fVec12[1]));
			dsp->fRec93[0] = (fTemp147 - floorf(fTemp147));
			float fTemp148 = mydsp_faustpower2_f(((2.0f * dsp->fRec93[0]) + -1.0f));
			dsp->fVec13[0] = fTemp148;
			float fTemp149 = ((fTemp148 - dsp->fVec13[1]) * (float)dsp->iVec1[1]);
			dsp->fVec14[(dsp->IOTA & 255)] = fTemp149;
			dsp->fVec15[0] = 309.0f;
			float fTemp150 = (dsp->fRec94[1] + (dsp->fConst12 * dsp->fVec15[1]));
			dsp->fRec94[0] = (fTemp150 - floorf(fTemp150));
			float fTemp151 = mydsp_faustpower2_f(((2.0f * dsp->fRec94[0]) + -1.0f));
			dsp->fVec16[0] = fTemp151;
			float fTemp152 = ((fTemp151 - dsp->fVec16[1]) * (float)dsp->iVec1[1]);
			dsp->fVec17[(dsp->IOTA & 511)] = fTemp152;
			dsp->fVec18[0] = 493.0f;
			float fTemp153 = (dsp->fRec95[1] + (dsp->fConst12 * dsp->fVec18[1]));
			dsp->fRec95[0] = (fTemp153 - floorf(fTemp153));
			float fTemp154 = mydsp_faustpower2_f(((2.0f * dsp->fRec95[0]) + -1.0f));
			dsp->fVec19[0] = fTemp154;
			float fTemp155 = ((fTemp154 - dsp->fVec19[1]) * (float)dsp->iVec1[1]);
			dsp->fVec20[(dsp->IOTA & 255)] = fTemp155;
			dsp->fVec21[0] = 361.0f;
			float fTemp156 = (dsp->fRec96[1] + (dsp->fConst12 * dsp->fVec21[1]));
			dsp->fRec96[0] = (fTemp156 - floorf(fTemp156));
			float fTemp157 = mydsp_faustpower2_f(((2.0f * dsp->fRec96[0]) + -1.0f));
			dsp->fVec22[0] = fTemp157;
			float fTemp158 = ((fTemp157 - dsp->fVec22[1]) * (float)dsp->iVec1[1]);
			dsp->fVec23[(dsp->IOTA & 511)] = fTemp158;
			dsp->fVec24[0] = 422.0f;
			float fTemp159 = (dsp->fRec97[1] + (dsp->fConst12 * dsp->fVec24[1]));
			dsp->fRec97[0] = (fTemp159 - floorf(fTemp159));
			float fTemp160 = mydsp_faustpower2_f(((2.0f * dsp->fRec97[0]) + -1.0f));
			dsp->fVec25[0] = fTemp160;
			float fTemp161 = ((fTemp160 - dsp->fVec25[1]) * (float)dsp->iVec1[1]);
			dsp->fVec26[(dsp->IOTA & 255)] = fTemp161;
			dsp->fVec27[0] = 203.0f;
			float fTemp162 = (dsp->fRec98[1] + (dsp->fConst12 * dsp->fVec27[1]));
			dsp->fRec98[0] = (fTemp162 - floorf(fTemp162));
			float fTemp163 = mydsp_faustpower2_f(((2.0f * dsp->fRec98[0]) + -1.0f));
			dsp->fVec28[0] = fTemp163;
			float fTemp164 = ((fTemp163 - dsp->fVec28[1]) * (float)dsp->iVec1[1]);
			dsp->fVec29[(dsp->IOTA & 511)] = fTemp164;
			dsp->fRec92[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp149 - (dsp->fConst44 * dsp->fVec14[((dsp->IOTA - dsp->iConst45) & 255)])) - (dsp->fConst46 * dsp->fVec14[((dsp->IOTA - dsp->iConst47) & 255)]))) + (0.000809061516f * ((fTemp152 - (dsp->fConst50 * dsp->fVec17[((dsp->IOTA - dsp->iConst51) & 511)])) - (dsp->fConst52 * dsp->fVec17[((dsp->IOTA - dsp->iConst53) & 511)])))) + (0.000507099379f * ((fTemp155 - (dsp->fConst56 * dsp->fVec20[((dsp->IOTA - dsp->iConst57) & 255)])) - (dsp->fConst58 * dsp->fVec20[((dsp->IOTA - dsp->iConst59) & 255)])))) + (0.000692520756f * ((fTemp158 - (dsp->fConst62 * dsp->fVec23[((dsp->IOTA - dsp->iConst63) & 511)])) - (dsp->fConst64 * dsp->fVec23[((dsp->IOTA - dsp->iConst65) & 511)])))) + (0.000592417084f * ((fTemp161 - (dsp->fConst68 * dsp->fVec26[((dsp->IOTA - dsp->iConst69) & 255)])) - (dsp->fConst70 * dsp->fVec26[((dsp->IOTA - dsp->iConst71) & 255)])))) + (0.00123152707f * ((fTemp164 - (dsp->fConst74 * dsp->fVec29[((dsp->IOTA - dsp->iConst75) & 511)])) - (dsp->fConst76 * dsp->fVec29[((dsp->IOTA - dsp->iConst77) & 511)]))))) - (dsp->fConst40 * ((dsp->fConst78 * dsp->fRec92[2]) + (dsp->fConst79 * dsp->fRec92[1]))));
			float fTemp165 = (dsp->fConst40 * (((dsp->fConst41 * dsp->fRec92[0]) + (dsp->fConst80 * dsp->fRec92[1])) + (dsp->fConst41 * dsp->fRec92[2])));
			float fTemp166 = (fTemp146 + (fSlow75 * dsp->fRec90[1]));
			float fTemp167 = (fTemp165 - fTemp166);
			float fTemp168 = (0.666666687f * fTemp167);
			float fTemp169 = ((fTemp168 > 1.0f)?1.0f:((fTemp168 < -1.0f)?-1.0f:(fTemp165 - (fTemp166 + (0.148148149f * mydsp_faustpower3_f(fTemp167))))));
			float fTemp170 = (dsp->fRec90[1] + (fSlow74 * fTemp169));
			float fTemp171 = (0.666666687f * fTemp170);
			dsp->fRec90[0] = ((fTemp171 > 1.0f)?1.0f:((fTemp171 < -1.0f)?-1.0f:(fTemp170 - (0.148148149f * mydsp_faustpower3_f(fTemp170)))));
			float fRec91 = fTemp169;
			float fTemp172 = (fTemp143 + (fSlow75 * dsp->fRec87[1]));
			float fTemp173 = (fRec91 - fTemp172);
			float fTemp174 = (0.666666687f * fTemp173);
			float fTemp175 = ((fTemp174 > 1.0f)?1.0f:((fTemp174 < -1.0f)?-1.0f:(fRec91 - (fTemp172 + (0.148148149f * mydsp_faustpower3_f(fTemp173))))));
			float fTemp176 = (dsp->fRec87[1] + (fSlow74 * fTemp175));
			float fTemp177 = (0.666666687f * fTemp176);
			dsp->fRec87[0] = ((fTemp177 > 1.0f)?1.0f:((fTemp177 < -1.0f)?-1.0f:(fTemp176 - (0.148148149f * mydsp_faustpower3_f(fTemp176)))));
			float fRec88 = fTemp175;
			dsp->fRec85[0] = (fRec88 - (dsp->fConst81 * ((dsp->fConst82 * dsp->fRec85[2]) + (dsp->fConst83 * dsp->fRec85[1]))));
			float fTemp178 = ((dsp->fRec81[0] * ((dsp->fConst37 * (dsp->fRec85[2] + (dsp->fRec85[0] + (2.0f * dsp->fRec85[1])))) + (9.31322554e-12f * (float)dsp->iRec60[0]))) * fSlow77);
			dsp->fVec30[0] = fSlow81;
			dsp->fRec102[0] = ((((fSlow81 - dsp->fVec30[1]) > 0.0f) > 0)?dsp->fConst84:max(0.0f, (dsp->fRec102[1] + -1.0f)));
			int iTemp179 = (dsp->fRec102[0] > 0.0f);
			dsp->fVec31[0] = fSlow82;
			dsp->fRec103[0] = ((((fSlow82 - dsp->fVec31[1]) > 0.0f) > 0)?dsp->fConst84:max(0.0f, (dsp->fRec103[1] + -1.0f)));
			int iTemp180 = (dsp->fRec103[0] > 0.0f);
			int iTemp181 = ((iTemp179 + iTemp180) > 0);
			dsp->iVec32[0] = iTemp181;
			int iTemp182 = (((iTemp181 - dsp->iVec32[1]) > 0) > 0);
			dsp->fVec33[0] = fSlow83;
			dsp->fRec101[0] = (iTemp182?0.0f:min(fSlow84, ((dsp->fRec101[1] + (dsp->fConst0 * (fSlow83 - dsp->fVec33[1]))) + 1.0f)));
			int iTemp183 = (dsp->fRec101[0] < dsp->fConst85);
			float fTemp184 = sinf((3.14159274f * min(0.25f, (fSlow79 * ((fSlow80 * (iTemp183?((dsp->fRec101[0] < 0.0f)?0.0f:(iTemp183?(dsp->fConst86 * dsp->fRec101[0]):1.0f)):((dsp->fRec101[0] < fSlow84)?((fSlow85 * (0.0f - (dsp->fRec101[0] - dsp->fConst85))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp185 = (dsp->fRec99[1] + (2.0f * (fTemp184 * dsp->fRec100[1])));
			float fTemp186 = (min(max(fTemp185, 0.0f), 10.0f) + -0.714285731f);
			float fTemp187 = (2.33333325f * fTemp186);
			float fTemp188 = (1.14942527f * fabsf(fTemp185));
			float fTemp189 = (min(max(fTemp188, 0.0f), 10.0f) + -0.333333343f);
			float fTemp190 = (1.0f * fTemp189);
			float fTemp191 = ((fTemp185 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp188 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp190 > 1.0f)?1.0f:((fTemp190 < -1.0f)?-1.0f:(fTemp189 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp189))))))))):fTemp188))):((fTemp185 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp187 > 1.0f)?1.0f:((fTemp187 < -1.0f)?-1.0f:(fTemp186 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp186))))))))):fTemp185));
			dsp->fRec99[0] = fTemp191;
			float fTemp192 = (dsp->fConst0 - dsp->fVec0[1]);
			dsp->fRec104[0] = (iTemp182?0.0f:min(dsp->fConst87, ((dsp->fRec104[1] + (0.00609999988f * fTemp192)) + 1.0f)));
			int iTemp193 = (dsp->fRec104[0] < dsp->fConst88);
			int iTemp194 = ((dsp->iVec32[1] <= 0) & (iTemp181 > 0));
			dsp->fRec105[0] = ((dsp->fRec105[1] * (float)(1 - iTemp194)) + ((float)iTemp194 * ((0.850000024f * (float)iTemp179) + (fSlow86 * (float)iTemp180))));
			float fTemp195 = (((iTemp193?((dsp->fRec104[0] < 0.0f)?0.0f:(iTemp193?(dsp->fConst89 * dsp->fRec104[0]):1.0f)):((dsp->fRec104[0] < dsp->fConst87)?((dsp->fConst86 * (0.0f - (dsp->fRec104[0] - dsp->fConst88))) + 1.0f):0.0f)) * ((3.25962901e-09f * (float)dsp->iRec60[0]) + 3.0f)) - (fTemp191 + (dsp->fRec100[1] * min((2.0f * (1.0f - powf(dsp->fRec105[0], 0.25f))), min(2.0f, ((1.0f / fTemp184) - fTemp184))))));
			float fTemp196 = (min(max(fTemp195, 0.0f), 10.0f) + -0.714285731f);
			float fTemp197 = (2.33333325f * fTemp196);
			float fTemp198 = (1.14942527f * fabsf(fTemp195));
			float fTemp199 = (min(max(fTemp198, 0.0f), 10.0f) + -0.333333343f);
			float fTemp200 = (1.0f * fTemp199);
			float fTemp201 = ((fTemp195 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp198 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp200 > 1.0f)?1.0f:((fTemp200 < -1.0f)?-1.0f:(fTemp199 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp199))))))))):fTemp198))):((fTemp195 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp197 > 1.0f)?1.0f:((fTemp197 < -1.0f)?-1.0f:(fTemp196 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp196))))))))):fTemp195));
			float fTemp202 = (dsp->fRec100[1] + (2.0f * (fTemp184 * fTemp201)));
			float fTemp203 = (min(max(fTemp202, 0.0f), 10.0f) + -0.714285731f);
			float fTemp204 = (2.33333325f * fTemp203);
			float fTemp205 = (1.14942527f * fabsf(fTemp202));
			float fTemp206 = (min(max(fTemp205, 0.0f), 10.0f) + -0.333333343f);
			float fTemp207 = (1.0f * fTemp206);
			dsp->fRec100[0] = ((fTemp202 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp205 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp207 > 1.0f)?1.0f:((fTemp207 < -1.0f)?-1.0f:(fTemp206 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp206))))))))):fTemp205))):((fTemp202 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp204 > 1.0f)?1.0f:((fTemp204 < -1.0f)?-1.0f:(fTemp203 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp203))))))))):fTemp202));
			float fTemp208 = ((float)tanhf((float)((fSlow78 * dsp->fRec99[0]) + -0.100000001f)) + 0.100000001f);
			float fTemp209 = (0.5f * fTemp208);
			dsp->fRec109[0] = ((fSlow100 * ((0.5f * ((dsp->fRec107[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec107[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec109[2]) + (dsp->fConst95 * dsp->fRec109[1]))));
			float fTemp210 = fabsf(dsp->fRec107[((dsp->IOTA - 1001) & 1023)]);
			float fTemp211 = ((dsp->fRec110[1] > fTemp210)?dsp->fConst101:dsp->fConst100);
			dsp->fRec111[0] = ((dsp->fRec111[1] * fTemp211) + (fTemp210 * (1.0f - fTemp211)));
			dsp->fRec110[0] = dsp->fRec111[0];
			float fTemp212 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec110[0]) + 1.0f)));
			float fTemp213 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp212)));
			float fTemp214 = (dsp->fRec108[1] * ((dsp->fConst97 * fTemp213) + -8.0f));
			float fTemp215 = (dsp->fConst96 * fTemp213);
			float fTemp216 = (dsp->fConst102 * ((dsp->fConst103 * fTemp212) - (dsp->fConst104 * (fTemp213 / fTemp212))));
			float fTemp217 = ((fTemp215 + fTemp216) + 4.0f);
			dsp->fRec108[0] = ((dsp->fConst93 * (dsp->fRec109[2] + (dsp->fRec109[0] + (2.0f * dsp->fRec109[1])))) - ((fTemp214 + (dsp->fRec108[2] * (fTemp215 + (4.0f - fTemp216)))) / fTemp217));
			float fTemp218 = (fTemp215 + 4.0f);
			dsp->fRec113[0] = (fTemp50 - (fSlow108 * ((fSlow110 * dsp->fRec113[2]) + (fSlow111 * dsp->fRec113[1]))));
			dsp->fRec112[0] = ((fSlow108 * (((fSlow109 * dsp->fRec113[0]) + (fSlow112 * dsp->fRec113[1])) + (fSlow109 * dsp->fRec113[2]))) - (fSlow113 * ((fSlow114 * dsp->fRec112[2]) + (fSlow115 * dsp->fRec112[1]))));
			float fTemp219 = (dsp->fRec112[2] + (dsp->fRec112[0] + (2.0f * dsp->fRec112[1])));
			dsp->fVec34[0] = fSlow116;
			float fTemp220 = (0.00400000019f * fTemp192);
			dsp->fRec114[0] = ((((fSlow116 - dsp->fVec34[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec114[1] + fTemp220) + 1.0f)));
			int iTemp221 = (dsp->fRec114[0] < dsp->fConst107);
			float fTemp222 = ((fSlow99 * (((fTemp214 + (dsp->fRec108[0] * fTemp218)) + (dsp->fRec108[2] * fTemp218)) / fTemp217)) + (fSlow105 * (fTemp219 * (iTemp221?((dsp->fRec114[0] < 0.0f)?0.0f:(iTemp221?(dsp->fConst108 * dsp->fRec114[0]):1.0f)):((dsp->fRec114[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec114[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec35[(dsp->IOTA & 4095)] = fTemp222;
			dsp->fRec107[(dsp->IOTA & 1023)] = ((fSlow97 * dsp->fVec35[((dsp->IOTA - iSlow118) & 4095)]) + (fSlow119 * (((((fSlow120 * dsp->fVec35[((dsp->IOTA - iSlow121) & 4095)]) + (fSlow122 * dsp->fVec35[((dsp->IOTA - iSlow123) & 4095)])) + (fSlow125 * dsp->fVec35[((dsp->IOTA - iSlow126) & 4095)])) + (fSlow128 * dsp->fVec35[((dsp->IOTA - iSlow129) & 4095)])) + (fSlow130 * dsp->fVec35[((dsp->IOTA - iSlow131) & 4095)]))));
			dsp->fRec117[0] = ((fSlow100 * ((0.5f * ((dsp->fRec115[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec115[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec117[2]) + (dsp->fConst95 * dsp->fRec117[1]))));
			float fTemp223 = fabsf(dsp->fRec115[((dsp->IOTA - 1001) & 1023)]);
			float fTemp224 = ((dsp->fRec118[1] > fTemp223)?dsp->fConst101:dsp->fConst100);
			dsp->fRec119[0] = ((dsp->fRec119[1] * fTemp224) + (fTemp223 * (1.0f - fTemp224)));
			dsp->fRec118[0] = dsp->fRec119[0];
			float fTemp225 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec118[0]) + 1.0f)));
			float fTemp226 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp225)));
			float fTemp227 = (dsp->fRec116[1] * ((dsp->fConst97 * fTemp226) + -8.0f));
			float fTemp228 = (dsp->fConst96 * fTemp226);
			float fTemp229 = (dsp->fConst102 * ((dsp->fConst103 * fTemp225) - (dsp->fConst104 * (fTemp226 / fTemp225))));
			float fTemp230 = ((fTemp228 + fTemp229) + 4.0f);
			dsp->fRec116[0] = ((dsp->fConst93 * (dsp->fRec117[2] + (dsp->fRec117[0] + (2.0f * dsp->fRec117[1])))) - ((fTemp227 + (dsp->fRec116[2] * (fTemp228 + (4.0f - fTemp229)))) / fTemp230));
			float fTemp231 = (fTemp228 + 4.0f);
			dsp->fVec36[0] = fSlow143;
			dsp->fRec120[0] = ((((fSlow143 - dsp->fVec36[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec120[1] + fTemp220) + 1.0f)));
			int iTemp232 = (dsp->fRec120[0] < dsp->fConst107);
			float fTemp233 = ((fSlow142 * (((fTemp227 + (dsp->fRec116[0] * fTemp231)) + (dsp->fRec116[2] * fTemp231)) / fTemp230)) + (fSlow105 * (fTemp219 * (iTemp232?((dsp->fRec120[0] < 0.0f)?0.0f:(iTemp232?(dsp->fConst108 * dsp->fRec120[0]):1.0f)):((dsp->fRec120[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec120[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec37[(dsp->IOTA & 4095)] = fTemp233;
			dsp->fRec115[(dsp->IOTA & 1023)] = ((fSlow141 * dsp->fVec37[((dsp->IOTA - iSlow145) & 4095)]) + (fSlow146 * (((((fSlow147 * dsp->fVec37[((dsp->IOTA - iSlow148) & 4095)]) + (fSlow149 * dsp->fVec37[((dsp->IOTA - iSlow150) & 4095)])) + (fSlow152 * dsp->fVec37[((dsp->IOTA - iSlow153) & 4095)])) + (fSlow155 * dsp->fVec37[((dsp->IOTA - iSlow156) & 4095)])) + (fSlow157 * dsp->fVec37[((dsp->IOTA - iSlow158) & 4095)]))));
			dsp->fRec123[0] = ((fSlow100 * ((0.5f * ((dsp->fRec121[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec121[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec123[2]) + (dsp->fConst95 * dsp->fRec123[1]))));
			float fTemp234 = fabsf(dsp->fRec121[((dsp->IOTA - 1001) & 1023)]);
			float fTemp235 = ((dsp->fRec124[1] > fTemp234)?dsp->fConst101:dsp->fConst100);
			dsp->fRec125[0] = ((dsp->fRec125[1] * fTemp235) + (fTemp234 * (1.0f - fTemp235)));
			dsp->fRec124[0] = dsp->fRec125[0];
			float fTemp236 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec124[0]) + 1.0f)));
			float fTemp237 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp236)));
			float fTemp238 = (dsp->fRec122[1] * ((dsp->fConst97 * fTemp237) + -8.0f));
			float fTemp239 = (dsp->fConst96 * fTemp237);
			float fTemp240 = (dsp->fConst102 * ((dsp->fConst103 * fTemp236) - (dsp->fConst104 * (fTemp237 / fTemp236))));
			float fTemp241 = ((fTemp239 + fTemp240) + 4.0f);
			dsp->fRec122[0] = ((dsp->fConst93 * (dsp->fRec123[2] + (dsp->fRec123[0] + (2.0f * dsp->fRec123[1])))) - ((fTemp238 + (dsp->fRec122[2] * (fTemp239 + (4.0f - fTemp240)))) / fTemp241));
			float fTemp242 = (fTemp239 + 4.0f);
			dsp->fVec38[0] = fSlow170;
			dsp->fRec126[0] = ((((fSlow170 - dsp->fVec38[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec126[1] + fTemp220) + 1.0f)));
			int iTemp243 = (dsp->fRec126[0] < dsp->fConst107);
			float fTemp244 = ((fSlow169 * (((fTemp238 + (dsp->fRec122[0] * fTemp242)) + (dsp->fRec122[2] * fTemp242)) / fTemp241)) + (fSlow105 * (fTemp219 * (iTemp243?((dsp->fRec126[0] < 0.0f)?0.0f:(iTemp243?(dsp->fConst108 * dsp->fRec126[0]):1.0f)):((dsp->fRec126[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec126[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec39[(dsp->IOTA & 4095)] = fTemp244;
			dsp->fRec121[(dsp->IOTA & 1023)] = ((fSlow168 * dsp->fVec39[((dsp->IOTA - iSlow172) & 4095)]) + (fSlow173 * (((((fSlow174 * dsp->fVec39[((dsp->IOTA - iSlow175) & 4095)]) + (fSlow176 * dsp->fVec39[((dsp->IOTA - iSlow177) & 4095)])) + (fSlow179 * dsp->fVec39[((dsp->IOTA - iSlow180) & 4095)])) + (fSlow182 * dsp->fVec39[((dsp->IOTA - iSlow183) & 4095)])) + (fSlow184 * dsp->fVec39[((dsp->IOTA - iSlow185) & 4095)]))));
			dsp->fRec129[0] = ((fSlow100 * ((0.5f * ((dsp->fRec127[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec127[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec129[2]) + (dsp->fConst95 * dsp->fRec129[1]))));
			float fTemp245 = fabsf(dsp->fRec127[((dsp->IOTA - 1001) & 1023)]);
			float fTemp246 = ((dsp->fRec130[1] > fTemp245)?dsp->fConst101:dsp->fConst100);
			dsp->fRec131[0] = ((dsp->fRec131[1] * fTemp246) + (fTemp245 * (1.0f - fTemp246)));
			dsp->fRec130[0] = dsp->fRec131[0];
			float fTemp247 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec130[0]) + 1.0f)));
			float fTemp248 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp247)));
			float fTemp249 = (dsp->fRec128[1] * ((dsp->fConst97 * fTemp248) + -8.0f));
			float fTemp250 = (dsp->fConst96 * fTemp248);
			float fTemp251 = (dsp->fConst102 * ((dsp->fConst103 * fTemp247) - (dsp->fConst104 * (fTemp248 / fTemp247))));
			float fTemp252 = ((fTemp250 + fTemp251) + 4.0f);
			dsp->fRec128[0] = ((dsp->fConst93 * (dsp->fRec129[2] + (dsp->fRec129[0] + (2.0f * dsp->fRec129[1])))) - ((fTemp249 + (dsp->fRec128[2] * (fTemp250 + (4.0f - fTemp251)))) / fTemp252));
			float fTemp253 = (fTemp250 + 4.0f);
			dsp->fVec40[0] = fSlow197;
			dsp->fRec132[0] = ((((fSlow197 - dsp->fVec40[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec132[1] + fTemp220) + 1.0f)));
			int iTemp254 = (dsp->fRec132[0] < dsp->fConst107);
			float fTemp255 = ((fSlow196 * (((fTemp249 + (dsp->fRec128[0] * fTemp253)) + (dsp->fRec128[2] * fTemp253)) / fTemp252)) + (fSlow105 * (fTemp219 * (iTemp254?((dsp->fRec132[0] < 0.0f)?0.0f:(iTemp254?(dsp->fConst108 * dsp->fRec132[0]):1.0f)):((dsp->fRec132[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec132[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec41[(dsp->IOTA & 4095)] = fTemp255;
			dsp->fRec127[(dsp->IOTA & 1023)] = ((fSlow195 * dsp->fVec41[((dsp->IOTA - iSlow199) & 4095)]) + (fSlow200 * (((((fSlow201 * dsp->fVec41[((dsp->IOTA - iSlow202) & 4095)]) + (fSlow203 * dsp->fVec41[((dsp->IOTA - iSlow204) & 4095)])) + (fSlow206 * dsp->fVec41[((dsp->IOTA - iSlow207) & 4095)])) + (fSlow209 * dsp->fVec41[((dsp->IOTA - iSlow210) & 4095)])) + (fSlow211 * dsp->fVec41[((dsp->IOTA - iSlow212) & 4095)]))));
			float fTemp256 = (fSlow87 * ((((0.600000024f * dsp->fRec107[((dsp->IOTA - 0) & 1023)]) + (0.400000006f * dsp->fRec115[((dsp->IOTA - 0) & 1023)])) + (0.300000012f * dsp->fRec121[((dsp->IOTA - 0) & 1023)])) + (0.200000003f * dsp->fRec127[((dsp->IOTA - 0) & 1023)])));
			float fTemp257 = (fTemp256 + 0.100000001f);
			float fTemp258 = (0.666666687f * fTemp257);
			float fTemp259 = (((fTemp258 > 1.0f)?1.0f:((fTemp258 < -1.0f)?-1.0f:(fTemp256 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp257)))))) + -0.100000001f);
			dsp->fVec42[0] = fTemp259;
			dsp->fRec106[0] = (dsp->fConst5 * ((fTemp259 - dsp->fVec42[1]) + (dsp->fConst11 * dsp->fRec106[1])));
			dsp->fRec144[0] = ((fSlow227 * dsp->fRec144[1]) + (fSlow228 * (dsp->fRec140[1] + dsp->fRec140[2])));
			dsp->fRec143[0] = ((fSlow221 * dsp->fRec143[1]) + (fSlow222 * (dsp->fRec140[1] + (fSlow224 * dsp->fRec144[0]))));
			dsp->fVec43[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec143[0]) + 9.99999968e-21f);
			float fTemp260 = (0.0500000007f * fTemp208);
			float fTemp261 = (fSlow87 * ((((0.400000006f * dsp->fRec107[((dsp->IOTA - 0) & 1023)]) + (0.600000024f * dsp->fRec115[((dsp->IOTA - 0) & 1023)])) + (0.699999988f * dsp->fRec121[((dsp->IOTA - 0) & 1023)])) + (0.800000012f * dsp->fRec127[((dsp->IOTA - 0) & 1023)])));
			float fTemp262 = (fTemp261 + 0.100000001f);
			float fTemp263 = (0.666666687f * fTemp262);
			float fTemp264 = (((fTemp263 > 1.0f)?1.0f:((fTemp263 < -1.0f)?-1.0f:(fTemp261 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp262)))))) + -0.100000001f);
			dsp->fVec44[0] = fTemp264;
			dsp->fRec145[0] = (dsp->fConst5 * ((fTemp264 - dsp->fVec44[1]) + (dsp->fConst11 * dsp->fRec145[1])));
			dsp->fVec45[(dsp->IOTA & 16383)] = (fSlow229 * (((((0.294f * fTemp48) + ((0.0289999992f * fTemp178) + (fTemp260 + (0.5f * dsp->fRec145[0])))) + (0.319999993f * fTemp134)) + (0.600000024f * fTemp56)) + (0.180000007f * fTemp80)));
			float fTemp265 = (0.300000012f * dsp->fVec45[((dsp->IOTA - iSlow230) & 16383)]);
			float fTemp266 = (((0.600000024f * dsp->fRec141[1]) + dsp->fVec43[((dsp->IOTA - dsp->iConst113) & 8191)]) - fTemp265);
			dsp->fVec46[(dsp->IOTA & 1023)] = fTemp266;
			dsp->fRec141[0] = dsp->fVec46[((dsp->IOTA - dsp->iConst114) & 1023)];
			float fRec142 = (0.0f - (0.600000024f * fTemp266));
			dsp->fRec149[0] = ((fSlow227 * dsp->fRec149[1]) + (fSlow228 * (dsp->fRec136[1] + dsp->fRec136[2])));
			dsp->fRec148[0] = ((fSlow237 * dsp->fRec148[1]) + (fSlow238 * (dsp->fRec136[1] + (fSlow239 * dsp->fRec149[0]))));
			dsp->fVec47[(dsp->IOTA & 16383)] = ((0.353553385f * dsp->fRec148[0]) + 9.99999968e-21f);
			float fTemp267 = (((0.600000024f * dsp->fRec146[1]) + dsp->fVec47[((dsp->IOTA - dsp->iConst118) & 16383)]) - fTemp265);
			dsp->fVec48[(dsp->IOTA & 2047)] = fTemp267;
			dsp->fRec146[0] = dsp->fVec48[((dsp->IOTA - dsp->iConst119) & 2047)];
			float fRec147 = (0.0f - (0.600000024f * fTemp267));
			dsp->fRec153[0] = ((fSlow227 * dsp->fRec153[1]) + (fSlow228 * (dsp->fRec138[1] + dsp->fRec138[2])));
			dsp->fRec152[0] = ((fSlow246 * dsp->fRec152[1]) + (fSlow247 * (dsp->fRec138[1] + (fSlow248 * dsp->fRec153[0]))));
			dsp->fVec49[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec152[0]) + 9.99999968e-21f);
			float fTemp268 = (dsp->fVec49[((dsp->IOTA - dsp->iConst123) & 8191)] + (fTemp265 + (0.600000024f * dsp->fRec150[1])));
			dsp->fVec50[(dsp->IOTA & 2047)] = fTemp268;
			dsp->fRec150[0] = dsp->fVec50[((dsp->IOTA - dsp->iConst124) & 2047)];
			float fRec151 = (0.0f - (0.600000024f * fTemp268));
			dsp->fRec157[0] = ((fSlow227 * dsp->fRec157[1]) + (fSlow228 * (dsp->fRec134[1] + dsp->fRec134[2])));
			dsp->fRec156[0] = ((fSlow255 * dsp->fRec156[1]) + (fSlow256 * (dsp->fRec134[1] + (fSlow257 * dsp->fRec157[0]))));
			dsp->fVec51[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec156[0]) + 9.99999968e-21f);
			float fTemp269 = (fTemp265 + ((0.600000024f * dsp->fRec154[1]) + dsp->fVec51[((dsp->IOTA - dsp->iConst128) & 8191)]));
			dsp->fVec52[(dsp->IOTA & 1023)] = fTemp269;
			dsp->fRec154[0] = dsp->fVec52[((dsp->IOTA - dsp->iConst129) & 1023)];
			float fRec155 = (0.0f - (0.600000024f * fTemp269));
			dsp->fRec161[0] = ((fSlow227 * dsp->fRec161[1]) + (fSlow228 * (dsp->fRec139[1] + dsp->fRec139[2])));
			dsp->fRec160[0] = ((fSlow264 * dsp->fRec160[1]) + (fSlow265 * (dsp->fRec139[1] + (fSlow266 * dsp->fRec161[0]))));
			dsp->fVec53[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec160[0]) + 9.99999968e-21f);
			dsp->fVec54[(dsp->IOTA & 16383)] = (fSlow229 * (((((0.195999995f * fTemp48) + ((0.261000007f * fTemp178) + (fTemp260 + (0.5f * dsp->fRec106[0])))) + (0.479999989f * fTemp134)) + (0.400000006f * fTemp56)) + (0.419999987f * fTemp80)));
			float fTemp270 = (0.300000012f * dsp->fVec54[((dsp->IOTA - iSlow230) & 16383)]);
			float fTemp271 = (dsp->fVec53[((dsp->IOTA - dsp->iConst133) & 8191)] - (fTemp270 + (0.600000024f * dsp->fRec158[1])));
			dsp->fVec55[(dsp->IOTA & 1023)] = fTemp271;
			dsp->fRec158[0] = dsp->fVec55[((dsp->IOTA - dsp->iConst134) & 1023)];
			float fRec159 = (0.600000024f * fTemp271);
			dsp->fRec165[0] = ((fSlow227 * dsp->fRec165[1]) + (fSlow228 * (dsp->fRec135[1] + dsp->fRec135[2])));
			dsp->fRec164[0] = ((fSlow273 * dsp->fRec164[1]) + (fSlow274 * (dsp->fRec135[1] + (fSlow275 * dsp->fRec165[0]))));
			dsp->fVec56[(dsp->IOTA & 4095)] = ((0.353553385f * dsp->fRec164[0]) + 9.99999968e-21f);
			float fTemp272 = (dsp->fVec56[((dsp->IOTA - dsp->iConst138) & 4095)] - (fTemp270 + (0.600000024f * dsp->fRec162[1])));
			dsp->fVec57[(dsp->IOTA & 2047)] = fTemp272;
			dsp->fRec162[0] = dsp->fVec57[((dsp->IOTA - dsp->iConst139) & 2047)];
			float fRec163 = (0.600000024f * fTemp272);
			dsp->fRec169[0] = ((fSlow227 * dsp->fRec169[1]) + (fSlow228 * (dsp->fRec137[1] + dsp->fRec137[2])));
			dsp->fRec168[0] = ((fSlow282 * dsp->fRec168[1]) + (fSlow283 * (dsp->fRec137[1] + (fSlow284 * dsp->fRec169[0]))));
			dsp->fVec58[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec168[0]) + 9.99999968e-21f);
			float fTemp273 = ((fTemp270 + dsp->fVec58[((dsp->IOTA - dsp->iConst143) & 8191)]) - (0.600000024f * dsp->fRec166[1]));
			dsp->fVec59[(dsp->IOTA & 1023)] = fTemp273;
			dsp->fRec166[0] = dsp->fVec59[((dsp->IOTA - dsp->iConst144) & 1023)];
			float fRec167 = (0.600000024f * fTemp273);
			dsp->fRec173[0] = ((fSlow227 * dsp->fRec173[1]) + (fSlow228 * (dsp->fRec133[1] + dsp->fRec133[2])));
			dsp->fRec172[0] = ((fSlow291 * dsp->fRec172[1]) + (fSlow292 * (dsp->fRec133[1] + (fSlow293 * dsp->fRec173[0]))));
			dsp->fVec60[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec172[0]) + 9.99999968e-21f);
			float fTemp274 = ((dsp->fVec60[((dsp->IOTA - dsp->iConst148) & 8191)] + fTemp270) - (0.600000024f * dsp->fRec170[1]));
			dsp->fVec61[(dsp->IOTA & 1023)] = fTemp274;
			dsp->fRec170[0] = dsp->fVec61[((dsp->IOTA - dsp->iConst149) & 1023)];
			float fRec171 = (0.600000024f * fTemp274);
			float fTemp275 = (fRec171 + fRec167);
			float fTemp276 = (fRec159 + (fRec163 + fTemp275));
			dsp->fRec133[0] = (dsp->fRec141[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + (dsp->fRec154[1] + (dsp->fRec158[1] + (dsp->fRec162[1] + (dsp->fRec166[1] + (dsp->fRec170[1] + (fRec142 + (fRec147 + (fRec151 + (fRec155 + fTemp276))))))))))));
			dsp->fRec134[0] = ((dsp->fRec158[1] + (dsp->fRec162[1] + (dsp->fRec166[1] + (dsp->fRec170[1] + fTemp276)))) - (dsp->fRec141[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + (dsp->fRec154[1] + (fRec142 + (fRec147 + (fRec155 + fRec151))))))));
			float fTemp277 = (fRec163 + fRec159);
			dsp->fRec135[0] = ((dsp->fRec150[1] + (dsp->fRec154[1] + (dsp->fRec166[1] + (dsp->fRec170[1] + (fRec151 + (fRec155 + fTemp275)))))) - (dsp->fRec141[1] + (dsp->fRec146[1] + (dsp->fRec158[1] + (dsp->fRec162[1] + (fRec142 + (fRec147 + fTemp277)))))));
			dsp->fRec136[0] = ((dsp->fRec141[1] + (dsp->fRec146[1] + (dsp->fRec166[1] + (dsp->fRec170[1] + (fRec142 + (fRec147 + fTemp275)))))) - (dsp->fRec150[1] + (dsp->fRec154[1] + (dsp->fRec158[1] + (dsp->fRec162[1] + (fRec151 + (fRec155 + fTemp277)))))));
			float fTemp278 = (fRec171 + fRec163);
			float fTemp279 = (fRec167 + fRec159);
			dsp->fRec137[0] = ((dsp->fRec146[1] + (dsp->fRec154[1] + (dsp->fRec162[1] + (dsp->fRec170[1] + (fRec147 + (fRec155 + fTemp278)))))) - (dsp->fRec141[1] + (dsp->fRec150[1] + (dsp->fRec158[1] + (dsp->fRec166[1] + (fRec142 + (fRec151 + fTemp279)))))));
			dsp->fRec138[0] = ((dsp->fRec141[1] + (dsp->fRec150[1] + (dsp->fRec162[1] + (dsp->fRec170[1] + (fRec142 + (fRec151 + fTemp278)))))) - (dsp->fRec146[1] + (dsp->fRec154[1] + (dsp->fRec158[1] + (dsp->fRec166[1] + (fRec147 + (fRec155 + fTemp279)))))));
			float fTemp280 = (fRec171 + fRec159);
			float fTemp281 = (fRec167 + fRec163);
			dsp->fRec139[0] = ((dsp->fRec141[1] + (dsp->fRec154[1] + (dsp->fRec158[1] + (dsp->fRec170[1] + (fRec142 + (fRec155 + fTemp280)))))) - (dsp->fRec146[1] + (dsp->fRec150[1] + (dsp->fRec162[1] + (dsp->fRec166[1] + (fRec147 + (fRec151 + fTemp281)))))));
			dsp->fRec140[0] = ((dsp->fRec146[1] + (dsp->fRec150[1] + (dsp->fRec158[1] + (dsp->fRec170[1] + (fRec147 + (fRec151 + fTemp280)))))) - (dsp->fRec141[1] + (dsp->fRec154[1] + (dsp->fRec162[1] + (dsp->fRec166[1] + (fRec142 + (fRec155 + fTemp281)))))));
			float fTemp282 = ((0.400000006f * fTemp57) + ((0.699999988f * fTemp80) + ((0.600000024f * fTemp134) + ((0.899999976f * fTemp178) + (fTemp209 + (dsp->fRec106[0] + (0.370000005f * (dsp->fRec134[0] + dsp->fRec135[0]))))))));
			float fTemp283 = ((0.600000024f * fTemp57) + ((0.300000012f * fTemp80) + ((0.400000006f * fTemp134) + ((0.100000001f * fTemp178) + (fTemp209 + (dsp->fRec145[0] + (0.370000005f * (dsp->fRec134[0] - dsp->fRec135[0]))))))));
			float fTemp284 = fabsf((fabsf(fTemp282) + fabsf(fTemp283)));
			float fTemp285 = ((dsp->fRec175[1] > fTemp284)?fSlow298:fSlow297);
			dsp->fRec176[0] = ((dsp->fRec176[1] * fTemp285) + (fTemp284 * (1.0f - fTemp285)));
			dsp->fRec175[0] = dsp->fRec176[0];
			dsp->fRec174[0] = ((fSlow295 * dsp->fRec174[1]) + (fSlow296 * max(((20.0f * log10f(dsp->fRec175[0])) - fSlow299), 0.0f)));
			float fTemp286 = powf(10.0f, (0.0500000007f * dsp->fRec174[0]));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp282 * fTemp286));
			output1[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp283 * fTemp286));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
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
			dsp->fVec2[1] = dsp->fVec2[0];
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
			dsp->fVec3[1] = dsp->fVec3[0];
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
			dsp->fVec4[1] = dsp->fVec4[0];
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
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->iRec60[1] = dsp->iRec60[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->iRec68[1] = dsp->iRec68[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec69[2] = dsp->fRec69[1];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec63[2] = dsp->fRec63[1];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec75[2] = dsp->fRec75[1];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[2] = dsp->fRec80[1];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->iVec11[1] = dsp->iVec11[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fVec25[1] = dsp->fVec25[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec92[2] = dsp->fRec92[1];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec85[2] = dsp->fRec85[1];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fVec31[1] = dsp->fVec31[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->iVec32[1] = dsp->iVec32[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec109[2] = dsp->fRec109[1];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec111[1] = dsp->fRec111[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec108[2] = dsp->fRec108[1];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec113[2] = dsp->fRec113[1];
			dsp->fRec113[1] = dsp->fRec113[0];
			dsp->fRec112[2] = dsp->fRec112[1];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec117[2] = dsp->fRec117[1];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec119[1] = dsp->fRec119[0];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fRec116[2] = dsp->fRec116[1];
			dsp->fRec116[1] = dsp->fRec116[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec120[1] = dsp->fRec120[0];
			dsp->fRec123[2] = dsp->fRec123[1];
			dsp->fRec123[1] = dsp->fRec123[0];
			dsp->fRec125[1] = dsp->fRec125[0];
			dsp->fRec124[1] = dsp->fRec124[0];
			dsp->fRec122[2] = dsp->fRec122[1];
			dsp->fRec122[1] = dsp->fRec122[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec126[1] = dsp->fRec126[0];
			dsp->fRec129[2] = dsp->fRec129[1];
			dsp->fRec129[1] = dsp->fRec129[0];
			dsp->fRec131[1] = dsp->fRec131[0];
			dsp->fRec130[1] = dsp->fRec130[0];
			dsp->fRec128[2] = dsp->fRec128[1];
			dsp->fRec128[1] = dsp->fRec128[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec132[1] = dsp->fRec132[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec144[1] = dsp->fRec144[0];
			dsp->fRec143[1] = dsp->fRec143[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec145[1] = dsp->fRec145[0];
			dsp->fRec141[1] = dsp->fRec141[0];
			dsp->fRec149[1] = dsp->fRec149[0];
			dsp->fRec148[1] = dsp->fRec148[0];
			dsp->fRec146[1] = dsp->fRec146[0];
			dsp->fRec153[1] = dsp->fRec153[0];
			dsp->fRec152[1] = dsp->fRec152[0];
			dsp->fRec150[1] = dsp->fRec150[0];
			dsp->fRec157[1] = dsp->fRec157[0];
			dsp->fRec156[1] = dsp->fRec156[0];
			dsp->fRec154[1] = dsp->fRec154[0];
			dsp->fRec161[1] = dsp->fRec161[0];
			dsp->fRec160[1] = dsp->fRec160[0];
			dsp->fRec158[1] = dsp->fRec158[0];
			dsp->fRec165[1] = dsp->fRec165[0];
			dsp->fRec164[1] = dsp->fRec164[0];
			dsp->fRec162[1] = dsp->fRec162[0];
			dsp->fRec169[1] = dsp->fRec169[0];
			dsp->fRec168[1] = dsp->fRec168[0];
			dsp->fRec166[1] = dsp->fRec166[0];
			dsp->fRec173[1] = dsp->fRec173[0];
			dsp->fRec172[1] = dsp->fRec172[0];
			dsp->fRec170[1] = dsp->fRec170[0];
			dsp->fRec133[2] = dsp->fRec133[1];
			dsp->fRec133[1] = dsp->fRec133[0];
			dsp->fRec134[2] = dsp->fRec134[1];
			dsp->fRec134[1] = dsp->fRec134[0];
			dsp->fRec135[2] = dsp->fRec135[1];
			dsp->fRec135[1] = dsp->fRec135[0];
			dsp->fRec136[2] = dsp->fRec136[1];
			dsp->fRec136[1] = dsp->fRec136[0];
			dsp->fRec137[2] = dsp->fRec137[1];
			dsp->fRec137[1] = dsp->fRec137[0];
			dsp->fRec138[2] = dsp->fRec138[1];
			dsp->fRec138[1] = dsp->fRec138[0];
			dsp->fRec139[2] = dsp->fRec139[1];
			dsp->fRec139[1] = dsp->fRec139[0];
			dsp->fRec140[2] = dsp->fRec140[1];
			dsp->fRec140[1] = dsp->fRec140[0];
			dsp->fRec176[1] = dsp->fRec176[0];
			dsp->fRec175[1] = dsp->fRec175[0];
			dsp->fRec174[1] = dsp->fRec174[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
