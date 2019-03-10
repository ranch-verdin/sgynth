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
	float fRec0[3];
	FAUSTFLOAT fVslider18;
	float fConst12;
	FAUSTFLOAT fVslider19;
	float fRec38[2];
	int iRec40[2];
	FAUSTFLOAT fVslider20;
	float fRec39[2];
	FAUSTFLOAT fButton0;
	float fVec4[2];
	float fConst13;
	float fRec42[2];
	int IOTA;
	int iVec5[8192];
	int iConst14;
	int iConst15;
	int iConst16;
	int iConst17;
	FAUSTFLOAT fVslider21;
	float fRec41[2];
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	FAUSTFLOAT fVslider22;
	FAUSTFLOAT fVslider23;
	FAUSTFLOAT fVslider24;
	float fRec46[2];
	FAUSTFLOAT fVslider25;
	FAUSTFLOAT fVslider26;
	FAUSTFLOAT fVslider27;
	FAUSTFLOAT fVslider28;
	int iRec48[2];
	FAUSTFLOAT fVslider29;
	FAUSTFLOAT fVslider30;
	FAUSTFLOAT fVslider31;
	float fRec47[2];
	float fRec44[2];
	float fConst22;
	FAUSTFLOAT fVslider32;
	float fRec50[2];
	float fRec51[2];
	float fConst23;
	float fConst24;
	float fRec49[3];
	FAUSTFLOAT fVslider33;
	float fRec45[2];
	float fRec43[3];
	FAUSTFLOAT fVslider34;
	float fConst25;
	FAUSTFLOAT fVslider35;
	float fRec53[2];
	FAUSTFLOAT fButton1;
	float fVec6[2];
	float fConst26;
	float fRec56[2];
	FAUSTFLOAT fVslider36;
	float fRec57[2];
	float fRec55[3];
	float fRec54[2];
	float fConst27;
	float fRec58[2];
	float fRec59[2];
	float fConst28;
	float fConst29;
	float fConst30;
	float fConst31;
	float fConst32;
	float fRec60[3];
	FAUSTFLOAT fButton2;
	float fVec7[2];
	float fConst33;
	float fRec62[2];
	FAUSTFLOAT fButton3;
	float fVec8[2];
	float fRec63[2];
	int iVec9[2];
	FAUSTFLOAT fVslider37;
	float fRec64[2];
	float fRec61[2];
	float fConst34;
	float fConst35;
	float fConst36;
	float fConst37;
	FAUSTFLOAT fVslider38;
	float fRec66[2];
	float fRec69[2];
	float fConst38;
	float fConst39;
	float fConst40;
	float fConst41;
	float fVec10[2];
	float fRec73[2];
	float fVec11[2];
	float fVec12[256];
	float fConst42;
	float fConst43;
	float fConst44;
	int iConst45;
	float fConst46;
	int iConst47;
	float fVec13[2];
	float fRec74[2];
	float fVec14[2];
	float fVec15[512];
	float fConst48;
	float fConst49;
	float fConst50;
	int iConst51;
	float fConst52;
	int iConst53;
	float fVec16[2];
	float fRec75[2];
	float fVec17[2];
	float fVec18[256];
	float fConst54;
	float fConst55;
	float fConst56;
	int iConst57;
	float fConst58;
	int iConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fVec19[2];
	float fRec76[2];
	float fVec20[2];
	float fVec21[512];
	int iConst63;
	int iConst64;
	float fConst65;
	float fVec22[2];
	float fRec77[2];
	float fVec23[2];
	float fVec24[256];
	float fConst66;
	float fConst67;
	float fConst68;
	int iConst69;
	float fConst70;
	int iConst71;
	float fVec25[2];
	float fRec78[2];
	float fVec26[2];
	float fVec27[512];
	float fConst72;
	float fConst73;
	float fConst74;
	int iConst75;
	float fConst76;
	int iConst77;
	float fConst78;
	float fConst79;
	float fRec72[3];
	float fConst80;
	float fRec70[2];
	float fRec67[2];
	float fConst81;
	float fConst82;
	float fConst83;
	float fRec65[3];
	FAUSTFLOAT fVslider39;
	FAUSTFLOAT fVslider40;
	FAUSTFLOAT fVslider41;
	FAUSTFLOAT fVslider42;
	FAUSTFLOAT fButton4;
	float fVec28[2];
	float fConst84;
	float fRec82[2];
	FAUSTFLOAT fButton5;
	float fVec29[2];
	float fRec83[2];
	int iVec30[2];
	FAUSTFLOAT fVslider43;
	float fVec31[2];
	float fRec81[2];
	float fConst85;
	float fConst86;
	float fRec79[2];
	float fConst87;
	float fRec84[2];
	float fConst88;
	float fConst89;
	FAUSTFLOAT fVslider44;
	float fRec85[2];
	float fRec80[2];
	FAUSTFLOAT fVslider45;
	FAUSTFLOAT fVslider46;
	float fConst90;
	FAUSTFLOAT fHslider0;
	float fConst91;
	float fConst92;
	float fConst93;
	FAUSTFLOAT fHslider1;
	float fConst94;
	float fConst95;
	float fRec89[3];
	float fConst96;
	float fConst97;
	float fConst98;
	float fConst99;
	float fConst100;
	float fConst101;
	float fRec91[2];
	float fRec90[2];
	float fConst102;
	float fConst103;
	float fConst104;
	float fRec88[3];
	FAUSTFLOAT fHslider2;
	float fConst105;
	FAUSTFLOAT fHslider3;
	float fRec93[3];
	float fRec92[3];
	FAUSTFLOAT fButton6;
	float fVec32[2];
	float fConst106;
	float fRec94[2];
	float fConst107;
	float fConst108;
	float fVec33[4096];
	float fRec87[1024];
	FAUSTFLOAT fVslider47;
	float fRec97[3];
	float fRec99[2];
	float fRec98[2];
	float fRec96[3];
	FAUSTFLOAT fButton7;
	float fVec34[2];
	float fRec100[2];
	float fVec35[4096];
	float fRec95[1024];
	FAUSTFLOAT fVslider48;
	float fRec103[3];
	float fRec105[2];
	float fRec104[2];
	float fRec102[3];
	FAUSTFLOAT fButton8;
	float fVec36[2];
	float fRec106[2];
	float fVec37[4096];
	float fRec101[1024];
	FAUSTFLOAT fVslider49;
	float fRec109[3];
	float fRec111[2];
	float fRec110[2];
	float fRec108[3];
	FAUSTFLOAT fButton9;
	float fVec38[2];
	float fRec112[2];
	float fVec39[4096];
	float fRec107[1024];
	float fVec40[2];
	float fRec86[2];
	float fConst109;
	FAUSTFLOAT fVslider50;
	float fConst110;
	float fConst111;
	FAUSTFLOAT fVslider51;
	FAUSTFLOAT fVslider52;
	FAUSTFLOAT fVslider53;
	float fRec124[2];
	float fRec123[2];
	float fVec41[8192];
	float fConst112;
	int iConst113;
	FAUSTFLOAT fVslider54;
	float fVec42[2];
	float fRec125[2];
	float fVec43[16384];
	FAUSTFLOAT fVslider55;
	float fVec44[1024];
	int iConst114;
	float fRec121[2];
	float fConst115;
	float fConst116;
	float fRec129[2];
	float fRec128[2];
	float fVec45[16384];
	float fConst117;
	int iConst118;
	float fVec46[2048];
	int iConst119;
	float fRec126[2];
	float fConst120;
	float fConst121;
	float fRec133[2];
	float fRec132[2];
	float fVec47[8192];
	float fConst122;
	int iConst123;
	float fVec48[2048];
	int iConst124;
	float fRec130[2];
	float fConst125;
	float fConst126;
	float fRec137[2];
	float fRec136[2];
	float fVec49[8192];
	float fConst127;
	int iConst128;
	float fVec50[1024];
	int iConst129;
	float fRec134[2];
	float fConst130;
	float fConst131;
	float fRec141[2];
	float fRec140[2];
	float fVec51[8192];
	float fConst132;
	int iConst133;
	float fVec52[16384];
	float fVec53[1024];
	int iConst134;
	float fRec138[2];
	float fConst135;
	float fConst136;
	float fRec145[2];
	float fRec144[2];
	float fVec54[4096];
	float fConst137;
	int iConst138;
	float fVec55[2048];
	int iConst139;
	float fRec142[2];
	float fConst140;
	float fConst141;
	float fRec149[2];
	float fRec148[2];
	float fVec56[8192];
	float fConst142;
	int iConst143;
	float fVec57[1024];
	int iConst144;
	float fRec146[2];
	float fConst145;
	float fConst146;
	float fRec153[2];
	float fRec152[2];
	float fVec58[8192];
	float fConst147;
	int iConst148;
	float fVec59[1024];
	int iConst149;
	float fRec150[2];
	float fRec113[3];
	float fRec114[3];
	float fRec115[3];
	float fRec116[3];
	float fRec117[3];
	float fRec118[3];
	float fRec119[3];
	float fRec120[3];
	float fConst150;
	FAUSTFLOAT fVslider56;
	FAUSTFLOAT fVslider57;
	float fConst151;
	FAUSTFLOAT fVslider58;
	float fRec156[2];
	float fRec155[2];
	FAUSTFLOAT fVslider59;
	float fRec154[2];
	
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
	dsp->fVslider18 = (FAUSTFLOAT)1.5f;
	dsp->fVslider19 = (FAUSTFLOAT)1500.0f;
	dsp->fVslider20 = (FAUSTFLOAT)1.3f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider21 = (FAUSTFLOAT)300.0f;
	dsp->fVslider22 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider23 = (FAUSTFLOAT)0.5f;
	dsp->fVslider24 = (FAUSTFLOAT)100.0f;
	dsp->fVslider25 = (FAUSTFLOAT)0.80000000000000004f;
	dsp->fVslider26 = (FAUSTFLOAT)20.0f;
	dsp->fVslider27 = (FAUSTFLOAT)0.0f;
	dsp->fVslider28 = (FAUSTFLOAT)50.0f;
	dsp->fVslider29 = (FAUSTFLOAT)150.0f;
	dsp->fVslider30 = (FAUSTFLOAT)300.0f;
	dsp->fVslider31 = (FAUSTFLOAT)0.0f;
	dsp->fVslider32 = (FAUSTFLOAT)1.0f;
	dsp->fVslider33 = (FAUSTFLOAT)1.2f;
	dsp->fVslider34 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider35 = (FAUSTFLOAT)1.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider36 = (FAUSTFLOAT)0.5f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fButton3 = (FAUSTFLOAT)0.0f;
	dsp->fVslider37 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider38 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider39 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider40 = (FAUSTFLOAT)1.0f;
	dsp->fVslider41 = (FAUSTFLOAT)60.0f;
	dsp->fVslider42 = (FAUSTFLOAT)4.7300000000000004f;
	dsp->fButton4 = (FAUSTFLOAT)0.0f;
	dsp->fButton5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider43 = (FAUSTFLOAT)12.0f;
	dsp->fVslider44 = (FAUSTFLOAT)0.98899999999999999f;
	dsp->fVslider45 = (FAUSTFLOAT)0.69999999999999996f;
	dsp->fVslider46 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)2.0f;
	dsp->fHslider3 = (FAUSTFLOAT)0.5f;
	dsp->fButton6 = (FAUSTFLOAT)0.0f;
	dsp->fVslider47 = (FAUSTFLOAT)440.0f;
	dsp->fButton7 = (FAUSTFLOAT)0.0f;
	dsp->fVslider48 = (FAUSTFLOAT)440.0f;
	dsp->fButton8 = (FAUSTFLOAT)0.0f;
	dsp->fVslider49 = (FAUSTFLOAT)440.0f;
	dsp->fButton9 = (FAUSTFLOAT)0.0f;
	dsp->fVslider50 = (FAUSTFLOAT)6000.0f;
	dsp->fVslider51 = (FAUSTFLOAT)1.0f;
	dsp->fVslider52 = (FAUSTFLOAT)1.0f;
	dsp->fVslider53 = (FAUSTFLOAT)200.0f;
	dsp->fVslider54 = (FAUSTFLOAT)1.5f;
	dsp->fVslider55 = (FAUSTFLOAT)20.0f;
	dsp->fVslider56 = (FAUSTFLOAT)10.0f;
	dsp->fVslider57 = (FAUSTFLOAT)3.0f;
	dsp->fVslider58 = (FAUSTFLOAT)50.0f;
	dsp->fVslider59 = (FAUSTFLOAT)-9.0f;
	
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
		for (l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			dsp->fRec0[l34] = 0.0f;
			
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
			dsp->iRec40[l36] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec39[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fVec4[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec42[l39] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 8192); l40 = (l40 + 1)) {
			dsp->iVec5[l40] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec41[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec46[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->iRec48[l43] = 0;
			
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
			dsp->fRec44[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fRec50[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec51[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 3); l48 = (l48 + 1)) {
			dsp->fRec49[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec45[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 3); l50 = (l50 + 1)) {
			dsp->fRec43[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			dsp->fRec53[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fVec6[l52] = 0.0f;
			
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
			dsp->fRec57[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 3); l55 = (l55 + 1)) {
			dsp->fRec55[l55] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			dsp->fRec54[l56] = 0.0f;
			
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
			dsp->fRec59[l58] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 3); l59 = (l59 + 1)) {
			dsp->fRec60[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			dsp->fVec7[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec62[l61] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			dsp->fVec8[l62] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			dsp->fRec63[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->iVec9[l64] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->fRec64[l65] = 0.0f;
			
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
			dsp->fRec66[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			dsp->fRec69[l68] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			dsp->fVec10[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			dsp->fRec73[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			dsp->fVec11[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 256); l72 = (l72 + 1)) {
			dsp->fVec12[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fVec13[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fRec74[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			dsp->fVec14[l75] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; (l76 < 512); l76 = (l76 + 1)) {
			dsp->fVec15[l76] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			dsp->fVec16[l77] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			dsp->fRec75[l78] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			dsp->fVec17[l79] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; (l80 < 256); l80 = (l80 + 1)) {
			dsp->fVec18[l80] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			dsp->fVec19[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fRec76[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			dsp->fVec20[l83] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 512); l84 = (l84 + 1)) {
			dsp->fVec21[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			dsp->fVec22[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->fRec77[l86] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			dsp->fVec23[l87] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; (l88 < 256); l88 = (l88 + 1)) {
			dsp->fVec24[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fVec25[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec78[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			dsp->fVec26[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 512); l92 = (l92 + 1)) {
			dsp->fVec27[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 3); l93 = (l93 + 1)) {
			dsp->fRec72[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			dsp->fRec70[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fRec67[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 3); l96 = (l96 + 1)) {
			dsp->fRec65[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fVec28[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			dsp->fRec82[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			dsp->fVec29[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			dsp->fRec83[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			dsp->iVec30[l101] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			dsp->fVec31[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fRec81[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			dsp->fRec79[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			dsp->fRec84[l105] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			dsp->fRec85[l106] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			dsp->fRec80[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 3); l108 = (l108 + 1)) {
			dsp->fRec89[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fRec91[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			dsp->fRec90[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 3); l111 = (l111 + 1)) {
			dsp->fRec88[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 3); l112 = (l112 + 1)) {
			dsp->fRec93[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 3); l113 = (l113 + 1)) {
			dsp->fRec92[l113] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			dsp->fVec32[l114] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			dsp->fRec94[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 4096); l116 = (l116 + 1)) {
			dsp->fVec33[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 1024); l117 = (l117 + 1)) {
			dsp->fRec87[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 3); l118 = (l118 + 1)) {
			dsp->fRec97[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fRec99[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fRec98[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 3); l121 = (l121 + 1)) {
			dsp->fRec96[l121] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			dsp->fVec34[l122] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			dsp->fRec100[l123] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 4096); l124 = (l124 + 1)) {
			dsp->fVec35[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 1024); l125 = (l125 + 1)) {
			dsp->fRec95[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 3); l126 = (l126 + 1)) {
			dsp->fRec103[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			dsp->fRec105[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec104[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 3); l129 = (l129 + 1)) {
			dsp->fRec102[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			dsp->fVec36[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			dsp->fRec106[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 4096); l132 = (l132 + 1)) {
			dsp->fVec37[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 1024); l133 = (l133 + 1)) {
			dsp->fRec101[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 3); l134 = (l134 + 1)) {
			dsp->fRec109[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			dsp->fRec111[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			dsp->fRec110[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 3); l137 = (l137 + 1)) {
			dsp->fRec108[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			dsp->fVec38[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			dsp->fRec112[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 4096); l140 = (l140 + 1)) {
			dsp->fVec39[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 1024); l141 = (l141 + 1)) {
			dsp->fRec107[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			dsp->fVec40[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			dsp->fRec86[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fRec124[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec123[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 8192); l146 = (l146 + 1)) {
			dsp->fVec41[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			dsp->fVec42[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			dsp->fRec125[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 16384); l149 = (l149 + 1)) {
			dsp->fVec43[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 1024); l150 = (l150 + 1)) {
			dsp->fVec44[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			dsp->fRec121[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			dsp->fRec129[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			dsp->fRec128[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 16384); l154 = (l154 + 1)) {
			dsp->fVec45[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 2048); l155 = (l155 + 1)) {
			dsp->fVec46[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			dsp->fRec126[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			dsp->fRec133[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			dsp->fRec132[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 8192); l159 = (l159 + 1)) {
			dsp->fVec47[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 2048); l160 = (l160 + 1)) {
			dsp->fVec48[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			dsp->fRec130[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			dsp->fRec137[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			dsp->fRec136[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 8192); l164 = (l164 + 1)) {
			dsp->fVec49[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 1024); l165 = (l165 + 1)) {
			dsp->fVec50[l165] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			dsp->fRec134[l166] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			dsp->fRec141[l167] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			dsp->fRec140[l168] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; (l169 < 8192); l169 = (l169 + 1)) {
			dsp->fVec51[l169] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; (l170 < 16384); l170 = (l170 + 1)) {
			dsp->fVec52[l170] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; (l171 < 1024); l171 = (l171 + 1)) {
			dsp->fVec53[l171] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			dsp->fRec138[l172] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			dsp->fRec145[l173] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			dsp->fRec144[l174] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; (l175 < 4096); l175 = (l175 + 1)) {
			dsp->fVec54[l175] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; (l176 < 2048); l176 = (l176 + 1)) {
			dsp->fVec55[l176] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			dsp->fRec142[l177] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			dsp->fRec149[l178] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			dsp->fRec148[l179] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; (l180 < 8192); l180 = (l180 + 1)) {
			dsp->fVec56[l180] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; (l181 < 1024); l181 = (l181 + 1)) {
			dsp->fVec57[l181] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			dsp->fRec146[l182] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			dsp->fRec153[l183] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			dsp->fRec152[l184] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; (l185 < 8192); l185 = (l185 + 1)) {
			dsp->fVec58[l185] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; (l186 < 1024); l186 = (l186 + 1)) {
			dsp->fVec59[l186] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			dsp->fRec150[l187] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; (l188 < 3); l188 = (l188 + 1)) {
			dsp->fRec113[l188] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; (l189 < 3); l189 = (l189 + 1)) {
			dsp->fRec114[l189] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; (l190 < 3); l190 = (l190 + 1)) {
			dsp->fRec115[l190] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; (l191 < 3); l191 = (l191 + 1)) {
			dsp->fRec116[l191] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; (l192 < 3); l192 = (l192 + 1)) {
			dsp->fRec117[l192] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; (l193 < 3); l193 = (l193 + 1)) {
			dsp->fRec118[l193] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; (l194 < 3); l194 = (l194 + 1)) {
			dsp->fRec119[l194] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l195;
		for (l195 = 0; (l195 < 3); l195 = (l195 + 1)) {
			dsp->fRec120[l195] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l196;
		for (l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			dsp->fRec156[l196] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l197;
		for (l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			dsp->fRec155[l197] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l198;
		for (l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			dsp->fRec154[l198] = 0.0f;
			
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
	dsp->fConst62 = (dsp->fConst60 - dsp->fConst61);
	dsp->iConst63 = (int)dsp->fConst60;
	dsp->iConst64 = (dsp->iConst63 + 1);
	dsp->fConst65 = (dsp->fConst61 + (1.0f - dsp->fConst60));
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulp", &dsp->fVslider42, 4.73000002f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulpdecay", &dsp->fVslider43, 12.0f, 0.0f, 100.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider41, 60.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider44, 0.989000022f, 0.800000012f, 0.990999997f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider40, 1.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "compressor");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider56, 10.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "ratio", &dsp->fVslider57, 3.0f, 1.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider58, 50.0f, 0.0f, 500.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "threshold", &dsp->fVslider59, -9.0f, -40.0f, 0.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider19, 1500.0f, 1000.0f, 3000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapq", &dsp->fVslider20, 1.29999995f, 0.5f, 5.0f, 0.00100000005f);
	ui_interface->addButton(ui_interface->uiInterface, "cp", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider21, 300.0f, 2.0f, 1500.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider18, 1.5f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "hatz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider37, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider38, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton2);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton3);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider39, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider1, 0.5f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "volcolour", &dsp->fVslider0, 0.100000001f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "reverb");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "tooltip", "reverb pre-delay");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider55, "unit", "ms");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "pre_del", &dsp->fVslider55, 20.0f, 0.0f, 200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider53, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider53, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider53, "tooltip", "low band cutoff frequency");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider53, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "lf_fc", &dsp->fVslider53, 200.0f, 30.0f, 1200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider52, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider52, "tooltip", "-60db decay time for low band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider52, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "low_rt60", &dsp->fVslider52, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider51, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider51, "tooltip", "-60db decay time for middle band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider51, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "mid_rt60", &dsp->fVslider51, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider50, "5", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider50, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider50, "tooltip", "damping frequency (decay time is 1/2 mid)");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider50, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "hf_damp", &dsp->fVslider50, 6000.0f, 1200.0f, 9800.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "level", &dsp->fVslider54, 1.5f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "sd");
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton1);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider36, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider35, 1.0f, 1.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider34, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string");
	ui_interface->openVerticalBox(ui_interface->uiInterface, "params");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "expos", &dsp->fHslider3, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.00999999978f, 2.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, 1.0f, -1.0f, 1.0f, 2.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "strength", &dsp->fHslider2, 2.0f, 0.0f, 5.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider49, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton9);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider48, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton8);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider47, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton7);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider46, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton6);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider45, 0.699999988f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "wub");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider24, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider27, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "params");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider29, 150.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "basefreq", &dsp->fVslider25, 0.800000012f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider30, 300.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "env", &dsp->fVslider26, 20.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q", &dsp->fVslider33, 1.20000005f, 0.800000012f, 5.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider28, 50.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sustain", &dsp->fVslider31, 0.0f, 0.0f, 1.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider32, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider22, 0.200000003f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "portamento", &dsp->fVslider23, 0.5f, 0.00999999978f, 1.0f, 0.00999999978f);
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
	float fSlow25 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (float)dsp->fVslider19))));
	float fSlow26 = (2.0f * fSlow25);
	float fSlow27 = min((2.0f * (1.0f - powf((float)dsp->fVslider20, 0.25f))), min(2.0f, ((1.0f / fSlow25) - fSlow25)));
	float fSlow28 = (float)dsp->fButton0;
	float fSlow29 = (0.00100000005f * (float)dsp->fVslider21);
	float fSlow30 = (float)dsp->fVslider22;
	float fSlow31 = (float)dsp->fVslider23;
	float fSlow32 = (0.00100000005f * (fSlow31 * (float)dsp->fVslider24));
	float fSlow33 = (1.0f - (0.00100000005f * fSlow31));
	float fSlow34 = (float)dsp->fVslider25;
	float fSlow35 = (float)dsp->fVslider26;
	float fSlow36 = (float)dsp->fVslider27;
	int iSlow37 = (fSlow36 > 0.0f);
	float fSlow38 = (0.00100000005f * (float)dsp->fVslider28);
	float fSlow39 = (float)dsp->fVslider29;
	int iSlow40 = (int)(dsp->fConst13 * fSlow39);
	float fSlow41 = (0.00100000005f * (float)dsp->fVslider30);
	float fSlow42 = (0.00100000005f * fSlow39);
	float fSlow43 = ((float)iSlow37 * (float)dsp->fVslider31);
	float fSlow44 = expf((0.0f - (dsp->fConst6 / (iSlow37?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider32)))));
	float fSlow45 = ((1.0f - fSlow44) * (iSlow37?fSlow36:0.0f));
	float fSlow46 = (2.0f * (1.0f - powf((float)dsp->fVslider33, 0.25f)));
	float fSlow47 = (4.0f * (float)dsp->fVslider34);
	float fSlow48 = (float)dsp->fVslider35;
	float fSlow49 = sinf((3.14159274f * min(0.25f, (dsp->fConst25 * fSlow48))));
	float fSlow50 = (2.0f * fSlow49);
	float fSlow51 = (float)dsp->fButton1;
	float fSlow52 = (float)dsp->fVslider36;
	float fSlow53 = (0.5f * (fSlow52 + 0.200000003f));
	float fSlow54 = ((2.0f * fSlow52) + 0.5f);
	float fSlow55 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow54)), 0.25f))), min(2.0f, ((1.0f / fSlow49) - fSlow49)));
	float fSlow56 = sinf((3.14159274f * min(0.25f, (dsp->fConst27 * fSlow48))));
	float fSlow57 = (2.0f * fSlow56);
	float fSlow58 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow54)), 0.25f))), min(2.0f, ((1.0f / fSlow56) - fSlow56)));
	float fSlow59 = (dsp->fConst30 * fSlow52);
	float fSlow60 = (float)dsp->fButton2;
	float fSlow61 = (float)dsp->fButton3;
	float fSlow62 = (0.00100000005f * (float)dsp->fVslider37);
	float fSlow63 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (float)dsp->fVslider38))));
	float fSlow64 = (2.0f * fSlow63);
	float fSlow65 = min(0.519834399f, min(2.0f, ((1.0f / fSlow63) - fSlow63)));
	float fSlow66 = (float)dsp->fVslider39;
	float fSlow67 = ((fSlow66 > 1.0f)?1.0f:((fSlow66 < -1.0f)?-1.0f:fSlow66));
	float fSlow68 = (float)dsp->fVslider40;
	float fSlow69 = (dsp->fConst12 * (float)dsp->fVslider41);
	float fSlow70 = (float)dsp->fVslider42;
	float fSlow71 = (float)dsp->fButton4;
	float fSlow72 = (float)dsp->fButton5;
	float fSlow73 = ((0.00100000005f * (float)dsp->fVslider43) + 0.00600000005f);
	float fSlow74 = (dsp->fConst0 * fSlow73);
	float fSlow75 = (dsp->fConst12 / (fSlow73 + -0.00600000005f));
	float fSlow76 = (float)dsp->fVslider44;
	float fSlow77 = (float)dsp->fVslider45;
	float fSlow78 = (float)dsp->fVslider46;
	float fSlow79 = (dsp->fConst0 / fSlow78);
	float fSlow80 = (fSlow79 + -1.99999499f);
	float fSlow81 = floorf(fSlow80);
	float fSlow82 = (fSlow79 + (-1.0f - fSlow81));
	float fSlow83 = (fSlow79 + (-2.0f - fSlow81));
	float fSlow84 = (fSlow79 + (-3.0f - fSlow81));
	float fSlow85 = (fSlow79 + (-4.0f - fSlow81));
	float fSlow86 = (fSlow79 + (-5.0f - fSlow81));
	float fSlow87 = (((((0.0f - fSlow82) * (0.0f - (0.5f * fSlow83))) * (0.0f - (0.333333343f * fSlow84))) * (0.0f - (0.25f * fSlow85))) * (0.0f - (0.200000003f * fSlow86)));
	float fSlow88 = (float)dsp->fHslider0;
	float fSlow89 = expf((0.0f - (dsp->fConst90 / (fSlow88 * mydsp_faustpower2_f(fSlow78)))));
	float fSlow90 = (float)dsp->fHslider1;
	float fSlow91 = (float)dsp->fHslider3;
	float fSlow92 = tanf((dsp->fConst105 * ((15000.0f * fSlow91) + 500.0f)));
	float fSlow93 = (1.0f / fSlow92);
	float fSlow94 = (((fSlow93 + 1.41421354f) / fSlow92) + 1.0f);
	float fSlow95 = ((float)dsp->fHslider2 / fSlow94);
	float fSlow96 = tanf((dsp->fConst105 * ((500.0f * fSlow91) + 40.0f)));
	float fSlow97 = (1.0f / fSlow96);
	float fSlow98 = (1.0f / (((fSlow97 + 1.41421354f) / fSlow96) + 1.0f));
	float fSlow99 = (1.0f / mydsp_faustpower2_f(fSlow96));
	float fSlow100 = (((fSlow97 + -1.41421354f) / fSlow96) + 1.0f);
	float fSlow101 = (2.0f * (1.0f - fSlow99));
	float fSlow102 = (2.0f * (0.0f - fSlow99));
	float fSlow103 = (1.0f / fSlow94);
	float fSlow104 = (((fSlow93 + -1.41421354f) / fSlow92) + 1.0f);
	float fSlow105 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow92))));
	float fSlow106 = (float)dsp->fButton6;
	int iSlow107 = (int)fSlow80;
	int iSlow108 = min(8192, max(0, iSlow107));
	float fSlow109 = (fSlow79 - fSlow81);
	float fSlow110 = ((((0.0f - fSlow83) * (0.0f - (0.5f * fSlow84))) * (0.0f - (0.333333343f * fSlow85))) * (0.0f - (0.25f * fSlow86)));
	int iSlow111 = min(8192, max(0, (iSlow107 + 1)));
	float fSlow112 = (0.5f * (((fSlow82 * (0.0f - fSlow84)) * (0.0f - (0.5f * fSlow85))) * (0.0f - (0.333333343f * fSlow86))));
	int iSlow113 = min(8192, max(0, (iSlow107 + 2)));
	float fSlow114 = (fSlow82 * fSlow83);
	float fSlow115 = (0.166666672f * ((fSlow114 * (0.0f - fSlow85)) * (0.0f - (0.5f * fSlow86))));
	int iSlow116 = min(8192, max(0, (iSlow107 + 3)));
	float fSlow117 = (fSlow114 * fSlow84);
	float fSlow118 = (0.0416666679f * (fSlow117 * (0.0f - fSlow86)));
	int iSlow119 = min(8192, max(0, (iSlow107 + 4)));
	float fSlow120 = (0.00833333377f * (fSlow117 * fSlow85));
	int iSlow121 = min(8192, max(0, (iSlow107 + 5)));
	float fSlow122 = (float)dsp->fVslider47;
	float fSlow123 = (dsp->fConst0 / fSlow122);
	float fSlow124 = (fSlow123 + -1.99999499f);
	float fSlow125 = floorf(fSlow124);
	float fSlow126 = (fSlow123 + (-1.0f - fSlow125));
	float fSlow127 = (fSlow123 + (-2.0f - fSlow125));
	float fSlow128 = (fSlow123 + (-3.0f - fSlow125));
	float fSlow129 = (fSlow123 + (-4.0f - fSlow125));
	float fSlow130 = (fSlow123 + (-5.0f - fSlow125));
	float fSlow131 = (((((0.0f - fSlow126) * (0.0f - (0.5f * fSlow127))) * (0.0f - (0.333333343f * fSlow128))) * (0.0f - (0.25f * fSlow129))) * (0.0f - (0.200000003f * fSlow130)));
	float fSlow132 = expf((0.0f - (dsp->fConst90 / (fSlow88 * mydsp_faustpower2_f(fSlow122)))));
	float fSlow133 = (float)dsp->fButton7;
	int iSlow134 = (int)fSlow124;
	int iSlow135 = min(8192, max(0, iSlow134));
	float fSlow136 = (fSlow123 - fSlow125);
	float fSlow137 = ((((0.0f - fSlow127) * (0.0f - (0.5f * fSlow128))) * (0.0f - (0.333333343f * fSlow129))) * (0.0f - (0.25f * fSlow130)));
	int iSlow138 = min(8192, max(0, (iSlow134 + 1)));
	float fSlow139 = (0.5f * (((fSlow126 * (0.0f - fSlow128)) * (0.0f - (0.5f * fSlow129))) * (0.0f - (0.333333343f * fSlow130))));
	int iSlow140 = min(8192, max(0, (iSlow134 + 2)));
	float fSlow141 = (fSlow126 * fSlow127);
	float fSlow142 = (0.166666672f * ((fSlow141 * (0.0f - fSlow129)) * (0.0f - (0.5f * fSlow130))));
	int iSlow143 = min(8192, max(0, (iSlow134 + 3)));
	float fSlow144 = (fSlow141 * fSlow128);
	float fSlow145 = (0.0416666679f * (fSlow144 * (0.0f - fSlow130)));
	int iSlow146 = min(8192, max(0, (iSlow134 + 4)));
	float fSlow147 = (0.00833333377f * (fSlow144 * fSlow129));
	int iSlow148 = min(8192, max(0, (iSlow134 + 5)));
	float fSlow149 = (float)dsp->fVslider48;
	float fSlow150 = (dsp->fConst0 / fSlow149);
	float fSlow151 = (fSlow150 + -1.99999499f);
	float fSlow152 = floorf(fSlow151);
	float fSlow153 = (fSlow150 + (-1.0f - fSlow152));
	float fSlow154 = (fSlow150 + (-2.0f - fSlow152));
	float fSlow155 = (fSlow150 + (-3.0f - fSlow152));
	float fSlow156 = (fSlow150 + (-4.0f - fSlow152));
	float fSlow157 = (fSlow150 + (-5.0f - fSlow152));
	float fSlow158 = (((((0.0f - fSlow153) * (0.0f - (0.5f * fSlow154))) * (0.0f - (0.333333343f * fSlow155))) * (0.0f - (0.25f * fSlow156))) * (0.0f - (0.200000003f * fSlow157)));
	float fSlow159 = expf((0.0f - (dsp->fConst90 / (fSlow88 * mydsp_faustpower2_f(fSlow149)))));
	float fSlow160 = (float)dsp->fButton8;
	int iSlow161 = (int)fSlow151;
	int iSlow162 = min(8192, max(0, iSlow161));
	float fSlow163 = (fSlow150 - fSlow152);
	float fSlow164 = ((((0.0f - fSlow154) * (0.0f - (0.5f * fSlow155))) * (0.0f - (0.333333343f * fSlow156))) * (0.0f - (0.25f * fSlow157)));
	int iSlow165 = min(8192, max(0, (iSlow161 + 1)));
	float fSlow166 = (0.5f * (((fSlow153 * (0.0f - fSlow155)) * (0.0f - (0.5f * fSlow156))) * (0.0f - (0.333333343f * fSlow157))));
	int iSlow167 = min(8192, max(0, (iSlow161 + 2)));
	float fSlow168 = (fSlow153 * fSlow154);
	float fSlow169 = (0.166666672f * ((fSlow168 * (0.0f - fSlow156)) * (0.0f - (0.5f * fSlow157))));
	int iSlow170 = min(8192, max(0, (iSlow161 + 3)));
	float fSlow171 = (fSlow168 * fSlow155);
	float fSlow172 = (0.0416666679f * (fSlow171 * (0.0f - fSlow157)));
	int iSlow173 = min(8192, max(0, (iSlow161 + 4)));
	float fSlow174 = (0.00833333377f * (fSlow171 * fSlow156));
	int iSlow175 = min(8192, max(0, (iSlow161 + 5)));
	float fSlow176 = (float)dsp->fVslider49;
	float fSlow177 = (dsp->fConst0 / fSlow176);
	float fSlow178 = (fSlow177 + -1.99999499f);
	float fSlow179 = floorf(fSlow178);
	float fSlow180 = (fSlow177 + (-1.0f - fSlow179));
	float fSlow181 = (fSlow177 + (-2.0f - fSlow179));
	float fSlow182 = (fSlow177 + (-3.0f - fSlow179));
	float fSlow183 = (fSlow177 + (-4.0f - fSlow179));
	float fSlow184 = (fSlow177 + (-5.0f - fSlow179));
	float fSlow185 = (((((0.0f - fSlow180) * (0.0f - (0.5f * fSlow181))) * (0.0f - (0.333333343f * fSlow182))) * (0.0f - (0.25f * fSlow183))) * (0.0f - (0.200000003f * fSlow184)));
	float fSlow186 = expf((0.0f - (dsp->fConst90 / (fSlow88 * mydsp_faustpower2_f(fSlow176)))));
	float fSlow187 = (float)dsp->fButton9;
	int iSlow188 = (int)fSlow178;
	int iSlow189 = min(8192, max(0, iSlow188));
	float fSlow190 = (fSlow177 - fSlow179);
	float fSlow191 = ((((0.0f - fSlow181) * (0.0f - (0.5f * fSlow182))) * (0.0f - (0.333333343f * fSlow183))) * (0.0f - (0.25f * fSlow184)));
	int iSlow192 = min(8192, max(0, (iSlow188 + 1)));
	float fSlow193 = (0.5f * (((fSlow180 * (0.0f - fSlow182)) * (0.0f - (0.5f * fSlow183))) * (0.0f - (0.333333343f * fSlow184))));
	int iSlow194 = min(8192, max(0, (iSlow188 + 2)));
	float fSlow195 = (fSlow180 * fSlow181);
	float fSlow196 = (0.166666672f * ((fSlow195 * (0.0f - fSlow183)) * (0.0f - (0.5f * fSlow184))));
	int iSlow197 = min(8192, max(0, (iSlow188 + 3)));
	float fSlow198 = (fSlow195 * fSlow182);
	float fSlow199 = (0.0416666679f * (fSlow198 * (0.0f - fSlow184)));
	int iSlow200 = min(8192, max(0, (iSlow188 + 4)));
	float fSlow201 = (0.00833333377f * (fSlow198 * fSlow183));
	int iSlow202 = min(8192, max(0, (iSlow188 + 5)));
	float fSlow203 = cosf((dsp->fConst109 * (float)dsp->fVslider50));
	float fSlow204 = (float)dsp->fVslider51;
	float fSlow205 = expf((dsp->fConst111 / fSlow204));
	float fSlow206 = mydsp_faustpower2_f(fSlow205);
	float fSlow207 = (1.0f - (fSlow203 * fSlow206));
	float fSlow208 = (1.0f - fSlow206);
	float fSlow209 = (fSlow207 / fSlow208);
	float fSlow210 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow207) / mydsp_faustpower2_f(fSlow208)) + -1.0f)));
	float fSlow211 = (fSlow209 - fSlow210);
	float fSlow212 = (fSlow205 * (fSlow210 + (1.0f - fSlow209)));
	float fSlow213 = (float)dsp->fVslider52;
	float fSlow214 = ((expf((dsp->fConst111 / fSlow213)) / fSlow205) + -1.0f);
	float fSlow215 = (1.0f / tanf((dsp->fConst105 * (float)dsp->fVslider53)));
	float fSlow216 = (fSlow215 + 1.0f);
	float fSlow217 = (0.0f - ((1.0f - fSlow215) / fSlow216));
	float fSlow218 = (1.0f / fSlow216);
	float fSlow219 = (float)dsp->fVslider54;
	int iSlow220 = (int)min(8192.0f, max(0.0f, (dsp->fConst13 * (float)dsp->fVslider55)));
	float fSlow221 = expf((dsp->fConst116 / fSlow204));
	float fSlow222 = mydsp_faustpower2_f(fSlow221);
	float fSlow223 = (1.0f - (fSlow203 * fSlow222));
	float fSlow224 = (1.0f - fSlow222);
	float fSlow225 = (fSlow223 / fSlow224);
	float fSlow226 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow223) / mydsp_faustpower2_f(fSlow224)) + -1.0f)));
	float fSlow227 = (fSlow225 - fSlow226);
	float fSlow228 = (fSlow221 * (fSlow226 + (1.0f - fSlow225)));
	float fSlow229 = ((expf((dsp->fConst116 / fSlow213)) / fSlow221) + -1.0f);
	float fSlow230 = expf((dsp->fConst121 / fSlow204));
	float fSlow231 = mydsp_faustpower2_f(fSlow230);
	float fSlow232 = (1.0f - (fSlow203 * fSlow231));
	float fSlow233 = (1.0f - fSlow231);
	float fSlow234 = (fSlow232 / fSlow233);
	float fSlow235 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow232) / mydsp_faustpower2_f(fSlow233)) + -1.0f)));
	float fSlow236 = (fSlow234 - fSlow235);
	float fSlow237 = (fSlow230 * (fSlow235 + (1.0f - fSlow234)));
	float fSlow238 = ((expf((dsp->fConst121 / fSlow213)) / fSlow230) + -1.0f);
	float fSlow239 = expf((dsp->fConst126 / fSlow204));
	float fSlow240 = mydsp_faustpower2_f(fSlow239);
	float fSlow241 = (1.0f - (fSlow203 * fSlow240));
	float fSlow242 = (1.0f - fSlow240);
	float fSlow243 = (fSlow241 / fSlow242);
	float fSlow244 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow241) / mydsp_faustpower2_f(fSlow242)) + -1.0f)));
	float fSlow245 = (fSlow243 - fSlow244);
	float fSlow246 = (fSlow239 * (fSlow244 + (1.0f - fSlow243)));
	float fSlow247 = ((expf((dsp->fConst126 / fSlow213)) / fSlow239) + -1.0f);
	float fSlow248 = expf((dsp->fConst131 / fSlow204));
	float fSlow249 = mydsp_faustpower2_f(fSlow248);
	float fSlow250 = (1.0f - (fSlow203 * fSlow249));
	float fSlow251 = (1.0f - fSlow249);
	float fSlow252 = (fSlow250 / fSlow251);
	float fSlow253 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow250) / mydsp_faustpower2_f(fSlow251)) + -1.0f)));
	float fSlow254 = (fSlow252 - fSlow253);
	float fSlow255 = (fSlow248 * (fSlow253 + (1.0f - fSlow252)));
	float fSlow256 = ((expf((dsp->fConst131 / fSlow213)) / fSlow248) + -1.0f);
	float fSlow257 = expf((dsp->fConst136 / fSlow204));
	float fSlow258 = mydsp_faustpower2_f(fSlow257);
	float fSlow259 = (1.0f - (fSlow203 * fSlow258));
	float fSlow260 = (1.0f - fSlow258);
	float fSlow261 = (fSlow259 / fSlow260);
	float fSlow262 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow259) / mydsp_faustpower2_f(fSlow260)) + -1.0f)));
	float fSlow263 = (fSlow261 - fSlow262);
	float fSlow264 = (fSlow257 * (fSlow262 + (1.0f - fSlow261)));
	float fSlow265 = ((expf((dsp->fConst136 / fSlow213)) / fSlow257) + -1.0f);
	float fSlow266 = expf((dsp->fConst141 / fSlow204));
	float fSlow267 = mydsp_faustpower2_f(fSlow266);
	float fSlow268 = (1.0f - (fSlow203 * fSlow267));
	float fSlow269 = (1.0f - fSlow267);
	float fSlow270 = (fSlow268 / fSlow269);
	float fSlow271 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow268) / mydsp_faustpower2_f(fSlow269)) + -1.0f)));
	float fSlow272 = (fSlow270 - fSlow271);
	float fSlow273 = (fSlow266 * (fSlow271 + (1.0f - fSlow270)));
	float fSlow274 = ((expf((dsp->fConst141 / fSlow213)) / fSlow266) + -1.0f);
	float fSlow275 = expf((dsp->fConst146 / fSlow204));
	float fSlow276 = mydsp_faustpower2_f(fSlow275);
	float fSlow277 = (1.0f - (fSlow276 * fSlow203));
	float fSlow278 = (1.0f - fSlow276);
	float fSlow279 = (fSlow277 / fSlow278);
	float fSlow280 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow277) / mydsp_faustpower2_f(fSlow278)) + -1.0f)));
	float fSlow281 = (fSlow279 - fSlow280);
	float fSlow282 = (fSlow275 * (fSlow280 + (1.0f - fSlow279)));
	float fSlow283 = ((expf((dsp->fConst146 / fSlow213)) / fSlow275) + -1.0f);
	float fSlow284 = (float)dsp->fVslider56;
	float fSlow285 = expf((0.0f - (dsp->fConst150 / fSlow284)));
	float fSlow286 = (((1.0f / (float)dsp->fVslider57) + -1.0f) * (1.0f - fSlow285));
	float fSlow287 = expf((0.0f - (dsp->fConst151 / fSlow284)));
	float fSlow288 = expf((0.0f - (dsp->fConst151 / (float)dsp->fVslider58)));
	float fSlow289 = (float)dsp->fVslider59;
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
			dsp->fRec0[0] = ((fSlow1 * (dsp->fRec1[0] + dsp->fRec28[0])) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec0[2]) + (dsp->fConst10 * dsp->fRec0[1]))));
			float fTemp32 = (fSlow0 + (float)tanhf((float)((dsp->fConst3 * (dsp->fRec0[2] + (dsp->fRec0[0] + (2.0f * dsp->fRec0[1])))) - fSlow0)));
			float fTemp33 = (float)tanhf((float)((dsp->fRec38[1] + (fSlow26 * dsp->fRec39[1])) + 0.200000003f));
			dsp->fRec38[0] = (fTemp33 + -0.200000003f);
			dsp->iRec40[0] = ((1103515245 * dsp->iRec40[1]) + 12345);
			float fTemp34 = (4.65661287e-10f * (float)dsp->iRec40[0]);
			float fTemp35 = ((float)tanhf((float)(fTemp34 + (0.400000006f - (fTemp33 + (fSlow27 * dsp->fRec39[1]))))) + -0.200000003f);
			dsp->fRec39[0] = ((float)tanhf((float)((dsp->fRec39[1] + (fSlow26 * fTemp35)) + 0.200000003f)) + -0.200000003f);
			dsp->fVec4[0] = fSlow28;
			dsp->fRec42[0] = ((((fSlow28 - dsp->fVec4[1]) > 0.0f) > 0)?dsp->fConst13:max(0.0f, (dsp->fRec42[1] + -1.0f)));
			int iTemp36 = (dsp->fRec42[0] > 0.0f);
			dsp->iVec5[(dsp->IOTA & 8191)] = iTemp36;
			int iTemp37 = ((((iTemp36 + dsp->iVec5[((dsp->IOTA - dsp->iConst14) & 8191)]) + dsp->iVec5[((dsp->IOTA - dsp->iConst15) & 8191)]) + dsp->iVec5[((dsp->IOTA - dsp->iConst16) & 8191)]) + dsp->iVec5[((dsp->IOTA - dsp->iConst17) & 8191)]);
			int iTemp38 = (iTemp37 > 0);
			float fTemp39 = expf((0.0f - (dsp->fConst6 / (iTemp38?9.99999975e-05f:fSlow29))));
			dsp->fRec41[0] = ((dsp->fRec41[1] * fTemp39) + ((iTemp38?(float)iTemp37:0.0f) * (1.0f - fTemp39)));
			float fTemp40 = (float)tanhf((float)(fSlow24 * (dsp->fRec39[0] * dsp->fRec41[0])));
			float fTemp41 = (fTemp32 + fTemp40);
			dsp->fRec46[0] = (fSlow32 + (fSlow33 * dsp->fRec46[1]));
			dsp->iRec48[0] = (iSlow37 * (dsp->iRec48[1] + 1));
			int iTemp42 = (dsp->iRec48[0] < iSlow40);
			float fTemp43 = expf((0.0f - (dsp->fConst6 / (iSlow37?(iTemp42?fSlow42:fSlow41):fSlow38))));
			dsp->fRec47[0] = ((dsp->fRec47[1] * fTemp43) + ((iSlow37?(iTemp42?(float)iSlow37:fSlow43):0.0f) * (1.0f - fTemp43)));
			float fTemp44 = sinf((3.14159274f * min(0.25f, (dsp->fConst12 * (dsp->fRec46[0] * (fSlow34 + (fSlow35 * dsp->fRec47[0])))))));
			float fTemp45 = (dsp->fRec44[1] + (2.0f * (fTemp44 * dsp->fRec45[1])));
			float fTemp46 = (fTemp45 + 0.119999997f);
			float fTemp47 = (0.666666687f * fTemp46);
			float fTemp48 = ((fTemp47 > 1.0f)?1.0f:((fTemp47 < -1.0f)?-1.0f:(fTemp45 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp46))))));
			dsp->fRec44[0] = (fTemp48 + -0.119999997f);
			dsp->fRec50[0] = ((dsp->fRec50[1] * fSlow44) + fSlow45);
			float fTemp49 = max(1.00000001e-07f, fabsf(dsp->fRec46[0]));
			float fTemp50 = (dsp->fRec51[1] + (dsp->fConst7 * fTemp49));
			float fTemp51 = (fTemp50 + -1.0f);
			int iTemp52 = (fTemp51 < 0.0f);
			dsp->fRec51[0] = (iTemp52?fTemp50:fTemp51);
			float fRec52 = (iTemp52?fTemp50:(fTemp50 + ((1.0f - (dsp->fConst0 / fTemp49)) * fTemp51)));
			dsp->fRec49[0] = ((dsp->fRec50[0] * ((2.0f * fRec52) + -1.0f)) - (dsp->fConst21 * ((dsp->fConst23 * dsp->fRec49[2]) + (dsp->fConst24 * dsp->fRec49[1]))));
			float fTemp53 = (dsp->fConst22 * (dsp->fRec49[2] + (dsp->fRec49[0] + (2.0f * dsp->fRec49[1]))));
			float fTemp54 = (fTemp48 + (dsp->fRec45[1] * min(fSlow46, min(2.0f, ((1.0f / fTemp44) - fTemp44)))));
			float fTemp55 = (fTemp53 + (0.239999995f - fTemp54));
			float fTemp56 = (0.666666687f * fTemp55);
			float fTemp57 = (((fTemp56 > 1.0f)?1.0f:((fTemp56 < -1.0f)?-1.0f:(fTemp53 + (0.239999995f - (fTemp54 + (0.148148149f * mydsp_faustpower3_f(fTemp55))))))) + -0.119999997f);
			float fTemp58 = (dsp->fRec45[1] + (2.0f * (fTemp44 * fTemp57)));
			float fTemp59 = (fTemp58 + 0.119999997f);
			float fTemp60 = (0.666666687f * fTemp59);
			dsp->fRec45[0] = (((fTemp60 > 1.0f)?1.0f:((fTemp60 < -1.0f)?-1.0f:(fTemp58 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp59)))))) + -0.119999997f);
			dsp->fRec43[0] = ((fSlow30 * dsp->fRec44[0]) - (dsp->fConst21 * ((dsp->fConst23 * dsp->fRec43[2]) + (dsp->fConst24 * dsp->fRec43[1]))));
			float fTemp61 = (dsp->fConst21 * (dsp->fRec43[2] + (dsp->fRec43[0] + (2.0f * dsp->fRec43[1]))));
			float fTemp62 = (fTemp61 + 0.200000003f);
			float fTemp63 = (0.666666687f * fTemp62);
			float fTemp64 = (((fTemp63 > 1.0f)?1.0f:((fTemp63 < -1.0f)?-1.0f:(fTemp61 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp62)))))) + -0.200000003f);
			float fTemp65 = (dsp->fRec53[1] + (fSlow50 * dsp->fRec54[1]));
			float fTemp66 = (1.02040815f * fTemp65);
			float fTemp67 = (min(max(fTemp66, 0.0f), 10.0f) + -0.625f);
			float fTemp68 = (1.77777779f * fTemp67);
			float fTemp69 = (1.33333337f * fabsf(fTemp65));
			float fTemp70 = (min(max(fTemp69, 0.0f), 10.0f) + -0.333333343f);
			float fTemp71 = (1.0f * fTemp70);
			float fTemp72 = ((fTemp65 <= 0.0f)?(0.0f - (0.75f * ((fTemp69 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp71 > 1.0f)?1.0f:((fTemp71 < -1.0f)?-1.0f:(fTemp70 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp70))))))))):fTemp69))):(0.980000019f * ((fTemp66 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp68 > 1.0f)?1.0f:((fTemp68 < -1.0f)?-1.0f:(fTemp67 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp67))))))))):fTemp66)));
			dsp->fRec53[0] = fTemp72;
			dsp->fVec6[0] = fSlow51;
			dsp->fRec56[0] = ((((fSlow51 - dsp->fVec6[1]) > 0.0f) > 0)?dsp->fConst26:max(0.0f, (dsp->fRec56[1] + -1.0f)));
			int iTemp73 = (dsp->fRec56[0] > 0.0f);
			int iTemp74 = (iTemp73 > 0);
			float fTemp75 = expf((0.0f - (dsp->fConst6 / (iTemp74?9.99999975e-05f:fSlow53))));
			dsp->fRec57[0] = ((dsp->fRec57[1] * fTemp75) + ((iTemp74?(float)iTemp73:0.0f) * (1.0f - fTemp75)));
			dsp->fRec55[0] = (((float)iTemp73 + (0.289999992f * dsp->fRec57[0])) - (dsp->fConst3 * ((dsp->fConst9 * dsp->fRec55[2]) + (dsp->fConst10 * dsp->fRec55[1]))));
			float fTemp76 = (dsp->fConst3 * (dsp->fRec55[2] + (dsp->fRec55[0] + (2.0f * dsp->fRec55[1]))));
			float fTemp77 = (fTemp76 - (fTemp72 + (fSlow55 * dsp->fRec54[1])));
			float fTemp78 = (1.02040815f * fTemp77);
			float fTemp79 = (min(max(fTemp78, 0.0f), 10.0f) + -0.625f);
			float fTemp80 = (1.77777779f * fTemp79);
			float fTemp81 = (1.33333337f * fabsf(fTemp77));
			float fTemp82 = (min(max(fTemp81, 0.0f), 10.0f) + -0.333333343f);
			float fTemp83 = (1.0f * fTemp82);
			float fTemp84 = ((fTemp77 <= 0.0f)?(0.0f - (0.75f * ((fTemp81 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp83 > 1.0f)?1.0f:((fTemp83 < -1.0f)?-1.0f:(fTemp82 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp82))))))))):fTemp81))):(0.980000019f * ((fTemp78 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp80 > 1.0f)?1.0f:((fTemp80 < -1.0f)?-1.0f:(fTemp79 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp79))))))))):fTemp78)));
			float fTemp85 = (dsp->fRec54[1] + (fSlow50 * fTemp84));
			float fTemp86 = (1.02040815f * fTemp85);
			float fTemp87 = (min(max(fTemp86, 0.0f), 10.0f) + -0.625f);
			float fTemp88 = (1.77777779f * fTemp87);
			float fTemp89 = (1.33333337f * fabsf(fTemp85));
			float fTemp90 = (min(max(fTemp89, 0.0f), 10.0f) + -0.333333343f);
			float fTemp91 = (1.0f * fTemp90);
			dsp->fRec54[0] = ((fTemp85 <= 0.0f)?(0.0f - (0.75f * ((fTemp89 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp91 > 1.0f)?1.0f:((fTemp91 < -1.0f)?-1.0f:(fTemp90 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp90))))))))):fTemp89))):(0.980000019f * ((fTemp86 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp88 > 1.0f)?1.0f:((fTemp88 < -1.0f)?-1.0f:(fTemp87 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp87))))))))):fTemp86)));
			float fTemp92 = (dsp->fRec58[1] + (fSlow57 * dsp->fRec59[1]));
			float fTemp93 = (1.02040815f * fTemp92);
			float fTemp94 = (min(max(fTemp93, 0.0f), 10.0f) + -0.625f);
			float fTemp95 = (1.77777779f * fTemp94);
			float fTemp96 = (1.33333337f * fabsf(fTemp92));
			float fTemp97 = (min(max(fTemp96, 0.0f), 10.0f) + -0.333333343f);
			float fTemp98 = (1.0f * fTemp97);
			float fTemp99 = ((fTemp92 <= 0.0f)?(0.0f - (0.75f * ((fTemp96 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp98 > 1.0f)?1.0f:((fTemp98 < -1.0f)?-1.0f:(fTemp97 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp97))))))))):fTemp96))):(0.980000019f * ((fTemp93 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp95 > 1.0f)?1.0f:((fTemp95 < -1.0f)?-1.0f:(fTemp94 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp94))))))))):fTemp93)));
			dsp->fRec58[0] = fTemp99;
			float fTemp100 = (fTemp76 - (fTemp99 + (fSlow58 * dsp->fRec59[1])));
			float fTemp101 = (1.02040815f * fTemp100);
			float fTemp102 = (min(max(fTemp101, 0.0f), 10.0f) + -0.625f);
			float fTemp103 = (1.77777779f * fTemp102);
			float fTemp104 = (1.33333337f * fabsf(fTemp100));
			float fTemp105 = (min(max(fTemp104, 0.0f), 10.0f) + -0.333333343f);
			float fTemp106 = (1.0f * fTemp105);
			float fTemp107 = ((fTemp100 <= 0.0f)?(0.0f - (0.75f * ((fTemp104 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp106 > 1.0f)?1.0f:((fTemp106 < -1.0f)?-1.0f:(fTemp105 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp105))))))))):fTemp104))):(0.980000019f * ((fTemp101 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp103 > 1.0f)?1.0f:((fTemp103 < -1.0f)?-1.0f:(fTemp102 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp102))))))))):fTemp101)));
			float fTemp108 = (dsp->fRec59[1] + (fSlow57 * fTemp107));
			float fTemp109 = (1.02040815f * fTemp108);
			float fTemp110 = (min(max(fTemp109, 0.0f), 10.0f) + -0.625f);
			float fTemp111 = (1.77777779f * fTemp110);
			float fTemp112 = (1.33333337f * fabsf(fTemp108));
			float fTemp113 = (min(max(fTemp112, 0.0f), 10.0f) + -0.333333343f);
			float fTemp114 = (1.0f * fTemp113);
			dsp->fRec59[0] = ((fTemp108 <= 0.0f)?(0.0f - (0.75f * ((fTemp112 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp114 > 1.0f)?1.0f:((fTemp114 < -1.0f)?-1.0f:(fTemp113 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp113))))))))):fTemp112))):(0.980000019f * ((fTemp109 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp111 > 1.0f)?1.0f:((fTemp111 < -1.0f)?-1.0f:(fTemp110 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp110))))))))):fTemp109)));
			dsp->fRec60[0] = ((4.65661287e-10f * ((float)dsp->iRec40[0] * dsp->fRec57[0])) - (dsp->fConst30 * ((dsp->fConst31 * dsp->fRec60[2]) + (dsp->fConst32 * dsp->fRec60[1]))));
			float fTemp115 = (fSlow47 * ((dsp->fRec54[0] + dsp->fRec59[0]) + (fSlow59 * (dsp->fRec60[2] + (dsp->fRec60[0] + (2.0f * dsp->fRec60[1]))))));
			float fTemp116 = (fTemp115 + -0.100000001f);
			float fTemp117 = (0.666666687f * fTemp116);
			float fTemp118 = (((fTemp117 > 1.0f)?1.0f:((fTemp117 < -1.0f)?-1.0f:(fTemp115 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp116)))))) + 0.100000001f);
			dsp->fVec7[0] = fSlow60;
			dsp->fRec62[0] = ((((fSlow60 - dsp->fVec7[1]) > 0.0f) > 0)?dsp->fConst33:max(0.0f, (dsp->fRec62[1] + -1.0f)));
			int iTemp119 = (dsp->fRec62[0] > 0.0f);
			dsp->fVec8[0] = fSlow61;
			dsp->fRec63[0] = ((((fSlow61 - dsp->fVec8[1]) > 0.0f) > 0)?dsp->fConst33:max(0.0f, (dsp->fRec63[1] + -1.0f)));
			int iTemp120 = (dsp->fRec63[0] > 0.0f);
			int iTemp121 = ((iTemp119 + iTemp120) > 0);
			dsp->iVec9[0] = iTemp121;
			int iTemp122 = (iTemp121 > 0);
			int iTemp123 = ((dsp->iVec9[1] <= 0) & iTemp122);
			dsp->fRec64[0] = ((dsp->fRec64[1] * (float)(1 - iTemp123)) + ((float)iTemp123 * ((0.0839999989f * (float)iTemp119) + (fSlow62 * (float)iTemp120))));
			float fTemp124 = expf((0.0f - (dsp->fConst6 / (iTemp122?9.99999975e-05f:dsp->fRec64[0]))));
			dsp->fRec61[0] = ((dsp->fRec61[1] * fTemp124) + ((iTemp122?(float)iTemp121:0.0f) * (1.0f - fTemp124)));
			float fTemp125 = (dsp->fRec66[1] + (fSlow64 * dsp->fRec67[1]));
			float fTemp126 = (0.666666687f * fTemp125);
			float fTemp127 = ((fTemp126 > 1.0f)?1.0f:((fTemp126 < -1.0f)?-1.0f:(fTemp125 - (0.148148149f * mydsp_faustpower3_f(fTemp125)))));
			dsp->fRec66[0] = fTemp127;
			float fTemp128 = (dsp->fRec69[1] + (fSlow64 * dsp->fRec70[1]));
			float fTemp129 = (0.666666687f * fTemp128);
			float fTemp130 = ((fTemp129 > 1.0f)?1.0f:((fTemp129 < -1.0f)?-1.0f:(fTemp128 - (0.148148149f * mydsp_faustpower3_f(fTemp128)))));
			dsp->fRec69[0] = fTemp130;
			dsp->fVec10[0] = 394.0f;
			float fTemp131 = (dsp->fRec73[1] + (dsp->fConst12 * dsp->fVec10[1]));
			dsp->fRec73[0] = (fTemp131 - floorf(fTemp131));
			float fTemp132 = mydsp_faustpower2_f(((2.0f * dsp->fRec73[0]) + -1.0f));
			dsp->fVec11[0] = fTemp132;
			float fTemp133 = ((fTemp132 - dsp->fVec11[1]) * (float)dsp->iVec1[1]);
			dsp->fVec12[(dsp->IOTA & 255)] = fTemp133;
			dsp->fVec13[0] = 309.0f;
			float fTemp134 = (dsp->fRec74[1] + (dsp->fConst12 * dsp->fVec13[1]));
			dsp->fRec74[0] = (fTemp134 - floorf(fTemp134));
			float fTemp135 = mydsp_faustpower2_f(((2.0f * dsp->fRec74[0]) + -1.0f));
			dsp->fVec14[0] = fTemp135;
			float fTemp136 = ((fTemp135 - dsp->fVec14[1]) * (float)dsp->iVec1[1]);
			dsp->fVec15[(dsp->IOTA & 511)] = fTemp136;
			dsp->fVec16[0] = 493.0f;
			float fTemp137 = (dsp->fRec75[1] + (dsp->fConst12 * dsp->fVec16[1]));
			dsp->fRec75[0] = (fTemp137 - floorf(fTemp137));
			float fTemp138 = mydsp_faustpower2_f(((2.0f * dsp->fRec75[0]) + -1.0f));
			dsp->fVec17[0] = fTemp138;
			float fTemp139 = ((fTemp138 - dsp->fVec17[1]) * (float)dsp->iVec1[1]);
			dsp->fVec18[(dsp->IOTA & 255)] = fTemp139;
			dsp->fVec19[0] = 361.0f;
			float fTemp140 = (dsp->fRec76[1] + (dsp->fConst12 * dsp->fVec19[1]));
			dsp->fRec76[0] = (fTemp140 - floorf(fTemp140));
			float fTemp141 = mydsp_faustpower2_f(((2.0f * dsp->fRec76[0]) + -1.0f));
			dsp->fVec20[0] = fTemp141;
			float fTemp142 = ((fTemp141 - dsp->fVec20[1]) * (float)dsp->iVec1[1]);
			dsp->fVec21[(dsp->IOTA & 511)] = fTemp142;
			dsp->fVec22[0] = 422.0f;
			float fTemp143 = (dsp->fRec77[1] + (dsp->fConst12 * dsp->fVec22[1]));
			dsp->fRec77[0] = (fTemp143 - floorf(fTemp143));
			float fTemp144 = mydsp_faustpower2_f(((2.0f * dsp->fRec77[0]) + -1.0f));
			dsp->fVec23[0] = fTemp144;
			float fTemp145 = ((fTemp144 - dsp->fVec23[1]) * (float)dsp->iVec1[1]);
			dsp->fVec24[(dsp->IOTA & 255)] = fTemp145;
			dsp->fVec25[0] = 203.0f;
			float fTemp146 = (dsp->fRec78[1] + (dsp->fConst12 * dsp->fVec25[1]));
			dsp->fRec78[0] = (fTemp146 - floorf(fTemp146));
			float fTemp147 = mydsp_faustpower2_f(((2.0f * dsp->fRec78[0]) + -1.0f));
			dsp->fVec26[0] = fTemp147;
			float fTemp148 = ((fTemp147 - dsp->fVec26[1]) * (float)dsp->iVec1[1]);
			dsp->fVec27[(dsp->IOTA & 511)] = fTemp148;
			dsp->fRec72[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp133 - (dsp->fConst44 * dsp->fVec12[((dsp->IOTA - dsp->iConst45) & 255)])) - (dsp->fConst46 * dsp->fVec12[((dsp->IOTA - dsp->iConst47) & 255)]))) + (0.000809061516f * ((fTemp136 - (dsp->fConst50 * dsp->fVec15[((dsp->IOTA - dsp->iConst51) & 511)])) - (dsp->fConst52 * dsp->fVec15[((dsp->IOTA - dsp->iConst53) & 511)])))) + (0.000507099379f * ((fTemp139 - (dsp->fConst56 * dsp->fVec18[((dsp->IOTA - dsp->iConst57) & 255)])) - (dsp->fConst58 * dsp->fVec18[((dsp->IOTA - dsp->iConst59) & 255)])))) - (0.000692520756f * ((dsp->fConst62 * dsp->fVec21[((dsp->IOTA - dsp->iConst64) & 511)]) - (fTemp142 - (dsp->fConst65 * dsp->fVec21[((dsp->IOTA - dsp->iConst63) & 511)]))))) + (0.000592417084f * ((fTemp145 - (dsp->fConst68 * dsp->fVec24[((dsp->IOTA - dsp->iConst69) & 255)])) - (dsp->fConst70 * dsp->fVec24[((dsp->IOTA - dsp->iConst71) & 255)])))) + (0.00123152707f * ((fTemp148 - (dsp->fConst74 * dsp->fVec27[((dsp->IOTA - dsp->iConst75) & 511)])) - (dsp->fConst76 * dsp->fVec27[((dsp->IOTA - dsp->iConst77) & 511)]))))) - (dsp->fConst40 * ((dsp->fConst78 * dsp->fRec72[2]) + (dsp->fConst79 * dsp->fRec72[1]))));
			float fTemp149 = (dsp->fConst40 * (((dsp->fConst41 * dsp->fRec72[0]) + (dsp->fConst80 * dsp->fRec72[1])) + (dsp->fConst41 * dsp->fRec72[2])));
			float fTemp150 = (fTemp130 + (fSlow65 * dsp->fRec70[1]));
			float fTemp151 = (fTemp149 - fTemp150);
			float fTemp152 = (0.666666687f * fTemp151);
			float fTemp153 = ((fTemp152 > 1.0f)?1.0f:((fTemp152 < -1.0f)?-1.0f:(fTemp149 - (fTemp150 + (0.148148149f * mydsp_faustpower3_f(fTemp151))))));
			float fTemp154 = (dsp->fRec70[1] + (fSlow64 * fTemp153));
			float fTemp155 = (0.666666687f * fTemp154);
			dsp->fRec70[0] = ((fTemp155 > 1.0f)?1.0f:((fTemp155 < -1.0f)?-1.0f:(fTemp154 - (0.148148149f * mydsp_faustpower3_f(fTemp154)))));
			float fRec71 = fTemp153;
			float fTemp156 = (fTemp127 + (fSlow65 * dsp->fRec67[1]));
			float fTemp157 = (fRec71 - fTemp156);
			float fTemp158 = (0.666666687f * fTemp157);
			float fTemp159 = ((fTemp158 > 1.0f)?1.0f:((fTemp158 < -1.0f)?-1.0f:(fRec71 - (fTemp156 + (0.148148149f * mydsp_faustpower3_f(fTemp157))))));
			float fTemp160 = (dsp->fRec67[1] + (fSlow64 * fTemp159));
			float fTemp161 = (0.666666687f * fTemp160);
			dsp->fRec67[0] = ((fTemp161 > 1.0f)?1.0f:((fTemp161 < -1.0f)?-1.0f:(fTemp160 - (0.148148149f * mydsp_faustpower3_f(fTemp160)))));
			float fRec68 = fTemp159;
			dsp->fRec65[0] = (fRec68 - (dsp->fConst81 * ((dsp->fConst82 * dsp->fRec65[2]) + (dsp->fConst83 * dsp->fRec65[1]))));
			float fTemp162 = ((dsp->fRec61[0] * ((dsp->fConst37 * (dsp->fRec65[2] + (dsp->fRec65[0] + (2.0f * dsp->fRec65[1])))) + (9.31322554e-12f * (float)dsp->iRec40[0]))) * fSlow67);
			dsp->fVec28[0] = fSlow71;
			dsp->fRec82[0] = ((((fSlow71 - dsp->fVec28[1]) > 0.0f) > 0)?dsp->fConst84:max(0.0f, (dsp->fRec82[1] + -1.0f)));
			int iTemp163 = (dsp->fRec82[0] > 0.0f);
			dsp->fVec29[0] = fSlow72;
			dsp->fRec83[0] = ((((fSlow72 - dsp->fVec29[1]) > 0.0f) > 0)?dsp->fConst84:max(0.0f, (dsp->fRec83[1] + -1.0f)));
			int iTemp164 = (dsp->fRec83[0] > 0.0f);
			int iTemp165 = ((iTemp163 + iTemp164) > 0);
			dsp->iVec30[0] = iTemp165;
			int iTemp166 = (((iTemp165 - dsp->iVec30[1]) > 0) > 0);
			dsp->fVec31[0] = fSlow73;
			dsp->fRec81[0] = (iTemp166?0.0f:min(fSlow74, ((dsp->fRec81[1] + (dsp->fConst0 * (fSlow73 - dsp->fVec31[1]))) + 1.0f)));
			int iTemp167 = (dsp->fRec81[0] < dsp->fConst85);
			float fTemp168 = sinf((3.14159274f * min(0.25f, (fSlow69 * ((fSlow70 * (iTemp167?((dsp->fRec81[0] < 0.0f)?0.0f:(iTemp167?(dsp->fConst86 * dsp->fRec81[0]):1.0f)):((dsp->fRec81[0] < fSlow74)?((fSlow75 * (0.0f - (dsp->fRec81[0] - dsp->fConst85))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp169 = (dsp->fRec79[1] + (2.0f * (fTemp168 * dsp->fRec80[1])));
			float fTemp170 = (min(max(fTemp169, 0.0f), 10.0f) + -0.714285731f);
			float fTemp171 = (2.33333325f * fTemp170);
			float fTemp172 = (1.14942527f * fabsf(fTemp169));
			float fTemp173 = (min(max(fTemp172, 0.0f), 10.0f) + -0.333333343f);
			float fTemp174 = (1.0f * fTemp173);
			float fTemp175 = ((fTemp169 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp172 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp174 > 1.0f)?1.0f:((fTemp174 < -1.0f)?-1.0f:(fTemp173 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp173))))))))):fTemp172))):((fTemp169 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp171 > 1.0f)?1.0f:((fTemp171 < -1.0f)?-1.0f:(fTemp170 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp170))))))))):fTemp169));
			dsp->fRec79[0] = fTemp175;
			float fTemp176 = (dsp->fConst0 - dsp->fVec0[1]);
			dsp->fRec84[0] = (iTemp166?0.0f:min(dsp->fConst87, ((dsp->fRec84[1] + (0.00609999988f * fTemp176)) + 1.0f)));
			int iTemp177 = (dsp->fRec84[0] < dsp->fConst88);
			int iTemp178 = ((dsp->iVec30[1] <= 0) & (iTemp165 > 0));
			dsp->fRec85[0] = ((dsp->fRec85[1] * (float)(1 - iTemp178)) + ((float)iTemp178 * ((0.850000024f * (float)iTemp163) + (fSlow76 * (float)iTemp164))));
			float fTemp179 = (((iTemp177?((dsp->fRec84[0] < 0.0f)?0.0f:(iTemp177?(dsp->fConst89 * dsp->fRec84[0]):1.0f)):((dsp->fRec84[0] < dsp->fConst87)?((dsp->fConst86 * (0.0f - (dsp->fRec84[0] - dsp->fConst88))) + 1.0f):0.0f)) * ((3.25962901e-09f * (float)dsp->iRec40[0]) + 3.0f)) - (fTemp175 + (dsp->fRec80[1] * min((2.0f * (1.0f - powf(dsp->fRec85[0], 0.25f))), min(2.0f, ((1.0f / fTemp168) - fTemp168))))));
			float fTemp180 = (min(max(fTemp179, 0.0f), 10.0f) + -0.714285731f);
			float fTemp181 = (2.33333325f * fTemp180);
			float fTemp182 = (1.14942527f * fabsf(fTemp179));
			float fTemp183 = (min(max(fTemp182, 0.0f), 10.0f) + -0.333333343f);
			float fTemp184 = (1.0f * fTemp183);
			float fTemp185 = ((fTemp179 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp182 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp184 > 1.0f)?1.0f:((fTemp184 < -1.0f)?-1.0f:(fTemp183 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp183))))))))):fTemp182))):((fTemp179 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp181 > 1.0f)?1.0f:((fTemp181 < -1.0f)?-1.0f:(fTemp180 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp180))))))))):fTemp179));
			float fTemp186 = (dsp->fRec80[1] + (2.0f * (fTemp168 * fTemp185)));
			float fTemp187 = (min(max(fTemp186, 0.0f), 10.0f) + -0.714285731f);
			float fTemp188 = (2.33333325f * fTemp187);
			float fTemp189 = (1.14942527f * fabsf(fTemp186));
			float fTemp190 = (min(max(fTemp189, 0.0f), 10.0f) + -0.333333343f);
			float fTemp191 = (1.0f * fTemp190);
			dsp->fRec80[0] = ((fTemp186 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp189 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp191 > 1.0f)?1.0f:((fTemp191 < -1.0f)?-1.0f:(fTemp190 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp190))))))))):fTemp189))):((fTemp186 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp188 > 1.0f)?1.0f:((fTemp188 < -1.0f)?-1.0f:(fTemp187 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp187))))))))):fTemp186));
			float fTemp192 = ((float)tanhf((float)((fSlow68 * dsp->fRec79[0]) + -0.100000001f)) + 0.100000001f);
			float fTemp193 = (0.5f * fTemp192);
			dsp->fRec89[0] = ((fSlow90 * ((0.5f * ((dsp->fRec87[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec87[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec89[2]) + (dsp->fConst95 * dsp->fRec89[1]))));
			float fTemp194 = fabsf(dsp->fRec87[((dsp->IOTA - 1001) & 1023)]);
			float fTemp195 = ((dsp->fRec90[1] > fTemp194)?dsp->fConst101:dsp->fConst100);
			dsp->fRec91[0] = ((dsp->fRec91[1] * fTemp195) + (fTemp194 * (1.0f - fTemp195)));
			dsp->fRec90[0] = dsp->fRec91[0];
			float fTemp196 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec90[0]) + 1.0f)));
			float fTemp197 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp196)));
			float fTemp198 = (dsp->fRec88[1] * ((dsp->fConst97 * fTemp197) + -8.0f));
			float fTemp199 = (dsp->fConst96 * fTemp197);
			float fTemp200 = (dsp->fConst102 * ((dsp->fConst103 * fTemp196) - (dsp->fConst104 * (fTemp197 / fTemp196))));
			float fTemp201 = ((fTemp199 + fTemp200) + 4.0f);
			dsp->fRec88[0] = ((dsp->fConst93 * (dsp->fRec89[2] + (dsp->fRec89[0] + (2.0f * dsp->fRec89[1])))) - ((fTemp198 + (dsp->fRec88[2] * (fTemp199 + (4.0f - fTemp200)))) / fTemp201));
			float fTemp202 = (fTemp199 + 4.0f);
			dsp->fRec93[0] = (fTemp34 - (fSlow98 * ((fSlow100 * dsp->fRec93[2]) + (fSlow101 * dsp->fRec93[1]))));
			dsp->fRec92[0] = ((fSlow98 * (((fSlow99 * dsp->fRec93[0]) + (fSlow102 * dsp->fRec93[1])) + (fSlow99 * dsp->fRec93[2]))) - (fSlow103 * ((fSlow104 * dsp->fRec92[2]) + (fSlow105 * dsp->fRec92[1]))));
			float fTemp203 = (dsp->fRec92[2] + (dsp->fRec92[0] + (2.0f * dsp->fRec92[1])));
			dsp->fVec32[0] = fSlow106;
			float fTemp204 = (0.00400000019f * fTemp176);
			dsp->fRec94[0] = ((((fSlow106 - dsp->fVec32[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec94[1] + fTemp204) + 1.0f)));
			int iTemp205 = (dsp->fRec94[0] < dsp->fConst107);
			float fTemp206 = ((fSlow89 * (((fTemp198 + (dsp->fRec88[0] * fTemp202)) + (dsp->fRec88[2] * fTemp202)) / fTemp201)) + (fSlow95 * (fTemp203 * (iTemp205?((dsp->fRec94[0] < 0.0f)?0.0f:(iTemp205?(dsp->fConst108 * dsp->fRec94[0]):1.0f)):((dsp->fRec94[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec94[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec33[(dsp->IOTA & 4095)] = fTemp206;
			dsp->fRec87[(dsp->IOTA & 1023)] = ((fSlow87 * dsp->fVec33[((dsp->IOTA - iSlow108) & 4095)]) + (fSlow109 * (((((fSlow110 * dsp->fVec33[((dsp->IOTA - iSlow111) & 4095)]) + (fSlow112 * dsp->fVec33[((dsp->IOTA - iSlow113) & 4095)])) + (fSlow115 * dsp->fVec33[((dsp->IOTA - iSlow116) & 4095)])) + (fSlow118 * dsp->fVec33[((dsp->IOTA - iSlow119) & 4095)])) + (fSlow120 * dsp->fVec33[((dsp->IOTA - iSlow121) & 4095)]))));
			dsp->fRec97[0] = ((fSlow90 * ((0.5f * ((dsp->fRec95[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec95[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec97[2]) + (dsp->fConst95 * dsp->fRec97[1]))));
			float fTemp207 = fabsf(dsp->fRec95[((dsp->IOTA - 1001) & 1023)]);
			float fTemp208 = ((dsp->fRec98[1] > fTemp207)?dsp->fConst101:dsp->fConst100);
			dsp->fRec99[0] = ((dsp->fRec99[1] * fTemp208) + (fTemp207 * (1.0f - fTemp208)));
			dsp->fRec98[0] = dsp->fRec99[0];
			float fTemp209 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec98[0]) + 1.0f)));
			float fTemp210 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp209)));
			float fTemp211 = (dsp->fRec96[1] * ((dsp->fConst97 * fTemp210) + -8.0f));
			float fTemp212 = (dsp->fConst96 * fTemp210);
			float fTemp213 = (dsp->fConst102 * ((dsp->fConst103 * fTemp209) - (dsp->fConst104 * (fTemp210 / fTemp209))));
			float fTemp214 = ((fTemp212 + fTemp213) + 4.0f);
			dsp->fRec96[0] = ((dsp->fConst93 * (dsp->fRec97[2] + (dsp->fRec97[0] + (2.0f * dsp->fRec97[1])))) - ((fTemp211 + (dsp->fRec96[2] * (fTemp212 + (4.0f - fTemp213)))) / fTemp214));
			float fTemp215 = (fTemp212 + 4.0f);
			dsp->fVec34[0] = fSlow133;
			dsp->fRec100[0] = ((((fSlow133 - dsp->fVec34[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec100[1] + fTemp204) + 1.0f)));
			int iTemp216 = (dsp->fRec100[0] < dsp->fConst107);
			float fTemp217 = ((fSlow132 * (((fTemp211 + (dsp->fRec96[0] * fTemp215)) + (dsp->fRec96[2] * fTemp215)) / fTemp214)) + (fSlow95 * (fTemp203 * (iTemp216?((dsp->fRec100[0] < 0.0f)?0.0f:(iTemp216?(dsp->fConst108 * dsp->fRec100[0]):1.0f)):((dsp->fRec100[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec100[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec35[(dsp->IOTA & 4095)] = fTemp217;
			dsp->fRec95[(dsp->IOTA & 1023)] = ((fSlow131 * dsp->fVec35[((dsp->IOTA - iSlow135) & 4095)]) + (fSlow136 * (((((fSlow137 * dsp->fVec35[((dsp->IOTA - iSlow138) & 4095)]) + (fSlow139 * dsp->fVec35[((dsp->IOTA - iSlow140) & 4095)])) + (fSlow142 * dsp->fVec35[((dsp->IOTA - iSlow143) & 4095)])) + (fSlow145 * dsp->fVec35[((dsp->IOTA - iSlow146) & 4095)])) + (fSlow147 * dsp->fVec35[((dsp->IOTA - iSlow148) & 4095)]))));
			dsp->fRec103[0] = ((fSlow90 * ((0.5f * ((dsp->fRec101[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec101[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec103[2]) + (dsp->fConst95 * dsp->fRec103[1]))));
			float fTemp218 = fabsf(dsp->fRec101[((dsp->IOTA - 1001) & 1023)]);
			float fTemp219 = ((dsp->fRec104[1] > fTemp218)?dsp->fConst101:dsp->fConst100);
			dsp->fRec105[0] = ((dsp->fRec105[1] * fTemp219) + (fTemp218 * (1.0f - fTemp219)));
			dsp->fRec104[0] = dsp->fRec105[0];
			float fTemp220 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec104[0]) + 1.0f)));
			float fTemp221 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp220)));
			float fTemp222 = (dsp->fRec102[1] * ((dsp->fConst97 * fTemp221) + -8.0f));
			float fTemp223 = (dsp->fConst96 * fTemp221);
			float fTemp224 = (dsp->fConst102 * ((dsp->fConst103 * fTemp220) - (dsp->fConst104 * (fTemp221 / fTemp220))));
			float fTemp225 = ((fTemp223 + fTemp224) + 4.0f);
			dsp->fRec102[0] = ((dsp->fConst93 * (dsp->fRec103[2] + (dsp->fRec103[0] + (2.0f * dsp->fRec103[1])))) - ((fTemp222 + (dsp->fRec102[2] * (fTemp223 + (4.0f - fTemp224)))) / fTemp225));
			float fTemp226 = (fTemp223 + 4.0f);
			dsp->fVec36[0] = fSlow160;
			dsp->fRec106[0] = ((((fSlow160 - dsp->fVec36[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec106[1] + fTemp204) + 1.0f)));
			int iTemp227 = (dsp->fRec106[0] < dsp->fConst107);
			float fTemp228 = ((fSlow159 * (((fTemp222 + (dsp->fRec102[0] * fTemp226)) + (dsp->fRec102[2] * fTemp226)) / fTemp225)) + (fSlow95 * (fTemp203 * (iTemp227?((dsp->fRec106[0] < 0.0f)?0.0f:(iTemp227?(dsp->fConst108 * dsp->fRec106[0]):1.0f)):((dsp->fRec106[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec106[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec37[(dsp->IOTA & 4095)] = fTemp228;
			dsp->fRec101[(dsp->IOTA & 1023)] = ((fSlow158 * dsp->fVec37[((dsp->IOTA - iSlow162) & 4095)]) + (fSlow163 * (((((fSlow164 * dsp->fVec37[((dsp->IOTA - iSlow165) & 4095)]) + (fSlow166 * dsp->fVec37[((dsp->IOTA - iSlow167) & 4095)])) + (fSlow169 * dsp->fVec37[((dsp->IOTA - iSlow170) & 4095)])) + (fSlow172 * dsp->fVec37[((dsp->IOTA - iSlow173) & 4095)])) + (fSlow174 * dsp->fVec37[((dsp->IOTA - iSlow175) & 4095)]))));
			dsp->fRec109[0] = ((fSlow90 * ((0.5f * ((dsp->fRec107[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec107[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst93 * ((dsp->fConst94 * dsp->fRec109[2]) + (dsp->fConst95 * dsp->fRec109[1]))));
			float fTemp229 = fabsf(dsp->fRec107[((dsp->IOTA - 1001) & 1023)]);
			float fTemp230 = ((dsp->fRec110[1] > fTemp229)?dsp->fConst101:dsp->fConst100);
			dsp->fRec111[0] = ((dsp->fRec111[1] * fTemp230) + (fTemp229 * (1.0f - fTemp230)));
			dsp->fRec110[0] = dsp->fRec111[0];
			float fTemp231 = tanf((dsp->fConst99 * ((0.5f * dsp->fRec110[0]) + 1.0f)));
			float fTemp232 = mydsp_faustpower2_f(sqrtf((dsp->fConst98 * fTemp231)));
			float fTemp233 = (dsp->fRec108[1] * ((dsp->fConst97 * fTemp232) + -8.0f));
			float fTemp234 = (dsp->fConst96 * fTemp232);
			float fTemp235 = (dsp->fConst102 * ((dsp->fConst103 * fTemp231) - (dsp->fConst104 * (fTemp232 / fTemp231))));
			float fTemp236 = ((fTemp234 + fTemp235) + 4.0f);
			dsp->fRec108[0] = ((dsp->fConst93 * (dsp->fRec109[2] + (dsp->fRec109[0] + (2.0f * dsp->fRec109[1])))) - ((fTemp233 + (dsp->fRec108[2] * (fTemp234 + (4.0f - fTemp235)))) / fTemp236));
			float fTemp237 = (fTemp234 + 4.0f);
			dsp->fVec38[0] = fSlow187;
			dsp->fRec112[0] = ((((fSlow187 - dsp->fVec38[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst106, ((dsp->fRec112[1] + fTemp204) + 1.0f)));
			int iTemp238 = (dsp->fRec112[0] < dsp->fConst107);
			float fTemp239 = ((fSlow186 * (((fTemp233 + (dsp->fRec108[0] * fTemp237)) + (dsp->fRec108[2] * fTemp237)) / fTemp236)) + (fSlow95 * (fTemp203 * (iTemp238?((dsp->fRec112[0] < 0.0f)?0.0f:(iTemp238?(dsp->fConst108 * dsp->fRec112[0]):1.0f)):((dsp->fRec112[0] < dsp->fConst106)?((dsp->fConst108 * (0.0f - (dsp->fRec112[0] - dsp->fConst107))) + 1.0f):0.0f)))));
			dsp->fVec39[(dsp->IOTA & 4095)] = fTemp239;
			dsp->fRec107[(dsp->IOTA & 1023)] = ((fSlow185 * dsp->fVec39[((dsp->IOTA - iSlow189) & 4095)]) + (fSlow190 * (((((fSlow191 * dsp->fVec39[((dsp->IOTA - iSlow192) & 4095)]) + (fSlow193 * dsp->fVec39[((dsp->IOTA - iSlow194) & 4095)])) + (fSlow196 * dsp->fVec39[((dsp->IOTA - iSlow197) & 4095)])) + (fSlow199 * dsp->fVec39[((dsp->IOTA - iSlow200) & 4095)])) + (fSlow201 * dsp->fVec39[((dsp->IOTA - iSlow202) & 4095)]))));
			float fTemp240 = (fSlow77 * ((((0.600000024f * dsp->fRec87[((dsp->IOTA - 0) & 1023)]) + (0.400000006f * dsp->fRec95[((dsp->IOTA - 0) & 1023)])) + (0.300000012f * dsp->fRec101[((dsp->IOTA - 0) & 1023)])) + (0.200000003f * dsp->fRec107[((dsp->IOTA - 0) & 1023)])));
			float fTemp241 = (fTemp240 + 0.100000001f);
			float fTemp242 = (0.666666687f * fTemp241);
			float fTemp243 = (((fTemp242 > 1.0f)?1.0f:((fTemp242 < -1.0f)?-1.0f:(fTemp240 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp241)))))) + -0.100000001f);
			dsp->fVec40[0] = fTemp243;
			dsp->fRec86[0] = (dsp->fConst5 * ((fTemp243 - dsp->fVec40[1]) + (dsp->fConst11 * dsp->fRec86[1])));
			dsp->fRec124[0] = ((fSlow217 * dsp->fRec124[1]) + (fSlow218 * (dsp->fRec120[1] + dsp->fRec120[2])));
			dsp->fRec123[0] = ((fSlow211 * dsp->fRec123[1]) + (fSlow212 * (dsp->fRec120[1] + (fSlow214 * dsp->fRec124[0]))));
			dsp->fVec41[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec123[0]) + 9.99999968e-21f);
			float fTemp244 = (0.0500000007f * fTemp192);
			float fTemp245 = (fSlow77 * ((((0.400000006f * dsp->fRec87[((dsp->IOTA - 0) & 1023)]) + (0.600000024f * dsp->fRec95[((dsp->IOTA - 0) & 1023)])) + (0.699999988f * dsp->fRec101[((dsp->IOTA - 0) & 1023)])) + (0.800000012f * dsp->fRec107[((dsp->IOTA - 0) & 1023)])));
			float fTemp246 = (fTemp245 + 0.100000001f);
			float fTemp247 = (0.666666687f * fTemp246);
			float fTemp248 = (((fTemp247 > 1.0f)?1.0f:((fTemp247 < -1.0f)?-1.0f:(fTemp245 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp246)))))) + -0.100000001f);
			dsp->fVec42[0] = fTemp248;
			dsp->fRec125[0] = (dsp->fConst5 * ((fTemp248 - dsp->fVec42[1]) + (dsp->fConst11 * dsp->fRec125[1])));
			dsp->fVec43[(dsp->IOTA & 16383)] = (fSlow219 * (((((0.294f * fTemp32) + ((0.0289999992f * fTemp162) + (fTemp244 + (0.5f * dsp->fRec125[0])))) + (0.319999993f * fTemp118)) + (0.600000024f * fTemp40)) + (0.180000007f * fTemp64)));
			float fTemp249 = (0.300000012f * dsp->fVec43[((dsp->IOTA - iSlow220) & 16383)]);
			float fTemp250 = (((0.600000024f * dsp->fRec121[1]) + dsp->fVec41[((dsp->IOTA - dsp->iConst113) & 8191)]) - fTemp249);
			dsp->fVec44[(dsp->IOTA & 1023)] = fTemp250;
			dsp->fRec121[0] = dsp->fVec44[((dsp->IOTA - dsp->iConst114) & 1023)];
			float fRec122 = (0.0f - (0.600000024f * fTemp250));
			dsp->fRec129[0] = ((fSlow217 * dsp->fRec129[1]) + (fSlow218 * (dsp->fRec116[1] + dsp->fRec116[2])));
			dsp->fRec128[0] = ((fSlow227 * dsp->fRec128[1]) + (fSlow228 * (dsp->fRec116[1] + (fSlow229 * dsp->fRec129[0]))));
			dsp->fVec45[(dsp->IOTA & 16383)] = ((0.353553385f * dsp->fRec128[0]) + 9.99999968e-21f);
			float fTemp251 = (((0.600000024f * dsp->fRec126[1]) + dsp->fVec45[((dsp->IOTA - dsp->iConst118) & 16383)]) - fTemp249);
			dsp->fVec46[(dsp->IOTA & 2047)] = fTemp251;
			dsp->fRec126[0] = dsp->fVec46[((dsp->IOTA - dsp->iConst119) & 2047)];
			float fRec127 = (0.0f - (0.600000024f * fTemp251));
			dsp->fRec133[0] = ((fSlow217 * dsp->fRec133[1]) + (fSlow218 * (dsp->fRec118[1] + dsp->fRec118[2])));
			dsp->fRec132[0] = ((fSlow236 * dsp->fRec132[1]) + (fSlow237 * (dsp->fRec118[1] + (fSlow238 * dsp->fRec133[0]))));
			dsp->fVec47[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec132[0]) + 9.99999968e-21f);
			float fTemp252 = (dsp->fVec47[((dsp->IOTA - dsp->iConst123) & 8191)] + (fTemp249 + (0.600000024f * dsp->fRec130[1])));
			dsp->fVec48[(dsp->IOTA & 2047)] = fTemp252;
			dsp->fRec130[0] = dsp->fVec48[((dsp->IOTA - dsp->iConst124) & 2047)];
			float fRec131 = (0.0f - (0.600000024f * fTemp252));
			dsp->fRec137[0] = ((fSlow217 * dsp->fRec137[1]) + (fSlow218 * (dsp->fRec114[1] + dsp->fRec114[2])));
			dsp->fRec136[0] = ((fSlow245 * dsp->fRec136[1]) + (fSlow246 * (dsp->fRec114[1] + (fSlow247 * dsp->fRec137[0]))));
			dsp->fVec49[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec136[0]) + 9.99999968e-21f);
			float fTemp253 = (fTemp249 + ((0.600000024f * dsp->fRec134[1]) + dsp->fVec49[((dsp->IOTA - dsp->iConst128) & 8191)]));
			dsp->fVec50[(dsp->IOTA & 1023)] = fTemp253;
			dsp->fRec134[0] = dsp->fVec50[((dsp->IOTA - dsp->iConst129) & 1023)];
			float fRec135 = (0.0f - (0.600000024f * fTemp253));
			dsp->fRec141[0] = ((fSlow217 * dsp->fRec141[1]) + (fSlow218 * (dsp->fRec119[1] + dsp->fRec119[2])));
			dsp->fRec140[0] = ((fSlow254 * dsp->fRec140[1]) + (fSlow255 * (dsp->fRec119[1] + (fSlow256 * dsp->fRec141[0]))));
			dsp->fVec51[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec140[0]) + 9.99999968e-21f);
			dsp->fVec52[(dsp->IOTA & 16383)] = (fSlow219 * (((((0.195999995f * fTemp32) + ((0.261000007f * fTemp162) + (fTemp244 + (0.5f * dsp->fRec86[0])))) + (0.479999989f * fTemp118)) + (0.400000006f * fTemp40)) + (0.419999987f * fTemp64)));
			float fTemp254 = (0.300000012f * dsp->fVec52[((dsp->IOTA - iSlow220) & 16383)]);
			float fTemp255 = (dsp->fVec51[((dsp->IOTA - dsp->iConst133) & 8191)] - (fTemp254 + (0.600000024f * dsp->fRec138[1])));
			dsp->fVec53[(dsp->IOTA & 1023)] = fTemp255;
			dsp->fRec138[0] = dsp->fVec53[((dsp->IOTA - dsp->iConst134) & 1023)];
			float fRec139 = (0.600000024f * fTemp255);
			dsp->fRec145[0] = ((fSlow217 * dsp->fRec145[1]) + (fSlow218 * (dsp->fRec115[1] + dsp->fRec115[2])));
			dsp->fRec144[0] = ((fSlow263 * dsp->fRec144[1]) + (fSlow264 * (dsp->fRec115[1] + (fSlow265 * dsp->fRec145[0]))));
			dsp->fVec54[(dsp->IOTA & 4095)] = ((0.353553385f * dsp->fRec144[0]) + 9.99999968e-21f);
			float fTemp256 = (dsp->fVec54[((dsp->IOTA - dsp->iConst138) & 4095)] - (fTemp254 + (0.600000024f * dsp->fRec142[1])));
			dsp->fVec55[(dsp->IOTA & 2047)] = fTemp256;
			dsp->fRec142[0] = dsp->fVec55[((dsp->IOTA - dsp->iConst139) & 2047)];
			float fRec143 = (0.600000024f * fTemp256);
			dsp->fRec149[0] = ((fSlow217 * dsp->fRec149[1]) + (fSlow218 * (dsp->fRec117[1] + dsp->fRec117[2])));
			dsp->fRec148[0] = ((fSlow272 * dsp->fRec148[1]) + (fSlow273 * (dsp->fRec117[1] + (fSlow274 * dsp->fRec149[0]))));
			dsp->fVec56[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec148[0]) + 9.99999968e-21f);
			float fTemp257 = ((fTemp254 + dsp->fVec56[((dsp->IOTA - dsp->iConst143) & 8191)]) - (0.600000024f * dsp->fRec146[1]));
			dsp->fVec57[(dsp->IOTA & 1023)] = fTemp257;
			dsp->fRec146[0] = dsp->fVec57[((dsp->IOTA - dsp->iConst144) & 1023)];
			float fRec147 = (0.600000024f * fTemp257);
			dsp->fRec153[0] = ((fSlow217 * dsp->fRec153[1]) + (fSlow218 * (dsp->fRec113[1] + dsp->fRec113[2])));
			dsp->fRec152[0] = ((fSlow281 * dsp->fRec152[1]) + (fSlow282 * (dsp->fRec113[1] + (fSlow283 * dsp->fRec153[0]))));
			dsp->fVec58[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec152[0]) + 9.99999968e-21f);
			float fTemp258 = ((dsp->fVec58[((dsp->IOTA - dsp->iConst148) & 8191)] + fTemp254) - (0.600000024f * dsp->fRec150[1]));
			dsp->fVec59[(dsp->IOTA & 1023)] = fTemp258;
			dsp->fRec150[0] = dsp->fVec59[((dsp->IOTA - dsp->iConst149) & 1023)];
			float fRec151 = (0.600000024f * fTemp258);
			float fTemp259 = (fRec151 + fRec147);
			float fTemp260 = (fRec139 + (fRec143 + fTemp259));
			dsp->fRec113[0] = (dsp->fRec121[1] + (dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (dsp->fRec142[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + (fRec122 + (fRec127 + (fRec131 + (fRec135 + fTemp260))))))))))));
			dsp->fRec114[0] = ((dsp->fRec138[1] + (dsp->fRec142[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + fTemp260)))) - (dsp->fRec121[1] + (dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (fRec122 + (fRec127 + (fRec135 + fRec131))))))));
			float fTemp261 = (fRec143 + fRec139);
			dsp->fRec115[0] = ((dsp->fRec130[1] + (dsp->fRec134[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + (fRec131 + (fRec135 + fTemp259)))))) - (dsp->fRec121[1] + (dsp->fRec126[1] + (dsp->fRec138[1] + (dsp->fRec142[1] + (fRec122 + (fRec127 + fTemp261)))))));
			dsp->fRec116[0] = ((dsp->fRec121[1] + (dsp->fRec126[1] + (dsp->fRec146[1] + (dsp->fRec150[1] + (fRec122 + (fRec127 + fTemp259)))))) - (dsp->fRec130[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (dsp->fRec142[1] + (fRec131 + (fRec135 + fTemp261)))))));
			float fTemp262 = (fRec151 + fRec143);
			float fTemp263 = (fRec147 + fRec139);
			dsp->fRec117[0] = ((dsp->fRec126[1] + (dsp->fRec134[1] + (dsp->fRec142[1] + (dsp->fRec150[1] + (fRec127 + (fRec135 + fTemp262)))))) - (dsp->fRec121[1] + (dsp->fRec130[1] + (dsp->fRec138[1] + (dsp->fRec146[1] + (fRec122 + (fRec131 + fTemp263)))))));
			dsp->fRec118[0] = ((dsp->fRec121[1] + (dsp->fRec130[1] + (dsp->fRec142[1] + (dsp->fRec150[1] + (fRec122 + (fRec131 + fTemp262)))))) - (dsp->fRec126[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (dsp->fRec146[1] + (fRec127 + (fRec135 + fTemp263)))))));
			float fTemp264 = (fRec151 + fRec139);
			float fTemp265 = (fRec147 + fRec143);
			dsp->fRec119[0] = ((dsp->fRec121[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (dsp->fRec150[1] + (fRec122 + (fRec135 + fTemp264)))))) - (dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec142[1] + (dsp->fRec146[1] + (fRec127 + (fRec131 + fTemp265)))))));
			dsp->fRec120[0] = ((dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec138[1] + (dsp->fRec150[1] + (fRec127 + (fRec131 + fTemp264)))))) - (dsp->fRec121[1] + (dsp->fRec134[1] + (dsp->fRec142[1] + (dsp->fRec146[1] + (fRec122 + (fRec135 + fTemp265)))))));
			float fTemp266 = ((0.400000006f * fTemp41) + ((0.699999988f * fTemp64) + ((0.600000024f * fTemp118) + ((0.899999976f * fTemp162) + (fTemp193 + (dsp->fRec86[0] + (0.370000005f * (dsp->fRec114[0] + dsp->fRec115[0]))))))));
			float fTemp267 = ((0.600000024f * fTemp41) + ((0.300000012f * fTemp64) + ((0.400000006f * fTemp118) + ((0.100000001f * fTemp162) + (fTemp193 + (dsp->fRec125[0] + (0.370000005f * (dsp->fRec114[0] - dsp->fRec115[0]))))))));
			float fTemp268 = fabsf((fabsf(fTemp266) + fabsf(fTemp267)));
			float fTemp269 = ((dsp->fRec155[1] > fTemp268)?fSlow288:fSlow287);
			dsp->fRec156[0] = ((dsp->fRec156[1] * fTemp269) + (fTemp268 * (1.0f - fTemp269)));
			dsp->fRec155[0] = dsp->fRec156[0];
			dsp->fRec154[0] = ((fSlow285 * dsp->fRec154[1]) + (fSlow286 * max(((20.0f * log10f(dsp->fRec155[0])) - fSlow289), 0.0f)));
			float fTemp270 = powf(10.0f, (0.0500000007f * dsp->fRec154[0]));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp266 * fTemp270));
			output1[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp267 * fTemp270));
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
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->iRec40[1] = dsp->iRec40[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->iRec48[1] = dsp->iRec48[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec49[2] = dsp->fRec49[1];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec43[2] = dsp->fRec43[1];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec55[2] = dsp->fRec55[1];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[2] = dsp->fRec60[1];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->iVec9[1] = dsp->iVec9[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fVec25[1] = dsp->fVec25[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec72[2] = dsp->fRec72[1];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec65[2] = dsp->fRec65[1];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->iVec30[1] = dsp->iVec30[0];
			dsp->fVec31[1] = dsp->fVec31[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec89[2] = dsp->fRec89[1];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec88[2] = dsp->fRec88[1];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec93[2] = dsp->fRec93[1];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fRec92[2] = dsp->fRec92[1];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec97[2] = dsp->fRec97[1];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec96[2] = dsp->fRec96[1];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec103[2] = dsp->fRec103[1];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec102[2] = dsp->fRec102[1];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec109[2] = dsp->fRec109[1];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec111[1] = dsp->fRec111[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec108[2] = dsp->fRec108[1];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec124[1] = dsp->fRec124[0];
			dsp->fRec123[1] = dsp->fRec123[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec125[1] = dsp->fRec125[0];
			dsp->fRec121[1] = dsp->fRec121[0];
			dsp->fRec129[1] = dsp->fRec129[0];
			dsp->fRec128[1] = dsp->fRec128[0];
			dsp->fRec126[1] = dsp->fRec126[0];
			dsp->fRec133[1] = dsp->fRec133[0];
			dsp->fRec132[1] = dsp->fRec132[0];
			dsp->fRec130[1] = dsp->fRec130[0];
			dsp->fRec137[1] = dsp->fRec137[0];
			dsp->fRec136[1] = dsp->fRec136[0];
			dsp->fRec134[1] = dsp->fRec134[0];
			dsp->fRec141[1] = dsp->fRec141[0];
			dsp->fRec140[1] = dsp->fRec140[0];
			dsp->fRec138[1] = dsp->fRec138[0];
			dsp->fRec145[1] = dsp->fRec145[0];
			dsp->fRec144[1] = dsp->fRec144[0];
			dsp->fRec142[1] = dsp->fRec142[0];
			dsp->fRec149[1] = dsp->fRec149[0];
			dsp->fRec148[1] = dsp->fRec148[0];
			dsp->fRec146[1] = dsp->fRec146[0];
			dsp->fRec153[1] = dsp->fRec153[0];
			dsp->fRec152[1] = dsp->fRec152[0];
			dsp->fRec150[1] = dsp->fRec150[0];
			dsp->fRec113[2] = dsp->fRec113[1];
			dsp->fRec113[1] = dsp->fRec113[0];
			dsp->fRec114[2] = dsp->fRec114[1];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec115[2] = dsp->fRec115[1];
			dsp->fRec115[1] = dsp->fRec115[0];
			dsp->fRec116[2] = dsp->fRec116[1];
			dsp->fRec116[1] = dsp->fRec116[0];
			dsp->fRec117[2] = dsp->fRec117[1];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec118[2] = dsp->fRec118[1];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fRec119[2] = dsp->fRec119[1];
			dsp->fRec119[1] = dsp->fRec119[0];
			dsp->fRec120[2] = dsp->fRec120[1];
			dsp->fRec120[1] = dsp->fRec120[0];
			dsp->fRec156[1] = dsp->fRec156[0];
			dsp->fRec155[1] = dsp->fRec155[0];
			dsp->fRec154[1] = dsp->fRec154[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
