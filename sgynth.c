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
		int l3;
		for (l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			dsp->iRec3[l3] = 0;
			
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
	int iVec1[2];
	float fConst2;
	FAUSTFLOAT fVslider1;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	FAUSTFLOAT fVslider2;
	float fConst7;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fRec2[2];
	FAUSTFLOAT fVslider6;
	float fConst8;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst9;
	float fRec5[2];
	float fRec4[2];
	FAUSTFLOAT fVslider9;
	float fConst10;
	float fRec6[2];
	FAUSTFLOAT fVslider10;
	float fConst11;
	float fRec7[2];
	FAUSTFLOAT fVslider11;
	float fConst12;
	float fRec8[2];
	FAUSTFLOAT fVslider12;
	float fRec9[2];
	FAUSTFLOAT fVslider13;
	float fConst13;
	float fRec10[2];
	FAUSTFLOAT fVslider14;
	float fConst14;
	float fRec11[2];
	float fConst15;
	float fConst16;
	float fRec1[3];
	float fVec2[2];
	float fConst17;
	float fRec0[2];
	FAUSTFLOAT fVslider15;
	float fRec14[2];
	FAUSTFLOAT fVslider16;
	float fRec15[2];
	float fRec16[2];
	float fRec17[2];
	float fRec18[2];
	float fRec19[2];
	float fRec20[2];
	float fRec21[2];
	float fRec13[3];
	float fVec3[2];
	float fRec12[2];
	FAUSTFLOAT fVslider17;
	float fRec24[2];
	FAUSTFLOAT fVslider18;
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	float fRec28[2];
	float fRec29[2];
	float fRec30[2];
	float fRec31[2];
	float fRec23[3];
	float fVec4[2];
	float fRec22[2];
	FAUSTFLOAT fVslider19;
	float fRec34[2];
	FAUSTFLOAT fVslider20;
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	float fRec38[2];
	float fRec39[2];
	float fRec40[2];
	float fRec41[2];
	float fRec33[3];
	float fVec5[2];
	float fRec32[2];
	FAUSTFLOAT fVslider21;
	float fConst18;
	FAUSTFLOAT fVslider22;
	float fRec42[2];
	int iRec44[2];
	float fRec43[2];
	FAUSTFLOAT fButton0;
	float fVec6[2];
	float fConst19;
	float fRec46[2];
	FAUSTFLOAT fVslider23;
	float fRec45[2];
	FAUSTFLOAT fVslider24;
	FAUSTFLOAT fVslider25;
	FAUSTFLOAT fVslider26;
	float fRec50[2];
	FAUSTFLOAT fVslider27;
	FAUSTFLOAT fVslider28;
	FAUSTFLOAT fVslider29;
	FAUSTFLOAT fVslider30;
	int iRec52[2];
	float fConst20;
	FAUSTFLOAT fVslider31;
	FAUSTFLOAT fVslider32;
	FAUSTFLOAT fVslider33;
	float fRec51[2];
	float fRec48[2];
	float fConst21;
	FAUSTFLOAT fVslider34;
	float fRec54[2];
	float fRec55[2];
	float fRec53[3];
	FAUSTFLOAT fVslider35;
	float fRec49[2];
	float fRec47[3];
	FAUSTFLOAT fVslider36;
	FAUSTFLOAT fVslider37;
	float fConst22;
	FAUSTFLOAT fVslider38;
	float fRec57[2];
	float fConst23;
	float fConst24;
	float fConst25;
	FAUSTFLOAT fButton1;
	float fVec7[2];
	float fConst26;
	float fRec60[2];
	FAUSTFLOAT fVslider39;
	float fRec61[2];
	float fConst27;
	float fConst28;
	float fRec59[3];
	float fRec58[2];
	float fConst29;
	float fRec62[2];
	float fRec63[2];
	float fConst30;
	float fConst31;
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec64[3];
	FAUSTFLOAT fButton2;
	float fVec8[2];
	float fRec66[2];
	FAUSTFLOAT fButton3;
	float fVec9[2];
	float fRec67[2];
	int iVec10[2];
	FAUSTFLOAT fVslider40;
	float fRec68[2];
	float fRec65[2];
	float fConst35;
	float fConst36;
	float fConst37;
	float fConst38;
	FAUSTFLOAT fVslider41;
	float fRec70[2];
	float fRec73[2];
	float fConst39;
	float fConst40;
	float fConst41;
	float fConst42;
	float fVec11[2];
	float fRec77[2];
	float fVec12[2];
	int IOTA;
	float fVec13[256];
	float fConst43;
	float fConst44;
	float fConst45;
	int iConst46;
	float fConst47;
	int iConst48;
	float fVec14[2];
	float fRec78[2];
	float fVec15[2];
	float fVec16[512];
	float fConst49;
	float fConst50;
	float fConst51;
	int iConst52;
	float fConst53;
	int iConst54;
	float fVec17[2];
	float fRec79[2];
	float fVec18[2];
	float fVec19[256];
	float fConst55;
	float fConst56;
	float fConst57;
	int iConst58;
	float fConst59;
	int iConst60;
	float fVec20[2];
	float fRec80[2];
	float fVec21[2];
	float fVec22[512];
	float fConst61;
	float fConst62;
	float fConst63;
	int iConst64;
	float fConst65;
	int iConst66;
	float fVec23[2];
	float fRec81[2];
	float fVec24[2];
	float fVec25[256];
	float fConst67;
	float fConst68;
	float fConst69;
	int iConst70;
	float fConst71;
	int iConst72;
	float fVec26[2];
	float fRec82[2];
	float fVec27[2];
	float fVec28[512];
	float fConst73;
	float fConst74;
	float fConst75;
	int iConst76;
	float fConst77;
	int iConst78;
	float fConst79;
	float fConst80;
	float fRec76[3];
	float fConst81;
	float fRec74[2];
	float fRec71[2];
	float fConst82;
	float fConst83;
	float fConst84;
	float fRec69[3];
	FAUSTFLOAT fVslider42;
	FAUSTFLOAT fVslider43;
	FAUSTFLOAT fVslider44;
	FAUSTFLOAT fVslider45;
	FAUSTFLOAT fButton4;
	float fVec29[2];
	float fConst85;
	float fRec86[2];
	FAUSTFLOAT fButton5;
	float fVec30[2];
	float fRec87[2];
	int iVec31[2];
	FAUSTFLOAT fVslider46;
	float fVec32[2];
	float fRec85[2];
	float fConst86;
	float fConst87;
	float fRec83[2];
	float fConst88;
	float fRec88[2];
	float fConst89;
	float fConst90;
	FAUSTFLOAT fVslider47;
	float fRec89[2];
	float fRec84[2];
	FAUSTFLOAT fVslider48;
	float fConst91;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fVec33[2];
	float fRec91[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fButton6;
	float fVec34[2];
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	float fVec35[2];
	float fRec92[2];
	float fConst92;
	float fVec36[4096];
	float fRec90[2];
	FAUSTFLOAT fVslider49;
	float fVec37[2];
	float fRec94[2];
	FAUSTFLOAT fButton7;
	float fVec38[2];
	float fRec95[2];
	float fVec39[4096];
	float fRec93[2];
	FAUSTFLOAT fVslider50;
	float fVec40[2];
	float fRec97[2];
	FAUSTFLOAT fButton8;
	float fVec41[2];
	float fRec98[2];
	float fVec42[4096];
	float fRec96[2];
	FAUSTFLOAT fVslider51;
	float fVec43[2];
	float fRec100[2];
	FAUSTFLOAT fButton9;
	float fVec44[2];
	float fRec101[2];
	float fVec45[4096];
	float fRec99[2];
	float fConst93;
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	float fConst98;
	float fConst99;
	float fConst100;
	float fConst101;
	float fConst102;
	float fConst103;
	float fConst104;
	float fConst105;
	float fConst106;
	float fConst107;
	float fConst108;
	float fRec113[2];
	float fRec112[2];
	float fVec46[8192];
	float fConst109;
	int iConst110;
	FAUSTFLOAT fVslider52;
	float fVec47[4096];
	int iConst111;
	float fVec48[1024];
	int iConst112;
	float fRec110[2];
	float fConst113;
	float fConst114;
	float fConst115;
	float fConst116;
	float fConst117;
	float fConst118;
	float fConst119;
	float fConst120;
	float fConst121;
	float fConst122;
	float fConst123;
	float fRec117[2];
	float fRec116[2];
	float fVec49[16384];
	float fConst124;
	int iConst125;
	float fVec50[2048];
	int iConst126;
	float fRec114[2];
	float fConst127;
	float fConst128;
	float fConst129;
	float fConst130;
	float fConst131;
	float fConst132;
	float fConst133;
	float fConst134;
	float fConst135;
	float fConst136;
	float fConst137;
	float fRec121[2];
	float fRec120[2];
	float fVec51[8192];
	float fConst138;
	int iConst139;
	float fVec52[2048];
	int iConst140;
	float fRec118[2];
	float fConst141;
	float fConst142;
	float fConst143;
	float fConst144;
	float fConst145;
	float fConst146;
	float fConst147;
	float fConst148;
	float fConst149;
	float fConst150;
	float fConst151;
	float fRec125[2];
	float fRec124[2];
	float fVec53[8192];
	float fConst152;
	int iConst153;
	float fVec54[1024];
	int iConst154;
	float fRec122[2];
	float fConst155;
	float fConst156;
	float fConst157;
	float fConst158;
	float fConst159;
	float fConst160;
	float fConst161;
	float fConst162;
	float fConst163;
	float fConst164;
	float fConst165;
	float fRec129[2];
	float fRec128[2];
	float fVec55[8192];
	float fConst166;
	int iConst167;
	float fVec56[4096];
	float fVec57[1024];
	int iConst168;
	float fRec126[2];
	float fConst169;
	float fConst170;
	float fConst171;
	float fConst172;
	float fConst173;
	float fConst174;
	float fConst175;
	float fConst176;
	float fConst177;
	float fConst178;
	float fConst179;
	float fRec133[2];
	float fRec132[2];
	float fVec58[4096];
	float fConst180;
	int iConst181;
	float fVec59[2048];
	int iConst182;
	float fRec130[2];
	float fConst183;
	float fConst184;
	float fConst185;
	float fConst186;
	float fConst187;
	float fConst188;
	float fConst189;
	float fConst190;
	float fConst191;
	float fConst192;
	float fConst193;
	float fRec137[2];
	float fRec136[2];
	float fVec60[8192];
	float fConst194;
	int iConst195;
	float fVec61[1024];
	int iConst196;
	float fRec134[2];
	float fConst197;
	float fConst198;
	float fConst199;
	float fConst200;
	float fConst201;
	float fConst202;
	float fConst203;
	float fConst204;
	float fConst205;
	float fConst206;
	float fConst207;
	float fRec141[2];
	float fRec140[2];
	float fVec62[8192];
	float fConst208;
	int iConst209;
	float fVec63[1024];
	int iConst210;
	float fRec138[2];
	float fRec102[3];
	float fRec103[3];
	float fRec104[3];
	float fRec105[3];
	float fRec106[3];
	float fRec107[3];
	float fRec108[3];
	float fRec109[3];
	
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
	dsp->fVslider21 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider22 = (FAUSTFLOAT)3000.0f;
	dsp->fButton0 = (FAUSTFLOAT)0.0f;
	dsp->fVslider23 = (FAUSTFLOAT)90.0f;
	dsp->fVslider24 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider25 = (FAUSTFLOAT)0.5f;
	dsp->fVslider26 = (FAUSTFLOAT)100.0f;
	dsp->fVslider27 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider28 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider29 = (FAUSTFLOAT)0.0f;
	dsp->fVslider30 = (FAUSTFLOAT)1.0f;
	dsp->fVslider31 = (FAUSTFLOAT)1.0f;
	dsp->fVslider32 = (FAUSTFLOAT)1.0f;
	dsp->fVslider33 = (FAUSTFLOAT)0.5f;
	dsp->fVslider34 = (FAUSTFLOAT)1.0f;
	dsp->fVslider35 = (FAUSTFLOAT)0.88900000000000001f;
	dsp->fVslider36 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider37 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider38 = (FAUSTFLOAT)1.0f;
	dsp->fButton1 = (FAUSTFLOAT)0.0f;
	dsp->fVslider39 = (FAUSTFLOAT)0.5f;
	dsp->fButton2 = (FAUSTFLOAT)0.0f;
	dsp->fButton3 = (FAUSTFLOAT)0.0f;
	dsp->fVslider40 = (FAUSTFLOAT)1401.9000000000001f;
	dsp->fVslider41 = (FAUSTFLOAT)6150.3999999999996f;
	dsp->fVslider42 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider43 = (FAUSTFLOAT)0.20000000000000001f;
	dsp->fVslider44 = (FAUSTFLOAT)100.0f;
	dsp->fVslider45 = (FAUSTFLOAT)2.73f;
	dsp->fButton4 = (FAUSTFLOAT)0.0f;
	dsp->fButton5 = (FAUSTFLOAT)0.0f;
	dsp->fVslider46 = (FAUSTFLOAT)63.0f;
	dsp->fVslider47 = (FAUSTFLOAT)0.98899999999999999f;
	dsp->fVslider48 = (FAUSTFLOAT)440.0f;
	dsp->fHslider0 = (FAUSTFLOAT)1.0f;
	dsp->fHslider1 = (FAUSTFLOAT)1.0f;
	dsp->fHslider2 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider3 = (FAUSTFLOAT)2.0f;
	dsp->fHslider4 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fHslider5 = (FAUSTFLOAT)2.0f;
	dsp->fHslider6 = (FAUSTFLOAT)0.10000000000000001f;
	dsp->fButton6 = (FAUSTFLOAT)0.0f;
	dsp->fHslider7 = (FAUSTFLOAT)0.5f;
	dsp->fHslider8 = (FAUSTFLOAT)0.5f;
	dsp->fVslider49 = (FAUSTFLOAT)440.0f;
	dsp->fButton7 = (FAUSTFLOAT)0.0f;
	dsp->fVslider50 = (FAUSTFLOAT)440.0f;
	dsp->fButton8 = (FAUSTFLOAT)0.0f;
	dsp->fVslider51 = (FAUSTFLOAT)440.0f;
	dsp->fButton9 = (FAUSTFLOAT)0.0f;
	dsp->fVslider52 = (FAUSTFLOAT)0.10000000000000001f;
	
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
			dsp->fRec2[l2] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			dsp->fRec5[l4] = 0.0f;
			
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
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec6[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->fRec7[l7] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec8[l8] = 0.0f;
			
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
			dsp->fRec10[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec11[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			dsp->fRec1[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fVec2[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec0[l14] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			dsp->fRec14[l15] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			dsp->fRec15[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec16[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fRec17[l18] = 0.0f;
			
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
			dsp->fRec19[l20] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			dsp->fRec20[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec21[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 3); l23 = (l23 + 1)) {
			dsp->fRec13[l23] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			dsp->fVec3[l24] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			dsp->fRec12[l25] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			dsp->fRec24[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec25[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec26[l28] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			dsp->fRec27[l29] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			dsp->fRec28[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec29[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			dsp->fRec30[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fRec31[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			dsp->fRec23[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fVec4[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec22[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec34[l37] = 0.0f;
			
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
			dsp->fRec36[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fRec37[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec38[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec39[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->fRec40[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fRec41[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 3); l45 = (l45 + 1)) {
			dsp->fRec33[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fVec5[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec32[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fRec42[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->iRec44[l49] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fRec43[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			dsp->fVec6[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fRec46[l52] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			dsp->fRec45[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			dsp->fRec50[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			dsp->iRec52[l55] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			dsp->fRec51[l56] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			dsp->fRec48[l57] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			dsp->fRec54[l58] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			dsp->fRec55[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 3); l60 = (l60 + 1)) {
			dsp->fRec53[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec49[l61] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 3); l62 = (l62 + 1)) {
			dsp->fRec47[l62] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			dsp->fRec57[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->fVec7[l64] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->fRec60[l65] = 0.0f;
			
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
		for (l67 = 0; (l67 < 3); l67 = (l67 + 1)) {
			dsp->fRec59[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			dsp->fRec58[l68] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			dsp->fRec62[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			dsp->fRec63[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 3); l71 = (l71 + 1)) {
			dsp->fRec64[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			dsp->fVec8[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fRec66[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fVec9[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			dsp->fRec67[l75] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			dsp->iVec10[l76] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			dsp->fRec68[l77] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			dsp->fRec65[l78] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			dsp->fRec70[l79] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			dsp->fRec73[l80] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			dsp->fVec11[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fRec77[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			dsp->fVec12[l83] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 256); l84 = (l84 + 1)) {
			dsp->fVec13[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			dsp->fVec14[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->fRec78[l86] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			dsp->fVec15[l87] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; (l88 < 512); l88 = (l88 + 1)) {
			dsp->fVec16[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fVec17[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec79[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			dsp->fVec18[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 256); l92 = (l92 + 1)) {
			dsp->fVec19[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			dsp->fVec20[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			dsp->fRec80[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fVec21[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 512); l96 = (l96 + 1)) {
			dsp->fVec22[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fVec23[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			dsp->fRec81[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			dsp->fVec24[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 256); l100 = (l100 + 1)) {
			dsp->fVec25[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			dsp->fVec26[l101] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			dsp->fRec82[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fVec27[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 512); l104 = (l104 + 1)) {
			dsp->fVec28[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 3); l105 = (l105 + 1)) {
			dsp->fRec76[l105] = 0.0f;
			
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
		for (l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			dsp->fRec71[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 3); l108 = (l108 + 1)) {
			dsp->fRec69[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fVec29[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			dsp->fRec86[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			dsp->fVec30[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			dsp->fRec87[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			dsp->iVec31[l113] = 0;
			
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
			dsp->fRec85[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			dsp->fRec83[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			dsp->fRec88[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			dsp->fRec89[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fRec84[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fVec33[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			dsp->fRec91[l121] = 0.0f;
			
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
			dsp->fVec35[l123] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			dsp->fRec92[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 4096); l125 = (l125 + 1)) {
			dsp->fVec36[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			dsp->fRec90[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			dsp->fVec37[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec94[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			dsp->fVec38[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			dsp->fRec95[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 4096); l131 = (l131 + 1)) {
			dsp->fVec39[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			dsp->fRec93[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			dsp->fVec40[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			dsp->fRec97[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			dsp->fVec41[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			dsp->fRec98[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 4096); l137 = (l137 + 1)) {
			dsp->fVec42[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			dsp->fRec96[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			dsp->fVec43[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			dsp->fRec100[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			dsp->fVec44[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			dsp->fRec101[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 4096); l143 = (l143 + 1)) {
			dsp->fVec45[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fRec99[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec113[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			dsp->fRec112[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 8192); l147 = (l147 + 1)) {
			dsp->fVec46[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 4096); l148 = (l148 + 1)) {
			dsp->fVec47[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 1024); l149 = (l149 + 1)) {
			dsp->fVec48[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			dsp->fRec110[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			dsp->fRec117[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			dsp->fRec116[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 16384); l153 = (l153 + 1)) {
			dsp->fVec49[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 2048); l154 = (l154 + 1)) {
			dsp->fVec50[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			dsp->fRec114[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			dsp->fRec121[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			dsp->fRec120[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 8192); l158 = (l158 + 1)) {
			dsp->fVec51[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 2048); l159 = (l159 + 1)) {
			dsp->fVec52[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			dsp->fRec118[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			dsp->fRec125[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			dsp->fRec124[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 8192); l163 = (l163 + 1)) {
			dsp->fVec53[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 1024); l164 = (l164 + 1)) {
			dsp->fVec54[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			dsp->fRec122[l165] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			dsp->fRec129[l166] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			dsp->fRec128[l167] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; (l168 < 8192); l168 = (l168 + 1)) {
			dsp->fVec55[l168] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; (l169 < 4096); l169 = (l169 + 1)) {
			dsp->fVec56[l169] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; (l170 < 1024); l170 = (l170 + 1)) {
			dsp->fVec57[l170] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			dsp->fRec126[l171] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			dsp->fRec133[l172] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			dsp->fRec132[l173] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; (l174 < 4096); l174 = (l174 + 1)) {
			dsp->fVec58[l174] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; (l175 < 2048); l175 = (l175 + 1)) {
			dsp->fVec59[l175] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			dsp->fRec130[l176] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			dsp->fRec137[l177] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			dsp->fRec136[l178] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; (l179 < 8192); l179 = (l179 + 1)) {
			dsp->fVec60[l179] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; (l180 < 1024); l180 = (l180 + 1)) {
			dsp->fVec61[l180] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			dsp->fRec134[l181] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			dsp->fRec141[l182] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			dsp->fRec140[l183] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; (l184 < 8192); l184 = (l184 + 1)) {
			dsp->fVec62[l184] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; (l185 < 1024); l185 = (l185 + 1)) {
			dsp->fVec63[l185] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			dsp->fRec138[l186] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; (l187 < 3); l187 = (l187 + 1)) {
			dsp->fRec102[l187] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; (l188 < 3); l188 = (l188 + 1)) {
			dsp->fRec103[l188] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; (l189 < 3); l189 = (l189 + 1)) {
			dsp->fRec104[l189] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; (l190 < 3); l190 = (l190 + 1)) {
			dsp->fRec105[l190] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; (l191 < 3); l191 = (l191 + 1)) {
			dsp->fRec106[l191] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; (l192 < 3); l192 = (l192 + 1)) {
			dsp->fRec107[l192] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; (l193 < 3); l193 = (l193 + 1)) {
			dsp->fRec108[l193] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; (l194 < 3); l194 = (l194 + 1)) {
			dsp->fRec109[l194] = 0.0f;
			
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
	dsp->fConst5 = (((dsp->fConst4 + 1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst6 = (1.0f / dsp->fConst5);
	dsp->fConst7 = (6.90999985f / dsp->fConst0);
	dsp->fConst8 = (1.0f / dsp->fConst0);
	dsp->fConst9 = (5.0f / dsp->fConst0);
	dsp->fConst10 = (2.0f / dsp->fConst0);
	dsp->fConst11 = (3.0f / dsp->fConst0);
	dsp->fConst12 = (4.0f / dsp->fConst0);
	dsp->fConst13 = (6.0f / dsp->fConst0);
	dsp->fConst14 = (8.0f / dsp->fConst0);
	dsp->fConst15 = (((dsp->fConst4 + -1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst16 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst3))));
	dsp->fConst17 = (1.0f - dsp->fConst1);
	dsp->fConst18 = (1.0f / dsp->fConst0);
	dsp->fConst19 = (0.00639999984f * dsp->fConst0);
	dsp->fConst20 = (0.00100000005f * dsp->fConst0);
	dsp->fConst21 = (0.419999987f / dsp->fConst5);
	dsp->fConst22 = (180.0f / dsp->fConst0);
	dsp->fConst23 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst24 = (1.0f / dsp->fConst23);
	dsp->fConst25 = (1.0f / (((dsp->fConst24 + 1.41421354f) / dsp->fConst23) + 1.0f));
	dsp->fConst26 = (0.0027999999f * dsp->fConst0);
	dsp->fConst27 = (((dsp->fConst24 + -1.41421354f) / dsp->fConst23) + 1.0f);
	dsp->fConst28 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst23))));
	dsp->fConst29 = (330.0f / dsp->fConst0);
	dsp->fConst30 = tanf((25472.0332f / dsp->fConst0));
	dsp->fConst31 = (1.0f / dsp->fConst30);
	dsp->fConst32 = (1.0f / (((dsp->fConst31 + 1.41421354f) / dsp->fConst30) + 1.0f));
	dsp->fConst33 = (((dsp->fConst31 + -1.41421354f) / dsp->fConst30) + 1.0f);
	dsp->fConst34 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst30))));
	dsp->fConst35 = tanf((42703.668f / dsp->fConst0));
	dsp->fConst36 = (1.0f / dsp->fConst35);
	dsp->fConst37 = (((dsp->fConst36 + 1.41421354f) / dsp->fConst35) + 1.0f);
	dsp->fConst38 = (0.680000007f / dsp->fConst37);
	dsp->fConst39 = tanf((3141.59277f / dsp->fConst0));
	dsp->fConst40 = (1.0f / dsp->fConst39);
	dsp->fConst41 = (1.0f / (((dsp->fConst40 + 1.41421354f) / dsp->fConst39) + 1.0f));
	dsp->fConst42 = (1.0f / mydsp_faustpower2_f(dsp->fConst39));
	dsp->fConst43 = max(0.0f, min(2047.0f, (0.00126903551f * dsp->fConst0)));
	dsp->fConst44 = floorf(dsp->fConst43);
	dsp->fConst45 = (dsp->fConst44 + (1.0f - dsp->fConst43));
	dsp->iConst46 = (int)dsp->fConst43;
	dsp->fConst47 = (dsp->fConst43 - dsp->fConst44);
	dsp->iConst48 = (dsp->iConst46 + 1);
	dsp->fConst49 = max(0.0f, min(2047.0f, (0.00161812303f * dsp->fConst0)));
	dsp->fConst50 = floorf(dsp->fConst49);
	dsp->fConst51 = (dsp->fConst50 + (1.0f - dsp->fConst49));
	dsp->iConst52 = (int)dsp->fConst49;
	dsp->fConst53 = (dsp->fConst49 - dsp->fConst50);
	dsp->iConst54 = (dsp->iConst52 + 1);
	dsp->fConst55 = max(0.0f, min(2047.0f, (0.00101419876f * dsp->fConst0)));
	dsp->fConst56 = floorf(dsp->fConst55);
	dsp->fConst57 = (dsp->fConst56 + (1.0f - dsp->fConst55));
	dsp->iConst58 = (int)dsp->fConst55;
	dsp->fConst59 = (dsp->fConst55 - dsp->fConst56);
	dsp->iConst60 = (dsp->iConst58 + 1);
	dsp->fConst61 = max(0.0f, min(2047.0f, (0.00138504151f * dsp->fConst0)));
	dsp->fConst62 = floorf(dsp->fConst61);
	dsp->fConst63 = (dsp->fConst62 + (1.0f - dsp->fConst61));
	dsp->iConst64 = (int)dsp->fConst61;
	dsp->fConst65 = (dsp->fConst61 - dsp->fConst62);
	dsp->iConst66 = (dsp->iConst64 + 1);
	dsp->fConst67 = max(0.0f, min(2047.0f, (0.00118483417f * dsp->fConst0)));
	dsp->fConst68 = floorf(dsp->fConst67);
	dsp->fConst69 = (dsp->fConst68 + (1.0f - dsp->fConst67));
	dsp->iConst70 = (int)dsp->fConst67;
	dsp->fConst71 = (dsp->fConst67 - dsp->fConst68);
	dsp->iConst72 = (dsp->iConst70 + 1);
	dsp->fConst73 = max(0.0f, min(2047.0f, (0.00246305414f * dsp->fConst0)));
	dsp->fConst74 = floorf(dsp->fConst73);
	dsp->fConst75 = (dsp->fConst74 + (1.0f - dsp->fConst73));
	dsp->iConst76 = (int)dsp->fConst73;
	dsp->fConst77 = (dsp->fConst73 - dsp->fConst74);
	dsp->iConst78 = (dsp->iConst76 + 1);
	dsp->fConst79 = (((dsp->fConst40 + -1.41421354f) / dsp->fConst39) + 1.0f);
	dsp->fConst80 = (2.0f * (1.0f - dsp->fConst42));
	dsp->fConst81 = (2.0f * (0.0f - dsp->fConst42));
	dsp->fConst82 = (1.0f / dsp->fConst37);
	dsp->fConst83 = (((dsp->fConst36 + -1.41421354f) / dsp->fConst35) + 1.0f);
	dsp->fConst84 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst35))));
	dsp->fConst85 = (0.00700000022f * dsp->fConst0);
	dsp->fConst86 = (0.00600000005f * dsp->fConst0);
	dsp->fConst87 = (166.666672f / dsp->fConst0);
	dsp->fConst88 = (0.00609999988f * dsp->fConst0);
	dsp->fConst89 = (9.99999975e-05f * dsp->fConst0);
	dsp->fConst90 = (10000.0f / dsp->fConst0);
	dsp->fConst91 = (100000.0f / dsp->fConst0);
	dsp->fConst92 = (1000.0f / dsp->fConst0);
	dsp->fConst93 = floorf(((0.219990999f * dsp->fConst0) + 0.5f));
	dsp->fConst94 = ((0.0f - (6.90775537f * dsp->fConst93)) / dsp->fConst0);
	dsp->fConst95 = expf((0.454545468f * dsp->fConst94));
	dsp->fConst96 = mydsp_faustpower2_f(dsp->fConst95);
	dsp->fConst97 = cosf((43561.3242f / dsp->fConst0));
	dsp->fConst98 = (1.0f - (dsp->fConst96 * dsp->fConst97));
	dsp->fConst99 = (1.0f - dsp->fConst96);
	dsp->fConst100 = (dsp->fConst98 / dsp->fConst99);
	dsp->fConst101 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst98) / mydsp_faustpower2_f(dsp->fConst99)) + -1.0f)));
	dsp->fConst102 = (dsp->fConst100 - dsp->fConst101);
	dsp->fConst103 = ((dsp->fConst101 + (1.0f - dsp->fConst100)) * dsp->fConst95);
	dsp->fConst104 = ((expf((1.11111116f * dsp->fConst94)) / dsp->fConst95) + -1.0f);
	dsp->fConst105 = (1.0f / tanf((1938.36267f / dsp->fConst0)));
	dsp->fConst106 = (dsp->fConst105 + 1.0f);
	dsp->fConst107 = (0.0f - ((1.0f - dsp->fConst105) / dsp->fConst106));
	dsp->fConst108 = (1.0f / dsp->fConst106);
	dsp->fConst109 = floorf(((0.0191229992f * dsp->fConst0) + 0.5f));
	dsp->iConst110 = (int)min(4096.0f, max(0.0f, (dsp->fConst93 - dsp->fConst109)));
	dsp->iConst111 = (int)min(8192.0f, max(0.0f, (0.0140000004f * dsp->fConst0)));
	dsp->iConst112 = (int)min(512.0f, max(0.0f, (dsp->fConst109 + -1.0f)));
	dsp->fConst113 = floorf(((0.256891012f * dsp->fConst0) + 0.5f));
	dsp->fConst114 = ((0.0f - (6.90775537f * dsp->fConst113)) / dsp->fConst0);
	dsp->fConst115 = expf((0.454545468f * dsp->fConst114));
	dsp->fConst116 = mydsp_faustpower2_f(dsp->fConst115);
	dsp->fConst117 = (1.0f - (dsp->fConst97 * dsp->fConst116));
	dsp->fConst118 = (1.0f - dsp->fConst116);
	dsp->fConst119 = (dsp->fConst117 / dsp->fConst118);
	dsp->fConst120 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst117) / mydsp_faustpower2_f(dsp->fConst118)) + -1.0f)));
	dsp->fConst121 = (dsp->fConst119 - dsp->fConst120);
	dsp->fConst122 = ((dsp->fConst120 + (1.0f - dsp->fConst119)) * dsp->fConst115);
	dsp->fConst123 = ((expf((1.11111116f * dsp->fConst114)) / dsp->fConst115) + -1.0f);
	dsp->fConst124 = floorf(((0.0273330007f * dsp->fConst0) + 0.5f));
	dsp->iConst125 = (int)min(8192.0f, max(0.0f, (dsp->fConst113 - dsp->fConst124)));
	dsp->iConst126 = (int)min(1024.0f, max(0.0f, (dsp->fConst124 + -1.0f)));
	dsp->fConst127 = floorf(((0.192303002f * dsp->fConst0) + 0.5f));
	dsp->fConst128 = ((0.0f - (6.90775537f * dsp->fConst127)) / dsp->fConst0);
	dsp->fConst129 = expf((0.454545468f * dsp->fConst128));
	dsp->fConst130 = mydsp_faustpower2_f(dsp->fConst129);
	dsp->fConst131 = (1.0f - (dsp->fConst97 * dsp->fConst130));
	dsp->fConst132 = (1.0f - dsp->fConst130);
	dsp->fConst133 = (dsp->fConst131 / dsp->fConst132);
	dsp->fConst134 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst131) / mydsp_faustpower2_f(dsp->fConst132)) + -1.0f)));
	dsp->fConst135 = (dsp->fConst133 - dsp->fConst134);
	dsp->fConst136 = ((dsp->fConst134 + (1.0f - dsp->fConst133)) * dsp->fConst129);
	dsp->fConst137 = ((expf((1.11111116f * dsp->fConst128)) / dsp->fConst129) + -1.0f);
	dsp->fConst138 = floorf(((0.0292910002f * dsp->fConst0) + 0.5f));
	dsp->iConst139 = (int)min(4096.0f, max(0.0f, (dsp->fConst127 - dsp->fConst138)));
	dsp->iConst140 = (int)min(1024.0f, max(0.0f, (dsp->fConst138 + -1.0f)));
	dsp->fConst141 = floorf(((0.210389003f * dsp->fConst0) + 0.5f));
	dsp->fConst142 = ((0.0f - (6.90775537f * dsp->fConst141)) / dsp->fConst0);
	dsp->fConst143 = expf((0.454545468f * dsp->fConst142));
	dsp->fConst144 = mydsp_faustpower2_f(dsp->fConst143);
	dsp->fConst145 = (1.0f - (dsp->fConst97 * dsp->fConst144));
	dsp->fConst146 = (1.0f - dsp->fConst144);
	dsp->fConst147 = (dsp->fConst145 / dsp->fConst146);
	dsp->fConst148 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst145) / mydsp_faustpower2_f(dsp->fConst146)) + -1.0f)));
	dsp->fConst149 = (dsp->fConst147 - dsp->fConst148);
	dsp->fConst150 = ((dsp->fConst148 + (1.0f - dsp->fConst147)) * dsp->fConst143);
	dsp->fConst151 = ((expf((1.11111116f * dsp->fConst142)) / dsp->fConst143) + -1.0f);
	dsp->fConst152 = floorf(((0.0244210009f * dsp->fConst0) + 0.5f));
	dsp->iConst153 = (int)min(4096.0f, max(0.0f, (dsp->fConst141 - dsp->fConst152)));
	dsp->iConst154 = (int)min(512.0f, max(0.0f, (dsp->fConst152 + -1.0f)));
	dsp->fConst155 = floorf(((0.125f * dsp->fConst0) + 0.5f));
	dsp->fConst156 = ((0.0f - (6.90775537f * dsp->fConst155)) / dsp->fConst0);
	dsp->fConst157 = expf((0.454545468f * dsp->fConst156));
	dsp->fConst158 = mydsp_faustpower2_f(dsp->fConst157);
	dsp->fConst159 = (1.0f - (dsp->fConst97 * dsp->fConst158));
	dsp->fConst160 = (1.0f - dsp->fConst158);
	dsp->fConst161 = (dsp->fConst159 / dsp->fConst160);
	dsp->fConst162 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst159) / mydsp_faustpower2_f(dsp->fConst160)) + -1.0f)));
	dsp->fConst163 = (dsp->fConst161 - dsp->fConst162);
	dsp->fConst164 = ((dsp->fConst162 + (1.0f - dsp->fConst161)) * dsp->fConst157);
	dsp->fConst165 = ((expf((1.11111116f * dsp->fConst156)) / dsp->fConst157) + -1.0f);
	dsp->fConst166 = floorf(((0.0134579996f * dsp->fConst0) + 0.5f));
	dsp->iConst167 = (int)min(4096.0f, max(0.0f, (dsp->fConst155 - dsp->fConst166)));
	dsp->iConst168 = (int)min(512.0f, max(0.0f, (dsp->fConst166 + -1.0f)));
	dsp->fConst169 = floorf(((0.127837002f * dsp->fConst0) + 0.5f));
	dsp->fConst170 = ((0.0f - (6.90775537f * dsp->fConst169)) / dsp->fConst0);
	dsp->fConst171 = expf((0.454545468f * dsp->fConst170));
	dsp->fConst172 = mydsp_faustpower2_f(dsp->fConst171);
	dsp->fConst173 = (1.0f - (dsp->fConst97 * dsp->fConst172));
	dsp->fConst174 = (1.0f - dsp->fConst172);
	dsp->fConst175 = (dsp->fConst173 / dsp->fConst174);
	dsp->fConst176 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst173) / mydsp_faustpower2_f(dsp->fConst174)) + -1.0f)));
	dsp->fConst177 = (dsp->fConst175 - dsp->fConst176);
	dsp->fConst178 = ((dsp->fConst176 + (1.0f - dsp->fConst175)) * dsp->fConst171);
	dsp->fConst179 = ((expf((1.11111116f * dsp->fConst170)) / dsp->fConst171) + -1.0f);
	dsp->fConst180 = floorf(((0.0316039994f * dsp->fConst0) + 0.5f));
	dsp->iConst181 = (int)min(2048.0f, max(0.0f, (dsp->fConst169 - dsp->fConst180)));
	dsp->iConst182 = (int)min(1024.0f, max(0.0f, (dsp->fConst180 + -1.0f)));
	dsp->fConst183 = floorf(((0.174713001f * dsp->fConst0) + 0.5f));
	dsp->fConst184 = ((0.0f - (6.90775537f * dsp->fConst183)) / dsp->fConst0);
	dsp->fConst185 = expf((0.454545468f * dsp->fConst184));
	dsp->fConst186 = mydsp_faustpower2_f(dsp->fConst185);
	dsp->fConst187 = (1.0f - (dsp->fConst97 * dsp->fConst186));
	dsp->fConst188 = (1.0f - dsp->fConst186);
	dsp->fConst189 = (dsp->fConst187 / dsp->fConst188);
	dsp->fConst190 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst187) / mydsp_faustpower2_f(dsp->fConst188)) + -1.0f)));
	dsp->fConst191 = (dsp->fConst189 - dsp->fConst190);
	dsp->fConst192 = ((dsp->fConst190 + (1.0f - dsp->fConst189)) * dsp->fConst185);
	dsp->fConst193 = ((expf((1.11111116f * dsp->fConst184)) / dsp->fConst185) + -1.0f);
	dsp->fConst194 = floorf(((0.0229039993f * dsp->fConst0) + 0.5f));
	dsp->iConst195 = (int)min(4096.0f, max(0.0f, (dsp->fConst183 - dsp->fConst194)));
	dsp->iConst196 = (int)min(512.0f, max(0.0f, (dsp->fConst194 + -1.0f)));
	dsp->fConst197 = floorf(((0.153128996f * dsp->fConst0) + 0.5f));
	dsp->fConst198 = ((0.0f - (6.90775537f * dsp->fConst197)) / dsp->fConst0);
	dsp->fConst199 = expf((0.454545468f * dsp->fConst198));
	dsp->fConst200 = mydsp_faustpower2_f(dsp->fConst199);
	dsp->fConst201 = (1.0f - (dsp->fConst97 * dsp->fConst200));
	dsp->fConst202 = (1.0f - dsp->fConst200);
	dsp->fConst203 = (dsp->fConst201 / dsp->fConst202);
	dsp->fConst204 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst201) / mydsp_faustpower2_f(dsp->fConst202)) + -1.0f)));
	dsp->fConst205 = (dsp->fConst203 - dsp->fConst204);
	dsp->fConst206 = ((dsp->fConst204 + (1.0f - dsp->fConst203)) * dsp->fConst199);
	dsp->fConst207 = ((expf((1.11111116f * dsp->fConst198)) / dsp->fConst199) + -1.0f);
	dsp->fConst208 = floorf(((0.0203460008f * dsp->fConst0) + 0.5f));
	dsp->iConst209 = (int)min(4096.0f, max(0.0f, (dsp->fConst197 - dsp->fConst208)));
	dsp->iConst210 = (int)min(512.0f, max(0.0f, (dsp->fConst208 + -1.0f)));
	
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulp", &dsp->fVslider45, 2.73000002f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gulpdecay", &dsp->fVslider46, 63.0f, 0.0f, 100.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider44, 100.0f, 10.0f, 500.0f, 10.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "q_bl", &dsp->fVslider47, 0.989000022f, 0.800000012f, 0.990999997f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider43, 0.200000003f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "cp");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "clapfreq", &dsp->fVslider22, 3000.0f, 2000.0f, 5000.0f, 10.0f);
	ui_interface->addButton(ui_interface->uiInterface, "cp", &dsp->fButton0);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay", &dsp->fVslider23, 90.0f, 2.0f, 1500.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider21, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "hatz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "decay_oh", &dsp->fVslider40, 1401.90002f, 2.0f, 2000.0f, 0.100000001f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filt");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider41, 6150.3999f, 300.0f, 8000.0f, 0.200000003f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addButton(ui_interface->uiInterface, "hh", &dsp->fButton2);
	ui_interface->addButton(ui_interface->uiInterface, "oh", &dsp->fButton3);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider42, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "reverb", &dsp->fVslider52, 0.100000001f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "sd");
	ui_interface->addButton(ui_interface->uiInterface, "sd", &dsp->fButton1);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "sizzle", &dsp->fVslider39, 0.5f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "tone", &dsp->fVslider38, 1.0f, 1.0f, 2.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider36, 0.200000003f, 0.0f, 1.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider37, 0.200000003f, 0.0f, 2.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
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
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider48, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton6);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string2");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider49, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton7);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string3");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider50, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton8);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "string4");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider51, 440.0f, 50.0f, 1000.0f, 0.00999999978f);
	ui_interface->addButton(ui_interface->uiInterface, "gate", &dsp->fButton9);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "wub");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "controls");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "fattack", &dsp->fVslider31, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "fdecay", &dsp->fVslider32, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "filter_basis", &dsp->fVslider27, 0.200000003f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "filter_env", &dsp->fVslider28, 0.200000003f, 0.0f, 10.0f, 0.00999999978f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "filter_q", &dsp->fVslider35, 0.888999999f, 0.800000012f, 1.10000002f, 0.00100000005f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "frelease", &dsp->fVslider30, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "fsustain", &dsp->fVslider33, 0.5f, 0.0f, 1.0f, 0.100000001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "release", &dsp->fVslider34, 1.0f, 0.100000001f, 1000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "vol", &dsp->fVslider24, 0.200000003f, 0.0f, 5.0f, 0.00999999978f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "freq", &dsp->fVslider26, 100.0f, 10.0f, 2000.0f, 0.100000001f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "gate", &dsp->fVslider29, 0.0f, 0.0f, 1.0f, 1.0f);
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "portamento", &dsp->fVslider25, 0.5f, 0.00999999978f, 1.0f, 0.00999999978f);
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
	int iSlow4 = (fSlow3 > 0.0f);
	float fSlow5 = (0.00100000005f * (float)dsp->fVslider4);
	float fSlow6 = (0.00100000005f * (float)dsp->fVslider5);
	float fSlow7 = expf((0.0f - (dsp->fConst7 / (iSlow4?fSlow6:fSlow5))));
	float fSlow8 = ((1.0f - fSlow7) * (iSlow4?fSlow3:0.0f));
	float fSlow9 = (float)dsp->fVslider6;
	float fSlow10 = (float)dsp->fVslider7;
	float fSlow11 = (dsp->fConst8 * fSlow10);
	float fSlow12 = (0.00999999978f * (float)dsp->fVslider8);
	float fSlow13 = (float)dsp->fVslider9;
	float fSlow14 = (dsp->fConst10 * fSlow10);
	float fSlow15 = (float)dsp->fVslider10;
	float fSlow16 = (dsp->fConst11 * fSlow10);
	float fSlow17 = (float)dsp->fVslider11;
	float fSlow18 = (dsp->fConst12 * fSlow10);
	float fSlow19 = (float)dsp->fVslider12;
	float fSlow20 = (dsp->fConst9 * fSlow10);
	float fSlow21 = (float)dsp->fVslider13;
	float fSlow22 = (dsp->fConst13 * fSlow10);
	float fSlow23 = (float)dsp->fVslider14;
	float fSlow24 = (dsp->fConst14 * fSlow10);
	float fSlow25 = (float)dsp->fVslider15;
	int iSlow26 = (fSlow25 > 0.0f);
	float fSlow27 = expf((0.0f - (dsp->fConst7 / (iSlow26?fSlow6:fSlow5))));
	float fSlow28 = ((1.0f - fSlow27) * (iSlow26?fSlow25:0.0f));
	float fSlow29 = (float)dsp->fVslider16;
	float fSlow30 = (dsp->fConst8 * fSlow29);
	float fSlow31 = (dsp->fConst10 * fSlow29);
	float fSlow32 = (dsp->fConst11 * fSlow29);
	float fSlow33 = (dsp->fConst12 * fSlow29);
	float fSlow34 = (dsp->fConst9 * fSlow29);
	float fSlow35 = (dsp->fConst13 * fSlow29);
	float fSlow36 = (dsp->fConst14 * fSlow29);
	float fSlow37 = (float)dsp->fVslider17;
	int iSlow38 = (fSlow37 > 0.0f);
	float fSlow39 = expf((0.0f - (dsp->fConst7 / (iSlow38?fSlow6:fSlow5))));
	float fSlow40 = ((1.0f - fSlow39) * (iSlow38?fSlow37:0.0f));
	float fSlow41 = (float)dsp->fVslider18;
	float fSlow42 = (dsp->fConst8 * fSlow41);
	float fSlow43 = (dsp->fConst10 * fSlow41);
	float fSlow44 = (dsp->fConst11 * fSlow41);
	float fSlow45 = (dsp->fConst12 * fSlow41);
	float fSlow46 = (dsp->fConst9 * fSlow41);
	float fSlow47 = (dsp->fConst13 * fSlow41);
	float fSlow48 = (dsp->fConst14 * fSlow41);
	float fSlow49 = (float)dsp->fVslider19;
	int iSlow50 = (fSlow49 > 0.0f);
	float fSlow51 = expf((0.0f - (dsp->fConst7 / (iSlow50?fSlow6:fSlow5))));
	float fSlow52 = ((1.0f - fSlow51) * (iSlow50?fSlow49:0.0f));
	float fSlow53 = (float)dsp->fVslider20;
	float fSlow54 = (dsp->fConst8 * fSlow53);
	float fSlow55 = (dsp->fConst10 * fSlow53);
	float fSlow56 = (dsp->fConst11 * fSlow53);
	float fSlow57 = (dsp->fConst12 * fSlow53);
	float fSlow58 = (dsp->fConst9 * fSlow53);
	float fSlow59 = (dsp->fConst13 * fSlow53);
	float fSlow60 = (dsp->fConst14 * fSlow53);
	float fSlow61 = (float)dsp->fVslider21;
	float fSlow62 = sinf((3.14159274f * min(0.25f, (dsp->fConst18 * (float)dsp->fVslider22))));
	float fSlow63 = (2.0f * fSlow62);
	float fSlow64 = min(-0.135579944f, min(2.0f, ((1.0f / fSlow62) - fSlow62)));
	float fSlow65 = (float)dsp->fButton0;
	float fSlow66 = (0.00100000005f * (float)dsp->fVslider23);
	float fSlow67 = (float)dsp->fVslider24;
	float fSlow68 = (float)dsp->fVslider25;
	float fSlow69 = (0.00100000005f * (fSlow68 * (float)dsp->fVslider26));
	float fSlow70 = (1.0f - (0.00100000005f * fSlow68));
	float fSlow71 = (float)dsp->fVslider27;
	float fSlow72 = (float)dsp->fVslider28;
	float fSlow73 = (float)dsp->fVslider29;
	int iSlow74 = (fSlow73 > 0.0f);
	float fSlow75 = (0.00100000005f * (float)dsp->fVslider30);
	float fSlow76 = (float)dsp->fVslider31;
	int iSlow77 = (int)(dsp->fConst20 * fSlow76);
	float fSlow78 = (0.00100000005f * (float)dsp->fVslider32);
	float fSlow79 = (0.00100000005f * fSlow76);
	float fSlow80 = ((float)iSlow74 * (float)dsp->fVslider33);
	float fSlow81 = expf((0.0f - (dsp->fConst7 / (iSlow74?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider34)))));
	float fSlow82 = ((1.0f - fSlow81) * (iSlow74?fSlow73:0.0f));
	float fSlow83 = (2.0f * (1.0f - powf((float)dsp->fVslider35, 0.25f)));
	float fSlow84 = (8.0f * ((float)dsp->fVslider36 * (float)dsp->fVslider37));
	float fSlow85 = (float)dsp->fVslider38;
	float fSlow86 = sinf((3.14159274f * min(0.25f, (dsp->fConst22 * fSlow85))));
	float fSlow87 = (2.0f * fSlow86);
	float fSlow88 = (float)dsp->fButton1;
	float fSlow89 = (float)dsp->fVslider39;
	float fSlow90 = (0.5f * (fSlow89 + 0.200000003f));
	float fSlow91 = ((2.0f * fSlow89) + 0.5f);
	float fSlow92 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow91)), 0.25f))), min(2.0f, ((1.0f / fSlow86) - fSlow86)));
	float fSlow93 = sinf((3.14159274f * min(0.25f, (dsp->fConst29 * fSlow85))));
	float fSlow94 = (2.0f * fSlow93);
	float fSlow95 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow91)), 0.25f))), min(2.0f, ((1.0f / fSlow93) - fSlow93)));
	float fSlow96 = (dsp->fConst32 * fSlow89);
	float fSlow97 = (float)dsp->fButton2;
	float fSlow98 = (float)dsp->fButton3;
	float fSlow99 = (0.00100000005f * (float)dsp->fVslider40);
	float fSlow100 = sinf((3.14159274f * min(0.25f, (dsp->fConst18 * (float)dsp->fVslider41))));
	float fSlow101 = (2.0f * fSlow100);
	float fSlow102 = min(0.519834399f, min(2.0f, ((1.0f / fSlow100) - fSlow100)));
	float fSlow103 = (float)dsp->fVslider42;
	float fSlow104 = ((fSlow103 > 1.0f)?1.0f:((fSlow103 < -1.0f)?-1.0f:fSlow103));
	float fSlow105 = (float)dsp->fVslider43;
	float fSlow106 = (dsp->fConst18 * (float)dsp->fVslider44);
	float fSlow107 = (float)dsp->fVslider45;
	float fSlow108 = (float)dsp->fButton4;
	float fSlow109 = (float)dsp->fButton5;
	float fSlow110 = ((0.00100000005f * (float)dsp->fVslider46) + 0.00600000005f);
	float fSlow111 = (dsp->fConst0 * fSlow110);
	float fSlow112 = (dsp->fConst18 / (fSlow110 + -0.00600000005f));
	float fSlow113 = (float)dsp->fVslider47;
	float fSlow114 = (float)dsp->fVslider48;
	float fSlow115 = (dsp->fConst0 / fSlow114);
	float fSlow116 = (fSlow115 + -0.999994993f);
	float fSlow117 = floorf(fSlow116);
	float fSlow118 = (fSlow115 + (-1.0f - fSlow117));
	float fSlow119 = (fSlow115 + (-2.0f - fSlow117));
	float fSlow120 = (fSlow115 + (-3.0f - fSlow117));
	float fSlow121 = (((0.0f - fSlow118) * (0.0f - (0.5f * fSlow119))) * (0.0f - (0.333333343f * fSlow120)));
	float fSlow122 = (float)dsp->fHslider0;
	float fSlow123 = expf((0.0f - (dsp->fConst91 / (fSlow122 * fSlow114))));
	float fSlow124 = (float)dsp->fHslider1;
	float fSlow125 = (float)dsp->fHslider2;
	float fSlow126 = (1.0f / fSlow125);
	float fSlow127 = (1.0f / (float)dsp->fHslider3);
	float fSlow128 = (1.0f - fSlow127);
	float fSlow129 = (1.0f / fSlow128);
	float fSlow130 = (float)dsp->fHslider4;
	float fSlow131 = (1.0f / fSlow130);
	float fSlow132 = (1.0f / (float)dsp->fHslider5);
	float fSlow133 = (1.0f - fSlow132);
	float fSlow134 = (1.0f / fSlow133);
	float fSlow135 = (dsp->fConst2 * fSlow124);
	float fSlow136 = (float)dsp->fHslider6;
	float fSlow137 = (float)dsp->fButton6;
	float fSlow138 = (float)dsp->fHslider8;
	float fSlow139 = ((float)dsp->fHslider7 + fSlow138);
	float fSlow140 = (dsp->fConst20 * fSlow139);
	float fSlow141 = (dsp->fConst20 * fSlow138);
	float fSlow142 = (1.0f / (0.0f - (dsp->fConst20 * (fSlow138 - fSlow139))));
	float fSlow143 = (dsp->fConst92 / fSlow138);
	int iSlow144 = (int)fSlow116;
	int iSlow145 = min(8192, max(0, iSlow144));
	float fSlow146 = (fSlow115 - fSlow117);
	float fSlow147 = ((0.0f - fSlow119) * (0.0f - (0.5f * fSlow120)));
	int iSlow148 = min(8192, max(0, (iSlow144 + 1)));
	float fSlow149 = (0.5f * (fSlow118 * (0.0f - fSlow120)));
	int iSlow150 = min(8192, max(0, (iSlow144 + 2)));
	float fSlow151 = (0.166666672f * (fSlow118 * fSlow119));
	int iSlow152 = min(8192, max(0, (iSlow144 + 3)));
	float fSlow153 = (float)dsp->fVslider49;
	float fSlow154 = (dsp->fConst0 / fSlow153);
	float fSlow155 = (fSlow154 + -0.999994993f);
	float fSlow156 = floorf(fSlow155);
	float fSlow157 = (fSlow154 + (-1.0f - fSlow156));
	float fSlow158 = (fSlow154 + (-2.0f - fSlow156));
	float fSlow159 = (fSlow154 + (-3.0f - fSlow156));
	float fSlow160 = (((0.0f - fSlow157) * (0.0f - (0.5f * fSlow158))) * (0.0f - (0.333333343f * fSlow159)));
	float fSlow161 = expf((0.0f - (dsp->fConst91 / (fSlow122 * fSlow153))));
	float fSlow162 = (float)dsp->fButton7;
	int iSlow163 = (int)fSlow155;
	int iSlow164 = min(8192, max(0, iSlow163));
	float fSlow165 = (fSlow154 - fSlow156);
	float fSlow166 = ((0.0f - fSlow158) * (0.0f - (0.5f * fSlow159)));
	int iSlow167 = min(8192, max(0, (iSlow163 + 1)));
	float fSlow168 = (0.5f * (fSlow157 * (0.0f - fSlow159)));
	int iSlow169 = min(8192, max(0, (iSlow163 + 2)));
	float fSlow170 = (0.166666672f * (fSlow157 * fSlow158));
	int iSlow171 = min(8192, max(0, (iSlow163 + 3)));
	float fSlow172 = (float)dsp->fVslider50;
	float fSlow173 = (dsp->fConst0 / fSlow172);
	float fSlow174 = (fSlow173 + -0.999994993f);
	float fSlow175 = floorf(fSlow174);
	float fSlow176 = (fSlow173 + (-1.0f - fSlow175));
	float fSlow177 = (fSlow173 + (-2.0f - fSlow175));
	float fSlow178 = (fSlow173 + (-3.0f - fSlow175));
	float fSlow179 = (((0.0f - fSlow176) * (0.0f - (0.5f * fSlow177))) * (0.0f - (0.333333343f * fSlow178)));
	float fSlow180 = expf((0.0f - (dsp->fConst91 / (fSlow122 * fSlow172))));
	float fSlow181 = (float)dsp->fButton8;
	int iSlow182 = (int)fSlow174;
	int iSlow183 = min(8192, max(0, iSlow182));
	float fSlow184 = (fSlow173 - fSlow175);
	float fSlow185 = ((0.0f - fSlow177) * (0.0f - (0.5f * fSlow178)));
	int iSlow186 = min(8192, max(0, (iSlow182 + 1)));
	float fSlow187 = (0.5f * (fSlow176 * (0.0f - fSlow178)));
	int iSlow188 = min(8192, max(0, (iSlow182 + 2)));
	float fSlow189 = (0.166666672f * (fSlow176 * fSlow177));
	int iSlow190 = min(8192, max(0, (iSlow182 + 3)));
	float fSlow191 = (float)dsp->fVslider51;
	float fSlow192 = (dsp->fConst0 / fSlow191);
	float fSlow193 = (fSlow192 + -0.999994993f);
	float fSlow194 = floorf(fSlow193);
	float fSlow195 = (fSlow192 + (-1.0f - fSlow194));
	float fSlow196 = (fSlow192 + (-2.0f - fSlow194));
	float fSlow197 = (fSlow192 + (-3.0f - fSlow194));
	float fSlow198 = (((0.0f - fSlow195) * (0.0f - (0.5f * fSlow196))) * (0.0f - (0.333333343f * fSlow197)));
	float fSlow199 = expf((0.0f - (dsp->fConst91 / (fSlow122 * fSlow191))));
	float fSlow200 = (float)dsp->fButton9;
	int iSlow201 = (int)fSlow193;
	int iSlow202 = min(8192, max(0, iSlow201));
	float fSlow203 = (fSlow192 - fSlow194);
	float fSlow204 = ((0.0f - fSlow196) * (0.0f - (0.5f * fSlow197)));
	int iSlow205 = min(8192, max(0, (iSlow201 + 1)));
	float fSlow206 = (0.5f * (fSlow195 * (0.0f - fSlow197)));
	int iSlow207 = min(8192, max(0, (iSlow201 + 2)));
	float fSlow208 = (0.166666672f * (fSlow195 * fSlow196));
	int iSlow209 = min(8192, max(0, (iSlow201 + 3)));
	float fSlow210 = (float)dsp->fVslider52;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iVec1[0] = 1;
			dsp->fRec2[0] = ((dsp->fRec2[1] * fSlow7) + fSlow8);
			dsp->fRec5[0] = (dsp->fConst9 + (dsp->fRec5[1] - floorf((dsp->fConst9 + dsp->fRec5[1]))));
			float fTemp0 = ((fSlow12 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec5[0])]) + 1.0f);
			float fTemp1 = (dsp->fRec4[1] + (fSlow11 * fTemp0));
			dsp->fRec4[0] = (fTemp1 - floorf(fTemp1));
			float fTemp2 = (dsp->fRec6[1] + (fSlow14 * fTemp0));
			dsp->fRec6[0] = (fTemp2 - floorf(fTemp2));
			float fTemp3 = (dsp->fRec7[1] + (fSlow16 * fTemp0));
			dsp->fRec7[0] = (fTemp3 - floorf(fTemp3));
			float fTemp4 = (dsp->fRec8[1] + (fSlow18 * fTemp0));
			dsp->fRec8[0] = (fTemp4 - floorf(fTemp4));
			float fTemp5 = (dsp->fRec9[1] + (fSlow20 * fTemp0));
			dsp->fRec9[0] = (fTemp5 - floorf(fTemp5));
			float fTemp6 = (dsp->fRec10[1] + (fSlow22 * fTemp0));
			dsp->fRec10[0] = (fTemp6 - floorf(fTemp6));
			float fTemp7 = (dsp->fRec11[1] + (fSlow24 * fTemp0));
			dsp->fRec11[0] = (fTemp7 - floorf(fTemp7));
			dsp->fRec1[0] = ((fSlow2 * (dsp->fRec2[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec4[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec6[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec7[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec8[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec9[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec10[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec11[0])])))) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec1[2]) + (dsp->fConst16 * dsp->fRec1[1]))));
			float fTemp8 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec1[2] + (dsp->fRec1[0] + (2.0f * dsp->fRec1[1])))))) - fSlow1);
			dsp->fVec2[0] = fTemp8;
			dsp->fRec0[0] = (dsp->fConst2 * ((fTemp8 - dsp->fVec2[1]) + (dsp->fConst17 * dsp->fRec0[1])));
			dsp->fRec14[0] = ((dsp->fRec14[1] * fSlow27) + fSlow28);
			float fTemp9 = (dsp->fRec15[1] + (fSlow30 * fTemp0));
			dsp->fRec15[0] = (fTemp9 - floorf(fTemp9));
			float fTemp10 = (dsp->fRec16[1] + (fSlow31 * fTemp0));
			dsp->fRec16[0] = (fTemp10 - floorf(fTemp10));
			float fTemp11 = (dsp->fRec17[1] + (fSlow32 * fTemp0));
			dsp->fRec17[0] = (fTemp11 - floorf(fTemp11));
			float fTemp12 = (dsp->fRec18[1] + (fSlow33 * fTemp0));
			dsp->fRec18[0] = (fTemp12 - floorf(fTemp12));
			float fTemp13 = (dsp->fRec19[1] + (fSlow34 * fTemp0));
			dsp->fRec19[0] = (fTemp13 - floorf(fTemp13));
			float fTemp14 = (dsp->fRec20[1] + (fSlow35 * fTemp0));
			dsp->fRec20[0] = (fTemp14 - floorf(fTemp14));
			float fTemp15 = (dsp->fRec21[1] + (fSlow36 * fTemp0));
			dsp->fRec21[0] = (fTemp15 - floorf(fTemp15));
			dsp->fRec13[0] = ((fSlow2 * (dsp->fRec14[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec15[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec16[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec17[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec18[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec19[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec20[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec21[0])])))) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec13[2]) + (dsp->fConst16 * dsp->fRec13[1]))));
			float fTemp16 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec13[2] + (dsp->fRec13[0] + (2.0f * dsp->fRec13[1])))))) - fSlow1);
			dsp->fVec3[0] = fTemp16;
			dsp->fRec12[0] = (dsp->fConst2 * ((fTemp16 - dsp->fVec3[1]) + (dsp->fConst17 * dsp->fRec12[1])));
			dsp->fRec24[0] = ((dsp->fRec24[1] * fSlow39) + fSlow40);
			float fTemp17 = (dsp->fRec25[1] + (fSlow42 * fTemp0));
			dsp->fRec25[0] = (fTemp17 - floorf(fTemp17));
			float fTemp18 = (dsp->fRec26[1] + (fSlow43 * fTemp0));
			dsp->fRec26[0] = (fTemp18 - floorf(fTemp18));
			float fTemp19 = (dsp->fRec27[1] + (fSlow44 * fTemp0));
			dsp->fRec27[0] = (fTemp19 - floorf(fTemp19));
			float fTemp20 = (dsp->fRec28[1] + (fSlow45 * fTemp0));
			dsp->fRec28[0] = (fTemp20 - floorf(fTemp20));
			float fTemp21 = (dsp->fRec29[1] + (fSlow46 * fTemp0));
			dsp->fRec29[0] = (fTemp21 - floorf(fTemp21));
			float fTemp22 = (dsp->fRec30[1] + (fSlow47 * fTemp0));
			dsp->fRec30[0] = (fTemp22 - floorf(fTemp22));
			float fTemp23 = (dsp->fRec31[1] + (fSlow48 * fTemp0));
			dsp->fRec31[0] = (fTemp23 - floorf(fTemp23));
			dsp->fRec23[0] = ((fSlow2 * (dsp->fRec24[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec25[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec26[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec27[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec28[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec29[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec30[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec31[0])])))) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec23[2]) + (dsp->fConst16 * dsp->fRec23[1]))));
			float fTemp24 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec23[2] + (dsp->fRec23[0] + (2.0f * dsp->fRec23[1])))))) - fSlow1);
			dsp->fVec4[0] = fTemp24;
			dsp->fRec22[0] = (dsp->fConst2 * ((fTemp24 - dsp->fVec4[1]) + (dsp->fConst17 * dsp->fRec22[1])));
			dsp->fRec34[0] = ((dsp->fRec34[1] * fSlow51) + fSlow52);
			float fTemp25 = (dsp->fRec35[1] + (fSlow54 * fTemp0));
			dsp->fRec35[0] = (fTemp25 - floorf(fTemp25));
			float fTemp26 = (dsp->fRec36[1] + (fSlow55 * fTemp0));
			dsp->fRec36[0] = (fTemp26 - floorf(fTemp26));
			float fTemp27 = (dsp->fRec37[1] + (fSlow56 * fTemp0));
			dsp->fRec37[0] = (fTemp27 - floorf(fTemp27));
			float fTemp28 = (dsp->fRec38[1] + (fSlow57 * fTemp0));
			dsp->fRec38[0] = (fTemp28 - floorf(fTemp28));
			float fTemp29 = (dsp->fRec39[1] + (fSlow58 * fTemp0));
			dsp->fRec39[0] = (fTemp29 - floorf(fTemp29));
			float fTemp30 = (dsp->fRec40[1] + (fSlow59 * fTemp0));
			dsp->fRec40[0] = (fTemp30 - floorf(fTemp30));
			float fTemp31 = (dsp->fRec41[1] + (fSlow60 * fTemp0));
			dsp->fRec41[0] = (fTemp31 - floorf(fTemp31));
			dsp->fRec33[0] = ((fSlow2 * (dsp->fRec34[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec35[0])]) + (fSlow13 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec36[0])])) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec37[0])])) + (fSlow17 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec38[0])])) + (fSlow19 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec39[0])])) + (fSlow21 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec40[0])])) + (fSlow23 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec41[0])])))) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec33[2]) + (dsp->fConst16 * dsp->fRec33[1]))));
			float fTemp32 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec33[2] + (dsp->fRec33[0] + (2.0f * dsp->fRec33[1])))))) - fSlow1);
			dsp->fVec5[0] = fTemp32;
			dsp->fRec32[0] = (dsp->fConst2 * ((fTemp32 - dsp->fVec5[1]) + (dsp->fConst17 * dsp->fRec32[1])));
			float fTemp33 = (float)tanhf((float)(fSlow0 * (((dsp->fRec0[0] + dsp->fRec12[0]) + dsp->fRec22[0]) + dsp->fRec32[0])));
			float fTemp34 = (dsp->fRec42[1] + (fSlow63 * dsp->fRec43[1]));
			float fTemp35 = (1.25313282f * fTemp34);
			float fTemp36 = (1.3831259f * fabsf(fTemp34));
			float fTemp37 = ((fTemp34 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp36 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp36, 0.0f), 10.0f) + -0.200000003f)))))):fTemp36))):(0.797999978f * ((fTemp35 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp35, 0.0f), 10.0f) + -0.434782594f)))))):fTemp35)));
			dsp->fRec42[0] = fTemp37;
			dsp->iRec44[0] = ((1103515245 * dsp->iRec44[1]) + 12345);
			float fTemp38 = (4.65661287e-10f * (float)dsp->iRec44[0]);
			float fTemp39 = (fTemp38 - (fTemp37 + (fSlow64 * dsp->fRec43[1])));
			float fTemp40 = (1.25313282f * fTemp39);
			float fTemp41 = (1.3831259f * fabsf(fTemp39));
			float fTemp42 = ((fTemp39 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp41 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp41, 0.0f), 10.0f) + -0.200000003f)))))):fTemp41))):(0.797999978f * ((fTemp40 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp40, 0.0f), 10.0f) + -0.434782594f)))))):fTemp40)));
			float fTemp43 = (dsp->fRec43[1] + (fSlow63 * fTemp42));
			float fTemp44 = (1.25313282f * fTemp43);
			float fTemp45 = (1.3831259f * fabsf(fTemp43));
			dsp->fRec43[0] = ((fTemp43 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp45 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp45, 0.0f), 10.0f) + -0.200000003f)))))):fTemp45))):(0.797999978f * ((fTemp44 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp44, 0.0f), 10.0f) + -0.434782594f)))))):fTemp44)));
			dsp->fVec6[0] = fSlow65;
			dsp->fRec46[0] = ((((fSlow65 - dsp->fVec6[1]) > 0.0f) > 0)?dsp->fConst19:max(0.0f, (dsp->fRec46[1] + -1.0f)));
			int iTemp46 = (dsp->fRec46[0] > 0.0f);
			int iTemp47 = (iTemp46 > 0);
			float fTemp48 = expf((0.0f - (dsp->fConst7 / (iTemp47?0.00800000038f:fSlow66))));
			dsp->fRec45[0] = ((dsp->fRec45[1] * fTemp48) + ((iTemp47?(float)iTemp46:0.0f) * (1.0f - fTemp48)));
			float fTemp49 = (fSlow61 * (dsp->fRec43[0] * dsp->fRec45[0]));
			float fTemp50 = ((fTemp49 > 1.0f)?1.0f:((fTemp49 < -1.0f)?-1.0f:fTemp49));
			float fTemp51 = (fTemp33 + fTemp50);
			dsp->fRec50[0] = (fSlow69 + (fSlow70 * dsp->fRec50[1]));
			dsp->iRec52[0] = (iSlow74 * (dsp->iRec52[1] + 1));
			int iTemp52 = (dsp->iRec52[0] < iSlow77);
			float fTemp53 = expf((0.0f - (dsp->fConst7 / (iSlow74?(iTemp52?fSlow79:fSlow78):fSlow75))));
			dsp->fRec51[0] = ((dsp->fRec51[1] * fTemp53) + ((iSlow74?(iTemp52?(float)iSlow74:fSlow80):0.0f) * (1.0f - fTemp53)));
			float fTemp54 = sinf((3.14159274f * min(0.25f, (dsp->fConst18 * (dsp->fRec50[0] * (fSlow71 + (fSlow72 * dsp->fRec51[0])))))));
			float fTemp55 = (dsp->fRec48[1] + (2.0f * (fTemp54 * dsp->fRec49[1])));
			float fTemp56 = (fTemp55 + 0.119999997f);
			float fTemp57 = (0.666666687f * fTemp56);
			float fTemp58 = ((fTemp57 > 1.0f)?1.0f:((fTemp57 < -1.0f)?-1.0f:(fTemp55 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp56))))));
			dsp->fRec48[0] = (fTemp58 + -0.119999997f);
			dsp->fRec54[0] = ((dsp->fRec54[1] * fSlow81) + fSlow82);
			float fTemp59 = max(1.00000001e-07f, fabsf(dsp->fRec50[0]));
			float fTemp60 = (dsp->fRec55[1] + (dsp->fConst8 * fTemp59));
			float fTemp61 = (fTemp60 + -1.0f);
			int iTemp62 = (fTemp61 < 0.0f);
			dsp->fRec55[0] = (iTemp62?fTemp60:fTemp61);
			float fRec56 = (iTemp62?fTemp60:(fTemp60 + ((1.0f - (dsp->fConst0 / fTemp59)) * fTemp61)));
			dsp->fRec53[0] = ((dsp->fRec54[0] * ((2.0f * fRec56) + -1.0f)) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec53[2]) + (dsp->fConst16 * dsp->fRec53[1]))));
			float fTemp63 = (dsp->fConst21 * (dsp->fRec53[2] + (dsp->fRec53[0] + (2.0f * dsp->fRec53[1]))));
			float fTemp64 = (fTemp58 + (dsp->fRec49[1] * min(fSlow83, min(2.0f, ((1.0f / fTemp54) - fTemp54)))));
			float fTemp65 = (fTemp63 + (0.239999995f - fTemp64));
			float fTemp66 = (0.666666687f * fTemp65);
			float fTemp67 = (((fTemp66 > 1.0f)?1.0f:((fTemp66 < -1.0f)?-1.0f:(fTemp63 + (0.239999995f - (fTemp64 + (0.148148149f * mydsp_faustpower3_f(fTemp65))))))) + -0.119999997f);
			float fTemp68 = (dsp->fRec49[1] + (2.0f * (fTemp54 * fTemp67)));
			float fTemp69 = (fTemp68 + 0.119999997f);
			float fTemp70 = (0.666666687f * fTemp69);
			dsp->fRec49[0] = (((fTemp70 > 1.0f)?1.0f:((fTemp70 < -1.0f)?-1.0f:(fTemp68 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp69)))))) + -0.119999997f);
			dsp->fRec47[0] = ((fSlow67 * dsp->fRec48[0]) - (dsp->fConst6 * ((dsp->fConst15 * dsp->fRec47[2]) + (dsp->fConst16 * dsp->fRec47[1]))));
			float fTemp71 = (dsp->fConst6 * (dsp->fRec47[2] + (dsp->fRec47[0] + (2.0f * dsp->fRec47[1]))));
			float fTemp72 = (fTemp71 + 0.200000003f);
			float fTemp73 = (0.666666687f * fTemp72);
			float fTemp74 = (((fTemp73 > 1.0f)?1.0f:((fTemp73 < -1.0f)?-1.0f:(fTemp71 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp72)))))) + -0.200000003f);
			float fTemp75 = (dsp->fRec57[1] + (fSlow87 * dsp->fRec58[1]));
			float fTemp76 = (1.02040815f * fTemp75);
			float fTemp77 = (min(max(fTemp76, 0.0f), 10.0f) + -0.625f);
			float fTemp78 = (1.77777779f * fTemp77);
			float fTemp79 = (1.33333337f * fabsf(fTemp75));
			float fTemp80 = (min(max(fTemp79, 0.0f), 10.0f) + -0.333333343f);
			float fTemp81 = (1.0f * fTemp80);
			float fTemp82 = ((fTemp75 <= 0.0f)?(0.0f - (0.75f * ((fTemp79 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp81 > 1.0f)?1.0f:((fTemp81 < -1.0f)?-1.0f:(fTemp80 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp80))))))))):fTemp79))):(0.980000019f * ((fTemp76 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp78 > 1.0f)?1.0f:((fTemp78 < -1.0f)?-1.0f:(fTemp77 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp77))))))))):fTemp76)));
			dsp->fRec57[0] = fTemp82;
			dsp->fVec7[0] = fSlow88;
			dsp->fRec60[0] = ((((fSlow88 - dsp->fVec7[1]) > 0.0f) > 0)?dsp->fConst26:max(0.0f, (dsp->fRec60[1] + -1.0f)));
			int iTemp83 = (dsp->fRec60[0] > 0.0f);
			int iTemp84 = (iTemp83 > 0);
			float fTemp85 = expf((0.0f - (dsp->fConst7 / (iTemp84?9.99999975e-05f:fSlow90))));
			dsp->fRec61[0] = ((dsp->fRec61[1] * fTemp85) + ((iTemp84?(float)iTemp83:0.0f) * (1.0f - fTemp85)));
			dsp->fRec59[0] = (((float)iTemp83 + (0.289999992f * dsp->fRec61[0])) - (dsp->fConst25 * ((dsp->fConst27 * dsp->fRec59[2]) + (dsp->fConst28 * dsp->fRec59[1]))));
			float fTemp86 = (dsp->fConst25 * (dsp->fRec59[2] + (dsp->fRec59[0] + (2.0f * dsp->fRec59[1]))));
			float fTemp87 = (fTemp86 - (fTemp82 + (fSlow92 * dsp->fRec58[1])));
			float fTemp88 = (1.02040815f * fTemp87);
			float fTemp89 = (min(max(fTemp88, 0.0f), 10.0f) + -0.625f);
			float fTemp90 = (1.77777779f * fTemp89);
			float fTemp91 = (1.33333337f * fabsf(fTemp87));
			float fTemp92 = (min(max(fTemp91, 0.0f), 10.0f) + -0.333333343f);
			float fTemp93 = (1.0f * fTemp92);
			float fTemp94 = ((fTemp87 <= 0.0f)?(0.0f - (0.75f * ((fTemp91 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp93 > 1.0f)?1.0f:((fTemp93 < -1.0f)?-1.0f:(fTemp92 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp92))))))))):fTemp91))):(0.980000019f * ((fTemp88 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp90 > 1.0f)?1.0f:((fTemp90 < -1.0f)?-1.0f:(fTemp89 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp89))))))))):fTemp88)));
			float fTemp95 = (dsp->fRec58[1] + (fSlow87 * fTemp94));
			float fTemp96 = (1.02040815f * fTemp95);
			float fTemp97 = (min(max(fTemp96, 0.0f), 10.0f) + -0.625f);
			float fTemp98 = (1.77777779f * fTemp97);
			float fTemp99 = (1.33333337f * fabsf(fTemp95));
			float fTemp100 = (min(max(fTemp99, 0.0f), 10.0f) + -0.333333343f);
			float fTemp101 = (1.0f * fTemp100);
			dsp->fRec58[0] = ((fTemp95 <= 0.0f)?(0.0f - (0.75f * ((fTemp99 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp101 > 1.0f)?1.0f:((fTemp101 < -1.0f)?-1.0f:(fTemp100 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp100))))))))):fTemp99))):(0.980000019f * ((fTemp96 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp98 > 1.0f)?1.0f:((fTemp98 < -1.0f)?-1.0f:(fTemp97 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp97))))))))):fTemp96)));
			float fTemp102 = (dsp->fRec62[1] + (fSlow94 * dsp->fRec63[1]));
			float fTemp103 = (1.02040815f * fTemp102);
			float fTemp104 = (min(max(fTemp103, 0.0f), 10.0f) + -0.625f);
			float fTemp105 = (1.77777779f * fTemp104);
			float fTemp106 = (1.33333337f * fabsf(fTemp102));
			float fTemp107 = (min(max(fTemp106, 0.0f), 10.0f) + -0.333333343f);
			float fTemp108 = (1.0f * fTemp107);
			float fTemp109 = ((fTemp102 <= 0.0f)?(0.0f - (0.75f * ((fTemp106 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp108 > 1.0f)?1.0f:((fTemp108 < -1.0f)?-1.0f:(fTemp107 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp107))))))))):fTemp106))):(0.980000019f * ((fTemp103 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp105 > 1.0f)?1.0f:((fTemp105 < -1.0f)?-1.0f:(fTemp104 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp104))))))))):fTemp103)));
			dsp->fRec62[0] = fTemp109;
			float fTemp110 = (fTemp86 - (fTemp109 + (fSlow95 * dsp->fRec63[1])));
			float fTemp111 = (1.02040815f * fTemp110);
			float fTemp112 = (min(max(fTemp111, 0.0f), 10.0f) + -0.625f);
			float fTemp113 = (1.77777779f * fTemp112);
			float fTemp114 = (1.33333337f * fabsf(fTemp110));
			float fTemp115 = (min(max(fTemp114, 0.0f), 10.0f) + -0.333333343f);
			float fTemp116 = (1.0f * fTemp115);
			float fTemp117 = ((fTemp110 <= 0.0f)?(0.0f - (0.75f * ((fTemp114 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp116 > 1.0f)?1.0f:((fTemp116 < -1.0f)?-1.0f:(fTemp115 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp115))))))))):fTemp114))):(0.980000019f * ((fTemp111 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp113 > 1.0f)?1.0f:((fTemp113 < -1.0f)?-1.0f:(fTemp112 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp112))))))))):fTemp111)));
			float fTemp118 = (dsp->fRec63[1] + (fSlow94 * fTemp117));
			float fTemp119 = (1.02040815f * fTemp118);
			float fTemp120 = (min(max(fTemp119, 0.0f), 10.0f) + -0.625f);
			float fTemp121 = (1.77777779f * fTemp120);
			float fTemp122 = (1.33333337f * fabsf(fTemp118));
			float fTemp123 = (min(max(fTemp122, 0.0f), 10.0f) + -0.333333343f);
			float fTemp124 = (1.0f * fTemp123);
			dsp->fRec63[0] = ((fTemp118 <= 0.0f)?(0.0f - (0.75f * ((fTemp122 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp124 > 1.0f)?1.0f:((fTemp124 < -1.0f)?-1.0f:(fTemp123 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp123))))))))):fTemp122))):(0.980000019f * ((fTemp119 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp121 > 1.0f)?1.0f:((fTemp121 < -1.0f)?-1.0f:(fTemp120 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp120))))))))):fTemp119)));
			dsp->fRec64[0] = ((4.65661287e-10f * ((float)dsp->iRec44[0] * dsp->fRec61[0])) - (dsp->fConst32 * ((dsp->fConst33 * dsp->fRec64[2]) + (dsp->fConst34 * dsp->fRec64[1]))));
			float fTemp125 = (fSlow84 * ((dsp->fRec58[0] + dsp->fRec63[0]) + (fSlow96 * (dsp->fRec64[2] + (dsp->fRec64[0] + (2.0f * dsp->fRec64[1]))))));
			float fTemp126 = (fTemp125 + -0.100000001f);
			float fTemp127 = (0.666666687f * fTemp126);
			float fTemp128 = (((fTemp127 > 1.0f)?1.0f:((fTemp127 < -1.0f)?-1.0f:(fTemp125 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp126)))))) + 0.100000001f);
			dsp->fVec8[0] = fSlow97;
			dsp->fRec66[0] = ((((fSlow97 - dsp->fVec8[1]) > 0.0f) > 0)?dsp->fConst19:max(0.0f, (dsp->fRec66[1] + -1.0f)));
			int iTemp129 = (dsp->fRec66[0] > 0.0f);
			dsp->fVec9[0] = fSlow98;
			dsp->fRec67[0] = ((((fSlow98 - dsp->fVec9[1]) > 0.0f) > 0)?dsp->fConst19:max(0.0f, (dsp->fRec67[1] + -1.0f)));
			int iTemp130 = (dsp->fRec67[0] > 0.0f);
			int iTemp131 = ((iTemp129 + iTemp130) > 0);
			dsp->iVec10[0] = iTemp131;
			int iTemp132 = (iTemp131 > 0);
			int iTemp133 = ((dsp->iVec10[1] <= 0) & iTemp132);
			dsp->fRec68[0] = ((dsp->fRec68[1] * (float)(1 - iTemp133)) + ((float)iTemp133 * ((0.0839999989f * (float)iTemp129) + (fSlow99 * (float)iTemp130))));
			float fTemp134 = expf((0.0f - (dsp->fConst7 / (iTemp132?9.99999975e-05f:dsp->fRec68[0]))));
			dsp->fRec65[0] = ((dsp->fRec65[1] * fTemp134) + ((iTemp132?(float)iTemp131:0.0f) * (1.0f - fTemp134)));
			float fTemp135 = (dsp->fRec70[1] + (fSlow101 * dsp->fRec71[1]));
			float fTemp136 = (0.666666687f * fTemp135);
			float fTemp137 = ((fTemp136 > 1.0f)?1.0f:((fTemp136 < -1.0f)?-1.0f:(fTemp135 - (0.148148149f * mydsp_faustpower3_f(fTemp135)))));
			dsp->fRec70[0] = fTemp137;
			float fTemp138 = (dsp->fRec73[1] + (fSlow101 * dsp->fRec74[1]));
			float fTemp139 = (0.666666687f * fTemp138);
			float fTemp140 = ((fTemp139 > 1.0f)?1.0f:((fTemp139 < -1.0f)?-1.0f:(fTemp138 - (0.148148149f * mydsp_faustpower3_f(fTemp138)))));
			dsp->fRec73[0] = fTemp140;
			dsp->fVec11[0] = 394.0f;
			float fTemp141 = (dsp->fRec77[1] + (dsp->fConst18 * dsp->fVec11[1]));
			dsp->fRec77[0] = (fTemp141 - floorf(fTemp141));
			float fTemp142 = mydsp_faustpower2_f(((2.0f * dsp->fRec77[0]) + -1.0f));
			dsp->fVec12[0] = fTemp142;
			float fTemp143 = ((fTemp142 - dsp->fVec12[1]) * (float)dsp->iVec1[1]);
			dsp->fVec13[(dsp->IOTA & 255)] = fTemp143;
			dsp->fVec14[0] = 309.0f;
			float fTemp144 = (dsp->fRec78[1] + (dsp->fConst18 * dsp->fVec14[1]));
			dsp->fRec78[0] = (fTemp144 - floorf(fTemp144));
			float fTemp145 = mydsp_faustpower2_f(((2.0f * dsp->fRec78[0]) + -1.0f));
			dsp->fVec15[0] = fTemp145;
			float fTemp146 = ((fTemp145 - dsp->fVec15[1]) * (float)dsp->iVec1[1]);
			dsp->fVec16[(dsp->IOTA & 511)] = fTemp146;
			dsp->fVec17[0] = 493.0f;
			float fTemp147 = (dsp->fRec79[1] + (dsp->fConst18 * dsp->fVec17[1]));
			dsp->fRec79[0] = (fTemp147 - floorf(fTemp147));
			float fTemp148 = mydsp_faustpower2_f(((2.0f * dsp->fRec79[0]) + -1.0f));
			dsp->fVec18[0] = fTemp148;
			float fTemp149 = ((fTemp148 - dsp->fVec18[1]) * (float)dsp->iVec1[1]);
			dsp->fVec19[(dsp->IOTA & 255)] = fTemp149;
			dsp->fVec20[0] = 361.0f;
			float fTemp150 = (dsp->fRec80[1] + (dsp->fConst18 * dsp->fVec20[1]));
			dsp->fRec80[0] = (fTemp150 - floorf(fTemp150));
			float fTemp151 = mydsp_faustpower2_f(((2.0f * dsp->fRec80[0]) + -1.0f));
			dsp->fVec21[0] = fTemp151;
			float fTemp152 = ((fTemp151 - dsp->fVec21[1]) * (float)dsp->iVec1[1]);
			dsp->fVec22[(dsp->IOTA & 511)] = fTemp152;
			dsp->fVec23[0] = 422.0f;
			float fTemp153 = (dsp->fRec81[1] + (dsp->fConst18 * dsp->fVec23[1]));
			dsp->fRec81[0] = (fTemp153 - floorf(fTemp153));
			float fTemp154 = mydsp_faustpower2_f(((2.0f * dsp->fRec81[0]) + -1.0f));
			dsp->fVec24[0] = fTemp154;
			float fTemp155 = ((fTemp154 - dsp->fVec24[1]) * (float)dsp->iVec1[1]);
			dsp->fVec25[(dsp->IOTA & 255)] = fTemp155;
			dsp->fVec26[0] = 203.0f;
			float fTemp156 = (dsp->fRec82[1] + (dsp->fConst18 * dsp->fVec26[1]));
			dsp->fRec82[0] = (fTemp156 - floorf(fTemp156));
			float fTemp157 = mydsp_faustpower2_f(((2.0f * dsp->fRec82[0]) + -1.0f));
			dsp->fVec27[0] = fTemp157;
			float fTemp158 = ((fTemp157 - dsp->fVec27[1]) * (float)dsp->iVec1[1]);
			dsp->fVec28[(dsp->IOTA & 511)] = fTemp158;
			dsp->fRec76[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp143 - (dsp->fConst45 * dsp->fVec13[((dsp->IOTA - dsp->iConst46) & 255)])) - (dsp->fConst47 * dsp->fVec13[((dsp->IOTA - dsp->iConst48) & 255)]))) + (0.000809061516f * ((fTemp146 - (dsp->fConst51 * dsp->fVec16[((dsp->IOTA - dsp->iConst52) & 511)])) - (dsp->fConst53 * dsp->fVec16[((dsp->IOTA - dsp->iConst54) & 511)])))) + (0.000507099379f * ((fTemp149 - (dsp->fConst57 * dsp->fVec19[((dsp->IOTA - dsp->iConst58) & 255)])) - (dsp->fConst59 * dsp->fVec19[((dsp->IOTA - dsp->iConst60) & 255)])))) + (0.000692520756f * ((fTemp152 - (dsp->fConst63 * dsp->fVec22[((dsp->IOTA - dsp->iConst64) & 511)])) - (dsp->fConst65 * dsp->fVec22[((dsp->IOTA - dsp->iConst66) & 511)])))) + (0.000592417084f * ((fTemp155 - (dsp->fConst69 * dsp->fVec25[((dsp->IOTA - dsp->iConst70) & 255)])) - (dsp->fConst71 * dsp->fVec25[((dsp->IOTA - dsp->iConst72) & 255)])))) + (0.00123152707f * ((fTemp158 - (dsp->fConst75 * dsp->fVec28[((dsp->IOTA - dsp->iConst76) & 511)])) - (dsp->fConst77 * dsp->fVec28[((dsp->IOTA - dsp->iConst78) & 511)]))))) - (dsp->fConst41 * ((dsp->fConst79 * dsp->fRec76[2]) + (dsp->fConst80 * dsp->fRec76[1]))));
			float fTemp159 = (dsp->fConst41 * (((dsp->fConst42 * dsp->fRec76[0]) + (dsp->fConst81 * dsp->fRec76[1])) + (dsp->fConst42 * dsp->fRec76[2])));
			float fTemp160 = (fTemp140 + (fSlow102 * dsp->fRec74[1]));
			float fTemp161 = (fTemp159 - fTemp160);
			float fTemp162 = (0.666666687f * fTemp161);
			float fTemp163 = ((fTemp162 > 1.0f)?1.0f:((fTemp162 < -1.0f)?-1.0f:(fTemp159 - (fTemp160 + (0.148148149f * mydsp_faustpower3_f(fTemp161))))));
			float fTemp164 = (dsp->fRec74[1] + (fSlow101 * fTemp163));
			float fTemp165 = (0.666666687f * fTemp164);
			dsp->fRec74[0] = ((fTemp165 > 1.0f)?1.0f:((fTemp165 < -1.0f)?-1.0f:(fTemp164 - (0.148148149f * mydsp_faustpower3_f(fTemp164)))));
			float fRec75 = fTemp163;
			float fTemp166 = (fTemp137 + (fSlow102 * dsp->fRec71[1]));
			float fTemp167 = (fRec75 - fTemp166);
			float fTemp168 = (0.666666687f * fTemp167);
			float fTemp169 = ((fTemp168 > 1.0f)?1.0f:((fTemp168 < -1.0f)?-1.0f:(fRec75 - (fTemp166 + (0.148148149f * mydsp_faustpower3_f(fTemp167))))));
			float fTemp170 = (dsp->fRec71[1] + (fSlow101 * fTemp169));
			float fTemp171 = (0.666666687f * fTemp170);
			dsp->fRec71[0] = ((fTemp171 > 1.0f)?1.0f:((fTemp171 < -1.0f)?-1.0f:(fTemp170 - (0.148148149f * mydsp_faustpower3_f(fTemp170)))));
			float fRec72 = fTemp169;
			dsp->fRec69[0] = (fRec72 - (dsp->fConst82 * ((dsp->fConst83 * dsp->fRec69[2]) + (dsp->fConst84 * dsp->fRec69[1]))));
			float fTemp172 = ((dsp->fRec65[0] * ((dsp->fConst38 * (dsp->fRec69[2] + (dsp->fRec69[0] + (2.0f * dsp->fRec69[1])))) + (9.31322554e-12f * (float)dsp->iRec44[0]))) * fSlow104);
			dsp->fVec29[0] = fSlow108;
			dsp->fRec86[0] = ((((fSlow108 - dsp->fVec29[1]) > 0.0f) > 0)?dsp->fConst85:max(0.0f, (dsp->fRec86[1] + -1.0f)));
			int iTemp173 = (dsp->fRec86[0] > 0.0f);
			dsp->fVec30[0] = fSlow109;
			dsp->fRec87[0] = ((((fSlow109 - dsp->fVec30[1]) > 0.0f) > 0)?dsp->fConst85:max(0.0f, (dsp->fRec87[1] + -1.0f)));
			int iTemp174 = (dsp->fRec87[0] > 0.0f);
			int iTemp175 = ((iTemp173 + iTemp174) > 0);
			dsp->iVec31[0] = iTemp175;
			int iTemp176 = (((iTemp175 - dsp->iVec31[1]) > 0) > 0);
			dsp->fVec32[0] = fSlow110;
			dsp->fRec85[0] = (iTemp176?0.0f:min(fSlow111, ((dsp->fRec85[1] + (dsp->fConst0 * (fSlow110 - dsp->fVec32[1]))) + 1.0f)));
			int iTemp177 = (dsp->fRec85[0] < dsp->fConst86);
			float fTemp178 = sinf((3.14159274f * min(0.25f, (fSlow106 * ((fSlow107 * (iTemp177?((dsp->fRec85[0] < 0.0f)?0.0f:(iTemp177?(dsp->fConst87 * dsp->fRec85[0]):1.0f)):((dsp->fRec85[0] < fSlow111)?((fSlow112 * (0.0f - (dsp->fRec85[0] - dsp->fConst86))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp179 = (dsp->fRec83[1] + (2.0f * (fTemp178 * dsp->fRec84[1])));
			float fTemp180 = (min(max(fTemp179, 0.0f), 10.0f) + -0.714285731f);
			float fTemp181 = (2.33333325f * fTemp180);
			float fTemp182 = (1.14942527f * fabsf(fTemp179));
			float fTemp183 = (min(max(fTemp182, 0.0f), 10.0f) + -0.333333343f);
			float fTemp184 = (1.0f * fTemp183);
			float fTemp185 = ((fTemp179 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp182 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp184 > 1.0f)?1.0f:((fTemp184 < -1.0f)?-1.0f:(fTemp183 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp183))))))))):fTemp182))):((fTemp179 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp181 > 1.0f)?1.0f:((fTemp181 < -1.0f)?-1.0f:(fTemp180 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp180))))))))):fTemp179));
			dsp->fRec83[0] = fTemp185;
			dsp->fRec88[0] = (iTemp176?0.0f:min(dsp->fConst88, (dsp->fRec88[1] + (1.0f - (0.00609999988f * (dsp->fVec0[1] - dsp->fConst0))))));
			int iTemp186 = (dsp->fRec88[0] < dsp->fConst89);
			int iTemp187 = ((dsp->iVec31[1] <= 0) & (iTemp175 > 0));
			dsp->fRec89[0] = ((dsp->fRec89[1] * (float)(1 - iTemp187)) + ((float)iTemp187 * ((0.850000024f * (float)iTemp173) + (fSlow113 * (float)iTemp174))));
			float fTemp188 = (((iTemp186?((dsp->fRec88[0] < 0.0f)?0.0f:(iTemp186?(dsp->fConst90 * dsp->fRec88[0]):1.0f)):((dsp->fRec88[0] < dsp->fConst88)?((dsp->fConst87 * (0.0f - (dsp->fRec88[0] - dsp->fConst89))) + 1.0f):0.0f)) * ((2.32830644e-09f * (float)dsp->iRec44[0]) + 5.0f)) - (fTemp185 + (dsp->fRec84[1] * min((2.0f * (1.0f - powf(dsp->fRec89[0], 0.25f))), min(2.0f, ((1.0f / fTemp178) - fTemp178))))));
			float fTemp189 = (min(max(fTemp188, 0.0f), 10.0f) + -0.714285731f);
			float fTemp190 = (2.33333325f * fTemp189);
			float fTemp191 = (1.14942527f * fabsf(fTemp188));
			float fTemp192 = (min(max(fTemp191, 0.0f), 10.0f) + -0.333333343f);
			float fTemp193 = (1.0f * fTemp192);
			float fTemp194 = ((fTemp188 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp191 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp193 > 1.0f)?1.0f:((fTemp193 < -1.0f)?-1.0f:(fTemp192 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp192))))))))):fTemp191))):((fTemp188 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp190 > 1.0f)?1.0f:((fTemp190 < -1.0f)?-1.0f:(fTemp189 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp189))))))))):fTemp188));
			float fTemp195 = (dsp->fRec84[1] + (2.0f * (fTemp178 * fTemp194)));
			float fTemp196 = (min(max(fTemp195, 0.0f), 10.0f) + -0.714285731f);
			float fTemp197 = (2.33333325f * fTemp196);
			float fTemp198 = (1.14942527f * fabsf(fTemp195));
			float fTemp199 = (min(max(fTemp198, 0.0f), 10.0f) + -0.333333343f);
			float fTemp200 = (1.0f * fTemp199);
			dsp->fRec84[0] = ((fTemp195 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp198 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp200 > 1.0f)?1.0f:((fTemp200 < -1.0f)?-1.0f:(fTemp199 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp199))))))))):fTemp198))):((fTemp195 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp197 > 1.0f)?1.0f:((fTemp197 < -1.0f)?-1.0f:(fTemp196 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp196))))))))):fTemp195));
			float fTemp201 = (fSlow105 * dsp->fRec83[0]);
			float fTemp202 = (fTemp201 + 0.200000003f);
			float fTemp203 = (0.666666687f * fTemp202);
			float fTemp204 = (((fTemp203 > 1.0f)?1.0f:((fTemp203 < -1.0f)?-1.0f:(fTemp201 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp202)))))) + -0.200000003f);
			float fTemp205 = (0.5f * fTemp204);
			float fTemp206 = (fSlow126 * dsp->fRec90[1]);
			float fTemp207 = (fSlow131 * fabsf(dsp->fRec90[1]));
			float fTemp208 = ((dsp->fRec90[1] <= 0.0f)?(0.0f - (fSlow130 * ((fTemp207 > fSlow132)?(1.0f - (fSlow133 * (1.0f - (float)tanhf((float)(fSlow134 * (min(max(fTemp207, 0.0f), 10.0f) - fSlow132)))))):fTemp207))):(fSlow125 * ((fTemp206 > fSlow127)?(1.0f - (fSlow128 * (1.0f - (float)tanhf((float)(fSlow129 * (min(max(fTemp206, 0.0f), 10.0f) - fSlow127)))))):fTemp206)));
			dsp->fVec33[0] = (fSlow135 * fTemp208);
			dsp->fRec91[0] = ((dsp->fConst2 * ((fSlow124 * fTemp208) + (dsp->fConst17 * dsp->fRec91[1]))) - dsp->fVec33[1]);
			float fTemp209 = ((fSlow136 * (fTemp38 + -1.0f)) + 1.0f);
			dsp->fVec34[0] = fSlow137;
			dsp->fVec35[0] = fSlow139;
			float fTemp210 = (dsp->fConst20 * (fSlow139 - dsp->fVec35[1]));
			dsp->fRec92[0] = ((((fSlow137 - dsp->fVec34[1]) > 0.0f) > 0)?0.0f:min(fSlow140, ((dsp->fRec92[1] + fTemp210) + 1.0f)));
			int iTemp211 = (dsp->fRec92[0] < fSlow141);
			float fTemp212 = ((fSlow123 * dsp->fRec91[0]) + (fTemp209 * (iTemp211?((dsp->fRec92[0] < 0.0f)?0.0f:(iTemp211?(fSlow143 * dsp->fRec92[0]):1.0f)):((dsp->fRec92[0] < fSlow140)?((fSlow142 * (0.0f - (dsp->fRec92[0] - fSlow141))) + 1.0f):0.0f))));
			dsp->fVec36[(dsp->IOTA & 4095)] = fTemp212;
			dsp->fRec90[0] = ((fSlow121 * dsp->fVec36[((dsp->IOTA - iSlow145) & 4095)]) + (fSlow146 * (((fSlow147 * dsp->fVec36[((dsp->IOTA - iSlow148) & 4095)]) + (fSlow149 * dsp->fVec36[((dsp->IOTA - iSlow150) & 4095)])) + (fSlow151 * dsp->fVec36[((dsp->IOTA - iSlow152) & 4095)]))));
			float fTemp213 = (fSlow126 * dsp->fRec93[1]);
			float fTemp214 = (fSlow131 * fabsf(dsp->fRec93[1]));
			float fTemp215 = ((dsp->fRec93[1] <= 0.0f)?(0.0f - (fSlow130 * ((fTemp214 > fSlow132)?(1.0f - (fSlow133 * (1.0f - (float)tanhf((float)(fSlow134 * (min(max(fTemp214, 0.0f), 10.0f) - fSlow132)))))):fTemp214))):(fSlow125 * ((fTemp213 > fSlow127)?(1.0f - (fSlow128 * (1.0f - (float)tanhf((float)(fSlow129 * (min(max(fTemp213, 0.0f), 10.0f) - fSlow127)))))):fTemp213)));
			dsp->fVec37[0] = (fSlow135 * fTemp215);
			dsp->fRec94[0] = ((dsp->fConst2 * ((fSlow124 * fTemp215) + (dsp->fConst17 * dsp->fRec94[1]))) - dsp->fVec37[1]);
			dsp->fVec38[0] = fSlow162;
			dsp->fRec95[0] = ((((fSlow162 - dsp->fVec38[1]) > 0.0f) > 0)?0.0f:min(fSlow140, ((fTemp210 + dsp->fRec95[1]) + 1.0f)));
			int iTemp216 = (dsp->fRec95[0] < fSlow141);
			float fTemp217 = ((fSlow161 * dsp->fRec94[0]) + (fTemp209 * (iTemp216?((dsp->fRec95[0] < 0.0f)?0.0f:(iTemp216?(fSlow143 * dsp->fRec95[0]):1.0f)):((dsp->fRec95[0] < fSlow140)?((fSlow142 * (0.0f - (dsp->fRec95[0] - fSlow141))) + 1.0f):0.0f))));
			dsp->fVec39[(dsp->IOTA & 4095)] = fTemp217;
			dsp->fRec93[0] = ((fSlow160 * dsp->fVec39[((dsp->IOTA - iSlow164) & 4095)]) + (fSlow165 * (((fSlow166 * dsp->fVec39[((dsp->IOTA - iSlow167) & 4095)]) + (fSlow168 * dsp->fVec39[((dsp->IOTA - iSlow169) & 4095)])) + (fSlow170 * dsp->fVec39[((dsp->IOTA - iSlow171) & 4095)]))));
			float fTemp218 = (fSlow126 * dsp->fRec96[1]);
			float fTemp219 = (fSlow131 * fabsf(dsp->fRec96[1]));
			float fTemp220 = ((dsp->fRec96[1] <= 0.0f)?(0.0f - (fSlow130 * ((fTemp219 > fSlow132)?(1.0f - (fSlow133 * (1.0f - (float)tanhf((float)(fSlow134 * (min(max(fTemp219, 0.0f), 10.0f) - fSlow132)))))):fTemp219))):(fSlow125 * ((fTemp218 > fSlow127)?(1.0f - (fSlow128 * (1.0f - (float)tanhf((float)(fSlow129 * (min(max(fTemp218, 0.0f), 10.0f) - fSlow127)))))):fTemp218)));
			dsp->fVec40[0] = (fSlow135 * fTemp220);
			dsp->fRec97[0] = ((dsp->fConst2 * ((fSlow124 * fTemp220) + (dsp->fConst17 * dsp->fRec97[1]))) - dsp->fVec40[1]);
			dsp->fVec41[0] = fSlow181;
			dsp->fRec98[0] = ((((fSlow181 - dsp->fVec41[1]) > 0.0f) > 0)?0.0f:min(fSlow140, ((fTemp210 + dsp->fRec98[1]) + 1.0f)));
			int iTemp221 = (dsp->fRec98[0] < fSlow141);
			float fTemp222 = ((fSlow180 * dsp->fRec97[0]) + (fTemp209 * (iTemp221?((dsp->fRec98[0] < 0.0f)?0.0f:(iTemp221?(fSlow143 * dsp->fRec98[0]):1.0f)):((dsp->fRec98[0] < fSlow140)?((fSlow142 * (0.0f - (dsp->fRec98[0] - fSlow141))) + 1.0f):0.0f))));
			dsp->fVec42[(dsp->IOTA & 4095)] = fTemp222;
			dsp->fRec96[0] = ((fSlow179 * dsp->fVec42[((dsp->IOTA - iSlow183) & 4095)]) + (fSlow184 * (((fSlow185 * dsp->fVec42[((dsp->IOTA - iSlow186) & 4095)]) + (fSlow187 * dsp->fVec42[((dsp->IOTA - iSlow188) & 4095)])) + (fSlow189 * dsp->fVec42[((dsp->IOTA - iSlow190) & 4095)]))));
			float fTemp223 = (fSlow126 * dsp->fRec99[1]);
			float fTemp224 = (fSlow131 * fabsf(dsp->fRec99[1]));
			float fTemp225 = ((dsp->fRec99[1] <= 0.0f)?(0.0f - (fSlow130 * ((fTemp224 > fSlow132)?(1.0f - (fSlow133 * (1.0f - (float)tanhf((float)(fSlow134 * (min(max(fTemp224, 0.0f), 10.0f) - fSlow132)))))):fTemp224))):(fSlow125 * ((fTemp223 > fSlow127)?(1.0f - (fSlow128 * (1.0f - (float)tanhf((float)(fSlow129 * (min(max(fTemp223, 0.0f), 10.0f) - fSlow127)))))):fTemp223)));
			dsp->fVec43[0] = (fSlow135 * fTemp225);
			dsp->fRec100[0] = ((dsp->fConst2 * ((fSlow124 * fTemp225) + (dsp->fConst17 * dsp->fRec100[1]))) - dsp->fVec43[1]);
			dsp->fVec44[0] = fSlow200;
			dsp->fRec101[0] = ((((fSlow200 - dsp->fVec44[1]) > 0.0f) > 0)?0.0f:min(fSlow140, ((fTemp210 + dsp->fRec101[1]) + 1.0f)));
			int iTemp226 = (dsp->fRec101[0] < fSlow141);
			float fTemp227 = ((fSlow199 * dsp->fRec100[0]) + (fTemp209 * (iTemp226?((dsp->fRec101[0] < 0.0f)?0.0f:(iTemp226?(fSlow143 * dsp->fRec101[0]):1.0f)):((dsp->fRec101[0] < fSlow140)?((fSlow142 * (0.0f - (dsp->fRec101[0] - fSlow141))) + 1.0f):0.0f))));
			dsp->fVec45[(dsp->IOTA & 4095)] = fTemp227;
			dsp->fRec99[0] = ((fSlow198 * dsp->fVec45[((dsp->IOTA - iSlow202) & 4095)]) + (fSlow203 * (((fSlow204 * dsp->fVec45[((dsp->IOTA - iSlow205) & 4095)]) + (fSlow206 * dsp->fVec45[((dsp->IOTA - iSlow207) & 4095)])) + (fSlow208 * dsp->fVec45[((dsp->IOTA - iSlow209) & 4095)]))));
			float fTemp228 = (((dsp->fRec90[0] + dsp->fRec93[0]) + dsp->fRec96[0]) + dsp->fRec99[0]);
			dsp->fRec113[0] = ((dsp->fConst107 * dsp->fRec113[1]) + (dsp->fConst108 * (dsp->fRec109[1] + dsp->fRec109[2])));
			dsp->fRec112[0] = ((dsp->fConst102 * dsp->fRec112[1]) + (dsp->fConst103 * (dsp->fRec109[1] + (dsp->fConst104 * dsp->fRec113[0]))));
			dsp->fVec46[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec112[0]) + 9.99999968e-21f);
			float fTemp229 = (0.0500000007f * fTemp204);
			dsp->fVec47[(dsp->IOTA & 4095)] = (fSlow210 * (((((0.294f * fTemp33) + ((0.0289999992f * fTemp172) + (fTemp229 + (0.400000006f * fTemp228)))) + (0.319999993f * fTemp128)) + (0.600000024f * fTemp50)) + (0.180000007f * fTemp74)));
			float fTemp230 = (0.300000012f * dsp->fVec47[((dsp->IOTA - dsp->iConst111) & 4095)]);
			float fTemp231 = (((0.600000024f * dsp->fRec110[1]) + dsp->fVec46[((dsp->IOTA - dsp->iConst110) & 8191)]) - fTemp230);
			dsp->fVec48[(dsp->IOTA & 1023)] = fTemp231;
			dsp->fRec110[0] = dsp->fVec48[((dsp->IOTA - dsp->iConst112) & 1023)];
			float fRec111 = (0.0f - (0.600000024f * fTemp231));
			dsp->fRec117[0] = ((dsp->fConst107 * dsp->fRec117[1]) + (dsp->fConst108 * (dsp->fRec105[1] + dsp->fRec105[2])));
			dsp->fRec116[0] = ((dsp->fConst121 * dsp->fRec116[1]) + (dsp->fConst122 * (dsp->fRec105[1] + (dsp->fConst123 * dsp->fRec117[0]))));
			dsp->fVec49[(dsp->IOTA & 16383)] = ((0.353553385f * dsp->fRec116[0]) + 9.99999968e-21f);
			float fTemp232 = (((0.600000024f * dsp->fRec114[1]) + dsp->fVec49[((dsp->IOTA - dsp->iConst125) & 16383)]) - fTemp230);
			dsp->fVec50[(dsp->IOTA & 2047)] = fTemp232;
			dsp->fRec114[0] = dsp->fVec50[((dsp->IOTA - dsp->iConst126) & 2047)];
			float fRec115 = (0.0f - (0.600000024f * fTemp232));
			dsp->fRec121[0] = ((dsp->fConst107 * dsp->fRec121[1]) + (dsp->fConst108 * (dsp->fRec107[1] + dsp->fRec107[2])));
			dsp->fRec120[0] = ((dsp->fConst135 * dsp->fRec120[1]) + (dsp->fConst136 * (dsp->fRec107[1] + (dsp->fConst137 * dsp->fRec121[0]))));
			dsp->fVec51[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec120[0]) + 9.99999968e-21f);
			float fTemp233 = (dsp->fVec51[((dsp->IOTA - dsp->iConst139) & 8191)] + (fTemp230 + (0.600000024f * dsp->fRec118[1])));
			dsp->fVec52[(dsp->IOTA & 2047)] = fTemp233;
			dsp->fRec118[0] = dsp->fVec52[((dsp->IOTA - dsp->iConst140) & 2047)];
			float fRec119 = (0.0f - (0.600000024f * fTemp233));
			dsp->fRec125[0] = ((dsp->fConst107 * dsp->fRec125[1]) + (dsp->fConst108 * (dsp->fRec103[1] + dsp->fRec103[2])));
			dsp->fRec124[0] = ((dsp->fConst149 * dsp->fRec124[1]) + (dsp->fConst150 * (dsp->fRec103[1] + (dsp->fConst151 * dsp->fRec125[0]))));
			dsp->fVec53[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec124[0]) + 9.99999968e-21f);
			float fTemp234 = (fTemp230 + ((0.600000024f * dsp->fRec122[1]) + dsp->fVec53[((dsp->IOTA - dsp->iConst153) & 8191)]));
			dsp->fVec54[(dsp->IOTA & 1023)] = fTemp234;
			dsp->fRec122[0] = dsp->fVec54[((dsp->IOTA - dsp->iConst154) & 1023)];
			float fRec123 = (0.0f - (0.600000024f * fTemp234));
			dsp->fRec129[0] = ((dsp->fConst107 * dsp->fRec129[1]) + (dsp->fConst108 * (dsp->fRec108[1] + dsp->fRec108[2])));
			dsp->fRec128[0] = ((dsp->fConst163 * dsp->fRec128[1]) + (dsp->fConst164 * (dsp->fRec108[1] + (dsp->fConst165 * dsp->fRec129[0]))));
			dsp->fVec55[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec128[0]) + 9.99999968e-21f);
			dsp->fVec56[(dsp->IOTA & 4095)] = (fSlow210 * (((((0.195999995f * fTemp33) + ((0.261000007f * fTemp172) + (fTemp229 + (0.100000001f * fTemp228)))) + (0.479999989f * fTemp128)) + (0.400000006f * fTemp50)) + (0.419999987f * fTemp74)));
			float fTemp235 = (0.300000012f * dsp->fVec56[((dsp->IOTA - dsp->iConst111) & 4095)]);
			float fTemp236 = (dsp->fVec55[((dsp->IOTA - dsp->iConst167) & 8191)] - (fTemp235 + (0.600000024f * dsp->fRec126[1])));
			dsp->fVec57[(dsp->IOTA & 1023)] = fTemp236;
			dsp->fRec126[0] = dsp->fVec57[((dsp->IOTA - dsp->iConst168) & 1023)];
			float fRec127 = (0.600000024f * fTemp236);
			dsp->fRec133[0] = ((dsp->fConst107 * dsp->fRec133[1]) + (dsp->fConst108 * (dsp->fRec104[1] + dsp->fRec104[2])));
			dsp->fRec132[0] = ((dsp->fConst177 * dsp->fRec132[1]) + (dsp->fConst178 * (dsp->fRec104[1] + (dsp->fConst179 * dsp->fRec133[0]))));
			dsp->fVec58[(dsp->IOTA & 4095)] = ((0.353553385f * dsp->fRec132[0]) + 9.99999968e-21f);
			float fTemp237 = (dsp->fVec58[((dsp->IOTA - dsp->iConst181) & 4095)] - (fTemp235 + (0.600000024f * dsp->fRec130[1])));
			dsp->fVec59[(dsp->IOTA & 2047)] = fTemp237;
			dsp->fRec130[0] = dsp->fVec59[((dsp->IOTA - dsp->iConst182) & 2047)];
			float fRec131 = (0.600000024f * fTemp237);
			dsp->fRec137[0] = ((dsp->fConst107 * dsp->fRec137[1]) + (dsp->fConst108 * (dsp->fRec106[1] + dsp->fRec106[2])));
			dsp->fRec136[0] = ((dsp->fConst191 * dsp->fRec136[1]) + (dsp->fConst192 * (dsp->fRec106[1] + (dsp->fConst193 * dsp->fRec137[0]))));
			dsp->fVec60[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec136[0]) + 9.99999968e-21f);
			float fTemp238 = ((fTemp235 + dsp->fVec60[((dsp->IOTA - dsp->iConst195) & 8191)]) - (0.600000024f * dsp->fRec134[1]));
			dsp->fVec61[(dsp->IOTA & 1023)] = fTemp238;
			dsp->fRec134[0] = dsp->fVec61[((dsp->IOTA - dsp->iConst196) & 1023)];
			float fRec135 = (0.600000024f * fTemp238);
			dsp->fRec141[0] = ((dsp->fConst107 * dsp->fRec141[1]) + (dsp->fConst108 * (dsp->fRec102[1] + dsp->fRec102[2])));
			dsp->fRec140[0] = ((dsp->fConst205 * dsp->fRec140[1]) + (dsp->fConst206 * (dsp->fRec102[1] + (dsp->fConst207 * dsp->fRec141[0]))));
			dsp->fVec62[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec140[0]) + 9.99999968e-21f);
			float fTemp239 = ((dsp->fVec62[((dsp->IOTA - dsp->iConst209) & 8191)] + fTemp235) - (0.600000024f * dsp->fRec138[1]));
			dsp->fVec63[(dsp->IOTA & 1023)] = fTemp239;
			dsp->fRec138[0] = dsp->fVec63[((dsp->IOTA - dsp->iConst210) & 1023)];
			float fRec139 = (0.600000024f * fTemp239);
			float fTemp240 = (fRec139 + fRec135);
			float fTemp241 = (fRec127 + (fRec131 + fTemp240));
			dsp->fRec102[0] = (dsp->fRec110[1] + (dsp->fRec114[1] + (dsp->fRec118[1] + (dsp->fRec122[1] + (dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (fRec111 + (fRec115 + (fRec119 + (fRec123 + fTemp241))))))))))));
			dsp->fRec103[0] = ((dsp->fRec126[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + fTemp241)))) - (dsp->fRec110[1] + (dsp->fRec114[1] + (dsp->fRec118[1] + (dsp->fRec122[1] + (fRec111 + (fRec115 + (fRec123 + fRec119))))))));
			float fTemp242 = (fRec131 + fRec127);
			dsp->fRec104[0] = ((dsp->fRec118[1] + (dsp->fRec122[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (fRec119 + (fRec123 + fTemp240)))))) - (dsp->fRec110[1] + (dsp->fRec114[1] + (dsp->fRec126[1] + (dsp->fRec130[1] + (fRec111 + (fRec115 + fTemp242)))))));
			dsp->fRec105[0] = ((dsp->fRec110[1] + (dsp->fRec114[1] + (dsp->fRec134[1] + (dsp->fRec138[1] + (fRec111 + (fRec115 + fTemp240)))))) - (dsp->fRec118[1] + (dsp->fRec122[1] + (dsp->fRec126[1] + (dsp->fRec130[1] + (fRec119 + (fRec123 + fTemp242)))))));
			float fTemp243 = (fRec139 + fRec131);
			float fTemp244 = (fRec135 + fRec127);
			dsp->fRec106[0] = ((dsp->fRec114[1] + (dsp->fRec122[1] + (dsp->fRec130[1] + (dsp->fRec138[1] + (fRec115 + (fRec123 + fTemp243)))))) - (dsp->fRec110[1] + (dsp->fRec118[1] + (dsp->fRec126[1] + (dsp->fRec134[1] + (fRec111 + (fRec119 + fTemp244)))))));
			dsp->fRec107[0] = ((dsp->fRec110[1] + (dsp->fRec118[1] + (dsp->fRec130[1] + (dsp->fRec138[1] + (fRec111 + (fRec119 + fTemp243)))))) - (dsp->fRec114[1] + (dsp->fRec122[1] + (dsp->fRec126[1] + (dsp->fRec134[1] + (fRec115 + (fRec123 + fTemp244)))))));
			float fTemp245 = (fRec139 + fRec127);
			float fTemp246 = (fRec135 + fRec131);
			dsp->fRec108[0] = ((dsp->fRec110[1] + (dsp->fRec122[1] + (dsp->fRec126[1] + (dsp->fRec138[1] + (fRec111 + (fRec123 + fTemp245)))))) - (dsp->fRec114[1] + (dsp->fRec118[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (fRec115 + (fRec119 + fTemp246)))))));
			dsp->fRec109[0] = ((dsp->fRec114[1] + (dsp->fRec118[1] + (dsp->fRec126[1] + (dsp->fRec138[1] + (fRec115 + (fRec119 + fTemp245)))))) - (dsp->fRec110[1] + (dsp->fRec122[1] + (dsp->fRec130[1] + (dsp->fRec134[1] + (fRec111 + (fRec123 + fTemp246)))))));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)((0.400000006f * fTemp51) + ((0.699999988f * fTemp74) + ((0.600000024f * fTemp128) + ((0.899999976f * fTemp172) + (fTemp205 + ((0.200000003f * fTemp228) + (0.370000005f * (dsp->fRec103[0] + dsp->fRec104[0])))))))));
			output1[i] = (FAUSTFLOAT)(float)tanhf((float)((0.600000024f * fTemp51) + ((0.300000012f * fTemp74) + ((0.400000006f * fTemp128) + ((0.100000001f * fTemp172) + (fTemp205 + ((0.800000012f * fTemp228) + (0.370000005f * (dsp->fRec103[0] - dsp->fRec104[0])))))))));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec1[2] = dsp->fRec1[1];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec13[2] = dsp->fRec13[1];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec23[2] = dsp->fRec23[1];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec33[2] = dsp->fRec33[1];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->iRec44[1] = dsp->iRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->iRec52[1] = dsp->iRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec53[2] = dsp->fRec53[1];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec47[2] = dsp->fRec47[1];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec59[2] = dsp->fRec59[1];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[2] = dsp->fRec64[1];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->iVec10[1] = dsp->iVec10[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec76[2] = dsp->fRec76[1];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec69[2] = dsp->fRec69[1];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->iVec31[1] = dsp->iVec31[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fVec35[1] = dsp->fVec35[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fVec37[1] = dsp->fVec37[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fVec41[1] = dsp->fVec41[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fVec43[1] = dsp->fVec43[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec113[1] = dsp->fRec113[0];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec116[1] = dsp->fRec116[0];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec121[1] = dsp->fRec121[0];
			dsp->fRec120[1] = dsp->fRec120[0];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fRec125[1] = dsp->fRec125[0];
			dsp->fRec124[1] = dsp->fRec124[0];
			dsp->fRec122[1] = dsp->fRec122[0];
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
			dsp->fRec102[2] = dsp->fRec102[1];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec103[2] = dsp->fRec103[1];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec104[2] = dsp->fRec104[1];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec105[2] = dsp->fRec105[1];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec106[2] = dsp->fRec106[1];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec107[2] = dsp->fRec107[1];
			dsp->fRec107[1] = dsp->fRec107[0];
			dsp->fRec108[2] = dsp->fRec108[1];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec109[2] = dsp->fRec109[1];
			dsp->fRec109[1] = dsp->fRec109[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
