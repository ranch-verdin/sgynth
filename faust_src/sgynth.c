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

static float mydsp_faustpower3_f(float value) {
	return ((value * value) * value);
	
}
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
	
	int fSamplingFreq;
	float fConst0;
	float fVec0[2];
	float fConst1;
	float fConst2;
	int iVec1[2];
	float fConst3;
	float fConst4;
	FAUSTFLOAT fVslider0;
	float fConst5;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	float fRec3[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst6;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	int iRec5[2];
	float fConst7;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fRec4[2];
	float fRec1[2];
	float fConst8;
	FAUSTFLOAT fVslider10;
	float fRec7[2];
	float fConst9;
	float fRec8[2];
	float fConst10;
	float fConst11;
	float fRec6[3];
	FAUSTFLOAT fVslider11;
	float fRec2[2];
	float fRec0[3];
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	float fRec10[2];
	int iRec12[2];
	FAUSTFLOAT fVslider14;
	float fRec11[2];
	FAUSTFLOAT fButton0;
	float fVec2[2];
	float fRec14[2];
	int IOTA;
	int iVec3[8192];
	int iConst12;
	int iConst13;
	int iConst14;
	int iConst15;
	FAUSTFLOAT fVslider15;
	float fRec13[2];
	FAUSTFLOAT fVslider16;
	float fConst16;
	FAUSTFLOAT fVslider17;
	float fRec15[2];
	float fConst17;
	float fConst18;
	float fConst19;
	FAUSTFLOAT fButton1;
	float fVec4[2];
	float fConst20;
	float fRec18[2];
	FAUSTFLOAT fVslider18;
	float fRec19[2];
	float fConst21;
	float fConst22;
	float fRec17[3];
	float fRec16[2];
	float fConst23;
	float fRec20[2];
	float fRec21[2];
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fRec22[3];
	FAUSTFLOAT fButton2;
	float fVec5[2];
	float fConst29;
	float fRec24[2];
	FAUSTFLOAT fButton3;
	float fVec6[2];
	float fRec25[2];
	int iVec7[2];
	FAUSTFLOAT fVslider19;
	float fRec26[2];
	float fRec23[2];
	float fConst30;
	float fConst31;
	float fConst32;
	float fConst33;
	FAUSTFLOAT fVslider20;
	float fRec28[2];
	float fRec31[2];
	float fConst34;
	float fConst35;
	float fConst36;
	float fConst37;
	float fVec8[2];
	float fRec35[2];
	float fVec9[2];
	float fVec10[256];
	float fConst38;
	float fConst39;
	float fConst40;
	int iConst41;
	float fConst42;
	int iConst43;
	float fVec11[2];
	float fRec36[2];
	float fVec12[2];
	float fVec13[512];
	float fConst44;
	float fConst45;
	float fConst46;
	int iConst47;
	float fConst48;
	int iConst49;
	float fVec14[2];
	float fRec37[2];
	float fVec15[2];
	float fVec16[256];
	float fConst50;
	float fConst51;
	float fConst52;
	int iConst53;
	float fConst54;
	int iConst55;
	float fVec17[2];
	float fRec38[2];
	float fVec18[2];
	float fVec19[512];
	float fConst56;
	float fConst57;
	float fConst58;
	int iConst59;
	float fConst60;
	int iConst61;
	float fVec20[2];
	float fRec39[2];
	float fVec21[2];
	float fVec22[256];
	float fConst62;
	float fConst63;
	float fConst64;
	int iConst65;
	float fConst66;
	int iConst67;
	float fVec23[2];
	float fRec40[2];
	float fVec24[2];
	float fVec25[512];
	float fConst68;
	float fConst69;
	float fConst70;
	int iConst71;
	float fConst72;
	int iConst73;
	float fConst74;
	float fConst75;
	float fRec34[3];
	float fConst76;
	float fRec32[2];
	float fRec29[2];
	float fConst77;
	float fConst78;
	float fConst79;
	float fRec27[3];
	FAUSTFLOAT fVslider21;
	FAUSTFLOAT fVslider22;
	FAUSTFLOAT fVslider23;
	FAUSTFLOAT fVslider24;
	FAUSTFLOAT fButton4;
	float fVec26[2];
	float fConst80;
	float fRec44[2];
	FAUSTFLOAT fButton5;
	float fVec27[2];
	float fRec45[2];
	int iVec28[2];
	FAUSTFLOAT fVslider25;
	float fVec29[2];
	float fRec43[2];
	float fConst81;
	float fConst82;
	float fRec41[2];
	float fConst83;
	float fRec46[2];
	float fConst84;
	float fConst85;
	FAUSTFLOAT fVslider26;
	float fRec47[2];
	float fRec42[2];
	float fConst86;
	float fConst87;
	FAUSTFLOAT fVslider27;
	FAUSTFLOAT fVslider28;
	float fConst88;
	FAUSTFLOAT fHslider0;
	float fConst89;
	float fConst90;
	float fConst91;
	FAUSTFLOAT fHslider1;
	float fConst92;
	float fConst93;
	float fRec51[3];
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	float fConst98;
	float fConst99;
	float fRec53[2];
	float fRec52[2];
	float fConst100;
	float fConst101;
	float fConst102;
	float fRec50[3];
	FAUSTFLOAT fHslider2;
	float fConst103;
	FAUSTFLOAT fHslider3;
	float fRec55[3];
	float fRec54[3];
	FAUSTFLOAT fButton6;
	float fVec30[2];
	float fConst104;
	float fRec56[2];
	float fConst105;
	float fConst106;
	float fVec31[4096];
	float fRec49[1024];
	FAUSTFLOAT fVslider29;
	float fRec59[3];
	float fRec61[2];
	float fRec60[2];
	float fRec58[3];
	FAUSTFLOAT fButton7;
	float fVec32[2];
	float fRec62[2];
	float fVec33[4096];
	float fRec57[1024];
	FAUSTFLOAT fVslider30;
	float fRec65[3];
	float fRec67[2];
	float fRec66[2];
	float fRec64[3];
	FAUSTFLOAT fButton8;
	float fVec34[2];
	float fRec68[2];
	float fVec35[4096];
	float fRec63[1024];
	FAUSTFLOAT fVslider31;
	float fRec71[3];
	float fRec73[2];
	float fRec72[2];
	float fRec70[3];
	FAUSTFLOAT fButton9;
	float fVec36[2];
	float fRec74[2];
	float fVec37[4096];
	float fRec69[1024];
	float fVec38[2];
	float fConst107;
	float fRec48[2];
	float fConst108;
	FAUSTFLOAT fVslider32;
	float fConst109;
	float fConst110;
	FAUSTFLOAT fVslider33;
	FAUSTFLOAT fVslider34;
	FAUSTFLOAT fVslider35;
	float fRec86[2];
	float fRec85[2];
	float fVec39[8192];
	float fConst111;
	int iConst112;
	FAUSTFLOAT fVslider36;
	float fVec40[2];
	float fRec87[2];
	float fVec41[16384];
	FAUSTFLOAT fVslider37;
	float fVec42[1024];
	int iConst113;
	float fRec83[2];
	float fConst114;
	float fConst115;
	float fRec91[2];
	float fRec90[2];
	float fVec43[16384];
	float fConst116;
	int iConst117;
	float fVec44[2048];
	int iConst118;
	float fRec88[2];
	float fConst119;
	float fConst120;
	float fRec95[2];
	float fRec94[2];
	float fVec45[8192];
	float fConst121;
	int iConst122;
	float fVec46[2048];
	int iConst123;
	float fRec92[2];
	float fConst124;
	float fConst125;
	float fRec99[2];
	float fRec98[2];
	float fVec47[8192];
	float fConst126;
	int iConst127;
	float fVec48[1024];
	int iConst128;
	float fRec96[2];
	float fConst129;
	float fConst130;
	float fRec103[2];
	float fRec102[2];
	float fVec49[8192];
	float fConst131;
	int iConst132;
	float fVec50[16384];
	float fVec51[1024];
	int iConst133;
	float fRec100[2];
	float fConst134;
	float fConst135;
	float fRec107[2];
	float fRec106[2];
	float fVec52[4096];
	float fConst136;
	int iConst137;
	float fVec53[2048];
	int iConst138;
	float fRec104[2];
	float fConst139;
	float fConst140;
	float fRec111[2];
	float fRec110[2];
	float fVec54[8192];
	float fConst141;
	int iConst142;
	float fVec55[1024];
	int iConst143;
	float fRec108[2];
	float fConst144;
	float fConst145;
	float fRec115[2];
	float fRec114[2];
	float fVec56[8192];
	float fConst146;
	int iConst147;
	float fVec57[1024];
	int iConst148;
	float fRec112[2];
	float fRec75[3];
	float fRec76[3];
	float fRec77[3];
	float fRec78[3];
	float fRec79[3];
	float fRec80[3];
	float fRec81[3];
	float fRec82[3];
	float fConst149;
	FAUSTFLOAT fVslider38;
	FAUSTFLOAT fVslider39;
	float fConst150;
	FAUSTFLOAT fVslider40;
	float fRec118[2];
	float fRec117[2];
	FAUSTFLOAT fVslider41;
	float fRec116[2];
	
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
	
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider1 = (FAUSTFLOAT)0.5f;
	dsp->fVslider2 = (FAUSTFLOAT)100.0f;
	dsp->fVslider3 = (FAUSTFLOAT)0.80000000000000004f;
	dsp->fVslider4 = (FAUSTFLOAT)20.0f;
	dsp->fVslider5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider6 = (FAUSTFLOAT)50.0f;
	dsp->fVslider7 = (FAUSTFLOAT)150.0f;
	dsp->fVslider8 = (FAUSTFLOAT)300.0f;
	dsp->fVslider9 = (FAUSTFLOAT)0.0f;
	dsp->fVslider10 = (FAUSTFLOAT)1.0f;
	dsp->fVslider11 = (FAUSTFLOAT)1.2f;
	dsp->fVslider12 = (FAUSTFLOAT)1.5f;
	dsp->fVslider13 = (FAUSTFLOAT)1500.0f;
	dsp->fVslider14 = (FAUSTFLOAT)1.3f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider15 = (FAUSTFLOAT)300.0f;
	dsp->fVslider16 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider17 = (FAUSTFLOAT)1.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider18 = (FAUSTFLOAT)0.5f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fButton3 = (FAUSTFLOAT)0.0f;
	dsp->fVslider19 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider20 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider21 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider22 = (FAUSTFLOAT)1.0f;
	dsp->fVslider23 = (FAUSTFLOAT)60.0f;
	dsp->fVslider24 = (FAUSTFLOAT)4.7300000000000004f;
	dsp->fButton4 = (FAUSTFLOAT)0.0f;
	dsp->fButton5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider25 = (FAUSTFLOAT)12.0f;
	dsp->fVslider26 = (FAUSTFLOAT)0.98899999999999999f;
	dsp->fVslider27 = (FAUSTFLOAT)0.69999999999999996f;
	dsp->fVslider28 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)2.0f;
	dsp->fHslider3 = (FAUSTFLOAT)0.5f;
	dsp->fButton6 = (FAUSTFLOAT)0.0f;
	dsp->fVslider29 = (FAUSTFLOAT)440.0f;
	dsp->fButton7 = (FAUSTFLOAT)0.0f;
	dsp->fVslider30 = (FAUSTFLOAT)440.0f;
	dsp->fButton8 = (FAUSTFLOAT)0.0f;
	dsp->fVslider31 = (FAUSTFLOAT)440.0f;
	dsp->fButton9 = (FAUSTFLOAT)0.0f;
	dsp->fVslider32 = (FAUSTFLOAT)6000.0f;
	dsp->fVslider33 = (FAUSTFLOAT)1.0f;
	dsp->fVslider34 = (FAUSTFLOAT)1.0f;
	dsp->fVslider35 = (FAUSTFLOAT)200.0f;
	dsp->fVslider36 = (FAUSTFLOAT)1.5f;
	dsp->fVslider37 = (FAUSTFLOAT)20.0f;
	dsp->fVslider38 = (FAUSTFLOAT)10.0f;
	dsp->fVslider39 = (FAUSTFLOAT)3.0f;
	dsp->fVslider40 = (FAUSTFLOAT)50.0f;
	dsp->fVslider41 = (FAUSTFLOAT)-9.0f;
	
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
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->iRec5[l3] = 0;
			
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
			dsp->fRec1[l5] = 0.0f;
			
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
			dsp->fRec8[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			dsp->fRec6[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec2[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			dsp->fRec0[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec10[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->iRec12[l12] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec11[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fVec2[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec14[l15] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 8192); l16 = (l16 + 1)) {
			dsp->iVec3[l16] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec13[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fRec15[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fVec4[l19] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			dsp->fRec18[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec19[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 3); l22 = (l22 + 1)) {
			dsp->fRec17[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec16[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fRec20[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec21[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 3); l26 = (l26 + 1)) {
			dsp->fRec22[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fVec5[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec24[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fVec6[l29] = 0.0f;
			
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
			dsp->iVec7[l31] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			dsp->fRec26[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fRec23[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec28[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec31[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fVec8[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec35[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fVec9[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 256); l39 = (l39 + 1)) {
			dsp->fVec10[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fVec11[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec36[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fVec12[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 512); l43 = (l43 + 1)) {
			dsp->fVec13[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fVec14[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec37[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fVec15[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 256); l47 = (l47 + 1)) {
			dsp->fVec16[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fVec17[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec38[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fVec18[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 512); l51 = (l51 + 1)) {
			dsp->fVec19[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fVec20[l52] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			dsp->fRec39[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			dsp->fVec21[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 256); l55 = (l55 + 1)) {
			dsp->fVec22[l55] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			dsp->fVec23[l56] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			dsp->fRec40[l57] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			dsp->fVec24[l58] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 512); l59 = (l59 + 1)) {
			dsp->fVec25[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 3); l60 = (l60 + 1)) {
			dsp->fRec34[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec32[l61] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			dsp->fRec29[l62] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 3); l63 = (l63 + 1)) {
			dsp->fRec27[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->fVec26[l64] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->fRec44[l65] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			dsp->fVec27[l66] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			dsp->fRec45[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			dsp->iVec28[l68] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			dsp->fVec29[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			dsp->fRec43[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			dsp->fRec41[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			dsp->fRec46[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fRec47[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fRec42[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 3); l75 = (l75 + 1)) {
			dsp->fRec51[l75] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			dsp->fRec53[l76] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			dsp->fRec52[l77] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; (l78 < 3); l78 = (l78 + 1)) {
			dsp->fRec50[l78] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; (l79 < 3); l79 = (l79 + 1)) {
			dsp->fRec55[l79] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; (l80 < 3); l80 = (l80 + 1)) {
			dsp->fRec54[l80] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			dsp->fVec30[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fRec56[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 4096); l83 = (l83 + 1)) {
			dsp->fVec31[l83] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 1024); l84 = (l84 + 1)) {
			dsp->fRec49[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 3); l85 = (l85 + 1)) {
			dsp->fRec59[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->fRec61[l86] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			dsp->fRec60[l87] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; (l88 < 3); l88 = (l88 + 1)) {
			dsp->fRec58[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fVec32[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec62[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 4096); l91 = (l91 + 1)) {
			dsp->fVec33[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 1024); l92 = (l92 + 1)) {
			dsp->fRec57[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 3); l93 = (l93 + 1)) {
			dsp->fRec65[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			dsp->fRec67[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fRec66[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 3); l96 = (l96 + 1)) {
			dsp->fRec64[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fVec34[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			dsp->fRec68[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 4096); l99 = (l99 + 1)) {
			dsp->fVec35[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 1024); l100 = (l100 + 1)) {
			dsp->fRec63[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 3); l101 = (l101 + 1)) {
			dsp->fRec71[l101] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			dsp->fRec73[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fRec72[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 3); l104 = (l104 + 1)) {
			dsp->fRec70[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			dsp->fVec36[l105] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			dsp->fRec74[l106] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; (l107 < 4096); l107 = (l107 + 1)) {
			dsp->fVec37[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 1024); l108 = (l108 + 1)) {
			dsp->fRec69[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fVec38[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			dsp->fRec48[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			dsp->fRec86[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			dsp->fRec85[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 8192); l113 = (l113 + 1)) {
			dsp->fVec39[l113] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			dsp->fVec40[l114] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			dsp->fRec87[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 16384); l116 = (l116 + 1)) {
			dsp->fVec41[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 1024); l117 = (l117 + 1)) {
			dsp->fVec42[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			dsp->fRec83[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fRec91[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fRec90[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 16384); l121 = (l121 + 1)) {
			dsp->fVec43[l121] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; (l122 < 2048); l122 = (l122 + 1)) {
			dsp->fVec44[l122] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			dsp->fRec88[l123] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			dsp->fRec95[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			dsp->fRec94[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 8192); l126 = (l126 + 1)) {
			dsp->fVec45[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2048); l127 = (l127 + 1)) {
			dsp->fVec46[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec92[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			dsp->fRec99[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			dsp->fRec98[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 8192); l131 = (l131 + 1)) {
			dsp->fVec47[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 1024); l132 = (l132 + 1)) {
			dsp->fVec48[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			dsp->fRec96[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			dsp->fRec103[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			dsp->fRec102[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 8192); l136 = (l136 + 1)) {
			dsp->fVec49[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 16384); l137 = (l137 + 1)) {
			dsp->fVec50[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 1024); l138 = (l138 + 1)) {
			dsp->fVec51[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			dsp->fRec100[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			dsp->fRec107[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			dsp->fRec106[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 4096); l142 = (l142 + 1)) {
			dsp->fVec52[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 2048); l143 = (l143 + 1)) {
			dsp->fVec53[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fRec104[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec111[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			dsp->fRec110[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 8192); l147 = (l147 + 1)) {
			dsp->fVec54[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 1024); l148 = (l148 + 1)) {
			dsp->fVec55[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			dsp->fRec108[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			dsp->fRec115[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			dsp->fRec114[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 8192); l152 = (l152 + 1)) {
			dsp->fVec56[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 1024); l153 = (l153 + 1)) {
			dsp->fVec57[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			dsp->fRec112[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 3); l155 = (l155 + 1)) {
			dsp->fRec75[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 3); l156 = (l156 + 1)) {
			dsp->fRec76[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 3); l157 = (l157 + 1)) {
			dsp->fRec77[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 3); l158 = (l158 + 1)) {
			dsp->fRec78[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 3); l159 = (l159 + 1)) {
			dsp->fRec79[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 3); l160 = (l160 + 1)) {
			dsp->fRec80[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 3); l161 = (l161 + 1)) {
			dsp->fRec81[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 3); l162 = (l162 + 1)) {
			dsp->fRec82[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			dsp->fRec118[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			dsp->fRec117[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			dsp->fRec116[l165] = 0.0f;
			
		}
		
	}
	
}

void instanceConstantsmydsp(mydsp* dsp, int samplingFreq) {
	dsp->fSamplingFreq = samplingFreq;
	dsp->fConst0 = min(192000.0f, max(1.0f, (float)dsp->fSamplingFreq));
	dsp->fConst1 = tanf((18849.5566f / dsp->fConst0));
	dsp->fConst2 = (1.0f / dsp->fConst1);
	dsp->fConst3 = (((dsp->fConst2 + 1.41421354f) / dsp->fConst1) + 1.0f);
	dsp->fConst4 = (1.0f / dsp->fConst3);
	dsp->fConst5 = (1.0f / dsp->fConst0);
	dsp->fConst6 = (6.90999985f / dsp->fConst0);
	dsp->fConst7 = (0.00100000005f * dsp->fConst0);
	dsp->fConst8 = (0.419999987f / dsp->fConst3);
	dsp->fConst9 = (1.0f / dsp->fConst0);
	dsp->fConst10 = (((dsp->fConst2 + -1.41421354f) / dsp->fConst1) + 1.0f);
	dsp->fConst11 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst1))));
	dsp->iConst12 = (int)min(dsp->fConst0, max(0.0f, (0.0109999999f * dsp->fConst0)));
	dsp->iConst13 = (int)min(dsp->fConst0, max(0.0f, (0.0241999999f * dsp->fConst0)));
	dsp->iConst14 = (int)min(dsp->fConst0, max(0.0f, (0.0307999998f * dsp->fConst0)));
	dsp->iConst15 = (int)min(dsp->fConst0, max(0.0f, (0.0351999998f * dsp->fConst0)));
	dsp->fConst16 = (180.0f / dsp->fConst0);
	dsp->fConst17 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst18 = (1.0f / dsp->fConst17);
	dsp->fConst19 = (1.0f / (((dsp->fConst18 + 1.41421354f) / dsp->fConst17) + 1.0f));
	dsp->fConst20 = (0.0027999999f * dsp->fConst0);
	dsp->fConst21 = (((dsp->fConst18 + -1.41421354f) / dsp->fConst17) + 1.0f);
	dsp->fConst22 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst17))));
	dsp->fConst23 = (330.0f / dsp->fConst0);
	dsp->fConst24 = tanf((25472.0332f / dsp->fConst0));
	dsp->fConst25 = (1.0f / dsp->fConst24);
	dsp->fConst26 = (1.0f / (((dsp->fConst25 + 1.41421354f) / dsp->fConst24) + 1.0f));
	dsp->fConst27 = (((dsp->fConst25 + -1.41421354f) / dsp->fConst24) + 1.0f);
	dsp->fConst28 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst24))));
	dsp->fConst29 = (0.00639999984f * dsp->fConst0);
	dsp->fConst30 = tanf((42703.668f / dsp->fConst0));
	dsp->fConst31 = (1.0f / dsp->fConst30);
	dsp->fConst32 = (((dsp->fConst31 + 1.41421354f) / dsp->fConst30) + 1.0f);
	dsp->fConst33 = (0.680000007f / dsp->fConst32);
	dsp->fConst34 = tanf((3141.59277f / dsp->fConst0));
	dsp->fConst35 = (1.0f / dsp->fConst34);
	dsp->fConst36 = (1.0f / (((dsp->fConst35 + 1.41421354f) / dsp->fConst34) + 1.0f));
	dsp->fConst37 = (1.0f / mydsp_faustpower2_f(dsp->fConst34));
	dsp->fConst38 = max(0.0f, min(2047.0f, (0.00126903551f * dsp->fConst0)));
	dsp->fConst39 = floorf(dsp->fConst38);
	dsp->fConst40 = (dsp->fConst39 + (1.0f - dsp->fConst38));
	dsp->iConst41 = (int)dsp->fConst38;
	dsp->fConst42 = (dsp->fConst38 - dsp->fConst39);
	dsp->iConst43 = (dsp->iConst41 + 1);
	dsp->fConst44 = max(0.0f, min(2047.0f, (0.00161812303f * dsp->fConst0)));
	dsp->fConst45 = floorf(dsp->fConst44);
	dsp->fConst46 = (dsp->fConst45 + (1.0f - dsp->fConst44));
	dsp->iConst47 = (int)dsp->fConst44;
	dsp->fConst48 = (dsp->fConst44 - dsp->fConst45);
	dsp->iConst49 = (dsp->iConst47 + 1);
	dsp->fConst50 = max(0.0f, min(2047.0f, (0.00101419876f * dsp->fConst0)));
	dsp->fConst51 = floorf(dsp->fConst50);
	dsp->fConst52 = (dsp->fConst51 + (1.0f - dsp->fConst50));
	dsp->iConst53 = (int)dsp->fConst50;
	dsp->fConst54 = (dsp->fConst50 - dsp->fConst51);
	dsp->iConst55 = (dsp->iConst53 + 1);
	dsp->fConst56 = max(0.0f, min(2047.0f, (0.00138504151f * dsp->fConst0)));
	dsp->fConst57 = floorf(dsp->fConst56);
	dsp->fConst58 = (dsp->fConst57 + (1.0f - dsp->fConst56));
	dsp->iConst59 = (int)dsp->fConst56;
	dsp->fConst60 = (dsp->fConst56 - dsp->fConst57);
	dsp->iConst61 = (dsp->iConst59 + 1);
	dsp->fConst62 = max(0.0f, min(2047.0f, (0.00118483417f * dsp->fConst0)));
	dsp->fConst63 = floorf(dsp->fConst62);
	dsp->fConst64 = (dsp->fConst63 + (1.0f - dsp->fConst62));
	dsp->iConst65 = (int)dsp->fConst62;
	dsp->fConst66 = (dsp->fConst62 - dsp->fConst63);
	dsp->iConst67 = (dsp->iConst65 + 1);
	dsp->fConst68 = max(0.0f, min(2047.0f, (0.00246305414f * dsp->fConst0)));
	dsp->fConst69 = floorf(dsp->fConst68);
	dsp->fConst70 = (dsp->fConst69 + (1.0f - dsp->fConst68));
	dsp->iConst71 = (int)dsp->fConst68;
	dsp->fConst72 = (dsp->fConst68 - dsp->fConst69);
	dsp->iConst73 = (dsp->iConst71 + 1);
	dsp->fConst74 = (((dsp->fConst35 + -1.41421354f) / dsp->fConst34) + 1.0f);
	dsp->fConst75 = (2.0f * (1.0f - dsp->fConst37));
	dsp->fConst76 = (2.0f * (0.0f - dsp->fConst37));
	dsp->fConst77 = (1.0f / dsp->fConst32);
	dsp->fConst78 = (((dsp->fConst31 + -1.41421354f) / dsp->fConst30) + 1.0f);
	dsp->fConst79 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst30))));
	dsp->fConst80 = (0.00700000022f * dsp->fConst0);
	dsp->fConst81 = (0.00600000005f * dsp->fConst0);
	dsp->fConst82 = (166.666672f / dsp->fConst0);
	dsp->fConst83 = (0.00609999988f * dsp->fConst0);
	dsp->fConst84 = (9.99999975e-05f * dsp->fConst0);
	dsp->fConst85 = (10000.0f / dsp->fConst0);
	dsp->fConst86 = (15.707963f / dsp->fConst0);
	dsp->fConst87 = (1.0f / (dsp->fConst86 + 1.0f));
	dsp->fConst88 = (10000000.0f / dsp->fConst0);
	dsp->fConst89 = tanf((47123.8906f / dsp->fConst0));
	dsp->fConst90 = (1.0f / dsp->fConst89);
	dsp->fConst91 = (1.0f / (((dsp->fConst90 + 1.41421354f) / dsp->fConst89) + 1.0f));
	dsp->fConst92 = (((dsp->fConst90 + -1.41421354f) / dsp->fConst89) + 1.0f);
	dsp->fConst93 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst89))));
	dsp->fConst94 = mydsp_faustpower2_f(dsp->fConst9);
	dsp->fConst95 = (2.0f * dsp->fConst94);
	dsp->fConst96 = (4.0f * (mydsp_faustpower2_f(dsp->fConst0) * tanf((6283.18555f / dsp->fConst0))));
	dsp->fConst97 = (6911.50391f / dsp->fConst0);
	dsp->fConst98 = expf((0.0f - (66.6666641f / dsp->fConst0)));
	dsp->fConst99 = expf((0.0f - (13.333333f / dsp->fConst0)));
	dsp->fConst100 = (2.0f / dsp->fConst0);
	dsp->fConst101 = (2.0f * dsp->fConst0);
	dsp->fConst102 = (0.5f / dsp->fConst0);
	dsp->fConst103 = (3.14159274f / dsp->fConst0);
	dsp->fConst104 = (0.00400000019f * dsp->fConst0);
	dsp->fConst105 = (0.00200000009f * dsp->fConst0);
	dsp->fConst106 = (500.0f / dsp->fConst0);
	dsp->fConst107 = (1.0f - dsp->fConst86);
	dsp->fConst108 = (6.28318548f / dsp->fConst0);
	dsp->fConst109 = floorf(((0.219990999f * dsp->fConst0) + 0.5f));
	dsp->fConst110 = ((0.0f - (6.90775537f * dsp->fConst109)) / dsp->fConst0);
	dsp->fConst111 = floorf(((0.0191229992f * dsp->fConst0) + 0.5f));
	dsp->iConst112 = (int)min(4096.0f, max(0.0f, (dsp->fConst109 - dsp->fConst111)));
	dsp->iConst113 = (int)min(512.0f, max(0.0f, (dsp->fConst111 + -1.0f)));
	dsp->fConst114 = floorf(((0.256891012f * dsp->fConst0) + 0.5f));
	dsp->fConst115 = ((0.0f - (6.90775537f * dsp->fConst114)) / dsp->fConst0);
	dsp->fConst116 = floorf(((0.0273330007f * dsp->fConst0) + 0.5f));
	dsp->iConst117 = (int)min(8192.0f, max(0.0f, (dsp->fConst114 - dsp->fConst116)));
	dsp->iConst118 = (int)min(1024.0f, max(0.0f, (dsp->fConst116 + -1.0f)));
	dsp->fConst119 = floorf(((0.192303002f * dsp->fConst0) + 0.5f));
	dsp->fConst120 = ((0.0f - (6.90775537f * dsp->fConst119)) / dsp->fConst0);
	dsp->fConst121 = floorf(((0.0292910002f * dsp->fConst0) + 0.5f));
	dsp->iConst122 = (int)min(4096.0f, max(0.0f, (dsp->fConst119 - dsp->fConst121)));
	dsp->iConst123 = (int)min(1024.0f, max(0.0f, (dsp->fConst121 + -1.0f)));
	dsp->fConst124 = floorf(((0.210389003f * dsp->fConst0) + 0.5f));
	dsp->fConst125 = ((0.0f - (6.90775537f * dsp->fConst124)) / dsp->fConst0);
	dsp->fConst126 = floorf(((0.0244210009f * dsp->fConst0) + 0.5f));
	dsp->iConst127 = (int)min(4096.0f, max(0.0f, (dsp->fConst124 - dsp->fConst126)));
	dsp->iConst128 = (int)min(512.0f, max(0.0f, (dsp->fConst126 + -1.0f)));
	dsp->fConst129 = floorf(((0.125f * dsp->fConst0) + 0.5f));
	dsp->fConst130 = ((0.0f - (6.90775537f * dsp->fConst129)) / dsp->fConst0);
	dsp->fConst131 = floorf(((0.0134579996f * dsp->fConst0) + 0.5f));
	dsp->iConst132 = (int)min(4096.0f, max(0.0f, (dsp->fConst129 - dsp->fConst131)));
	dsp->iConst133 = (int)min(512.0f, max(0.0f, (dsp->fConst131 + -1.0f)));
	dsp->fConst134 = floorf(((0.127837002f * dsp->fConst0) + 0.5f));
	dsp->fConst135 = ((0.0f - (6.90775537f * dsp->fConst134)) / dsp->fConst0);
	dsp->fConst136 = floorf(((0.0316039994f * dsp->fConst0) + 0.5f));
	dsp->iConst137 = (int)min(2048.0f, max(0.0f, (dsp->fConst134 - dsp->fConst136)));
	dsp->iConst138 = (int)min(1024.0f, max(0.0f, (dsp->fConst136 + -1.0f)));
	dsp->fConst139 = floorf(((0.174713001f * dsp->fConst0) + 0.5f));
	dsp->fConst140 = ((0.0f - (6.90775537f * dsp->fConst139)) / dsp->fConst0);
	dsp->fConst141 = floorf(((0.0229039993f * dsp->fConst0) + 0.5f));
	dsp->iConst142 = (int)min(4096.0f, max(0.0f, (dsp->fConst139 - dsp->fConst141)));
	dsp->iConst143 = (int)min(512.0f, max(0.0f, (dsp->fConst141 + -1.0f)));
	dsp->fConst144 = floorf(((0.153128996f * dsp->fConst0) + 0.5f));
	dsp->fConst145 = ((0.0f - (6.90775537f * dsp->fConst144)) / dsp->fConst0);
	dsp->fConst146 = floorf(((0.0203460008f * dsp->fConst0) + 0.5f));
	dsp->iConst147 = (int)min(4096.0f, max(0.0f, (dsp->fConst144 - dsp->fConst146)));
	dsp->iConst148 = (int)min(512.0f, max(0.0f, (dsp->fConst146 + -1.0f)));
	dsp->fConst149 = (2000.0f / dsp->fConst0);
	dsp->fConst150 = (1000.0f / dsp->fConst0);
	
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulp", &dsp->fVslider24, 4.73000002f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulpdecay", &dsp->fVslider25, 12.0f, 0.0f, 100.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider23, 60.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider26, 0.989000022f, 0.800000012f, 0.990999997f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider22, 1.0f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "compressor");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider38, 10.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "ratio", &dsp->fVslider39, 3.0f, 1.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider40, 50.0f, 0.0f, 500.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "threshold", &dsp->fVslider41, -9.0f, -40.0f, 0.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider13, 1500.0f, 1000.0f, 3000.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapq", &dsp->fVslider14, 1.29999995f, 0.5f, 5.0f, 0.00100000005f);
	ui_interface->addButton(ui_interface->uiInterface, "cp", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider15, 300.0f, 2.0f, 1500.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider12, 1.5f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "hatz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider19, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider20, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton2);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton3);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider21, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "reverb");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider37, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider37, "tooltip", "reverb pre-delay");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider37, "unit", "ms");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "pre_del", &dsp->fVslider37, 20.0f, 0.0f, 200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider35, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider35, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider35, "tooltip", "low band cutoff frequency");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider35, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "lf_fc", &dsp->fVslider35, 200.0f, 30.0f, 1200.0f, 1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider34, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider34, "tooltip", "-60db decay time for low band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider34, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "low_rt60", &dsp->fVslider34, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider33, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider33, "tooltip", "-60db decay time for middle band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider33, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "mid_rt60", &dsp->fVslider33, 1.0f, 0.100000001f, 3.0f, 0.100000001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider32, "5", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider32, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider32, "tooltip", "damping frequency (decay time is 1/2 mid)");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider32, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "hf_damp", &dsp->fVslider32, 6000.0f, 1200.0f, 9800.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "level", &dsp->fVslider36, 1.5f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "sd");
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton1);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider18, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider17, 1.0f, 1.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider16, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string");
	ui_interface->openVerticalBox(ui_interface->uiInterface, "params");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "expos", &dsp->fHslider3, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider0, 1.0f, 0.00999999978f, 2.0f, 9.99999975e-05f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sign", &dsp->fHslider1, 1.0f, -1.0f, 1.0f, 2.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "strength", &dsp->fHslider2, 2.0f, 0.0f, 5.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string1");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider31, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton9);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider30, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton8);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider29, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton7);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider28, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton6);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider27, 0.699999988f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "wub");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider2, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider5, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "params");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "attack", &dsp->fVslider7, 150.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "basefreq", &dsp->fVslider3, 0.800000012f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider8, 300.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "env", &dsp->fVslider4, 20.0f, 0.0f, 50.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q", &dsp->fVslider11, 1.20000005f, 0.800000012f, 5.0f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider6, 50.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sustain", &dsp->fVslider9, 0.0f, 0.0f, 1.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider10, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider0, 0.200000003f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "portamento", &dsp->fVslider1, 0.5f, 0.00999999978f, 1.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
	
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)dsp->fVslider0;
	float fSlow1 = (float)dsp->fVslider1;
	float fSlow2 = (0.00100000005f * (fSlow1 * (float)dsp->fVslider2));
	float fSlow3 = (1.0f - (0.00100000005f * fSlow1));
	float fSlow4 = (float)dsp->fVslider3;
	float fSlow5 = (float)dsp->fVslider4;
	float fSlow6 = (float)dsp->fVslider5;
	int iSlow7 = (fSlow6 > 0.0f);
	float fSlow8 = (0.00100000005f * (float)dsp->fVslider6);
	float fSlow9 = (float)dsp->fVslider7;
	int iSlow10 = (int)(dsp->fConst7 * fSlow9);
	float fSlow11 = (0.00100000005f * (float)dsp->fVslider8);
	float fSlow12 = (0.00100000005f * fSlow9);
	float fSlow13 = ((float)iSlow7 * (float)dsp->fVslider9);
	float fSlow14 = expf((0.0f - (dsp->fConst6 / (iSlow7?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider10)))));
	float fSlow15 = ((1.0f - fSlow14) * (iSlow7?fSlow6:0.0f));
	float fSlow16 = (2.0f * (1.0f - powf((float)dsp->fVslider11, 0.25f)));
	float fSlow17 = (float)dsp->fVslider12;
	float fSlow18 = sinf((3.14159274f * min(0.25f, (dsp->fConst5 * (float)dsp->fVslider13))));
	float fSlow19 = (2.0f * fSlow18);
	float fSlow20 = min((2.0f * (1.0f - powf((float)dsp->fVslider14, 0.25f))), min(2.0f, ((1.0f / fSlow18) - fSlow18)));
	float fSlow21 = (float)dsp->fButton0;
	float fSlow22 = (0.00100000005f * (float)dsp->fVslider15);
	float fSlow23 = (4.0f * (float)dsp->fVslider16);
	float fSlow24 = (float)dsp->fVslider17;
	float fSlow25 = sinf((3.14159274f * min(0.25f, (dsp->fConst16 * fSlow24))));
	float fSlow26 = (2.0f * fSlow25);
	float fSlow27 = (float)dsp->fButton1;
	float fSlow28 = (float)dsp->fVslider18;
	float fSlow29 = (0.5f * (fSlow28 + 0.200000003f));
	float fSlow30 = ((2.0f * fSlow28) + 0.5f);
	float fSlow31 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow30)), 0.25f))), min(2.0f, ((1.0f / fSlow25) - fSlow25)));
	float fSlow32 = sinf((3.14159274f * min(0.25f, (dsp->fConst23 * fSlow24))));
	float fSlow33 = (2.0f * fSlow32);
	float fSlow34 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow30)), 0.25f))), min(2.0f, ((1.0f / fSlow32) - fSlow32)));
	float fSlow35 = (dsp->fConst26 * fSlow28);
	float fSlow36 = (float)dsp->fButton2;
	float fSlow37 = (float)dsp->fButton3;
	float fSlow38 = (0.00100000005f * (float)dsp->fVslider19);
	float fSlow39 = sinf((3.14159274f * min(0.25f, (dsp->fConst5 * (float)dsp->fVslider20))));
	float fSlow40 = (2.0f * fSlow39);
	float fSlow41 = min(0.519834399f, min(2.0f, ((1.0f / fSlow39) - fSlow39)));
	float fSlow42 = (float)dsp->fVslider21;
	float fSlow43 = ((fSlow42 > 1.0f)?1.0f:((fSlow42 < -1.0f)?-1.0f:fSlow42));
	float fSlow44 = (float)dsp->fVslider22;
	float fSlow45 = (dsp->fConst5 * (float)dsp->fVslider23);
	float fSlow46 = (float)dsp->fVslider24;
	float fSlow47 = (float)dsp->fButton4;
	float fSlow48 = (float)dsp->fButton5;
	float fSlow49 = ((0.00100000005f * (float)dsp->fVslider25) + 0.00600000005f);
	float fSlow50 = (dsp->fConst0 * fSlow49);
	float fSlow51 = (dsp->fConst5 / (fSlow49 + -0.00600000005f));
	float fSlow52 = (float)dsp->fVslider26;
	float fSlow53 = (float)dsp->fVslider27;
	float fSlow54 = (float)dsp->fVslider28;
	float fSlow55 = (dsp->fConst0 / fSlow54);
	float fSlow56 = (fSlow55 + -1.99999499f);
	float fSlow57 = floorf(fSlow56);
	float fSlow58 = (fSlow55 + (-1.0f - fSlow57));
	float fSlow59 = (fSlow55 + (-2.0f - fSlow57));
	float fSlow60 = (fSlow55 + (-3.0f - fSlow57));
	float fSlow61 = (fSlow55 + (-4.0f - fSlow57));
	float fSlow62 = (fSlow55 + (-5.0f - fSlow57));
	float fSlow63 = (((((0.0f - fSlow58) * (0.0f - (0.5f * fSlow59))) * (0.0f - (0.333333343f * fSlow60))) * (0.0f - (0.25f * fSlow61))) * (0.0f - (0.200000003f * fSlow62)));
	float fSlow64 = (float)dsp->fHslider0;
	float fSlow65 = expf((0.0f - (dsp->fConst88 / (fSlow64 * mydsp_faustpower2_f(fSlow54)))));
	float fSlow66 = (float)dsp->fHslider1;
	float fSlow67 = (float)dsp->fHslider3;
	float fSlow68 = tanf((dsp->fConst103 * ((15000.0f * fSlow67) + 500.0f)));
	float fSlow69 = (1.0f / fSlow68);
	float fSlow70 = (((fSlow69 + 1.41421354f) / fSlow68) + 1.0f);
	float fSlow71 = ((float)dsp->fHslider2 / fSlow70);
	float fSlow72 = tanf((dsp->fConst103 * ((500.0f * fSlow67) + 40.0f)));
	float fSlow73 = (1.0f / fSlow72);
	float fSlow74 = (1.0f / (((fSlow73 + 1.41421354f) / fSlow72) + 1.0f));
	float fSlow75 = (1.0f / mydsp_faustpower2_f(fSlow72));
	float fSlow76 = (((fSlow73 + -1.41421354f) / fSlow72) + 1.0f);
	float fSlow77 = (2.0f * (1.0f - fSlow75));
	float fSlow78 = (2.0f * (0.0f - fSlow75));
	float fSlow79 = (1.0f / fSlow70);
	float fSlow80 = (((fSlow69 + -1.41421354f) / fSlow68) + 1.0f);
	float fSlow81 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow68))));
	float fSlow82 = (float)dsp->fButton6;
	int iSlow83 = (int)fSlow56;
	int iSlow84 = min(8192, max(0, iSlow83));
	float fSlow85 = (fSlow55 - fSlow57);
	float fSlow86 = ((((0.0f - fSlow59) * (0.0f - (0.5f * fSlow60))) * (0.0f - (0.333333343f * fSlow61))) * (0.0f - (0.25f * fSlow62)));
	int iSlow87 = min(8192, max(0, (iSlow83 + 1)));
	float fSlow88 = (0.5f * (((fSlow58 * (0.0f - fSlow60)) * (0.0f - (0.5f * fSlow61))) * (0.0f - (0.333333343f * fSlow62))));
	int iSlow89 = min(8192, max(0, (iSlow83 + 2)));
	float fSlow90 = (fSlow58 * fSlow59);
	float fSlow91 = (0.166666672f * ((fSlow90 * (0.0f - fSlow61)) * (0.0f - (0.5f * fSlow62))));
	int iSlow92 = min(8192, max(0, (iSlow83 + 3)));
	float fSlow93 = (fSlow90 * fSlow60);
	float fSlow94 = (0.0416666679f * (fSlow93 * (0.0f - fSlow62)));
	int iSlow95 = min(8192, max(0, (iSlow83 + 4)));
	float fSlow96 = (0.00833333377f * (fSlow93 * fSlow61));
	int iSlow97 = min(8192, max(0, (iSlow83 + 5)));
	float fSlow98 = (float)dsp->fVslider29;
	float fSlow99 = (dsp->fConst0 / fSlow98);
	float fSlow100 = (fSlow99 + -1.99999499f);
	float fSlow101 = floorf(fSlow100);
	float fSlow102 = (fSlow99 + (-1.0f - fSlow101));
	float fSlow103 = (fSlow99 + (-2.0f - fSlow101));
	float fSlow104 = (fSlow99 + (-3.0f - fSlow101));
	float fSlow105 = (fSlow99 + (-4.0f - fSlow101));
	float fSlow106 = (fSlow99 + (-5.0f - fSlow101));
	float fSlow107 = (((((0.0f - fSlow102) * (0.0f - (0.5f * fSlow103))) * (0.0f - (0.333333343f * fSlow104))) * (0.0f - (0.25f * fSlow105))) * (0.0f - (0.200000003f * fSlow106)));
	float fSlow108 = expf((0.0f - (dsp->fConst88 / (fSlow64 * mydsp_faustpower2_f(fSlow98)))));
	float fSlow109 = (float)dsp->fButton7;
	int iSlow110 = (int)fSlow100;
	int iSlow111 = min(8192, max(0, iSlow110));
	float fSlow112 = (fSlow99 - fSlow101);
	float fSlow113 = ((((0.0f - fSlow103) * (0.0f - (0.5f * fSlow104))) * (0.0f - (0.333333343f * fSlow105))) * (0.0f - (0.25f * fSlow106)));
	int iSlow114 = min(8192, max(0, (iSlow110 + 1)));
	float fSlow115 = (0.5f * (((fSlow102 * (0.0f - fSlow104)) * (0.0f - (0.5f * fSlow105))) * (0.0f - (0.333333343f * fSlow106))));
	int iSlow116 = min(8192, max(0, (iSlow110 + 2)));
	float fSlow117 = (fSlow102 * fSlow103);
	float fSlow118 = (0.166666672f * ((fSlow117 * (0.0f - fSlow105)) * (0.0f - (0.5f * fSlow106))));
	int iSlow119 = min(8192, max(0, (iSlow110 + 3)));
	float fSlow120 = (fSlow117 * fSlow104);
	float fSlow121 = (0.0416666679f * (fSlow120 * (0.0f - fSlow106)));
	int iSlow122 = min(8192, max(0, (iSlow110 + 4)));
	float fSlow123 = (0.00833333377f * (fSlow120 * fSlow105));
	int iSlow124 = min(8192, max(0, (iSlow110 + 5)));
	float fSlow125 = (float)dsp->fVslider30;
	float fSlow126 = (dsp->fConst0 / fSlow125);
	float fSlow127 = (fSlow126 + -1.99999499f);
	float fSlow128 = floorf(fSlow127);
	float fSlow129 = (fSlow126 + (-1.0f - fSlow128));
	float fSlow130 = (fSlow126 + (-2.0f - fSlow128));
	float fSlow131 = (fSlow126 + (-3.0f - fSlow128));
	float fSlow132 = (fSlow126 + (-4.0f - fSlow128));
	float fSlow133 = (fSlow126 + (-5.0f - fSlow128));
	float fSlow134 = (((((0.0f - fSlow129) * (0.0f - (0.5f * fSlow130))) * (0.0f - (0.333333343f * fSlow131))) * (0.0f - (0.25f * fSlow132))) * (0.0f - (0.200000003f * fSlow133)));
	float fSlow135 = expf((0.0f - (dsp->fConst88 / (fSlow64 * mydsp_faustpower2_f(fSlow125)))));
	float fSlow136 = (float)dsp->fButton8;
	int iSlow137 = (int)fSlow127;
	int iSlow138 = min(8192, max(0, iSlow137));
	float fSlow139 = (fSlow126 - fSlow128);
	float fSlow140 = ((((0.0f - fSlow130) * (0.0f - (0.5f * fSlow131))) * (0.0f - (0.333333343f * fSlow132))) * (0.0f - (0.25f * fSlow133)));
	int iSlow141 = min(8192, max(0, (iSlow137 + 1)));
	float fSlow142 = (0.5f * (((fSlow129 * (0.0f - fSlow131)) * (0.0f - (0.5f * fSlow132))) * (0.0f - (0.333333343f * fSlow133))));
	int iSlow143 = min(8192, max(0, (iSlow137 + 2)));
	float fSlow144 = (fSlow129 * fSlow130);
	float fSlow145 = (0.166666672f * ((fSlow144 * (0.0f - fSlow132)) * (0.0f - (0.5f * fSlow133))));
	int iSlow146 = min(8192, max(0, (iSlow137 + 3)));
	float fSlow147 = (fSlow144 * fSlow131);
	float fSlow148 = (0.0416666679f * (fSlow147 * (0.0f - fSlow133)));
	int iSlow149 = min(8192, max(0, (iSlow137 + 4)));
	float fSlow150 = (0.00833333377f * (fSlow147 * fSlow132));
	int iSlow151 = min(8192, max(0, (iSlow137 + 5)));
	float fSlow152 = (float)dsp->fVslider31;
	float fSlow153 = (dsp->fConst0 / fSlow152);
	float fSlow154 = (fSlow153 + -1.99999499f);
	float fSlow155 = floorf(fSlow154);
	float fSlow156 = (fSlow153 + (-1.0f - fSlow155));
	float fSlow157 = (fSlow153 + (-2.0f - fSlow155));
	float fSlow158 = (fSlow153 + (-3.0f - fSlow155));
	float fSlow159 = (fSlow153 + (-4.0f - fSlow155));
	float fSlow160 = (fSlow153 + (-5.0f - fSlow155));
	float fSlow161 = (((((0.0f - fSlow156) * (0.0f - (0.5f * fSlow157))) * (0.0f - (0.333333343f * fSlow158))) * (0.0f - (0.25f * fSlow159))) * (0.0f - (0.200000003f * fSlow160)));
	float fSlow162 = expf((0.0f - (dsp->fConst88 / (fSlow64 * mydsp_faustpower2_f(fSlow152)))));
	float fSlow163 = (float)dsp->fButton9;
	int iSlow164 = (int)fSlow154;
	int iSlow165 = min(8192, max(0, iSlow164));
	float fSlow166 = (fSlow153 - fSlow155);
	float fSlow167 = ((((0.0f - fSlow157) * (0.0f - (0.5f * fSlow158))) * (0.0f - (0.333333343f * fSlow159))) * (0.0f - (0.25f * fSlow160)));
	int iSlow168 = min(8192, max(0, (iSlow164 + 1)));
	float fSlow169 = (0.5f * (((fSlow156 * (0.0f - fSlow158)) * (0.0f - (0.5f * fSlow159))) * (0.0f - (0.333333343f * fSlow160))));
	int iSlow170 = min(8192, max(0, (iSlow164 + 2)));
	float fSlow171 = (fSlow156 * fSlow157);
	float fSlow172 = (0.166666672f * ((fSlow171 * (0.0f - fSlow159)) * (0.0f - (0.5f * fSlow160))));
	int iSlow173 = min(8192, max(0, (iSlow164 + 3)));
	float fSlow174 = (fSlow171 * fSlow158);
	float fSlow175 = (0.0416666679f * (fSlow174 * (0.0f - fSlow160)));
	int iSlow176 = min(8192, max(0, (iSlow164 + 4)));
	float fSlow177 = (0.00833333377f * (fSlow174 * fSlow159));
	int iSlow178 = min(8192, max(0, (iSlow164 + 5)));
	float fSlow179 = cosf((dsp->fConst108 * (float)dsp->fVslider32));
	float fSlow180 = (float)dsp->fVslider33;
	float fSlow181 = expf((dsp->fConst110 / fSlow180));
	float fSlow182 = mydsp_faustpower2_f(fSlow181);
	float fSlow183 = (1.0f - (fSlow179 * fSlow182));
	float fSlow184 = (1.0f - fSlow182);
	float fSlow185 = (fSlow183 / fSlow184);
	float fSlow186 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow183) / mydsp_faustpower2_f(fSlow184)) + -1.0f)));
	float fSlow187 = (fSlow185 - fSlow186);
	float fSlow188 = (fSlow181 * (fSlow186 + (1.0f - fSlow185)));
	float fSlow189 = (float)dsp->fVslider34;
	float fSlow190 = ((expf((dsp->fConst110 / fSlow189)) / fSlow181) + -1.0f);
	float fSlow191 = (1.0f / tanf((dsp->fConst103 * (float)dsp->fVslider35)));
	float fSlow192 = (fSlow191 + 1.0f);
	float fSlow193 = (0.0f - ((1.0f - fSlow191) / fSlow192));
	float fSlow194 = (1.0f / fSlow192);
	float fSlow195 = (float)dsp->fVslider36;
	int iSlow196 = (int)min(8192.0f, max(0.0f, (dsp->fConst7 * (float)dsp->fVslider37)));
	float fSlow197 = expf((dsp->fConst115 / fSlow180));
	float fSlow198 = mydsp_faustpower2_f(fSlow197);
	float fSlow199 = (1.0f - (fSlow179 * fSlow198));
	float fSlow200 = (1.0f - fSlow198);
	float fSlow201 = (fSlow199 / fSlow200);
	float fSlow202 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow199) / mydsp_faustpower2_f(fSlow200)) + -1.0f)));
	float fSlow203 = (fSlow201 - fSlow202);
	float fSlow204 = (fSlow197 * (fSlow202 + (1.0f - fSlow201)));
	float fSlow205 = ((expf((dsp->fConst115 / fSlow189)) / fSlow197) + -1.0f);
	float fSlow206 = expf((dsp->fConst120 / fSlow180));
	float fSlow207 = mydsp_faustpower2_f(fSlow206);
	float fSlow208 = (1.0f - (fSlow179 * fSlow207));
	float fSlow209 = (1.0f - fSlow207);
	float fSlow210 = (fSlow208 / fSlow209);
	float fSlow211 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow208) / mydsp_faustpower2_f(fSlow209)) + -1.0f)));
	float fSlow212 = (fSlow210 - fSlow211);
	float fSlow213 = (fSlow206 * (fSlow211 + (1.0f - fSlow210)));
	float fSlow214 = ((expf((dsp->fConst120 / fSlow189)) / fSlow206) + -1.0f);
	float fSlow215 = expf((dsp->fConst125 / fSlow180));
	float fSlow216 = mydsp_faustpower2_f(fSlow215);
	float fSlow217 = (1.0f - (fSlow179 * fSlow216));
	float fSlow218 = (1.0f - fSlow216);
	float fSlow219 = (fSlow217 / fSlow218);
	float fSlow220 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow217) / mydsp_faustpower2_f(fSlow218)) + -1.0f)));
	float fSlow221 = (fSlow219 - fSlow220);
	float fSlow222 = (fSlow215 * (fSlow220 + (1.0f - fSlow219)));
	float fSlow223 = ((expf((dsp->fConst125 / fSlow189)) / fSlow215) + -1.0f);
	float fSlow224 = expf((dsp->fConst130 / fSlow180));
	float fSlow225 = mydsp_faustpower2_f(fSlow224);
	float fSlow226 = (1.0f - (fSlow179 * fSlow225));
	float fSlow227 = (1.0f - fSlow225);
	float fSlow228 = (fSlow226 / fSlow227);
	float fSlow229 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow226) / mydsp_faustpower2_f(fSlow227)) + -1.0f)));
	float fSlow230 = (fSlow228 - fSlow229);
	float fSlow231 = (fSlow224 * (fSlow229 + (1.0f - fSlow228)));
	float fSlow232 = ((expf((dsp->fConst130 / fSlow189)) / fSlow224) + -1.0f);
	float fSlow233 = expf((dsp->fConst135 / fSlow180));
	float fSlow234 = mydsp_faustpower2_f(fSlow233);
	float fSlow235 = (1.0f - (fSlow179 * fSlow234));
	float fSlow236 = (1.0f - fSlow234);
	float fSlow237 = (fSlow235 / fSlow236);
	float fSlow238 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow235) / mydsp_faustpower2_f(fSlow236)) + -1.0f)));
	float fSlow239 = (fSlow237 - fSlow238);
	float fSlow240 = (fSlow233 * (fSlow238 + (1.0f - fSlow237)));
	float fSlow241 = ((expf((dsp->fConst135 / fSlow189)) / fSlow233) + -1.0f);
	float fSlow242 = expf((dsp->fConst140 / fSlow180));
	float fSlow243 = mydsp_faustpower2_f(fSlow242);
	float fSlow244 = (1.0f - (fSlow179 * fSlow243));
	float fSlow245 = (1.0f - fSlow243);
	float fSlow246 = (fSlow244 / fSlow245);
	float fSlow247 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow244) / mydsp_faustpower2_f(fSlow245)) + -1.0f)));
	float fSlow248 = (fSlow246 - fSlow247);
	float fSlow249 = (fSlow242 * (fSlow247 + (1.0f - fSlow246)));
	float fSlow250 = ((expf((dsp->fConst140 / fSlow189)) / fSlow242) + -1.0f);
	float fSlow251 = expf((dsp->fConst145 / fSlow180));
	float fSlow252 = mydsp_faustpower2_f(fSlow251);
	float fSlow253 = (1.0f - (fSlow252 * fSlow179));
	float fSlow254 = (1.0f - fSlow252);
	float fSlow255 = (fSlow253 / fSlow254);
	float fSlow256 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(fSlow253) / mydsp_faustpower2_f(fSlow254)) + -1.0f)));
	float fSlow257 = (fSlow255 - fSlow256);
	float fSlow258 = (fSlow251 * (fSlow256 + (1.0f - fSlow255)));
	float fSlow259 = ((expf((dsp->fConst145 / fSlow189)) / fSlow251) + -1.0f);
	float fSlow260 = (float)dsp->fVslider38;
	float fSlow261 = expf((0.0f - (dsp->fConst149 / fSlow260)));
	float fSlow262 = (((1.0f / (float)dsp->fVslider39) + -1.0f) * (1.0f - fSlow261));
	float fSlow263 = expf((0.0f - (dsp->fConst150 / fSlow260)));
	float fSlow264 = expf((0.0f - (dsp->fConst150 / (float)dsp->fVslider40)));
	float fSlow265 = (float)dsp->fVslider41;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iVec1[0] = 1;
			dsp->fRec3[0] = (fSlow2 + (fSlow3 * dsp->fRec3[1]));
			dsp->iRec5[0] = (iSlow7 * (dsp->iRec5[1] + 1));
			int iTemp0 = (dsp->iRec5[0] < iSlow10);
			float fTemp1 = expf((0.0f - (dsp->fConst6 / (iSlow7?(iTemp0?fSlow12:fSlow11):fSlow8))));
			dsp->fRec4[0] = ((dsp->fRec4[1] * fTemp1) + ((iSlow7?(iTemp0?(float)iSlow7:fSlow13):0.0f) * (1.0f - fTemp1)));
			float fTemp2 = sinf((3.14159274f * min(0.25f, (dsp->fConst5 * (dsp->fRec3[0] * (fSlow4 + (fSlow5 * dsp->fRec4[0])))))));
			float fTemp3 = (dsp->fRec1[1] + (2.0f * (fTemp2 * dsp->fRec2[1])));
			float fTemp4 = (fTemp3 + 0.119999997f);
			float fTemp5 = (0.666666687f * fTemp4);
			float fTemp6 = ((fTemp5 > 1.0f)?1.0f:((fTemp5 < -1.0f)?-1.0f:(fTemp3 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp4))))));
			dsp->fRec1[0] = (fTemp6 + -0.119999997f);
			dsp->fRec7[0] = ((dsp->fRec7[1] * fSlow14) + fSlow15);
			float fTemp7 = max(1.00000001e-07f, fabsf(dsp->fRec3[0]));
			float fTemp8 = (dsp->fRec8[1] + (dsp->fConst9 * fTemp7));
			float fTemp9 = (fTemp8 + -1.0f);
			int iTemp10 = (fTemp9 < 0.0f);
			dsp->fRec8[0] = (iTemp10?fTemp8:fTemp9);
			float fRec9 = (iTemp10?fTemp8:(fTemp8 + ((1.0f - (dsp->fConst0 / fTemp7)) * fTemp9)));
			dsp->fRec6[0] = ((dsp->fRec7[0] * ((2.0f * fRec9) + -1.0f)) - (dsp->fConst4 * ((dsp->fConst10 * dsp->fRec6[2]) + (dsp->fConst11 * dsp->fRec6[1]))));
			float fTemp11 = (dsp->fConst8 * (dsp->fRec6[2] + (dsp->fRec6[0] + (2.0f * dsp->fRec6[1]))));
			float fTemp12 = (fTemp6 + (dsp->fRec2[1] * min(fSlow16, min(2.0f, ((1.0f / fTemp2) - fTemp2)))));
			float fTemp13 = (fTemp11 + (0.239999995f - fTemp12));
			float fTemp14 = (0.666666687f * fTemp13);
			float fTemp15 = (((fTemp14 > 1.0f)?1.0f:((fTemp14 < -1.0f)?-1.0f:(fTemp11 + (0.239999995f - (fTemp12 + (0.148148149f * mydsp_faustpower3_f(fTemp13))))))) + -0.119999997f);
			float fTemp16 = (dsp->fRec2[1] + (2.0f * (fTemp2 * fTemp15)));
			float fTemp17 = (fTemp16 + 0.119999997f);
			float fTemp18 = (0.666666687f * fTemp17);
			dsp->fRec2[0] = (((fTemp18 > 1.0f)?1.0f:((fTemp18 < -1.0f)?-1.0f:(fTemp16 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp17)))))) + -0.119999997f);
			dsp->fRec0[0] = ((fSlow0 * dsp->fRec1[0]) - (dsp->fConst4 * ((dsp->fConst10 * dsp->fRec0[2]) + (dsp->fConst11 * dsp->fRec0[1]))));
			float fTemp19 = (dsp->fConst4 * (dsp->fRec0[2] + (dsp->fRec0[0] + (2.0f * dsp->fRec0[1]))));
			float fTemp20 = (fTemp19 + 0.200000003f);
			float fTemp21 = (0.666666687f * fTemp20);
			float fTemp22 = (((fTemp21 > 1.0f)?1.0f:((fTemp21 < -1.0f)?-1.0f:(fTemp19 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp20)))))) + -0.200000003f);
			float fTemp23 = (float)tanhf((float)((dsp->fRec10[1] + (fSlow19 * dsp->fRec11[1])) + 0.200000003f));
			dsp->fRec10[0] = (fTemp23 + -0.200000003f);
			dsp->iRec12[0] = ((1103515245 * dsp->iRec12[1]) + 12345);
			float fTemp24 = (4.65661287e-10f * (float)dsp->iRec12[0]);
			float fTemp25 = ((float)tanhf((float)(fTemp24 + (0.400000006f - (fTemp23 + (fSlow20 * dsp->fRec11[1]))))) + -0.200000003f);
			dsp->fRec11[0] = ((float)tanhf((float)((dsp->fRec11[1] + (fSlow19 * fTemp25)) + 0.200000003f)) + -0.200000003f);
			dsp->fVec2[0] = fSlow21;
			dsp->fRec14[0] = ((((fSlow21 - dsp->fVec2[1]) > 0.0f) > 0)?dsp->fConst7:max(0.0f, (dsp->fRec14[1] + -1.0f)));
			int iTemp26 = (dsp->fRec14[0] > 0.0f);
			dsp->iVec3[(dsp->IOTA & 8191)] = iTemp26;
			int iTemp27 = ((((iTemp26 + dsp->iVec3[((dsp->IOTA - dsp->iConst12) & 8191)]) + dsp->iVec3[((dsp->IOTA - dsp->iConst13) & 8191)]) + dsp->iVec3[((dsp->IOTA - dsp->iConst14) & 8191)]) + dsp->iVec3[((dsp->IOTA - dsp->iConst15) & 8191)]);
			int iTemp28 = (iTemp27 > 0);
			float fTemp29 = expf((0.0f - (dsp->fConst6 / (iTemp28?9.99999975e-05f:fSlow22))));
			dsp->fRec13[0] = ((dsp->fRec13[1] * fTemp29) + ((iTemp28?(float)iTemp27:0.0f) * (1.0f - fTemp29)));
			float fTemp30 = (float)tanhf((float)(fSlow17 * (dsp->fRec11[0] * dsp->fRec13[0])));
			float fTemp31 = (0.400000006f * fTemp30);
			float fTemp32 = (dsp->fRec15[1] + (fSlow26 * dsp->fRec16[1]));
			float fTemp33 = (1.02040815f * fTemp32);
			float fTemp34 = (min(max(fTemp33, 0.0f), 10.0f) + -0.625f);
			float fTemp35 = (1.77777779f * fTemp34);
			float fTemp36 = (1.33333337f * fabsf(fTemp32));
			float fTemp37 = (min(max(fTemp36, 0.0f), 10.0f) + -0.333333343f);
			float fTemp38 = (1.0f * fTemp37);
			float fTemp39 = ((fTemp32 <= 0.0f)?(0.0f - (0.75f * ((fTemp36 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp38 > 1.0f)?1.0f:((fTemp38 < -1.0f)?-1.0f:(fTemp37 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp37))))))))):fTemp36))):(0.980000019f * ((fTemp33 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp35 > 1.0f)?1.0f:((fTemp35 < -1.0f)?-1.0f:(fTemp34 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp34))))))))):fTemp33)));
			dsp->fRec15[0] = fTemp39;
			dsp->fVec4[0] = fSlow27;
			dsp->fRec18[0] = ((((fSlow27 - dsp->fVec4[1]) > 0.0f) > 0)?dsp->fConst20:max(0.0f, (dsp->fRec18[1] + -1.0f)));
			int iTemp40 = (dsp->fRec18[0] > 0.0f);
			int iTemp41 = (iTemp40 > 0);
			float fTemp42 = expf((0.0f - (dsp->fConst6 / (iTemp41?9.99999975e-05f:fSlow29))));
			dsp->fRec19[0] = ((dsp->fRec19[1] * fTemp42) + ((iTemp41?(float)iTemp40:0.0f) * (1.0f - fTemp42)));
			dsp->fRec17[0] = (((float)iTemp40 + (0.289999992f * dsp->fRec19[0])) - (dsp->fConst19 * ((dsp->fConst21 * dsp->fRec17[2]) + (dsp->fConst22 * dsp->fRec17[1]))));
			float fTemp43 = (dsp->fConst19 * (dsp->fRec17[2] + (dsp->fRec17[0] + (2.0f * dsp->fRec17[1]))));
			float fTemp44 = (fTemp43 - (fTemp39 + (fSlow31 * dsp->fRec16[1])));
			float fTemp45 = (1.02040815f * fTemp44);
			float fTemp46 = (min(max(fTemp45, 0.0f), 10.0f) + -0.625f);
			float fTemp47 = (1.77777779f * fTemp46);
			float fTemp48 = (1.33333337f * fabsf(fTemp44));
			float fTemp49 = (min(max(fTemp48, 0.0f), 10.0f) + -0.333333343f);
			float fTemp50 = (1.0f * fTemp49);
			float fTemp51 = ((fTemp44 <= 0.0f)?(0.0f - (0.75f * ((fTemp48 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp50 > 1.0f)?1.0f:((fTemp50 < -1.0f)?-1.0f:(fTemp49 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp49))))))))):fTemp48))):(0.980000019f * ((fTemp45 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp47 > 1.0f)?1.0f:((fTemp47 < -1.0f)?-1.0f:(fTemp46 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp46))))))))):fTemp45)));
			float fTemp52 = (dsp->fRec16[1] + (fSlow26 * fTemp51));
			float fTemp53 = (1.02040815f * fTemp52);
			float fTemp54 = (min(max(fTemp53, 0.0f), 10.0f) + -0.625f);
			float fTemp55 = (1.77777779f * fTemp54);
			float fTemp56 = (1.33333337f * fabsf(fTemp52));
			float fTemp57 = (min(max(fTemp56, 0.0f), 10.0f) + -0.333333343f);
			float fTemp58 = (1.0f * fTemp57);
			dsp->fRec16[0] = ((fTemp52 <= 0.0f)?(0.0f - (0.75f * ((fTemp56 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp58 > 1.0f)?1.0f:((fTemp58 < -1.0f)?-1.0f:(fTemp57 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp57))))))))):fTemp56))):(0.980000019f * ((fTemp53 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp55 > 1.0f)?1.0f:((fTemp55 < -1.0f)?-1.0f:(fTemp54 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp54))))))))):fTemp53)));
			float fTemp59 = (dsp->fRec20[1] + (fSlow33 * dsp->fRec21[1]));
			float fTemp60 = (1.02040815f * fTemp59);
			float fTemp61 = (min(max(fTemp60, 0.0f), 10.0f) + -0.625f);
			float fTemp62 = (1.77777779f * fTemp61);
			float fTemp63 = (1.33333337f * fabsf(fTemp59));
			float fTemp64 = (min(max(fTemp63, 0.0f), 10.0f) + -0.333333343f);
			float fTemp65 = (1.0f * fTemp64);
			float fTemp66 = ((fTemp59 <= 0.0f)?(0.0f - (0.75f * ((fTemp63 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp65 > 1.0f)?1.0f:((fTemp65 < -1.0f)?-1.0f:(fTemp64 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp64))))))))):fTemp63))):(0.980000019f * ((fTemp60 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp62 > 1.0f)?1.0f:((fTemp62 < -1.0f)?-1.0f:(fTemp61 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp61))))))))):fTemp60)));
			dsp->fRec20[0] = fTemp66;
			float fTemp67 = (fTemp43 - (fTemp66 + (fSlow34 * dsp->fRec21[1])));
			float fTemp68 = (1.02040815f * fTemp67);
			float fTemp69 = (min(max(fTemp68, 0.0f), 10.0f) + -0.625f);
			float fTemp70 = (1.77777779f * fTemp69);
			float fTemp71 = (1.33333337f * fabsf(fTemp67));
			float fTemp72 = (min(max(fTemp71, 0.0f), 10.0f) + -0.333333343f);
			float fTemp73 = (1.0f * fTemp72);
			float fTemp74 = ((fTemp67 <= 0.0f)?(0.0f - (0.75f * ((fTemp71 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp73 > 1.0f)?1.0f:((fTemp73 < -1.0f)?-1.0f:(fTemp72 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp72))))))))):fTemp71))):(0.980000019f * ((fTemp68 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp70 > 1.0f)?1.0f:((fTemp70 < -1.0f)?-1.0f:(fTemp69 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp69))))))))):fTemp68)));
			float fTemp75 = (dsp->fRec21[1] + (fSlow33 * fTemp74));
			float fTemp76 = (1.02040815f * fTemp75);
			float fTemp77 = (min(max(fTemp76, 0.0f), 10.0f) + -0.625f);
			float fTemp78 = (1.77777779f * fTemp77);
			float fTemp79 = (1.33333337f * fabsf(fTemp75));
			float fTemp80 = (min(max(fTemp79, 0.0f), 10.0f) + -0.333333343f);
			float fTemp81 = (1.0f * fTemp80);
			dsp->fRec21[0] = ((fTemp75 <= 0.0f)?(0.0f - (0.75f * ((fTemp79 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp81 > 1.0f)?1.0f:((fTemp81 < -1.0f)?-1.0f:(fTemp80 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp80))))))))):fTemp79))):(0.980000019f * ((fTemp76 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp78 > 1.0f)?1.0f:((fTemp78 < -1.0f)?-1.0f:(fTemp77 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp77))))))))):fTemp76)));
			dsp->fRec22[0] = ((4.65661287e-10f * ((float)dsp->iRec12[0] * dsp->fRec19[0])) - (dsp->fConst26 * ((dsp->fConst27 * dsp->fRec22[2]) + (dsp->fConst28 * dsp->fRec22[1]))));
			float fTemp82 = (fSlow23 * ((dsp->fRec16[0] + dsp->fRec21[0]) + (fSlow35 * (dsp->fRec22[2] + (dsp->fRec22[0] + (2.0f * dsp->fRec22[1]))))));
			float fTemp83 = (fTemp82 + -0.100000001f);
			float fTemp84 = (0.666666687f * fTemp83);
			float fTemp85 = (((fTemp84 > 1.0f)?1.0f:((fTemp84 < -1.0f)?-1.0f:(fTemp82 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp83)))))) + 0.100000001f);
			dsp->fVec5[0] = fSlow36;
			dsp->fRec24[0] = ((((fSlow36 - dsp->fVec5[1]) > 0.0f) > 0)?dsp->fConst29:max(0.0f, (dsp->fRec24[1] + -1.0f)));
			int iTemp86 = (dsp->fRec24[0] > 0.0f);
			dsp->fVec6[0] = fSlow37;
			dsp->fRec25[0] = ((((fSlow37 - dsp->fVec6[1]) > 0.0f) > 0)?dsp->fConst29:max(0.0f, (dsp->fRec25[1] + -1.0f)));
			int iTemp87 = (dsp->fRec25[0] > 0.0f);
			int iTemp88 = ((iTemp86 + iTemp87) > 0);
			dsp->iVec7[0] = iTemp88;
			int iTemp89 = (iTemp88 > 0);
			int iTemp90 = ((dsp->iVec7[1] <= 0) & iTemp89);
			dsp->fRec26[0] = ((dsp->fRec26[1] * (float)(1 - iTemp90)) + ((float)iTemp90 * ((0.0839999989f * (float)iTemp86) + (fSlow38 * (float)iTemp87))));
			float fTemp91 = expf((0.0f - (dsp->fConst6 / (iTemp89?9.99999975e-05f:dsp->fRec26[0]))));
			dsp->fRec23[0] = ((dsp->fRec23[1] * fTemp91) + ((iTemp89?(float)iTemp88:0.0f) * (1.0f - fTemp91)));
			float fTemp92 = (dsp->fRec28[1] + (fSlow40 * dsp->fRec29[1]));
			float fTemp93 = (0.666666687f * fTemp92);
			float fTemp94 = ((fTemp93 > 1.0f)?1.0f:((fTemp93 < -1.0f)?-1.0f:(fTemp92 - (0.148148149f * mydsp_faustpower3_f(fTemp92)))));
			dsp->fRec28[0] = fTemp94;
			float fTemp95 = (dsp->fRec31[1] + (fSlow40 * dsp->fRec32[1]));
			float fTemp96 = (0.666666687f * fTemp95);
			float fTemp97 = ((fTemp96 > 1.0f)?1.0f:((fTemp96 < -1.0f)?-1.0f:(fTemp95 - (0.148148149f * mydsp_faustpower3_f(fTemp95)))));
			dsp->fRec31[0] = fTemp97;
			dsp->fVec8[0] = 394.0f;
			float fTemp98 = (dsp->fRec35[1] + (dsp->fConst5 * dsp->fVec8[1]));
			dsp->fRec35[0] = (fTemp98 - floorf(fTemp98));
			float fTemp99 = mydsp_faustpower2_f(((2.0f * dsp->fRec35[0]) + -1.0f));
			dsp->fVec9[0] = fTemp99;
			float fTemp100 = ((fTemp99 - dsp->fVec9[1]) * (float)dsp->iVec1[1]);
			dsp->fVec10[(dsp->IOTA & 255)] = fTemp100;
			dsp->fVec11[0] = 309.0f;
			float fTemp101 = (dsp->fRec36[1] + (dsp->fConst5 * dsp->fVec11[1]));
			dsp->fRec36[0] = (fTemp101 - floorf(fTemp101));
			float fTemp102 = mydsp_faustpower2_f(((2.0f * dsp->fRec36[0]) + -1.0f));
			dsp->fVec12[0] = fTemp102;
			float fTemp103 = ((fTemp102 - dsp->fVec12[1]) * (float)dsp->iVec1[1]);
			dsp->fVec13[(dsp->IOTA & 511)] = fTemp103;
			dsp->fVec14[0] = 493.0f;
			float fTemp104 = (dsp->fRec37[1] + (dsp->fConst5 * dsp->fVec14[1]));
			dsp->fRec37[0] = (fTemp104 - floorf(fTemp104));
			float fTemp105 = mydsp_faustpower2_f(((2.0f * dsp->fRec37[0]) + -1.0f));
			dsp->fVec15[0] = fTemp105;
			float fTemp106 = ((fTemp105 - dsp->fVec15[1]) * (float)dsp->iVec1[1]);
			dsp->fVec16[(dsp->IOTA & 255)] = fTemp106;
			dsp->fVec17[0] = 361.0f;
			float fTemp107 = (dsp->fRec38[1] + (dsp->fConst5 * dsp->fVec17[1]));
			dsp->fRec38[0] = (fTemp107 - floorf(fTemp107));
			float fTemp108 = mydsp_faustpower2_f(((2.0f * dsp->fRec38[0]) + -1.0f));
			dsp->fVec18[0] = fTemp108;
			float fTemp109 = ((fTemp108 - dsp->fVec18[1]) * (float)dsp->iVec1[1]);
			dsp->fVec19[(dsp->IOTA & 511)] = fTemp109;
			dsp->fVec20[0] = 422.0f;
			float fTemp110 = (dsp->fRec39[1] + (dsp->fConst5 * dsp->fVec20[1]));
			dsp->fRec39[0] = (fTemp110 - floorf(fTemp110));
			float fTemp111 = mydsp_faustpower2_f(((2.0f * dsp->fRec39[0]) + -1.0f));
			dsp->fVec21[0] = fTemp111;
			float fTemp112 = ((fTemp111 - dsp->fVec21[1]) * (float)dsp->iVec1[1]);
			dsp->fVec22[(dsp->IOTA & 255)] = fTemp112;
			dsp->fVec23[0] = 203.0f;
			float fTemp113 = (dsp->fRec40[1] + (dsp->fConst5 * dsp->fVec23[1]));
			dsp->fRec40[0] = (fTemp113 - floorf(fTemp113));
			float fTemp114 = mydsp_faustpower2_f(((2.0f * dsp->fRec40[0]) + -1.0f));
			dsp->fVec24[0] = fTemp114;
			float fTemp115 = ((fTemp114 - dsp->fVec24[1]) * (float)dsp->iVec1[1]);
			dsp->fVec25[(dsp->IOTA & 511)] = fTemp115;
			dsp->fRec34[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp100 - (dsp->fConst40 * dsp->fVec10[((dsp->IOTA - dsp->iConst41) & 255)])) - (dsp->fConst42 * dsp->fVec10[((dsp->IOTA - dsp->iConst43) & 255)]))) + (0.000809061516f * ((fTemp103 - (dsp->fConst46 * dsp->fVec13[((dsp->IOTA - dsp->iConst47) & 511)])) - (dsp->fConst48 * dsp->fVec13[((dsp->IOTA - dsp->iConst49) & 511)])))) + (0.000507099379f * ((fTemp106 - (dsp->fConst52 * dsp->fVec16[((dsp->IOTA - dsp->iConst53) & 255)])) - (dsp->fConst54 * dsp->fVec16[((dsp->IOTA - dsp->iConst55) & 255)])))) + (0.000692520756f * ((fTemp109 - (dsp->fConst58 * dsp->fVec19[((dsp->IOTA - dsp->iConst59) & 511)])) - (dsp->fConst60 * dsp->fVec19[((dsp->IOTA - dsp->iConst61) & 511)])))) + (0.000592417084f * ((fTemp112 - (dsp->fConst64 * dsp->fVec22[((dsp->IOTA - dsp->iConst65) & 255)])) - (dsp->fConst66 * dsp->fVec22[((dsp->IOTA - dsp->iConst67) & 255)])))) + (0.00123152707f * ((fTemp115 - (dsp->fConst70 * dsp->fVec25[((dsp->IOTA - dsp->iConst71) & 511)])) - (dsp->fConst72 * dsp->fVec25[((dsp->IOTA - dsp->iConst73) & 511)]))))) - (dsp->fConst36 * ((dsp->fConst74 * dsp->fRec34[2]) + (dsp->fConst75 * dsp->fRec34[1]))));
			float fTemp116 = (dsp->fConst36 * (((dsp->fConst37 * dsp->fRec34[0]) + (dsp->fConst76 * dsp->fRec34[1])) + (dsp->fConst37 * dsp->fRec34[2])));
			float fTemp117 = (fTemp97 + (fSlow41 * dsp->fRec32[1]));
			float fTemp118 = (fTemp116 - fTemp117);
			float fTemp119 = (0.666666687f * fTemp118);
			float fTemp120 = ((fTemp119 > 1.0f)?1.0f:((fTemp119 < -1.0f)?-1.0f:(fTemp116 - (fTemp117 + (0.148148149f * mydsp_faustpower3_f(fTemp118))))));
			float fTemp121 = (dsp->fRec32[1] + (fSlow40 * fTemp120));
			float fTemp122 = (0.666666687f * fTemp121);
			dsp->fRec32[0] = ((fTemp122 > 1.0f)?1.0f:((fTemp122 < -1.0f)?-1.0f:(fTemp121 - (0.148148149f * mydsp_faustpower3_f(fTemp121)))));
			float fRec33 = fTemp120;
			float fTemp123 = (fTemp94 + (fSlow41 * dsp->fRec29[1]));
			float fTemp124 = (fRec33 - fTemp123);
			float fTemp125 = (0.666666687f * fTemp124);
			float fTemp126 = ((fTemp125 > 1.0f)?1.0f:((fTemp125 < -1.0f)?-1.0f:(fRec33 - (fTemp123 + (0.148148149f * mydsp_faustpower3_f(fTemp124))))));
			float fTemp127 = (dsp->fRec29[1] + (fSlow40 * fTemp126));
			float fTemp128 = (0.666666687f * fTemp127);
			dsp->fRec29[0] = ((fTemp128 > 1.0f)?1.0f:((fTemp128 < -1.0f)?-1.0f:(fTemp127 - (0.148148149f * mydsp_faustpower3_f(fTemp127)))));
			float fRec30 = fTemp126;
			dsp->fRec27[0] = (fRec30 - (dsp->fConst77 * ((dsp->fConst78 * dsp->fRec27[2]) + (dsp->fConst79 * dsp->fRec27[1]))));
			float fTemp129 = ((dsp->fRec23[0] * ((dsp->fConst33 * (dsp->fRec27[2] + (dsp->fRec27[0] + (2.0f * dsp->fRec27[1])))) + (9.31322554e-12f * (float)dsp->iRec12[0]))) * fSlow43);
			dsp->fVec26[0] = fSlow47;
			dsp->fRec44[0] = ((((fSlow47 - dsp->fVec26[1]) > 0.0f) > 0)?dsp->fConst80:max(0.0f, (dsp->fRec44[1] + -1.0f)));
			int iTemp130 = (dsp->fRec44[0] > 0.0f);
			dsp->fVec27[0] = fSlow48;
			dsp->fRec45[0] = ((((fSlow48 - dsp->fVec27[1]) > 0.0f) > 0)?dsp->fConst80:max(0.0f, (dsp->fRec45[1] + -1.0f)));
			int iTemp131 = (dsp->fRec45[0] > 0.0f);
			int iTemp132 = ((iTemp130 + iTemp131) > 0);
			dsp->iVec28[0] = iTemp132;
			int iTemp133 = (((iTemp132 - dsp->iVec28[1]) > 0) > 0);
			dsp->fVec29[0] = fSlow49;
			dsp->fRec43[0] = (iTemp133?0.0f:min(fSlow50, ((dsp->fRec43[1] + (dsp->fConst0 * (fSlow49 - dsp->fVec29[1]))) + 1.0f)));
			int iTemp134 = (dsp->fRec43[0] < dsp->fConst81);
			float fTemp135 = sinf((3.14159274f * min(0.25f, (fSlow45 * ((fSlow46 * (iTemp134?((dsp->fRec43[0] < 0.0f)?0.0f:(iTemp134?(dsp->fConst82 * dsp->fRec43[0]):1.0f)):((dsp->fRec43[0] < fSlow50)?((fSlow51 * (0.0f - (dsp->fRec43[0] - dsp->fConst81))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp136 = (dsp->fRec41[1] + (2.0f * (fTemp135 * dsp->fRec42[1])));
			float fTemp137 = (min(max(fTemp136, 0.0f), 10.0f) + -0.714285731f);
			float fTemp138 = (2.33333325f * fTemp137);
			float fTemp139 = (1.14942527f * fabsf(fTemp136));
			float fTemp140 = (min(max(fTemp139, 0.0f), 10.0f) + -0.333333343f);
			float fTemp141 = (1.0f * fTemp140);
			float fTemp142 = ((fTemp136 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp139 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp141 > 1.0f)?1.0f:((fTemp141 < -1.0f)?-1.0f:(fTemp140 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp140))))))))):fTemp139))):((fTemp136 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp138 > 1.0f)?1.0f:((fTemp138 < -1.0f)?-1.0f:(fTemp137 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp137))))))))):fTemp136));
			dsp->fRec41[0] = fTemp142;
			float fTemp143 = (dsp->fConst0 - dsp->fVec0[1]);
			dsp->fRec46[0] = (iTemp133?0.0f:min(dsp->fConst83, ((dsp->fRec46[1] + (0.00609999988f * fTemp143)) + 1.0f)));
			int iTemp144 = (dsp->fRec46[0] < dsp->fConst84);
			int iTemp145 = ((dsp->iVec28[1] <= 0) & (iTemp132 > 0));
			dsp->fRec47[0] = ((dsp->fRec47[1] * (float)(1 - iTemp145)) + ((float)iTemp145 * ((0.850000024f * (float)iTemp130) + (fSlow52 * (float)iTemp131))));
			float fTemp146 = (((iTemp144?((dsp->fRec46[0] < 0.0f)?0.0f:(iTemp144?(dsp->fConst85 * dsp->fRec46[0]):1.0f)):((dsp->fRec46[0] < dsp->fConst83)?((dsp->fConst82 * (0.0f - (dsp->fRec46[0] - dsp->fConst84))) + 1.0f):0.0f)) * ((3.25962901e-09f * (float)dsp->iRec12[0]) + 3.0f)) - (fTemp142 + (dsp->fRec42[1] * min((2.0f * (1.0f - powf(dsp->fRec47[0], 0.25f))), min(2.0f, ((1.0f / fTemp135) - fTemp135))))));
			float fTemp147 = (min(max(fTemp146, 0.0f), 10.0f) + -0.714285731f);
			float fTemp148 = (2.33333325f * fTemp147);
			float fTemp149 = (1.14942527f * fabsf(fTemp146));
			float fTemp150 = (min(max(fTemp149, 0.0f), 10.0f) + -0.333333343f);
			float fTemp151 = (1.0f * fTemp150);
			float fTemp152 = ((fTemp146 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp149 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp151 > 1.0f)?1.0f:((fTemp151 < -1.0f)?-1.0f:(fTemp150 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp150))))))))):fTemp149))):((fTemp146 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp148 > 1.0f)?1.0f:((fTemp148 < -1.0f)?-1.0f:(fTemp147 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp147))))))))):fTemp146));
			float fTemp153 = (dsp->fRec42[1] + (2.0f * (fTemp135 * fTemp152)));
			float fTemp154 = (min(max(fTemp153, 0.0f), 10.0f) + -0.714285731f);
			float fTemp155 = (2.33333325f * fTemp154);
			float fTemp156 = (1.14942527f * fabsf(fTemp153));
			float fTemp157 = (min(max(fTemp156, 0.0f), 10.0f) + -0.333333343f);
			float fTemp158 = (1.0f * fTemp157);
			dsp->fRec42[0] = ((fTemp153 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp156 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp158 > 1.0f)?1.0f:((fTemp158 < -1.0f)?-1.0f:(fTemp157 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp157))))))))):fTemp156))):((fTemp153 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp155 > 1.0f)?1.0f:((fTemp155 < -1.0f)?-1.0f:(fTemp154 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp154))))))))):fTemp153));
			float fTemp159 = ((float)tanhf((float)((fSlow44 * dsp->fRec41[0]) + -0.100000001f)) + 0.100000001f);
			float fTemp160 = (0.5f * fTemp159);
			dsp->fRec51[0] = ((fSlow66 * ((0.5f * ((dsp->fRec49[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec49[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst91 * ((dsp->fConst92 * dsp->fRec51[2]) + (dsp->fConst93 * dsp->fRec51[1]))));
			float fTemp161 = fabsf(dsp->fRec49[((dsp->IOTA - 1001) & 1023)]);
			float fTemp162 = ((dsp->fRec52[1] > fTemp161)?dsp->fConst99:dsp->fConst98);
			dsp->fRec53[0] = ((dsp->fRec53[1] * fTemp162) + (fTemp161 * (1.0f - fTemp162)));
			dsp->fRec52[0] = dsp->fRec53[0];
			float fTemp163 = tanf((dsp->fConst97 * ((0.5f * dsp->fRec52[0]) + 1.0f)));
			float fTemp164 = mydsp_faustpower2_f(sqrtf((dsp->fConst96 * fTemp163)));
			float fTemp165 = (dsp->fRec50[1] * ((dsp->fConst95 * fTemp164) + -8.0f));
			float fTemp166 = (dsp->fConst94 * fTemp164);
			float fTemp167 = (dsp->fConst100 * ((dsp->fConst101 * fTemp163) - (dsp->fConst102 * (fTemp164 / fTemp163))));
			float fTemp168 = ((fTemp166 + fTemp167) + 4.0f);
			dsp->fRec50[0] = ((dsp->fConst91 * (dsp->fRec51[2] + (dsp->fRec51[0] + (2.0f * dsp->fRec51[1])))) - ((fTemp165 + (dsp->fRec50[2] * (fTemp166 + (4.0f - fTemp167)))) / fTemp168));
			float fTemp169 = (fTemp166 + 4.0f);
			dsp->fRec55[0] = (fTemp24 - (fSlow74 * ((fSlow76 * dsp->fRec55[2]) + (fSlow77 * dsp->fRec55[1]))));
			dsp->fRec54[0] = ((fSlow74 * (((fSlow75 * dsp->fRec55[0]) + (fSlow78 * dsp->fRec55[1])) + (fSlow75 * dsp->fRec55[2]))) - (fSlow79 * ((fSlow80 * dsp->fRec54[2]) + (fSlow81 * dsp->fRec54[1]))));
			float fTemp170 = (dsp->fRec54[2] + (dsp->fRec54[0] + (2.0f * dsp->fRec54[1])));
			dsp->fVec30[0] = fSlow82;
			float fTemp171 = (0.00400000019f * fTemp143);
			dsp->fRec56[0] = ((((fSlow82 - dsp->fVec30[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst104, ((dsp->fRec56[1] + fTemp171) + 1.0f)));
			int iTemp172 = (dsp->fRec56[0] < dsp->fConst105);
			float fTemp173 = ((fSlow65 * (((fTemp165 + (dsp->fRec50[0] * fTemp169)) + (dsp->fRec50[2] * fTemp169)) / fTemp168)) + (fSlow71 * (fTemp170 * (iTemp172?((dsp->fRec56[0] < 0.0f)?0.0f:(iTemp172?(dsp->fConst106 * dsp->fRec56[0]):1.0f)):((dsp->fRec56[0] < dsp->fConst104)?((dsp->fConst106 * (0.0f - (dsp->fRec56[0] - dsp->fConst105))) + 1.0f):0.0f)))));
			dsp->fVec31[(dsp->IOTA & 4095)] = fTemp173;
			dsp->fRec49[(dsp->IOTA & 1023)] = ((fSlow63 * dsp->fVec31[((dsp->IOTA - iSlow84) & 4095)]) + (fSlow85 * (((((fSlow86 * dsp->fVec31[((dsp->IOTA - iSlow87) & 4095)]) + (fSlow88 * dsp->fVec31[((dsp->IOTA - iSlow89) & 4095)])) + (fSlow91 * dsp->fVec31[((dsp->IOTA - iSlow92) & 4095)])) + (fSlow94 * dsp->fVec31[((dsp->IOTA - iSlow95) & 4095)])) + (fSlow96 * dsp->fVec31[((dsp->IOTA - iSlow97) & 4095)]))));
			dsp->fRec59[0] = ((fSlow66 * ((0.5f * ((dsp->fRec57[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec57[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst91 * ((dsp->fConst92 * dsp->fRec59[2]) + (dsp->fConst93 * dsp->fRec59[1]))));
			float fTemp174 = fabsf(dsp->fRec57[((dsp->IOTA - 1001) & 1023)]);
			float fTemp175 = ((dsp->fRec60[1] > fTemp174)?dsp->fConst99:dsp->fConst98);
			dsp->fRec61[0] = ((dsp->fRec61[1] * fTemp175) + (fTemp174 * (1.0f - fTemp175)));
			dsp->fRec60[0] = dsp->fRec61[0];
			float fTemp176 = tanf((dsp->fConst97 * ((0.5f * dsp->fRec60[0]) + 1.0f)));
			float fTemp177 = mydsp_faustpower2_f(sqrtf((dsp->fConst96 * fTemp176)));
			float fTemp178 = (dsp->fRec58[1] * ((dsp->fConst95 * fTemp177) + -8.0f));
			float fTemp179 = (dsp->fConst94 * fTemp177);
			float fTemp180 = (dsp->fConst100 * ((dsp->fConst101 * fTemp176) - (dsp->fConst102 * (fTemp177 / fTemp176))));
			float fTemp181 = ((fTemp179 + fTemp180) + 4.0f);
			dsp->fRec58[0] = ((dsp->fConst91 * (dsp->fRec59[2] + (dsp->fRec59[0] + (2.0f * dsp->fRec59[1])))) - ((fTemp178 + (dsp->fRec58[2] * (fTemp179 + (4.0f - fTemp180)))) / fTemp181));
			float fTemp182 = (fTemp179 + 4.0f);
			dsp->fVec32[0] = fSlow109;
			dsp->fRec62[0] = ((((fSlow109 - dsp->fVec32[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst104, ((dsp->fRec62[1] + fTemp171) + 1.0f)));
			int iTemp183 = (dsp->fRec62[0] < dsp->fConst105);
			float fTemp184 = ((fSlow108 * (((fTemp178 + (dsp->fRec58[0] * fTemp182)) + (dsp->fRec58[2] * fTemp182)) / fTemp181)) + (fSlow71 * (fTemp170 * (iTemp183?((dsp->fRec62[0] < 0.0f)?0.0f:(iTemp183?(dsp->fConst106 * dsp->fRec62[0]):1.0f)):((dsp->fRec62[0] < dsp->fConst104)?((dsp->fConst106 * (0.0f - (dsp->fRec62[0] - dsp->fConst105))) + 1.0f):0.0f)))));
			dsp->fVec33[(dsp->IOTA & 4095)] = fTemp184;
			dsp->fRec57[(dsp->IOTA & 1023)] = ((fSlow107 * dsp->fVec33[((dsp->IOTA - iSlow111) & 4095)]) + (fSlow112 * (((((fSlow113 * dsp->fVec33[((dsp->IOTA - iSlow114) & 4095)]) + (fSlow115 * dsp->fVec33[((dsp->IOTA - iSlow116) & 4095)])) + (fSlow118 * dsp->fVec33[((dsp->IOTA - iSlow119) & 4095)])) + (fSlow121 * dsp->fVec33[((dsp->IOTA - iSlow122) & 4095)])) + (fSlow123 * dsp->fVec33[((dsp->IOTA - iSlow124) & 4095)]))));
			dsp->fRec65[0] = ((fSlow66 * ((0.5f * ((dsp->fRec63[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec63[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst91 * ((dsp->fConst92 * dsp->fRec65[2]) + (dsp->fConst93 * dsp->fRec65[1]))));
			float fTemp185 = fabsf(dsp->fRec63[((dsp->IOTA - 1001) & 1023)]);
			float fTemp186 = ((dsp->fRec66[1] > fTemp185)?dsp->fConst99:dsp->fConst98);
			dsp->fRec67[0] = ((dsp->fRec67[1] * fTemp186) + (fTemp185 * (1.0f - fTemp186)));
			dsp->fRec66[0] = dsp->fRec67[0];
			float fTemp187 = tanf((dsp->fConst97 * ((0.5f * dsp->fRec66[0]) + 1.0f)));
			float fTemp188 = mydsp_faustpower2_f(sqrtf((dsp->fConst96 * fTemp187)));
			float fTemp189 = (dsp->fRec64[1] * ((dsp->fConst95 * fTemp188) + -8.0f));
			float fTemp190 = (dsp->fConst94 * fTemp188);
			float fTemp191 = (dsp->fConst100 * ((dsp->fConst101 * fTemp187) - (dsp->fConst102 * (fTemp188 / fTemp187))));
			float fTemp192 = ((fTemp190 + fTemp191) + 4.0f);
			dsp->fRec64[0] = ((dsp->fConst91 * (dsp->fRec65[2] + (dsp->fRec65[0] + (2.0f * dsp->fRec65[1])))) - ((fTemp189 + (dsp->fRec64[2] * (fTemp190 + (4.0f - fTemp191)))) / fTemp192));
			float fTemp193 = (fTemp190 + 4.0f);
			dsp->fVec34[0] = fSlow136;
			dsp->fRec68[0] = ((((fSlow136 - dsp->fVec34[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst104, ((dsp->fRec68[1] + fTemp171) + 1.0f)));
			int iTemp194 = (dsp->fRec68[0] < dsp->fConst105);
			float fTemp195 = ((fSlow135 * (((fTemp189 + (dsp->fRec64[0] * fTemp193)) + (dsp->fRec64[2] * fTemp193)) / fTemp192)) + (fSlow71 * (fTemp170 * (iTemp194?((dsp->fRec68[0] < 0.0f)?0.0f:(iTemp194?(dsp->fConst106 * dsp->fRec68[0]):1.0f)):((dsp->fRec68[0] < dsp->fConst104)?((dsp->fConst106 * (0.0f - (dsp->fRec68[0] - dsp->fConst105))) + 1.0f):0.0f)))));
			dsp->fVec35[(dsp->IOTA & 4095)] = fTemp195;
			dsp->fRec63[(dsp->IOTA & 1023)] = ((fSlow134 * dsp->fVec35[((dsp->IOTA - iSlow138) & 4095)]) + (fSlow139 * (((((fSlow140 * dsp->fVec35[((dsp->IOTA - iSlow141) & 4095)]) + (fSlow142 * dsp->fVec35[((dsp->IOTA - iSlow143) & 4095)])) + (fSlow145 * dsp->fVec35[((dsp->IOTA - iSlow146) & 4095)])) + (fSlow148 * dsp->fVec35[((dsp->IOTA - iSlow149) & 4095)])) + (fSlow150 * dsp->fVec35[((dsp->IOTA - iSlow151) & 4095)]))));
			dsp->fRec71[0] = ((fSlow66 * ((0.5f * ((dsp->fRec69[((dsp->IOTA - 1) & 1023)] + (float)tanhf((float)(dsp->fRec69[((dsp->IOTA - 1) & 1023)] + 0.100000001f))) + 0.100000001f)) + -0.100000001f)) - (dsp->fConst91 * ((dsp->fConst92 * dsp->fRec71[2]) + (dsp->fConst93 * dsp->fRec71[1]))));
			float fTemp196 = fabsf(dsp->fRec69[((dsp->IOTA - 1001) & 1023)]);
			float fTemp197 = ((dsp->fRec72[1] > fTemp196)?dsp->fConst99:dsp->fConst98);
			dsp->fRec73[0] = ((dsp->fRec73[1] * fTemp197) + (fTemp196 * (1.0f - fTemp197)));
			dsp->fRec72[0] = dsp->fRec73[0];
			float fTemp198 = tanf((dsp->fConst97 * ((0.5f * dsp->fRec72[0]) + 1.0f)));
			float fTemp199 = mydsp_faustpower2_f(sqrtf((dsp->fConst96 * fTemp198)));
			float fTemp200 = (dsp->fRec70[1] * ((dsp->fConst95 * fTemp199) + -8.0f));
			float fTemp201 = (dsp->fConst94 * fTemp199);
			float fTemp202 = (dsp->fConst100 * ((dsp->fConst101 * fTemp198) - (dsp->fConst102 * (fTemp199 / fTemp198))));
			float fTemp203 = ((fTemp201 + fTemp202) + 4.0f);
			dsp->fRec70[0] = ((dsp->fConst91 * (dsp->fRec71[2] + (dsp->fRec71[0] + (2.0f * dsp->fRec71[1])))) - ((fTemp200 + (dsp->fRec70[2] * (fTemp201 + (4.0f - fTemp202)))) / fTemp203));
			float fTemp204 = (fTemp201 + 4.0f);
			dsp->fVec36[0] = fSlow163;
			dsp->fRec74[0] = ((((fSlow163 - dsp->fVec36[1]) > 0.0f) > 0)?0.0f:min(dsp->fConst104, ((dsp->fRec74[1] + fTemp171) + 1.0f)));
			int iTemp205 = (dsp->fRec74[0] < dsp->fConst105);
			float fTemp206 = ((fSlow162 * (((fTemp200 + (dsp->fRec70[0] * fTemp204)) + (dsp->fRec70[2] * fTemp204)) / fTemp203)) + (fSlow71 * (fTemp170 * (iTemp205?((dsp->fRec74[0] < 0.0f)?0.0f:(iTemp205?(dsp->fConst106 * dsp->fRec74[0]):1.0f)):((dsp->fRec74[0] < dsp->fConst104)?((dsp->fConst106 * (0.0f - (dsp->fRec74[0] - dsp->fConst105))) + 1.0f):0.0f)))));
			dsp->fVec37[(dsp->IOTA & 4095)] = fTemp206;
			dsp->fRec69[(dsp->IOTA & 1023)] = ((fSlow161 * dsp->fVec37[((dsp->IOTA - iSlow165) & 4095)]) + (fSlow166 * (((((fSlow167 * dsp->fVec37[((dsp->IOTA - iSlow168) & 4095)]) + (fSlow169 * dsp->fVec37[((dsp->IOTA - iSlow170) & 4095)])) + (fSlow172 * dsp->fVec37[((dsp->IOTA - iSlow173) & 4095)])) + (fSlow175 * dsp->fVec37[((dsp->IOTA - iSlow176) & 4095)])) + (fSlow177 * dsp->fVec37[((dsp->IOTA - iSlow178) & 4095)]))));
			float fTemp207 = (fSlow53 * ((((0.600000024f * dsp->fRec49[((dsp->IOTA - 0) & 1023)]) + (0.400000006f * dsp->fRec57[((dsp->IOTA - 0) & 1023)])) + (0.300000012f * dsp->fRec63[((dsp->IOTA - 0) & 1023)])) + (0.200000003f * dsp->fRec69[((dsp->IOTA - 0) & 1023)])));
			float fTemp208 = (fTemp207 + 0.100000001f);
			float fTemp209 = (0.666666687f * fTemp208);
			float fTemp210 = (((fTemp209 > 1.0f)?1.0f:((fTemp209 < -1.0f)?-1.0f:(fTemp207 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp208)))))) + -0.100000001f);
			dsp->fVec38[0] = fTemp210;
			dsp->fRec48[0] = (dsp->fConst87 * ((fTemp210 - dsp->fVec38[1]) + (dsp->fConst107 * dsp->fRec48[1])));
			dsp->fRec86[0] = ((fSlow193 * dsp->fRec86[1]) + (fSlow194 * (dsp->fRec82[1] + dsp->fRec82[2])));
			dsp->fRec85[0] = ((fSlow187 * dsp->fRec85[1]) + (fSlow188 * (dsp->fRec82[1] + (fSlow190 * dsp->fRec86[0]))));
			dsp->fVec39[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec85[0]) + 9.99999968e-21f);
			float fTemp211 = (0.0500000007f * fTemp159);
			float fTemp212 = (fSlow53 * ((((0.400000006f * dsp->fRec49[((dsp->IOTA - 0) & 1023)]) + (0.600000024f * dsp->fRec57[((dsp->IOTA - 0) & 1023)])) + (0.699999988f * dsp->fRec63[((dsp->IOTA - 0) & 1023)])) + (0.800000012f * dsp->fRec69[((dsp->IOTA - 0) & 1023)])));
			float fTemp213 = (fTemp212 + 0.100000001f);
			float fTemp214 = (0.666666687f * fTemp213);
			float fTemp215 = (((fTemp214 > 1.0f)?1.0f:((fTemp214 < -1.0f)?-1.0f:(fTemp212 + (0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp213)))))) + -0.100000001f);
			dsp->fVec40[0] = fTemp215;
			dsp->fRec87[0] = (dsp->fConst87 * ((fTemp215 - dsp->fVec40[1]) + (dsp->fConst107 * dsp->fRec87[1])));
			float fTemp216 = (0.600000024f * fTemp30);
			dsp->fVec41[(dsp->IOTA & 16383)] = (fSlow195 * (((((0.0289999992f * fTemp129) + (fTemp211 + (0.5f * dsp->fRec87[0]))) + (0.319999993f * fTemp85)) + fTemp216) + (0.180000007f * fTemp22)));
			float fTemp217 = (0.300000012f * dsp->fVec41[((dsp->IOTA - iSlow196) & 16383)]);
			float fTemp218 = (((0.600000024f * dsp->fRec83[1]) + dsp->fVec39[((dsp->IOTA - dsp->iConst112) & 8191)]) - fTemp217);
			dsp->fVec42[(dsp->IOTA & 1023)] = fTemp218;
			dsp->fRec83[0] = dsp->fVec42[((dsp->IOTA - dsp->iConst113) & 1023)];
			float fRec84 = (0.0f - (0.600000024f * fTemp218));
			dsp->fRec91[0] = ((fSlow193 * dsp->fRec91[1]) + (fSlow194 * (dsp->fRec78[1] + dsp->fRec78[2])));
			dsp->fRec90[0] = ((fSlow203 * dsp->fRec90[1]) + (fSlow204 * (dsp->fRec78[1] + (fSlow205 * dsp->fRec91[0]))));
			dsp->fVec43[(dsp->IOTA & 16383)] = ((0.353553385f * dsp->fRec90[0]) + 9.99999968e-21f);
			float fTemp219 = (((0.600000024f * dsp->fRec88[1]) + dsp->fVec43[((dsp->IOTA - dsp->iConst117) & 16383)]) - fTemp217);
			dsp->fVec44[(dsp->IOTA & 2047)] = fTemp219;
			dsp->fRec88[0] = dsp->fVec44[((dsp->IOTA - dsp->iConst118) & 2047)];
			float fRec89 = (0.0f - (0.600000024f * fTemp219));
			dsp->fRec95[0] = ((fSlow193 * dsp->fRec95[1]) + (fSlow194 * (dsp->fRec80[1] + dsp->fRec80[2])));
			dsp->fRec94[0] = ((fSlow212 * dsp->fRec94[1]) + (fSlow213 * (dsp->fRec80[1] + (fSlow214 * dsp->fRec95[0]))));
			dsp->fVec45[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec94[0]) + 9.99999968e-21f);
			float fTemp220 = (dsp->fVec45[((dsp->IOTA - dsp->iConst122) & 8191)] + (fTemp217 + (0.600000024f * dsp->fRec92[1])));
			dsp->fVec46[(dsp->IOTA & 2047)] = fTemp220;
			dsp->fRec92[0] = dsp->fVec46[((dsp->IOTA - dsp->iConst123) & 2047)];
			float fRec93 = (0.0f - (0.600000024f * fTemp220));
			dsp->fRec99[0] = ((fSlow193 * dsp->fRec99[1]) + (fSlow194 * (dsp->fRec76[1] + dsp->fRec76[2])));
			dsp->fRec98[0] = ((fSlow221 * dsp->fRec98[1]) + (fSlow222 * (dsp->fRec76[1] + (fSlow223 * dsp->fRec99[0]))));
			dsp->fVec47[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec98[0]) + 9.99999968e-21f);
			float fTemp221 = (fTemp217 + ((0.600000024f * dsp->fRec96[1]) + dsp->fVec47[((dsp->IOTA - dsp->iConst127) & 8191)]));
			dsp->fVec48[(dsp->IOTA & 1023)] = fTemp221;
			dsp->fRec96[0] = dsp->fVec48[((dsp->IOTA - dsp->iConst128) & 1023)];
			float fRec97 = (0.0f - (0.600000024f * fTemp221));
			dsp->fRec103[0] = ((fSlow193 * dsp->fRec103[1]) + (fSlow194 * (dsp->fRec81[1] + dsp->fRec81[2])));
			dsp->fRec102[0] = ((fSlow230 * dsp->fRec102[1]) + (fSlow231 * (dsp->fRec81[1] + (fSlow232 * dsp->fRec103[0]))));
			dsp->fVec49[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec102[0]) + 9.99999968e-21f);
			dsp->fVec50[(dsp->IOTA & 16383)] = (fSlow195 * (((((0.261000007f * fTemp129) + (fTemp211 + (0.5f * dsp->fRec48[0]))) + (0.479999989f * fTemp85)) + fTemp31) + (0.419999987f * fTemp22)));
			float fTemp222 = (0.300000012f * dsp->fVec50[((dsp->IOTA - iSlow196) & 16383)]);
			float fTemp223 = (dsp->fVec49[((dsp->IOTA - dsp->iConst132) & 8191)] - (fTemp222 + (0.600000024f * dsp->fRec100[1])));
			dsp->fVec51[(dsp->IOTA & 1023)] = fTemp223;
			dsp->fRec100[0] = dsp->fVec51[((dsp->IOTA - dsp->iConst133) & 1023)];
			float fRec101 = (0.600000024f * fTemp223);
			dsp->fRec107[0] = ((fSlow193 * dsp->fRec107[1]) + (fSlow194 * (dsp->fRec77[1] + dsp->fRec77[2])));
			dsp->fRec106[0] = ((fSlow239 * dsp->fRec106[1]) + (fSlow240 * (dsp->fRec77[1] + (fSlow241 * dsp->fRec107[0]))));
			dsp->fVec52[(dsp->IOTA & 4095)] = ((0.353553385f * dsp->fRec106[0]) + 9.99999968e-21f);
			float fTemp224 = (dsp->fVec52[((dsp->IOTA - dsp->iConst137) & 4095)] - (fTemp222 + (0.600000024f * dsp->fRec104[1])));
			dsp->fVec53[(dsp->IOTA & 2047)] = fTemp224;
			dsp->fRec104[0] = dsp->fVec53[((dsp->IOTA - dsp->iConst138) & 2047)];
			float fRec105 = (0.600000024f * fTemp224);
			dsp->fRec111[0] = ((fSlow193 * dsp->fRec111[1]) + (fSlow194 * (dsp->fRec79[1] + dsp->fRec79[2])));
			dsp->fRec110[0] = ((fSlow248 * dsp->fRec110[1]) + (fSlow249 * (dsp->fRec79[1] + (fSlow250 * dsp->fRec111[0]))));
			dsp->fVec54[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec110[0]) + 9.99999968e-21f);
			float fTemp225 = ((fTemp222 + dsp->fVec54[((dsp->IOTA - dsp->iConst142) & 8191)]) - (0.600000024f * dsp->fRec108[1]));
			dsp->fVec55[(dsp->IOTA & 1023)] = fTemp225;
			dsp->fRec108[0] = dsp->fVec55[((dsp->IOTA - dsp->iConst143) & 1023)];
			float fRec109 = (0.600000024f * fTemp225);
			dsp->fRec115[0] = ((fSlow193 * dsp->fRec115[1]) + (fSlow194 * (dsp->fRec75[1] + dsp->fRec75[2])));
			dsp->fRec114[0] = ((fSlow257 * dsp->fRec114[1]) + (fSlow258 * (dsp->fRec75[1] + (fSlow259 * dsp->fRec115[0]))));
			dsp->fVec56[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec114[0]) + 9.99999968e-21f);
			float fTemp226 = ((dsp->fVec56[((dsp->IOTA - dsp->iConst147) & 8191)] + fTemp222) - (0.600000024f * dsp->fRec112[1]));
			dsp->fVec57[(dsp->IOTA & 1023)] = fTemp226;
			dsp->fRec112[0] = dsp->fVec57[((dsp->IOTA - dsp->iConst148) & 1023)];
			float fRec113 = (0.600000024f * fTemp226);
			float fTemp227 = (fRec113 + fRec109);
			float fTemp228 = (fRec101 + (fRec105 + fTemp227));
			dsp->fRec75[0] = (dsp->fRec83[1] + (dsp->fRec88[1] + (dsp->fRec92[1] + (dsp->fRec96[1] + (dsp->fRec100[1] + (dsp->fRec104[1] + (dsp->fRec108[1] + (dsp->fRec112[1] + (fRec84 + (fRec89 + (fRec93 + (fRec97 + fTemp228))))))))))));
			dsp->fRec76[0] = ((dsp->fRec100[1] + (dsp->fRec104[1] + (dsp->fRec108[1] + (dsp->fRec112[1] + fTemp228)))) - (dsp->fRec83[1] + (dsp->fRec88[1] + (dsp->fRec92[1] + (dsp->fRec96[1] + (fRec84 + (fRec89 + (fRec97 + fRec93))))))));
			float fTemp229 = (fRec105 + fRec101);
			dsp->fRec77[0] = ((dsp->fRec92[1] + (dsp->fRec96[1] + (dsp->fRec108[1] + (dsp->fRec112[1] + (fRec93 + (fRec97 + fTemp227)))))) - (dsp->fRec83[1] + (dsp->fRec88[1] + (dsp->fRec100[1] + (dsp->fRec104[1] + (fRec84 + (fRec89 + fTemp229)))))));
			dsp->fRec78[0] = ((dsp->fRec83[1] + (dsp->fRec88[1] + (dsp->fRec108[1] + (dsp->fRec112[1] + (fRec84 + (fRec89 + fTemp227)))))) - (dsp->fRec92[1] + (dsp->fRec96[1] + (dsp->fRec100[1] + (dsp->fRec104[1] + (fRec93 + (fRec97 + fTemp229)))))));
			float fTemp230 = (fRec113 + fRec105);
			float fTemp231 = (fRec109 + fRec101);
			dsp->fRec79[0] = ((dsp->fRec88[1] + (dsp->fRec96[1] + (dsp->fRec104[1] + (dsp->fRec112[1] + (fRec89 + (fRec97 + fTemp230)))))) - (dsp->fRec83[1] + (dsp->fRec92[1] + (dsp->fRec100[1] + (dsp->fRec108[1] + (fRec84 + (fRec93 + fTemp231)))))));
			dsp->fRec80[0] = ((dsp->fRec83[1] + (dsp->fRec92[1] + (dsp->fRec104[1] + (dsp->fRec112[1] + (fRec84 + (fRec93 + fTemp230)))))) - (dsp->fRec88[1] + (dsp->fRec96[1] + (dsp->fRec100[1] + (dsp->fRec108[1] + (fRec89 + (fRec97 + fTemp231)))))));
			float fTemp232 = (fRec113 + fRec101);
			float fTemp233 = (fRec109 + fRec105);
			dsp->fRec81[0] = ((dsp->fRec83[1] + (dsp->fRec96[1] + (dsp->fRec100[1] + (dsp->fRec112[1] + (fRec84 + (fRec97 + fTemp232)))))) - (dsp->fRec88[1] + (dsp->fRec92[1] + (dsp->fRec104[1] + (dsp->fRec108[1] + (fRec89 + (fRec93 + fTemp233)))))));
			dsp->fRec82[0] = ((dsp->fRec88[1] + (dsp->fRec92[1] + (dsp->fRec100[1] + (dsp->fRec112[1] + (fRec89 + (fRec93 + fTemp232)))))) - (dsp->fRec83[1] + (dsp->fRec96[1] + (dsp->fRec104[1] + (dsp->fRec108[1] + (fRec84 + (fRec97 + fTemp233)))))));
			float fTemp234 = ((0.699999988f * fTemp22) + (fTemp31 + ((0.600000024f * fTemp85) + ((0.899999976f * fTemp129) + (fTemp160 + (dsp->fRec48[0] + (0.370000005f * (dsp->fRec76[0] + dsp->fRec77[0]))))))));
			float fTemp235 = ((0.300000012f * fTemp22) + (fTemp216 + ((0.400000006f * fTemp85) + ((0.100000001f * fTemp129) + (fTemp160 + (dsp->fRec87[0] + (0.370000005f * (dsp->fRec76[0] - dsp->fRec77[0]))))))));
			float fTemp236 = fabsf((fabsf(fTemp234) + fabsf(fTemp235)));
			float fTemp237 = ((dsp->fRec117[1] > fTemp236)?fSlow264:fSlow263);
			dsp->fRec118[0] = ((dsp->fRec118[1] * fTemp237) + (fTemp236 * (1.0f - fTemp237)));
			dsp->fRec117[0] = dsp->fRec118[0];
			dsp->fRec116[0] = ((fSlow261 * dsp->fRec116[1]) + (fSlow262 * max(((20.0f * log10f(dsp->fRec117[0])) - fSlow265), 0.0f)));
			float fTemp238 = powf(10.0f, (0.0500000007f * dsp->fRec116[0]));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp234 * fTemp238));
			output1[i] = (FAUSTFLOAT)(float)tanhf((float)(fTemp235 * fTemp238));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec6[2] = dsp->fRec6[1];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->iRec12[1] = dsp->iRec12[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec17[2] = dsp->fRec17[1];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec22[2] = dsp->fRec22[1];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->iVec7[1] = dsp->iVec7[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec34[2] = dsp->fRec34[1];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec27[2] = dsp->fRec27[1];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->iVec28[1] = dsp->iVec28[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec51[2] = dsp->fRec51[1];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec50[2] = dsp->fRec50[1];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec55[2] = dsp->fRec55[1];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec54[2] = dsp->fRec54[1];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec59[2] = dsp->fRec59[1];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec58[2] = dsp->fRec58[1];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec65[2] = dsp->fRec65[1];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec64[2] = dsp->fRec64[1];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec71[2] = dsp->fRec71[1];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec70[2] = dsp->fRec70[1];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec107[1] = dsp->fRec107[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec111[1] = dsp->fRec111[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec115[1] = dsp->fRec115[0];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fRec75[2] = dsp->fRec75[1];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec76[2] = dsp->fRec76[1];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec77[2] = dsp->fRec77[1];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec78[2] = dsp->fRec78[1];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec79[2] = dsp->fRec79[1];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[2] = dsp->fRec80[1];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec81[2] = dsp->fRec81[1];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec82[2] = dsp->fRec82[1];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec116[1] = dsp->fRec116[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
