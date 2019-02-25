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
	float fConst10;
	float fConst11;
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
	float fConst12;
	float fConst13;
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
	float fConst14;
	float fConst15;
	float fConst16;
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
	float fConst17;
	float fConst18;
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
	float fConst19;
	float fConst20;
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
	float fConst21;
	float fConst22;
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
	float fConst23;
	float fConst24;
	float fRec67[2];
	float fRec68[2];
	float fRec66[2];
	float fRec65[2];
	float fRec64[2];
	float fRec63[2];
	float fRec62[2];
	float fRec61[2];
	float fRec60[2];
	float fConst25;
	float fConst26;
	float fRec1[3];
	float fVec2[2];
	float fConst27;
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
	float fVec3[2];
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
	float fVec4[2];
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
	float fVec5[2];
	float fRec201[2];
	FAUSTFLOAT fVslider21;
	float fConst28;
	FAUSTFLOAT fVslider22;
	float fRec267[2];
	float fRec268[2];
	FAUSTFLOAT fButton0;
	float fVec6[2];
	float fConst29;
	float fRec270[2];
	FAUSTFLOAT fVslider23;
	float fRec269[2];
	FAUSTFLOAT fVslider24;
	FAUSTFLOAT fVslider25;
	FAUSTFLOAT fVslider26;
	float fRec274[2];
	FAUSTFLOAT fVslider27;
	FAUSTFLOAT fVslider28;
	FAUSTFLOAT fVslider29;
	FAUSTFLOAT fVslider30;
	int iRec276[2];
	float fConst30;
	FAUSTFLOAT fVslider31;
	FAUSTFLOAT fVslider32;
	FAUSTFLOAT fVslider33;
	float fRec275[2];
	float fRec272[2];
	float fConst31;
	FAUSTFLOAT fVslider34;
	float fRec278[2];
	float fRec279[2];
	float fRec277[3];
	FAUSTFLOAT fVslider35;
	float fRec273[2];
	float fRec271[3];
	FAUSTFLOAT fVslider36;
	FAUSTFLOAT fVslider37;
	float fConst32;
	FAUSTFLOAT fVslider38;
	float fRec281[2];
	float fConst33;
	float fConst34;
	float fConst35;
	FAUSTFLOAT fButton1;
	float fVec7[2];
	float fConst36;
	float fRec284[2];
	FAUSTFLOAT fVslider39;
	float fRec285[2];
	float fConst37;
	float fConst38;
	float fRec283[3];
	float fRec282[2];
	float fConst39;
	float fRec286[2];
	float fRec287[2];
	float fConst40;
	float fConst41;
	float fConst42;
	float fConst43;
	float fConst44;
	float fRec288[3];
	FAUSTFLOAT fButton2;
	float fVec8[2];
	float fRec290[2];
	FAUSTFLOAT fButton3;
	float fVec9[2];
	float fRec291[2];
	int iVec10[2];
	FAUSTFLOAT fVslider40;
	float fRec292[2];
	float fRec289[2];
	float fConst45;
	float fConst46;
	float fConst47;
	float fConst48;
	FAUSTFLOAT fVslider41;
	float fRec294[2];
	float fRec297[2];
	float fConst49;
	float fConst50;
	float fConst51;
	float fConst52;
	float fVec11[2];
	float fRec301[2];
	float fVec12[2];
	int IOTA;
	float fVec13[256];
	float fConst53;
	float fConst54;
	float fConst55;
	int iConst56;
	float fConst57;
	int iConst58;
	float fVec14[2];
	float fRec302[2];
	float fVec15[2];
	float fVec16[512];
	float fConst59;
	float fConst60;
	float fConst61;
	int iConst62;
	float fConst63;
	int iConst64;
	float fVec17[2];
	float fRec303[2];
	float fVec18[2];
	float fVec19[256];
	float fConst65;
	float fConst66;
	float fConst67;
	int iConst68;
	float fConst69;
	int iConst70;
	float fVec20[2];
	float fRec304[2];
	float fVec21[2];
	float fVec22[512];
	float fConst71;
	float fConst72;
	float fConst73;
	int iConst74;
	float fConst75;
	int iConst76;
	float fVec23[2];
	float fRec305[2];
	float fVec24[2];
	float fVec25[256];
	float fConst77;
	float fConst78;
	float fConst79;
	int iConst80;
	float fConst81;
	int iConst82;
	float fVec26[2];
	float fRec306[2];
	float fVec27[2];
	float fVec28[512];
	float fConst83;
	float fConst84;
	float fConst85;
	int iConst86;
	float fConst87;
	int iConst88;
	float fConst89;
	float fConst90;
	float fRec300[3];
	float fConst91;
	float fRec298[2];
	float fRec295[2];
	float fConst92;
	float fConst93;
	float fConst94;
	float fRec293[3];
	FAUSTFLOAT fVslider42;
	FAUSTFLOAT fVslider43;
	FAUSTFLOAT fVslider44;
	FAUSTFLOAT fVslider45;
	FAUSTFLOAT fButton4;
	float fVec29[2];
	float fConst95;
	float fRec310[2];
	FAUSTFLOAT fButton5;
	float fVec30[2];
	float fRec311[2];
	int iVec31[2];
	FAUSTFLOAT fVslider46;
	float fVec32[2];
	float fRec309[2];
	float fConst96;
	float fConst97;
	float fRec307[2];
	float fConst98;
	float fRec312[2];
	float fConst99;
	float fConst100;
	FAUSTFLOAT fVslider47;
	float fRec313[2];
	float fRec308[2];
	FAUSTFLOAT fVslider48;
	float fConst101;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fVec33[2];
	float fRec315[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fButton6;
	float fVec34[2];
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	float fVec35[2];
	float fRec316[2];
	float fConst102;
	float fVec36[4096];
	float fRec314[2];
	FAUSTFLOAT fVslider49;
	float fVec37[2];
	float fRec318[2];
	FAUSTFLOAT fButton7;
	float fVec38[2];
	float fRec319[2];
	float fVec39[4096];
	float fRec317[2];
	FAUSTFLOAT fVslider50;
	float fVec40[2];
	float fRec321[2];
	FAUSTFLOAT fButton8;
	float fVec41[2];
	float fRec322[2];
	float fVec42[4096];
	float fRec320[2];
	FAUSTFLOAT fVslider51;
	float fVec43[2];
	float fRec324[2];
	FAUSTFLOAT fButton9;
	float fVec44[2];
	float fRec325[2];
	float fVec45[4096];
	float fRec323[2];
	float fConst103;
	float fConst104;
	float fConst105;
	float fConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fConst110;
	float fConst111;
	float fConst112;
	float fConst113;
	float fConst114;
	float fConst115;
	float fConst116;
	float fConst117;
	float fConst118;
	float fRec337[2];
	float fRec336[2];
	float fVec46[8192];
	float fConst119;
	int iConst120;
	FAUSTFLOAT fVslider52;
	float fVec47[4096];
	int iConst121;
	float fVec48[1024];
	int iConst122;
	float fRec334[2];
	float fConst123;
	float fConst124;
	float fConst125;
	float fConst126;
	float fConst127;
	float fConst128;
	float fConst129;
	float fConst130;
	float fConst131;
	float fConst132;
	float fConst133;
	float fRec341[2];
	float fRec340[2];
	float fVec49[16384];
	float fConst134;
	int iConst135;
	float fVec50[2048];
	int iConst136;
	float fRec338[2];
	float fConst137;
	float fConst138;
	float fConst139;
	float fConst140;
	float fConst141;
	float fConst142;
	float fConst143;
	float fConst144;
	float fConst145;
	float fConst146;
	float fConst147;
	float fRec345[2];
	float fRec344[2];
	float fVec51[8192];
	float fConst148;
	int iConst149;
	float fVec52[2048];
	int iConst150;
	float fRec342[2];
	float fConst151;
	float fConst152;
	float fConst153;
	float fConst154;
	float fConst155;
	float fConst156;
	float fConst157;
	float fConst158;
	float fConst159;
	float fConst160;
	float fConst161;
	float fRec349[2];
	float fRec348[2];
	float fVec53[8192];
	float fConst162;
	int iConst163;
	float fVec54[1024];
	int iConst164;
	float fRec346[2];
	float fConst165;
	float fConst166;
	float fConst167;
	float fConst168;
	float fConst169;
	float fConst170;
	float fConst171;
	float fConst172;
	float fConst173;
	float fConst174;
	float fConst175;
	float fRec353[2];
	float fRec352[2];
	float fVec55[8192];
	float fConst176;
	int iConst177;
	float fVec56[4096];
	float fVec57[1024];
	int iConst178;
	float fRec350[2];
	float fConst179;
	float fConst180;
	float fConst181;
	float fConst182;
	float fConst183;
	float fConst184;
	float fConst185;
	float fConst186;
	float fConst187;
	float fConst188;
	float fConst189;
	float fRec357[2];
	float fRec356[2];
	float fVec58[4096];
	float fConst190;
	int iConst191;
	float fVec59[2048];
	int iConst192;
	float fRec354[2];
	float fConst193;
	float fConst194;
	float fConst195;
	float fConst196;
	float fConst197;
	float fConst198;
	float fConst199;
	float fConst200;
	float fConst201;
	float fConst202;
	float fConst203;
	float fRec361[2];
	float fRec360[2];
	float fVec60[8192];
	float fConst204;
	int iConst205;
	float fVec61[1024];
	int iConst206;
	float fRec358[2];
	float fConst207;
	float fConst208;
	float fConst209;
	float fConst210;
	float fConst211;
	float fConst212;
	float fConst213;
	float fConst214;
	float fConst215;
	float fConst216;
	float fConst217;
	float fRec365[2];
	float fRec364[2];
	float fVec62[8192];
	float fConst218;
	int iConst219;
	float fVec63[1024];
	int iConst220;
	float fRec362[2];
	float fRec326[3];
	float fRec327[3];
	float fRec328[3];
	float fRec329[3];
	float fRec330[3];
	float fRec331[3];
	float fRec332[3];
	float fRec333[3];
	
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
			dsp->fRec12[l5] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			dsp->fRec13[l6] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			dsp->iRec14[l7] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			dsp->fRec11[l8] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			dsp->fRec10[l9] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			dsp->fRec9[l10] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			dsp->fRec8[l11] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			dsp->fRec7[l12] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			dsp->fRec6[l13] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			dsp->fRec4[l14] = 0.0f;
			
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
			dsp->fRec23[l16] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			dsp->fRec21[l17] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			dsp->fRec20[l18] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			dsp->fRec19[l19] = 0.0f;
			
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
			dsp->fRec17[l21] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			dsp->fRec16[l22] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			dsp->fRec15[l23] = 0.0f;
			
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
			dsp->fRec30[l26] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			dsp->fRec29[l27] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			dsp->fRec28[l28] = 0.0f;
			
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
			dsp->fRec26[l30] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			dsp->fRec25[l31] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			dsp->fRec24[l32] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			dsp->fRec40[l33] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			dsp->fRec41[l34] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			dsp->fRec39[l35] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			dsp->fRec38[l36] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			dsp->fRec37[l37] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			dsp->fRec36[l38] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			dsp->fRec35[l39] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			dsp->fRec34[l40] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			dsp->fRec33[l41] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			dsp->fRec49[l42] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			dsp->fRec50[l43] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			dsp->fRec48[l44] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			dsp->fRec47[l45] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			dsp->fRec46[l46] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			dsp->fRec45[l47] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			dsp->fRec44[l48] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			dsp->fRec43[l49] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			dsp->fRec42[l50] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			dsp->fRec58[l51] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			dsp->fRec59[l52] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			dsp->fRec57[l53] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			dsp->fRec56[l54] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
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
			dsp->fRec53[l57] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			dsp->fRec52[l58] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			dsp->fRec51[l59] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			dsp->fRec67[l60] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			dsp->fRec68[l61] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			dsp->fRec66[l62] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			dsp->fRec65[l63] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			dsp->fRec64[l64] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			dsp->fRec63[l65] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			dsp->fRec62[l66] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			dsp->fRec61[l67] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			dsp->fRec60[l68] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; (l69 < 3); l69 = (l69 + 1)) {
			dsp->fRec1[l69] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			dsp->fVec2[l70] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			dsp->fRec0[l71] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			dsp->fRec71[l72] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			dsp->fRec79[l73] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			dsp->fRec80[l74] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			dsp->fRec78[l75] = 0.0f;
			
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
		for (l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			dsp->fRec76[l77] = 0.0f;
			
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
			dsp->fRec74[l79] = 0.0f;
			
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
			dsp->fRec72[l81] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			dsp->fRec88[l82] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			dsp->fRec89[l83] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			dsp->fRec87[l84] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			dsp->fRec86[l85] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			dsp->fRec85[l86] = 0.0f;
			
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
			dsp->fRec83[l88] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			dsp->fRec82[l89] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			dsp->fRec81[l90] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			dsp->fRec97[l91] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			dsp->fRec98[l92] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			dsp->fRec96[l93] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			dsp->fRec95[l94] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			dsp->fRec94[l95] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			dsp->fRec93[l96] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			dsp->fRec92[l97] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			dsp->fRec91[l98] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			dsp->fRec90[l99] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			dsp->fRec106[l100] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			dsp->fRec107[l101] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			dsp->fRec105[l102] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			dsp->fRec104[l103] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			dsp->fRec103[l104] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			dsp->fRec102[l105] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			dsp->fRec101[l106] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			dsp->fRec100[l107] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			dsp->fRec99[l108] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			dsp->fRec115[l109] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			dsp->fRec116[l110] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			dsp->fRec114[l111] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			dsp->fRec113[l112] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			dsp->fRec112[l113] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			dsp->fRec111[l114] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			dsp->fRec110[l115] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			dsp->fRec109[l116] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			dsp->fRec108[l117] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			dsp->fRec124[l118] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			dsp->fRec125[l119] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			dsp->fRec123[l120] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			dsp->fRec122[l121] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			dsp->fRec121[l122] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			dsp->fRec120[l123] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			dsp->fRec119[l124] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			dsp->fRec118[l125] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			dsp->fRec117[l126] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			dsp->fRec133[l127] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			dsp->fRec134[l128] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			dsp->fRec132[l129] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			dsp->fRec131[l130] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			dsp->fRec130[l131] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			dsp->fRec129[l132] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			dsp->fRec128[l133] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			dsp->fRec127[l134] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			dsp->fRec126[l135] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; (l136 < 3); l136 = (l136 + 1)) {
			dsp->fRec70[l136] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			dsp->fVec3[l137] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			dsp->fRec69[l138] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			dsp->fRec137[l139] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			dsp->fRec145[l140] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			dsp->fRec146[l141] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			dsp->fRec144[l142] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			dsp->fRec143[l143] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			dsp->fRec142[l144] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			dsp->fRec141[l145] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			dsp->fRec140[l146] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			dsp->fRec139[l147] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			dsp->fRec138[l148] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			dsp->fRec154[l149] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			dsp->fRec155[l150] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			dsp->fRec153[l151] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			dsp->fRec152[l152] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			dsp->fRec151[l153] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			dsp->fRec150[l154] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			dsp->fRec149[l155] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			dsp->fRec148[l156] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			dsp->fRec147[l157] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			dsp->fRec163[l158] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			dsp->fRec164[l159] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			dsp->fRec162[l160] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			dsp->fRec161[l161] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			dsp->fRec160[l162] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			dsp->fRec159[l163] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			dsp->fRec158[l164] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			dsp->fRec157[l165] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			dsp->fRec156[l166] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			dsp->fRec172[l167] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			dsp->fRec173[l168] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			dsp->fRec171[l169] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			dsp->fRec170[l170] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			dsp->fRec169[l171] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			dsp->fRec168[l172] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			dsp->fRec167[l173] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			dsp->fRec166[l174] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			dsp->fRec165[l175] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			dsp->fRec181[l176] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			dsp->fRec182[l177] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			dsp->fRec180[l178] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			dsp->fRec179[l179] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; (l180 < 2); l180 = (l180 + 1)) {
			dsp->fRec178[l180] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			dsp->fRec177[l181] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			dsp->fRec176[l182] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			dsp->fRec175[l183] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			dsp->fRec174[l184] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			dsp->fRec190[l185] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			dsp->fRec191[l186] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			dsp->fRec189[l187] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			dsp->fRec188[l188] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; (l189 < 2); l189 = (l189 + 1)) {
			dsp->fRec187[l189] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			dsp->fRec186[l190] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; (l191 < 2); l191 = (l191 + 1)) {
			dsp->fRec185[l191] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; (l192 < 2); l192 = (l192 + 1)) {
			dsp->fRec184[l192] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; (l193 < 2); l193 = (l193 + 1)) {
			dsp->fRec183[l193] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			dsp->fRec199[l194] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l195;
		for (l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			dsp->fRec200[l195] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l196;
		for (l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			dsp->fRec198[l196] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l197;
		for (l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			dsp->fRec197[l197] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l198;
		for (l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			dsp->fRec196[l198] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l199;
		for (l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			dsp->fRec195[l199] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l200;
		for (l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			dsp->fRec194[l200] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l201;
		for (l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			dsp->fRec193[l201] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l202;
		for (l202 = 0; (l202 < 2); l202 = (l202 + 1)) {
			dsp->fRec192[l202] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l203;
		for (l203 = 0; (l203 < 3); l203 = (l203 + 1)) {
			dsp->fRec136[l203] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l204;
		for (l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			dsp->fVec4[l204] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l205;
		for (l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			dsp->fRec135[l205] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l206;
		for (l206 = 0; (l206 < 2); l206 = (l206 + 1)) {
			dsp->fRec203[l206] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l207;
		for (l207 = 0; (l207 < 2); l207 = (l207 + 1)) {
			dsp->fRec211[l207] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l208;
		for (l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			dsp->fRec212[l208] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l209;
		for (l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			dsp->fRec210[l209] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l210;
		for (l210 = 0; (l210 < 2); l210 = (l210 + 1)) {
			dsp->fRec209[l210] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l211;
		for (l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			dsp->fRec208[l211] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l212;
		for (l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			dsp->fRec207[l212] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l213;
		for (l213 = 0; (l213 < 2); l213 = (l213 + 1)) {
			dsp->fRec206[l213] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l214;
		for (l214 = 0; (l214 < 2); l214 = (l214 + 1)) {
			dsp->fRec205[l214] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l215;
		for (l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			dsp->fRec204[l215] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l216;
		for (l216 = 0; (l216 < 2); l216 = (l216 + 1)) {
			dsp->fRec220[l216] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l217;
		for (l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			dsp->fRec221[l217] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l218;
		for (l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			dsp->fRec219[l218] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l219;
		for (l219 = 0; (l219 < 2); l219 = (l219 + 1)) {
			dsp->fRec218[l219] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l220;
		for (l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			dsp->fRec217[l220] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l221;
		for (l221 = 0; (l221 < 2); l221 = (l221 + 1)) {
			dsp->fRec216[l221] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l222;
		for (l222 = 0; (l222 < 2); l222 = (l222 + 1)) {
			dsp->fRec215[l222] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l223;
		for (l223 = 0; (l223 < 2); l223 = (l223 + 1)) {
			dsp->fRec214[l223] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l224;
		for (l224 = 0; (l224 < 2); l224 = (l224 + 1)) {
			dsp->fRec213[l224] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l225;
		for (l225 = 0; (l225 < 2); l225 = (l225 + 1)) {
			dsp->fRec229[l225] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l226;
		for (l226 = 0; (l226 < 2); l226 = (l226 + 1)) {
			dsp->fRec230[l226] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l227;
		for (l227 = 0; (l227 < 2); l227 = (l227 + 1)) {
			dsp->fRec228[l227] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l228;
		for (l228 = 0; (l228 < 2); l228 = (l228 + 1)) {
			dsp->fRec227[l228] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l229;
		for (l229 = 0; (l229 < 2); l229 = (l229 + 1)) {
			dsp->fRec226[l229] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l230;
		for (l230 = 0; (l230 < 2); l230 = (l230 + 1)) {
			dsp->fRec225[l230] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l231;
		for (l231 = 0; (l231 < 2); l231 = (l231 + 1)) {
			dsp->fRec224[l231] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l232;
		for (l232 = 0; (l232 < 2); l232 = (l232 + 1)) {
			dsp->fRec223[l232] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l233;
		for (l233 = 0; (l233 < 2); l233 = (l233 + 1)) {
			dsp->fRec222[l233] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l234;
		for (l234 = 0; (l234 < 2); l234 = (l234 + 1)) {
			dsp->fRec238[l234] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l235;
		for (l235 = 0; (l235 < 2); l235 = (l235 + 1)) {
			dsp->fRec239[l235] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l236;
		for (l236 = 0; (l236 < 2); l236 = (l236 + 1)) {
			dsp->fRec237[l236] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l237;
		for (l237 = 0; (l237 < 2); l237 = (l237 + 1)) {
			dsp->fRec236[l237] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l238;
		for (l238 = 0; (l238 < 2); l238 = (l238 + 1)) {
			dsp->fRec235[l238] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l239;
		for (l239 = 0; (l239 < 2); l239 = (l239 + 1)) {
			dsp->fRec234[l239] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l240;
		for (l240 = 0; (l240 < 2); l240 = (l240 + 1)) {
			dsp->fRec233[l240] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l241;
		for (l241 = 0; (l241 < 2); l241 = (l241 + 1)) {
			dsp->fRec232[l241] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l242;
		for (l242 = 0; (l242 < 2); l242 = (l242 + 1)) {
			dsp->fRec231[l242] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l243;
		for (l243 = 0; (l243 < 2); l243 = (l243 + 1)) {
			dsp->fRec247[l243] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l244;
		for (l244 = 0; (l244 < 2); l244 = (l244 + 1)) {
			dsp->fRec248[l244] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l245;
		for (l245 = 0; (l245 < 2); l245 = (l245 + 1)) {
			dsp->fRec246[l245] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l246;
		for (l246 = 0; (l246 < 2); l246 = (l246 + 1)) {
			dsp->fRec245[l246] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l247;
		for (l247 = 0; (l247 < 2); l247 = (l247 + 1)) {
			dsp->fRec244[l247] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l248;
		for (l248 = 0; (l248 < 2); l248 = (l248 + 1)) {
			dsp->fRec243[l248] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l249;
		for (l249 = 0; (l249 < 2); l249 = (l249 + 1)) {
			dsp->fRec242[l249] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l250;
		for (l250 = 0; (l250 < 2); l250 = (l250 + 1)) {
			dsp->fRec241[l250] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l251;
		for (l251 = 0; (l251 < 2); l251 = (l251 + 1)) {
			dsp->fRec240[l251] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l252;
		for (l252 = 0; (l252 < 2); l252 = (l252 + 1)) {
			dsp->fRec256[l252] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l253;
		for (l253 = 0; (l253 < 2); l253 = (l253 + 1)) {
			dsp->fRec257[l253] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l254;
		for (l254 = 0; (l254 < 2); l254 = (l254 + 1)) {
			dsp->fRec255[l254] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l255;
		for (l255 = 0; (l255 < 2); l255 = (l255 + 1)) {
			dsp->fRec254[l255] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l256;
		for (l256 = 0; (l256 < 2); l256 = (l256 + 1)) {
			dsp->fRec253[l256] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l257;
		for (l257 = 0; (l257 < 2); l257 = (l257 + 1)) {
			dsp->fRec252[l257] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l258;
		for (l258 = 0; (l258 < 2); l258 = (l258 + 1)) {
			dsp->fRec251[l258] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l259;
		for (l259 = 0; (l259 < 2); l259 = (l259 + 1)) {
			dsp->fRec250[l259] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l260;
		for (l260 = 0; (l260 < 2); l260 = (l260 + 1)) {
			dsp->fRec249[l260] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l261;
		for (l261 = 0; (l261 < 2); l261 = (l261 + 1)) {
			dsp->fRec265[l261] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l262;
		for (l262 = 0; (l262 < 2); l262 = (l262 + 1)) {
			dsp->fRec266[l262] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l263;
		for (l263 = 0; (l263 < 2); l263 = (l263 + 1)) {
			dsp->fRec264[l263] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l264;
		for (l264 = 0; (l264 < 2); l264 = (l264 + 1)) {
			dsp->fRec263[l264] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l265;
		for (l265 = 0; (l265 < 2); l265 = (l265 + 1)) {
			dsp->fRec262[l265] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l266;
		for (l266 = 0; (l266 < 2); l266 = (l266 + 1)) {
			dsp->fRec261[l266] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l267;
		for (l267 = 0; (l267 < 2); l267 = (l267 + 1)) {
			dsp->fRec260[l267] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l268;
		for (l268 = 0; (l268 < 2); l268 = (l268 + 1)) {
			dsp->fRec259[l268] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l269;
		for (l269 = 0; (l269 < 2); l269 = (l269 + 1)) {
			dsp->fRec258[l269] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l270;
		for (l270 = 0; (l270 < 3); l270 = (l270 + 1)) {
			dsp->fRec202[l270] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l271;
		for (l271 = 0; (l271 < 2); l271 = (l271 + 1)) {
			dsp->fVec5[l271] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l272;
		for (l272 = 0; (l272 < 2); l272 = (l272 + 1)) {
			dsp->fRec201[l272] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l273;
		for (l273 = 0; (l273 < 2); l273 = (l273 + 1)) {
			dsp->fRec267[l273] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l274;
		for (l274 = 0; (l274 < 2); l274 = (l274 + 1)) {
			dsp->fRec268[l274] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l275;
		for (l275 = 0; (l275 < 2); l275 = (l275 + 1)) {
			dsp->fVec6[l275] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l276;
		for (l276 = 0; (l276 < 2); l276 = (l276 + 1)) {
			dsp->fRec270[l276] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l277;
		for (l277 = 0; (l277 < 2); l277 = (l277 + 1)) {
			dsp->fRec269[l277] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l278;
		for (l278 = 0; (l278 < 2); l278 = (l278 + 1)) {
			dsp->fRec274[l278] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l279;
		for (l279 = 0; (l279 < 2); l279 = (l279 + 1)) {
			dsp->iRec276[l279] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l280;
		for (l280 = 0; (l280 < 2); l280 = (l280 + 1)) {
			dsp->fRec275[l280] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l281;
		for (l281 = 0; (l281 < 2); l281 = (l281 + 1)) {
			dsp->fRec272[l281] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l282;
		for (l282 = 0; (l282 < 2); l282 = (l282 + 1)) {
			dsp->fRec278[l282] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l283;
		for (l283 = 0; (l283 < 2); l283 = (l283 + 1)) {
			dsp->fRec279[l283] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l284;
		for (l284 = 0; (l284 < 3); l284 = (l284 + 1)) {
			dsp->fRec277[l284] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l285;
		for (l285 = 0; (l285 < 2); l285 = (l285 + 1)) {
			dsp->fRec273[l285] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l286;
		for (l286 = 0; (l286 < 3); l286 = (l286 + 1)) {
			dsp->fRec271[l286] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l287;
		for (l287 = 0; (l287 < 2); l287 = (l287 + 1)) {
			dsp->fRec281[l287] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l288;
		for (l288 = 0; (l288 < 2); l288 = (l288 + 1)) {
			dsp->fVec7[l288] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l289;
		for (l289 = 0; (l289 < 2); l289 = (l289 + 1)) {
			dsp->fRec284[l289] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l290;
		for (l290 = 0; (l290 < 2); l290 = (l290 + 1)) {
			dsp->fRec285[l290] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l291;
		for (l291 = 0; (l291 < 3); l291 = (l291 + 1)) {
			dsp->fRec283[l291] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l292;
		for (l292 = 0; (l292 < 2); l292 = (l292 + 1)) {
			dsp->fRec282[l292] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l293;
		for (l293 = 0; (l293 < 2); l293 = (l293 + 1)) {
			dsp->fRec286[l293] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l294;
		for (l294 = 0; (l294 < 2); l294 = (l294 + 1)) {
			dsp->fRec287[l294] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l295;
		for (l295 = 0; (l295 < 3); l295 = (l295 + 1)) {
			dsp->fRec288[l295] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l296;
		for (l296 = 0; (l296 < 2); l296 = (l296 + 1)) {
			dsp->fVec8[l296] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l297;
		for (l297 = 0; (l297 < 2); l297 = (l297 + 1)) {
			dsp->fRec290[l297] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l298;
		for (l298 = 0; (l298 < 2); l298 = (l298 + 1)) {
			dsp->fVec9[l298] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l299;
		for (l299 = 0; (l299 < 2); l299 = (l299 + 1)) {
			dsp->fRec291[l299] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l300;
		for (l300 = 0; (l300 < 2); l300 = (l300 + 1)) {
			dsp->iVec10[l300] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l301;
		for (l301 = 0; (l301 < 2); l301 = (l301 + 1)) {
			dsp->fRec292[l301] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l302;
		for (l302 = 0; (l302 < 2); l302 = (l302 + 1)) {
			dsp->fRec289[l302] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l303;
		for (l303 = 0; (l303 < 2); l303 = (l303 + 1)) {
			dsp->fRec294[l303] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l304;
		for (l304 = 0; (l304 < 2); l304 = (l304 + 1)) {
			dsp->fRec297[l304] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l305;
		for (l305 = 0; (l305 < 2); l305 = (l305 + 1)) {
			dsp->fVec11[l305] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l306;
		for (l306 = 0; (l306 < 2); l306 = (l306 + 1)) {
			dsp->fRec301[l306] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l307;
		for (l307 = 0; (l307 < 2); l307 = (l307 + 1)) {
			dsp->fVec12[l307] = 0.0f;
			
		}
		
	}
	dsp->IOTA = 0;
	/* C99 loop */
	{
		int l308;
		for (l308 = 0; (l308 < 256); l308 = (l308 + 1)) {
			dsp->fVec13[l308] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l309;
		for (l309 = 0; (l309 < 2); l309 = (l309 + 1)) {
			dsp->fVec14[l309] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l310;
		for (l310 = 0; (l310 < 2); l310 = (l310 + 1)) {
			dsp->fRec302[l310] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l311;
		for (l311 = 0; (l311 < 2); l311 = (l311 + 1)) {
			dsp->fVec15[l311] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l312;
		for (l312 = 0; (l312 < 512); l312 = (l312 + 1)) {
			dsp->fVec16[l312] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l313;
		for (l313 = 0; (l313 < 2); l313 = (l313 + 1)) {
			dsp->fVec17[l313] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l314;
		for (l314 = 0; (l314 < 2); l314 = (l314 + 1)) {
			dsp->fRec303[l314] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l315;
		for (l315 = 0; (l315 < 2); l315 = (l315 + 1)) {
			dsp->fVec18[l315] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l316;
		for (l316 = 0; (l316 < 256); l316 = (l316 + 1)) {
			dsp->fVec19[l316] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l317;
		for (l317 = 0; (l317 < 2); l317 = (l317 + 1)) {
			dsp->fVec20[l317] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l318;
		for (l318 = 0; (l318 < 2); l318 = (l318 + 1)) {
			dsp->fRec304[l318] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l319;
		for (l319 = 0; (l319 < 2); l319 = (l319 + 1)) {
			dsp->fVec21[l319] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l320;
		for (l320 = 0; (l320 < 512); l320 = (l320 + 1)) {
			dsp->fVec22[l320] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l321;
		for (l321 = 0; (l321 < 2); l321 = (l321 + 1)) {
			dsp->fVec23[l321] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l322;
		for (l322 = 0; (l322 < 2); l322 = (l322 + 1)) {
			dsp->fRec305[l322] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l323;
		for (l323 = 0; (l323 < 2); l323 = (l323 + 1)) {
			dsp->fVec24[l323] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l324;
		for (l324 = 0; (l324 < 256); l324 = (l324 + 1)) {
			dsp->fVec25[l324] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l325;
		for (l325 = 0; (l325 < 2); l325 = (l325 + 1)) {
			dsp->fVec26[l325] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l326;
		for (l326 = 0; (l326 < 2); l326 = (l326 + 1)) {
			dsp->fRec306[l326] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l327;
		for (l327 = 0; (l327 < 2); l327 = (l327 + 1)) {
			dsp->fVec27[l327] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l328;
		for (l328 = 0; (l328 < 512); l328 = (l328 + 1)) {
			dsp->fVec28[l328] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l329;
		for (l329 = 0; (l329 < 3); l329 = (l329 + 1)) {
			dsp->fRec300[l329] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l330;
		for (l330 = 0; (l330 < 2); l330 = (l330 + 1)) {
			dsp->fRec298[l330] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l331;
		for (l331 = 0; (l331 < 2); l331 = (l331 + 1)) {
			dsp->fRec295[l331] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l332;
		for (l332 = 0; (l332 < 3); l332 = (l332 + 1)) {
			dsp->fRec293[l332] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l333;
		for (l333 = 0; (l333 < 2); l333 = (l333 + 1)) {
			dsp->fVec29[l333] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l334;
		for (l334 = 0; (l334 < 2); l334 = (l334 + 1)) {
			dsp->fRec310[l334] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l335;
		for (l335 = 0; (l335 < 2); l335 = (l335 + 1)) {
			dsp->fVec30[l335] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l336;
		for (l336 = 0; (l336 < 2); l336 = (l336 + 1)) {
			dsp->fRec311[l336] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l337;
		for (l337 = 0; (l337 < 2); l337 = (l337 + 1)) {
			dsp->iVec31[l337] = 0;
			
		}
		
	}
	/* C99 loop */
	{
		int l338;
		for (l338 = 0; (l338 < 2); l338 = (l338 + 1)) {
			dsp->fVec32[l338] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l339;
		for (l339 = 0; (l339 < 2); l339 = (l339 + 1)) {
			dsp->fRec309[l339] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l340;
		for (l340 = 0; (l340 < 2); l340 = (l340 + 1)) {
			dsp->fRec307[l340] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l341;
		for (l341 = 0; (l341 < 2); l341 = (l341 + 1)) {
			dsp->fRec312[l341] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l342;
		for (l342 = 0; (l342 < 2); l342 = (l342 + 1)) {
			dsp->fRec313[l342] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l343;
		for (l343 = 0; (l343 < 2); l343 = (l343 + 1)) {
			dsp->fRec308[l343] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l344;
		for (l344 = 0; (l344 < 2); l344 = (l344 + 1)) {
			dsp->fVec33[l344] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l345;
		for (l345 = 0; (l345 < 2); l345 = (l345 + 1)) {
			dsp->fRec315[l345] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l346;
		for (l346 = 0; (l346 < 2); l346 = (l346 + 1)) {
			dsp->fVec34[l346] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l347;
		for (l347 = 0; (l347 < 2); l347 = (l347 + 1)) {
			dsp->fVec35[l347] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l348;
		for (l348 = 0; (l348 < 2); l348 = (l348 + 1)) {
			dsp->fRec316[l348] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l349;
		for (l349 = 0; (l349 < 4096); l349 = (l349 + 1)) {
			dsp->fVec36[l349] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l350;
		for (l350 = 0; (l350 < 2); l350 = (l350 + 1)) {
			dsp->fRec314[l350] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l351;
		for (l351 = 0; (l351 < 2); l351 = (l351 + 1)) {
			dsp->fVec37[l351] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l352;
		for (l352 = 0; (l352 < 2); l352 = (l352 + 1)) {
			dsp->fRec318[l352] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l353;
		for (l353 = 0; (l353 < 2); l353 = (l353 + 1)) {
			dsp->fVec38[l353] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l354;
		for (l354 = 0; (l354 < 2); l354 = (l354 + 1)) {
			dsp->fRec319[l354] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l355;
		for (l355 = 0; (l355 < 4096); l355 = (l355 + 1)) {
			dsp->fVec39[l355] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l356;
		for (l356 = 0; (l356 < 2); l356 = (l356 + 1)) {
			dsp->fRec317[l356] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l357;
		for (l357 = 0; (l357 < 2); l357 = (l357 + 1)) {
			dsp->fVec40[l357] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l358;
		for (l358 = 0; (l358 < 2); l358 = (l358 + 1)) {
			dsp->fRec321[l358] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l359;
		for (l359 = 0; (l359 < 2); l359 = (l359 + 1)) {
			dsp->fVec41[l359] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l360;
		for (l360 = 0; (l360 < 2); l360 = (l360 + 1)) {
			dsp->fRec322[l360] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l361;
		for (l361 = 0; (l361 < 4096); l361 = (l361 + 1)) {
			dsp->fVec42[l361] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l362;
		for (l362 = 0; (l362 < 2); l362 = (l362 + 1)) {
			dsp->fRec320[l362] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l363;
		for (l363 = 0; (l363 < 2); l363 = (l363 + 1)) {
			dsp->fVec43[l363] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l364;
		for (l364 = 0; (l364 < 2); l364 = (l364 + 1)) {
			dsp->fRec324[l364] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l365;
		for (l365 = 0; (l365 < 2); l365 = (l365 + 1)) {
			dsp->fVec44[l365] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l366;
		for (l366 = 0; (l366 < 2); l366 = (l366 + 1)) {
			dsp->fRec325[l366] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l367;
		for (l367 = 0; (l367 < 4096); l367 = (l367 + 1)) {
			dsp->fVec45[l367] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l368;
		for (l368 = 0; (l368 < 2); l368 = (l368 + 1)) {
			dsp->fRec323[l368] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l369;
		for (l369 = 0; (l369 < 2); l369 = (l369 + 1)) {
			dsp->fRec337[l369] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l370;
		for (l370 = 0; (l370 < 2); l370 = (l370 + 1)) {
			dsp->fRec336[l370] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l371;
		for (l371 = 0; (l371 < 8192); l371 = (l371 + 1)) {
			dsp->fVec46[l371] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l372;
		for (l372 = 0; (l372 < 4096); l372 = (l372 + 1)) {
			dsp->fVec47[l372] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l373;
		for (l373 = 0; (l373 < 1024); l373 = (l373 + 1)) {
			dsp->fVec48[l373] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l374;
		for (l374 = 0; (l374 < 2); l374 = (l374 + 1)) {
			dsp->fRec334[l374] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l375;
		for (l375 = 0; (l375 < 2); l375 = (l375 + 1)) {
			dsp->fRec341[l375] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l376;
		for (l376 = 0; (l376 < 2); l376 = (l376 + 1)) {
			dsp->fRec340[l376] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l377;
		for (l377 = 0; (l377 < 16384); l377 = (l377 + 1)) {
			dsp->fVec49[l377] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l378;
		for (l378 = 0; (l378 < 2048); l378 = (l378 + 1)) {
			dsp->fVec50[l378] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l379;
		for (l379 = 0; (l379 < 2); l379 = (l379 + 1)) {
			dsp->fRec338[l379] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l380;
		for (l380 = 0; (l380 < 2); l380 = (l380 + 1)) {
			dsp->fRec345[l380] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l381;
		for (l381 = 0; (l381 < 2); l381 = (l381 + 1)) {
			dsp->fRec344[l381] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l382;
		for (l382 = 0; (l382 < 8192); l382 = (l382 + 1)) {
			dsp->fVec51[l382] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l383;
		for (l383 = 0; (l383 < 2048); l383 = (l383 + 1)) {
			dsp->fVec52[l383] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l384;
		for (l384 = 0; (l384 < 2); l384 = (l384 + 1)) {
			dsp->fRec342[l384] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l385;
		for (l385 = 0; (l385 < 2); l385 = (l385 + 1)) {
			dsp->fRec349[l385] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l386;
		for (l386 = 0; (l386 < 2); l386 = (l386 + 1)) {
			dsp->fRec348[l386] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l387;
		for (l387 = 0; (l387 < 8192); l387 = (l387 + 1)) {
			dsp->fVec53[l387] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l388;
		for (l388 = 0; (l388 < 1024); l388 = (l388 + 1)) {
			dsp->fVec54[l388] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l389;
		for (l389 = 0; (l389 < 2); l389 = (l389 + 1)) {
			dsp->fRec346[l389] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l390;
		for (l390 = 0; (l390 < 2); l390 = (l390 + 1)) {
			dsp->fRec353[l390] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l391;
		for (l391 = 0; (l391 < 2); l391 = (l391 + 1)) {
			dsp->fRec352[l391] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l392;
		for (l392 = 0; (l392 < 8192); l392 = (l392 + 1)) {
			dsp->fVec55[l392] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l393;
		for (l393 = 0; (l393 < 4096); l393 = (l393 + 1)) {
			dsp->fVec56[l393] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l394;
		for (l394 = 0; (l394 < 1024); l394 = (l394 + 1)) {
			dsp->fVec57[l394] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l395;
		for (l395 = 0; (l395 < 2); l395 = (l395 + 1)) {
			dsp->fRec350[l395] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l396;
		for (l396 = 0; (l396 < 2); l396 = (l396 + 1)) {
			dsp->fRec357[l396] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l397;
		for (l397 = 0; (l397 < 2); l397 = (l397 + 1)) {
			dsp->fRec356[l397] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l398;
		for (l398 = 0; (l398 < 4096); l398 = (l398 + 1)) {
			dsp->fVec58[l398] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l399;
		for (l399 = 0; (l399 < 2048); l399 = (l399 + 1)) {
			dsp->fVec59[l399] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l400;
		for (l400 = 0; (l400 < 2); l400 = (l400 + 1)) {
			dsp->fRec354[l400] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l401;
		for (l401 = 0; (l401 < 2); l401 = (l401 + 1)) {
			dsp->fRec361[l401] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l402;
		for (l402 = 0; (l402 < 2); l402 = (l402 + 1)) {
			dsp->fRec360[l402] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l403;
		for (l403 = 0; (l403 < 8192); l403 = (l403 + 1)) {
			dsp->fVec60[l403] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l404;
		for (l404 = 0; (l404 < 1024); l404 = (l404 + 1)) {
			dsp->fVec61[l404] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l405;
		for (l405 = 0; (l405 < 2); l405 = (l405 + 1)) {
			dsp->fRec358[l405] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l406;
		for (l406 = 0; (l406 < 2); l406 = (l406 + 1)) {
			dsp->fRec365[l406] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l407;
		for (l407 = 0; (l407 < 2); l407 = (l407 + 1)) {
			dsp->fRec364[l407] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l408;
		for (l408 = 0; (l408 < 8192); l408 = (l408 + 1)) {
			dsp->fVec62[l408] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l409;
		for (l409 = 0; (l409 < 1024); l409 = (l409 + 1)) {
			dsp->fVec63[l409] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l410;
		for (l410 = 0; (l410 < 2); l410 = (l410 + 1)) {
			dsp->fRec362[l410] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l411;
		for (l411 = 0; (l411 < 3); l411 = (l411 + 1)) {
			dsp->fRec326[l411] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l412;
		for (l412 = 0; (l412 < 3); l412 = (l412 + 1)) {
			dsp->fRec327[l412] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l413;
		for (l413 = 0; (l413 < 3); l413 = (l413 + 1)) {
			dsp->fRec328[l413] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l414;
		for (l414 = 0; (l414 < 3); l414 = (l414 + 1)) {
			dsp->fRec329[l414] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l415;
		for (l415 = 0; (l415 < 3); l415 = (l415 + 1)) {
			dsp->fRec330[l415] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l416;
		for (l416 = 0; (l416 < 3); l416 = (l416 + 1)) {
			dsp->fRec331[l416] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l417;
		for (l417 = 0; (l417 < 3); l417 = (l417 + 1)) {
			dsp->fRec332[l417] = 0.0f;
			
		}
		
	}
	/* C99 loop */
	{
		int l418;
		for (l418 = 0; (l418 < 3); l418 = (l418 + 1)) {
			dsp->fRec333[l418] = 0.0f;
			
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
	dsp->fConst10 = (0.314159274f / dsp->fConst0);
	dsp->fConst11 = (0.628318548f / dsp->fConst0);
	dsp->fConst12 = (2.0f / dsp->fConst0);
	dsp->fConst13 = (1.2566371f / dsp->fConst0);
	dsp->fConst14 = (3.0f / dsp->fConst0);
	dsp->fConst15 = (0.942477822f / dsp->fConst0);
	dsp->fConst16 = (1.88495564f / dsp->fConst0);
	dsp->fConst17 = (4.0f / dsp->fConst0);
	dsp->fConst18 = (2.51327419f / dsp->fConst0);
	dsp->fConst19 = (1.57079637f / dsp->fConst0);
	dsp->fConst20 = (3.14159274f / dsp->fConst0);
	dsp->fConst21 = (6.0f / dsp->fConst0);
	dsp->fConst22 = (3.76991129f / dsp->fConst0);
	dsp->fConst23 = (8.0f / dsp->fConst0);
	dsp->fConst24 = (5.02654839f / dsp->fConst0);
	dsp->fConst25 = (((dsp->fConst4 + -1.41421354f) / dsp->fConst3) + 1.0f);
	dsp->fConst26 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst3))));
	dsp->fConst27 = (1.0f - dsp->fConst1);
	dsp->fConst28 = (1.0f / dsp->fConst0);
	dsp->fConst29 = (0.00639999984f * dsp->fConst0);
	dsp->fConst30 = (0.00100000005f * dsp->fConst0);
	dsp->fConst31 = (0.419999987f / dsp->fConst5);
	dsp->fConst32 = (180.0f / dsp->fConst0);
	dsp->fConst33 = tanf((31415.9258f / dsp->fConst0));
	dsp->fConst34 = (1.0f / dsp->fConst33);
	dsp->fConst35 = (1.0f / (((dsp->fConst34 + 1.41421354f) / dsp->fConst33) + 1.0f));
	dsp->fConst36 = (0.0027999999f * dsp->fConst0);
	dsp->fConst37 = (((dsp->fConst34 + -1.41421354f) / dsp->fConst33) + 1.0f);
	dsp->fConst38 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst33))));
	dsp->fConst39 = (330.0f / dsp->fConst0);
	dsp->fConst40 = tanf((25472.0332f / dsp->fConst0));
	dsp->fConst41 = (1.0f / dsp->fConst40);
	dsp->fConst42 = (1.0f / (((dsp->fConst41 + 1.41421354f) / dsp->fConst40) + 1.0f));
	dsp->fConst43 = (((dsp->fConst41 + -1.41421354f) / dsp->fConst40) + 1.0f);
	dsp->fConst44 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst40))));
	dsp->fConst45 = tanf((42703.668f / dsp->fConst0));
	dsp->fConst46 = (1.0f / dsp->fConst45);
	dsp->fConst47 = (((dsp->fConst46 + 1.41421354f) / dsp->fConst45) + 1.0f);
	dsp->fConst48 = (0.680000007f / dsp->fConst47);
	dsp->fConst49 = tanf((3141.59277f / dsp->fConst0));
	dsp->fConst50 = (1.0f / dsp->fConst49);
	dsp->fConst51 = (1.0f / (((dsp->fConst50 + 1.41421354f) / dsp->fConst49) + 1.0f));
	dsp->fConst52 = (1.0f / mydsp_faustpower2_f(dsp->fConst49));
	dsp->fConst53 = max(0.0f, min(2047.0f, (0.00126903551f * dsp->fConst0)));
	dsp->fConst54 = floorf(dsp->fConst53);
	dsp->fConst55 = (dsp->fConst54 + (1.0f - dsp->fConst53));
	dsp->iConst56 = (int)dsp->fConst53;
	dsp->fConst57 = (dsp->fConst53 - dsp->fConst54);
	dsp->iConst58 = (dsp->iConst56 + 1);
	dsp->fConst59 = max(0.0f, min(2047.0f, (0.00161812303f * dsp->fConst0)));
	dsp->fConst60 = floorf(dsp->fConst59);
	dsp->fConst61 = (dsp->fConst60 + (1.0f - dsp->fConst59));
	dsp->iConst62 = (int)dsp->fConst59;
	dsp->fConst63 = (dsp->fConst59 - dsp->fConst60);
	dsp->iConst64 = (dsp->iConst62 + 1);
	dsp->fConst65 = max(0.0f, min(2047.0f, (0.00101419876f * dsp->fConst0)));
	dsp->fConst66 = floorf(dsp->fConst65);
	dsp->fConst67 = (dsp->fConst66 + (1.0f - dsp->fConst65));
	dsp->iConst68 = (int)dsp->fConst65;
	dsp->fConst69 = (dsp->fConst65 - dsp->fConst66);
	dsp->iConst70 = (dsp->iConst68 + 1);
	dsp->fConst71 = max(0.0f, min(2047.0f, (0.00138504151f * dsp->fConst0)));
	dsp->fConst72 = floorf(dsp->fConst71);
	dsp->fConst73 = (dsp->fConst72 + (1.0f - dsp->fConst71));
	dsp->iConst74 = (int)dsp->fConst71;
	dsp->fConst75 = (dsp->fConst71 - dsp->fConst72);
	dsp->iConst76 = (dsp->iConst74 + 1);
	dsp->fConst77 = max(0.0f, min(2047.0f, (0.00118483417f * dsp->fConst0)));
	dsp->fConst78 = floorf(dsp->fConst77);
	dsp->fConst79 = (dsp->fConst78 + (1.0f - dsp->fConst77));
	dsp->iConst80 = (int)dsp->fConst77;
	dsp->fConst81 = (dsp->fConst77 - dsp->fConst78);
	dsp->iConst82 = (dsp->iConst80 + 1);
	dsp->fConst83 = max(0.0f, min(2047.0f, (0.00246305414f * dsp->fConst0)));
	dsp->fConst84 = floorf(dsp->fConst83);
	dsp->fConst85 = (dsp->fConst84 + (1.0f - dsp->fConst83));
	dsp->iConst86 = (int)dsp->fConst83;
	dsp->fConst87 = (dsp->fConst83 - dsp->fConst84);
	dsp->iConst88 = (dsp->iConst86 + 1);
	dsp->fConst89 = (((dsp->fConst50 + -1.41421354f) / dsp->fConst49) + 1.0f);
	dsp->fConst90 = (2.0f * (1.0f - dsp->fConst52));
	dsp->fConst91 = (2.0f * (0.0f - dsp->fConst52));
	dsp->fConst92 = (1.0f / dsp->fConst47);
	dsp->fConst93 = (((dsp->fConst46 + -1.41421354f) / dsp->fConst45) + 1.0f);
	dsp->fConst94 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(dsp->fConst45))));
	dsp->fConst95 = (0.00700000022f * dsp->fConst0);
	dsp->fConst96 = (0.00600000005f * dsp->fConst0);
	dsp->fConst97 = (166.666672f / dsp->fConst0);
	dsp->fConst98 = (0.00609999988f * dsp->fConst0);
	dsp->fConst99 = (9.99999975e-05f * dsp->fConst0);
	dsp->fConst100 = (10000.0f / dsp->fConst0);
	dsp->fConst101 = (100000.0f / dsp->fConst0);
	dsp->fConst102 = (1000.0f / dsp->fConst0);
	dsp->fConst103 = floorf(((0.219990999f * dsp->fConst0) + 0.5f));
	dsp->fConst104 = ((0.0f - (6.90775537f * dsp->fConst103)) / dsp->fConst0);
	dsp->fConst105 = expf((0.454545468f * dsp->fConst104));
	dsp->fConst106 = mydsp_faustpower2_f(dsp->fConst105);
	dsp->fConst107 = cosf((43561.3242f / dsp->fConst0));
	dsp->fConst108 = (1.0f - (dsp->fConst106 * dsp->fConst107));
	dsp->fConst109 = (1.0f - dsp->fConst106);
	dsp->fConst110 = (dsp->fConst108 / dsp->fConst109);
	dsp->fConst111 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst108) / mydsp_faustpower2_f(dsp->fConst109)) + -1.0f)));
	dsp->fConst112 = (dsp->fConst110 - dsp->fConst111);
	dsp->fConst113 = ((dsp->fConst111 + (1.0f - dsp->fConst110)) * dsp->fConst105);
	dsp->fConst114 = ((expf((1.11111116f * dsp->fConst104)) / dsp->fConst105) + -1.0f);
	dsp->fConst115 = (1.0f / tanf((1938.36267f / dsp->fConst0)));
	dsp->fConst116 = (dsp->fConst115 + 1.0f);
	dsp->fConst117 = (0.0f - ((1.0f - dsp->fConst115) / dsp->fConst116));
	dsp->fConst118 = (1.0f / dsp->fConst116);
	dsp->fConst119 = floorf(((0.0191229992f * dsp->fConst0) + 0.5f));
	dsp->iConst120 = (int)min(4096.0f, max(0.0f, (dsp->fConst103 - dsp->fConst119)));
	dsp->iConst121 = (int)min(8192.0f, max(0.0f, (0.0140000004f * dsp->fConst0)));
	dsp->iConst122 = (int)min(512.0f, max(0.0f, (dsp->fConst119 + -1.0f)));
	dsp->fConst123 = floorf(((0.256891012f * dsp->fConst0) + 0.5f));
	dsp->fConst124 = ((0.0f - (6.90775537f * dsp->fConst123)) / dsp->fConst0);
	dsp->fConst125 = expf((0.454545468f * dsp->fConst124));
	dsp->fConst126 = mydsp_faustpower2_f(dsp->fConst125);
	dsp->fConst127 = (1.0f - (dsp->fConst107 * dsp->fConst126));
	dsp->fConst128 = (1.0f - dsp->fConst126);
	dsp->fConst129 = (dsp->fConst127 / dsp->fConst128);
	dsp->fConst130 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst127) / mydsp_faustpower2_f(dsp->fConst128)) + -1.0f)));
	dsp->fConst131 = (dsp->fConst129 - dsp->fConst130);
	dsp->fConst132 = ((dsp->fConst130 + (1.0f - dsp->fConst129)) * dsp->fConst125);
	dsp->fConst133 = ((expf((1.11111116f * dsp->fConst124)) / dsp->fConst125) + -1.0f);
	dsp->fConst134 = floorf(((0.0273330007f * dsp->fConst0) + 0.5f));
	dsp->iConst135 = (int)min(8192.0f, max(0.0f, (dsp->fConst123 - dsp->fConst134)));
	dsp->iConst136 = (int)min(1024.0f, max(0.0f, (dsp->fConst134 + -1.0f)));
	dsp->fConst137 = floorf(((0.192303002f * dsp->fConst0) + 0.5f));
	dsp->fConst138 = ((0.0f - (6.90775537f * dsp->fConst137)) / dsp->fConst0);
	dsp->fConst139 = expf((0.454545468f * dsp->fConst138));
	dsp->fConst140 = mydsp_faustpower2_f(dsp->fConst139);
	dsp->fConst141 = (1.0f - (dsp->fConst107 * dsp->fConst140));
	dsp->fConst142 = (1.0f - dsp->fConst140);
	dsp->fConst143 = (dsp->fConst141 / dsp->fConst142);
	dsp->fConst144 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst141) / mydsp_faustpower2_f(dsp->fConst142)) + -1.0f)));
	dsp->fConst145 = (dsp->fConst143 - dsp->fConst144);
	dsp->fConst146 = ((dsp->fConst144 + (1.0f - dsp->fConst143)) * dsp->fConst139);
	dsp->fConst147 = ((expf((1.11111116f * dsp->fConst138)) / dsp->fConst139) + -1.0f);
	dsp->fConst148 = floorf(((0.0292910002f * dsp->fConst0) + 0.5f));
	dsp->iConst149 = (int)min(4096.0f, max(0.0f, (dsp->fConst137 - dsp->fConst148)));
	dsp->iConst150 = (int)min(1024.0f, max(0.0f, (dsp->fConst148 + -1.0f)));
	dsp->fConst151 = floorf(((0.210389003f * dsp->fConst0) + 0.5f));
	dsp->fConst152 = ((0.0f - (6.90775537f * dsp->fConst151)) / dsp->fConst0);
	dsp->fConst153 = expf((0.454545468f * dsp->fConst152));
	dsp->fConst154 = mydsp_faustpower2_f(dsp->fConst153);
	dsp->fConst155 = (1.0f - (dsp->fConst107 * dsp->fConst154));
	dsp->fConst156 = (1.0f - dsp->fConst154);
	dsp->fConst157 = (dsp->fConst155 / dsp->fConst156);
	dsp->fConst158 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst155) / mydsp_faustpower2_f(dsp->fConst156)) + -1.0f)));
	dsp->fConst159 = (dsp->fConst157 - dsp->fConst158);
	dsp->fConst160 = ((dsp->fConst158 + (1.0f - dsp->fConst157)) * dsp->fConst153);
	dsp->fConst161 = ((expf((1.11111116f * dsp->fConst152)) / dsp->fConst153) + -1.0f);
	dsp->fConst162 = floorf(((0.0244210009f * dsp->fConst0) + 0.5f));
	dsp->iConst163 = (int)min(4096.0f, max(0.0f, (dsp->fConst151 - dsp->fConst162)));
	dsp->iConst164 = (int)min(512.0f, max(0.0f, (dsp->fConst162 + -1.0f)));
	dsp->fConst165 = floorf(((0.125f * dsp->fConst0) + 0.5f));
	dsp->fConst166 = ((0.0f - (6.90775537f * dsp->fConst165)) / dsp->fConst0);
	dsp->fConst167 = expf((0.454545468f * dsp->fConst166));
	dsp->fConst168 = mydsp_faustpower2_f(dsp->fConst167);
	dsp->fConst169 = (1.0f - (dsp->fConst107 * dsp->fConst168));
	dsp->fConst170 = (1.0f - dsp->fConst168);
	dsp->fConst171 = (dsp->fConst169 / dsp->fConst170);
	dsp->fConst172 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst169) / mydsp_faustpower2_f(dsp->fConst170)) + -1.0f)));
	dsp->fConst173 = (dsp->fConst171 - dsp->fConst172);
	dsp->fConst174 = ((dsp->fConst172 + (1.0f - dsp->fConst171)) * dsp->fConst167);
	dsp->fConst175 = ((expf((1.11111116f * dsp->fConst166)) / dsp->fConst167) + -1.0f);
	dsp->fConst176 = floorf(((0.0134579996f * dsp->fConst0) + 0.5f));
	dsp->iConst177 = (int)min(4096.0f, max(0.0f, (dsp->fConst165 - dsp->fConst176)));
	dsp->iConst178 = (int)min(512.0f, max(0.0f, (dsp->fConst176 + -1.0f)));
	dsp->fConst179 = floorf(((0.127837002f * dsp->fConst0) + 0.5f));
	dsp->fConst180 = ((0.0f - (6.90775537f * dsp->fConst179)) / dsp->fConst0);
	dsp->fConst181 = expf((0.454545468f * dsp->fConst180));
	dsp->fConst182 = mydsp_faustpower2_f(dsp->fConst181);
	dsp->fConst183 = (1.0f - (dsp->fConst107 * dsp->fConst182));
	dsp->fConst184 = (1.0f - dsp->fConst182);
	dsp->fConst185 = (dsp->fConst183 / dsp->fConst184);
	dsp->fConst186 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst183) / mydsp_faustpower2_f(dsp->fConst184)) + -1.0f)));
	dsp->fConst187 = (dsp->fConst185 - dsp->fConst186);
	dsp->fConst188 = ((dsp->fConst186 + (1.0f - dsp->fConst185)) * dsp->fConst181);
	dsp->fConst189 = ((expf((1.11111116f * dsp->fConst180)) / dsp->fConst181) + -1.0f);
	dsp->fConst190 = floorf(((0.0316039994f * dsp->fConst0) + 0.5f));
	dsp->iConst191 = (int)min(2048.0f, max(0.0f, (dsp->fConst179 - dsp->fConst190)));
	dsp->iConst192 = (int)min(1024.0f, max(0.0f, (dsp->fConst190 + -1.0f)));
	dsp->fConst193 = floorf(((0.174713001f * dsp->fConst0) + 0.5f));
	dsp->fConst194 = ((0.0f - (6.90775537f * dsp->fConst193)) / dsp->fConst0);
	dsp->fConst195 = expf((0.454545468f * dsp->fConst194));
	dsp->fConst196 = mydsp_faustpower2_f(dsp->fConst195);
	dsp->fConst197 = (1.0f - (dsp->fConst107 * dsp->fConst196));
	dsp->fConst198 = (1.0f - dsp->fConst196);
	dsp->fConst199 = (dsp->fConst197 / dsp->fConst198);
	dsp->fConst200 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst197) / mydsp_faustpower2_f(dsp->fConst198)) + -1.0f)));
	dsp->fConst201 = (dsp->fConst199 - dsp->fConst200);
	dsp->fConst202 = ((dsp->fConst200 + (1.0f - dsp->fConst199)) * dsp->fConst195);
	dsp->fConst203 = ((expf((1.11111116f * dsp->fConst194)) / dsp->fConst195) + -1.0f);
	dsp->fConst204 = floorf(((0.0229039993f * dsp->fConst0) + 0.5f));
	dsp->iConst205 = (int)min(4096.0f, max(0.0f, (dsp->fConst193 - dsp->fConst204)));
	dsp->iConst206 = (int)min(512.0f, max(0.0f, (dsp->fConst204 + -1.0f)));
	dsp->fConst207 = floorf(((0.153128996f * dsp->fConst0) + 0.5f));
	dsp->fConst208 = ((0.0f - (6.90775537f * dsp->fConst207)) / dsp->fConst0);
	dsp->fConst209 = expf((0.454545468f * dsp->fConst208));
	dsp->fConst210 = mydsp_faustpower2_f(dsp->fConst209);
	dsp->fConst211 = (1.0f - (dsp->fConst107 * dsp->fConst210));
	dsp->fConst212 = (1.0f - dsp->fConst210);
	dsp->fConst213 = (dsp->fConst211 / dsp->fConst212);
	dsp->fConst214 = sqrtf(max(0.0f, ((mydsp_faustpower2_f(dsp->fConst211) / mydsp_faustpower2_f(dsp->fConst212)) + -1.0f)));
	dsp->fConst215 = (dsp->fConst213 - dsp->fConst214);
	dsp->fConst216 = ((dsp->fConst214 + (1.0f - dsp->fConst213)) * dsp->fConst209);
	dsp->fConst217 = ((expf((1.11111116f * dsp->fConst208)) / dsp->fConst209) + -1.0f);
	dsp->fConst218 = floorf(((0.0203460008f * dsp->fConst0) + 0.5f));
	dsp->iConst219 = (int)min(4096.0f, max(0.0f, (dsp->fConst207 - dsp->fConst218)));
	dsp->iConst220 = (int)min(512.0f, max(0.0f, (dsp->fConst218 + -1.0f)));
	
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
	float fSlow13 = (dsp->fConst10 * fSlow10);
	float fSlow14 = (dsp->fConst11 * fSlow10);
	float fSlow15 = (float)dsp->fVslider9;
	float fSlow16 = (dsp->fConst12 * fSlow10);
	float fSlow17 = (dsp->fConst13 * fSlow10);
	float fSlow18 = (float)dsp->fVslider10;
	float fSlow19 = (dsp->fConst14 * fSlow10);
	float fSlow20 = (dsp->fConst15 * fSlow10);
	float fSlow21 = (dsp->fConst16 * fSlow10);
	float fSlow22 = (float)dsp->fVslider11;
	float fSlow23 = (dsp->fConst17 * fSlow10);
	float fSlow24 = (dsp->fConst18 * fSlow10);
	float fSlow25 = (float)dsp->fVslider12;
	float fSlow26 = (dsp->fConst9 * fSlow10);
	float fSlow27 = (dsp->fConst19 * fSlow10);
	float fSlow28 = (dsp->fConst20 * fSlow10);
	float fSlow29 = (float)dsp->fVslider13;
	float fSlow30 = (dsp->fConst21 * fSlow10);
	float fSlow31 = (dsp->fConst22 * fSlow10);
	float fSlow32 = (float)dsp->fVslider14;
	float fSlow33 = (dsp->fConst23 * fSlow10);
	float fSlow34 = (dsp->fConst24 * fSlow10);
	float fSlow35 = (float)dsp->fVslider15;
	int iSlow36 = (fSlow35 > 0.0f);
	float fSlow37 = expf((0.0f - (dsp->fConst7 / (iSlow36?fSlow6:fSlow5))));
	float fSlow38 = ((1.0f - fSlow37) * (iSlow36?fSlow35:0.0f));
	float fSlow39 = (float)dsp->fVslider16;
	float fSlow40 = (dsp->fConst8 * fSlow39);
	float fSlow41 = (dsp->fConst10 * fSlow39);
	float fSlow42 = (dsp->fConst11 * fSlow39);
	float fSlow43 = (dsp->fConst12 * fSlow39);
	float fSlow44 = (dsp->fConst13 * fSlow39);
	float fSlow45 = (dsp->fConst14 * fSlow39);
	float fSlow46 = (dsp->fConst15 * fSlow39);
	float fSlow47 = (dsp->fConst16 * fSlow39);
	float fSlow48 = (dsp->fConst17 * fSlow39);
	float fSlow49 = (dsp->fConst18 * fSlow39);
	float fSlow50 = (dsp->fConst9 * fSlow39);
	float fSlow51 = (dsp->fConst19 * fSlow39);
	float fSlow52 = (dsp->fConst20 * fSlow39);
	float fSlow53 = (dsp->fConst21 * fSlow39);
	float fSlow54 = (dsp->fConst22 * fSlow39);
	float fSlow55 = (dsp->fConst23 * fSlow39);
	float fSlow56 = (dsp->fConst24 * fSlow39);
	float fSlow57 = (float)dsp->fVslider17;
	int iSlow58 = (fSlow57 > 0.0f);
	float fSlow59 = expf((0.0f - (dsp->fConst7 / (iSlow58?fSlow6:fSlow5))));
	float fSlow60 = ((1.0f - fSlow59) * (iSlow58?fSlow57:0.0f));
	float fSlow61 = (float)dsp->fVslider18;
	float fSlow62 = (dsp->fConst8 * fSlow61);
	float fSlow63 = (dsp->fConst10 * fSlow61);
	float fSlow64 = (dsp->fConst11 * fSlow61);
	float fSlow65 = (dsp->fConst12 * fSlow61);
	float fSlow66 = (dsp->fConst13 * fSlow61);
	float fSlow67 = (dsp->fConst14 * fSlow61);
	float fSlow68 = (dsp->fConst15 * fSlow61);
	float fSlow69 = (dsp->fConst16 * fSlow61);
	float fSlow70 = (dsp->fConst17 * fSlow61);
	float fSlow71 = (dsp->fConst18 * fSlow61);
	float fSlow72 = (dsp->fConst9 * fSlow61);
	float fSlow73 = (dsp->fConst19 * fSlow61);
	float fSlow74 = (dsp->fConst20 * fSlow61);
	float fSlow75 = (dsp->fConst21 * fSlow61);
	float fSlow76 = (dsp->fConst22 * fSlow61);
	float fSlow77 = (dsp->fConst23 * fSlow61);
	float fSlow78 = (dsp->fConst24 * fSlow61);
	float fSlow79 = (float)dsp->fVslider19;
	int iSlow80 = (fSlow79 > 0.0f);
	float fSlow81 = expf((0.0f - (dsp->fConst7 / (iSlow80?fSlow6:fSlow5))));
	float fSlow82 = ((1.0f - fSlow81) * (iSlow80?fSlow79:0.0f));
	float fSlow83 = (float)dsp->fVslider20;
	float fSlow84 = (dsp->fConst8 * fSlow83);
	float fSlow85 = (dsp->fConst10 * fSlow83);
	float fSlow86 = (dsp->fConst11 * fSlow83);
	float fSlow87 = (dsp->fConst12 * fSlow83);
	float fSlow88 = (dsp->fConst13 * fSlow83);
	float fSlow89 = (dsp->fConst14 * fSlow83);
	float fSlow90 = (dsp->fConst15 * fSlow83);
	float fSlow91 = (dsp->fConst16 * fSlow83);
	float fSlow92 = (dsp->fConst17 * fSlow83);
	float fSlow93 = (dsp->fConst18 * fSlow83);
	float fSlow94 = (dsp->fConst9 * fSlow83);
	float fSlow95 = (dsp->fConst19 * fSlow83);
	float fSlow96 = (dsp->fConst20 * fSlow83);
	float fSlow97 = (dsp->fConst21 * fSlow83);
	float fSlow98 = (dsp->fConst22 * fSlow83);
	float fSlow99 = (dsp->fConst23 * fSlow83);
	float fSlow100 = (dsp->fConst24 * fSlow83);
	float fSlow101 = (float)dsp->fVslider21;
	float fSlow102 = sinf((3.14159274f * min(0.25f, (dsp->fConst28 * (float)dsp->fVslider22))));
	float fSlow103 = (2.0f * fSlow102);
	float fSlow104 = min(-0.135579944f, min(2.0f, ((1.0f / fSlow102) - fSlow102)));
	float fSlow105 = (float)dsp->fButton0;
	float fSlow106 = (0.00100000005f * (float)dsp->fVslider23);
	float fSlow107 = (float)dsp->fVslider24;
	float fSlow108 = (float)dsp->fVslider25;
	float fSlow109 = (0.00100000005f * (fSlow108 * (float)dsp->fVslider26));
	float fSlow110 = (1.0f - (0.00100000005f * fSlow108));
	float fSlow111 = (float)dsp->fVslider27;
	float fSlow112 = (float)dsp->fVslider28;
	float fSlow113 = (float)dsp->fVslider29;
	int iSlow114 = (fSlow113 > 0.0f);
	float fSlow115 = (0.00100000005f * (float)dsp->fVslider30);
	float fSlow116 = (float)dsp->fVslider31;
	int iSlow117 = (int)(dsp->fConst30 * fSlow116);
	float fSlow118 = (0.00100000005f * (float)dsp->fVslider32);
	float fSlow119 = (0.00100000005f * fSlow116);
	float fSlow120 = ((float)iSlow114 * (float)dsp->fVslider33);
	float fSlow121 = expf((0.0f - (dsp->fConst7 / (iSlow114?9.99999975e-05f:(0.00100000005f * (float)dsp->fVslider34)))));
	float fSlow122 = ((1.0f - fSlow121) * (iSlow114?fSlow113:0.0f));
	float fSlow123 = (2.0f * (1.0f - powf((float)dsp->fVslider35, 0.25f)));
	float fSlow124 = (8.0f * ((float)dsp->fVslider36 * (float)dsp->fVslider37));
	float fSlow125 = (float)dsp->fVslider38;
	float fSlow126 = sinf((3.14159274f * min(0.25f, (dsp->fConst32 * fSlow125))));
	float fSlow127 = (2.0f * fSlow126);
	float fSlow128 = (float)dsp->fButton1;
	float fSlow129 = (float)dsp->fVslider39;
	float fSlow130 = (0.5f * (fSlow129 + 0.200000003f));
	float fSlow131 = ((2.0f * fSlow129) + 0.5f);
	float fSlow132 = min((2.0f * (1.0f - powf((1.0f - (0.0900000036f / fSlow131)), 0.25f))), min(2.0f, ((1.0f / fSlow126) - fSlow126)));
	float fSlow133 = sinf((3.14159274f * min(0.25f, (dsp->fConst39 * fSlow125))));
	float fSlow134 = (2.0f * fSlow133);
	float fSlow135 = min((2.0f * (1.0f - powf((1.0f - (0.0450000018f / fSlow131)), 0.25f))), min(2.0f, ((1.0f / fSlow133) - fSlow133)));
	float fSlow136 = (dsp->fConst42 * fSlow129);
	float fSlow137 = (float)dsp->fButton2;
	float fSlow138 = (float)dsp->fButton3;
	float fSlow139 = (0.00100000005f * (float)dsp->fVslider40);
	float fSlow140 = sinf((3.14159274f * min(0.25f, (dsp->fConst28 * (float)dsp->fVslider41))));
	float fSlow141 = (2.0f * fSlow140);
	float fSlow142 = min(0.519834399f, min(2.0f, ((1.0f / fSlow140) - fSlow140)));
	float fSlow143 = (float)dsp->fVslider42;
	float fSlow144 = ((fSlow143 > 1.0f)?1.0f:((fSlow143 < -1.0f)?-1.0f:fSlow143));
	float fSlow145 = (float)dsp->fVslider43;
	float fSlow146 = (dsp->fConst28 * (float)dsp->fVslider44);
	float fSlow147 = (float)dsp->fVslider45;
	float fSlow148 = (float)dsp->fButton4;
	float fSlow149 = (float)dsp->fButton5;
	float fSlow150 = ((0.00100000005f * (float)dsp->fVslider46) + 0.00600000005f);
	float fSlow151 = (dsp->fConst0 * fSlow150);
	float fSlow152 = (dsp->fConst28 / (fSlow150 + -0.00600000005f));
	float fSlow153 = (float)dsp->fVslider47;
	float fSlow154 = (float)dsp->fVslider48;
	float fSlow155 = (dsp->fConst0 / fSlow154);
	float fSlow156 = (fSlow155 + -0.999994993f);
	float fSlow157 = floorf(fSlow156);
	float fSlow158 = (fSlow155 + (-1.0f - fSlow157));
	float fSlow159 = (fSlow155 + (-2.0f - fSlow157));
	float fSlow160 = (fSlow155 + (-3.0f - fSlow157));
	float fSlow161 = (((0.0f - fSlow158) * (0.0f - (0.5f * fSlow159))) * (0.0f - (0.333333343f * fSlow160)));
	float fSlow162 = (float)dsp->fHslider0;
	float fSlow163 = expf((0.0f - (dsp->fConst101 / (fSlow162 * fSlow154))));
	float fSlow164 = (float)dsp->fHslider1;
	float fSlow165 = (float)dsp->fHslider2;
	float fSlow166 = (1.0f / fSlow165);
	float fSlow167 = (1.0f / (float)dsp->fHslider3);
	float fSlow168 = (1.0f - fSlow167);
	float fSlow169 = (1.0f / fSlow168);
	float fSlow170 = (float)dsp->fHslider4;
	float fSlow171 = (1.0f / fSlow170);
	float fSlow172 = (1.0f / (float)dsp->fHslider5);
	float fSlow173 = (1.0f - fSlow172);
	float fSlow174 = (1.0f / fSlow173);
	float fSlow175 = (dsp->fConst2 * fSlow164);
	float fSlow176 = (float)dsp->fHslider6;
	float fSlow177 = (float)dsp->fButton6;
	float fSlow178 = (float)dsp->fHslider8;
	float fSlow179 = ((float)dsp->fHslider7 + fSlow178);
	float fSlow180 = (dsp->fConst30 * fSlow179);
	float fSlow181 = (dsp->fConst30 * fSlow178);
	float fSlow182 = (1.0f / (0.0f - (dsp->fConst30 * (fSlow178 - fSlow179))));
	float fSlow183 = (dsp->fConst102 / fSlow178);
	int iSlow184 = (int)fSlow156;
	int iSlow185 = min(8192, max(0, iSlow184));
	float fSlow186 = (fSlow155 - fSlow157);
	float fSlow187 = ((0.0f - fSlow159) * (0.0f - (0.5f * fSlow160)));
	int iSlow188 = min(8192, max(0, (iSlow184 + 1)));
	float fSlow189 = (0.5f * (fSlow158 * (0.0f - fSlow160)));
	int iSlow190 = min(8192, max(0, (iSlow184 + 2)));
	float fSlow191 = (0.166666672f * (fSlow158 * fSlow159));
	int iSlow192 = min(8192, max(0, (iSlow184 + 3)));
	float fSlow193 = (float)dsp->fVslider49;
	float fSlow194 = (dsp->fConst0 / fSlow193);
	float fSlow195 = (fSlow194 + -0.999994993f);
	float fSlow196 = floorf(fSlow195);
	float fSlow197 = (fSlow194 + (-1.0f - fSlow196));
	float fSlow198 = (fSlow194 + (-2.0f - fSlow196));
	float fSlow199 = (fSlow194 + (-3.0f - fSlow196));
	float fSlow200 = (((0.0f - fSlow197) * (0.0f - (0.5f * fSlow198))) * (0.0f - (0.333333343f * fSlow199)));
	float fSlow201 = expf((0.0f - (dsp->fConst101 / (fSlow162 * fSlow193))));
	float fSlow202 = (float)dsp->fButton7;
	int iSlow203 = (int)fSlow195;
	int iSlow204 = min(8192, max(0, iSlow203));
	float fSlow205 = (fSlow194 - fSlow196);
	float fSlow206 = ((0.0f - fSlow198) * (0.0f - (0.5f * fSlow199)));
	int iSlow207 = min(8192, max(0, (iSlow203 + 1)));
	float fSlow208 = (0.5f * (fSlow197 * (0.0f - fSlow199)));
	int iSlow209 = min(8192, max(0, (iSlow203 + 2)));
	float fSlow210 = (0.166666672f * (fSlow197 * fSlow198));
	int iSlow211 = min(8192, max(0, (iSlow203 + 3)));
	float fSlow212 = (float)dsp->fVslider50;
	float fSlow213 = (dsp->fConst0 / fSlow212);
	float fSlow214 = (fSlow213 + -0.999994993f);
	float fSlow215 = floorf(fSlow214);
	float fSlow216 = (fSlow213 + (-1.0f - fSlow215));
	float fSlow217 = (fSlow213 + (-2.0f - fSlow215));
	float fSlow218 = (fSlow213 + (-3.0f - fSlow215));
	float fSlow219 = (((0.0f - fSlow216) * (0.0f - (0.5f * fSlow217))) * (0.0f - (0.333333343f * fSlow218)));
	float fSlow220 = expf((0.0f - (dsp->fConst101 / (fSlow162 * fSlow212))));
	float fSlow221 = (float)dsp->fButton8;
	int iSlow222 = (int)fSlow214;
	int iSlow223 = min(8192, max(0, iSlow222));
	float fSlow224 = (fSlow213 - fSlow215);
	float fSlow225 = ((0.0f - fSlow217) * (0.0f - (0.5f * fSlow218)));
	int iSlow226 = min(8192, max(0, (iSlow222 + 1)));
	float fSlow227 = (0.5f * (fSlow216 * (0.0f - fSlow218)));
	int iSlow228 = min(8192, max(0, (iSlow222 + 2)));
	float fSlow229 = (0.166666672f * (fSlow216 * fSlow217));
	int iSlow230 = min(8192, max(0, (iSlow222 + 3)));
	float fSlow231 = (float)dsp->fVslider51;
	float fSlow232 = (dsp->fConst0 / fSlow231);
	float fSlow233 = (fSlow232 + -0.999994993f);
	float fSlow234 = floorf(fSlow233);
	float fSlow235 = (fSlow232 + (-1.0f - fSlow234));
	float fSlow236 = (fSlow232 + (-2.0f - fSlow234));
	float fSlow237 = (fSlow232 + (-3.0f - fSlow234));
	float fSlow238 = (((0.0f - fSlow235) * (0.0f - (0.5f * fSlow236))) * (0.0f - (0.333333343f * fSlow237)));
	float fSlow239 = expf((0.0f - (dsp->fConst101 / (fSlow162 * fSlow231))));
	float fSlow240 = (float)dsp->fButton9;
	int iSlow241 = (int)fSlow233;
	int iSlow242 = min(8192, max(0, iSlow241));
	float fSlow243 = (fSlow232 - fSlow234);
	float fSlow244 = ((0.0f - fSlow236) * (0.0f - (0.5f * fSlow237)));
	int iSlow245 = min(8192, max(0, (iSlow241 + 1)));
	float fSlow246 = (0.5f * (fSlow235 * (0.0f - fSlow237)));
	int iSlow247 = min(8192, max(0, (iSlow241 + 2)));
	float fSlow248 = (0.166666672f * (fSlow235 * fSlow236));
	int iSlow249 = min(8192, max(0, (iSlow241 + 3)));
	float fSlow250 = (float)dsp->fVslider52;
	/* C99 loop */
	{
		int i;
		for (i = 0; (i < count); i = (i + 1)) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iVec1[0] = 1;
			dsp->fRec2[0] = ((dsp->fRec2[1] * fSlow7) + fSlow8);
			dsp->fRec5[0] = (dsp->fConst9 + (dsp->fRec5[1] - floorf((dsp->fConst9 + dsp->fRec5[1]))));
			float fTemp0 = ((fSlow12 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec5[0])]) + 1.0f);
			float fTemp1 = (1.0f / tanf((fSlow13 * fTemp0)));
			float fTemp2 = (fTemp1 + 1.0f);
			float fTemp3 = (0.0f - ((1.0f - fTemp1) / fTemp2));
			float fTemp4 = (fSlow14 * fTemp0);
			float fTemp5 = sinf(fTemp4);
			float fTemp6 = cosf(fTemp4);
			dsp->fRec12[0] = ((dsp->fRec13[1] * fTemp5) + (dsp->fRec12[1] * fTemp6));
			int iTemp7 = (1 - dsp->iVec1[1]);
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
			dsp->fRec1[0] = ((fSlow2 * (dsp->fRec2[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec4[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec15[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec24[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec33[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec42[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec51[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec60[0])])))) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec1[2]) + (dsp->fConst26 * dsp->fRec1[1]))));
			float fTemp58 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec1[2] + (dsp->fRec1[0] + (2.0f * dsp->fRec1[1])))))) - fSlow1);
			dsp->fVec2[0] = fTemp58;
			dsp->fRec0[0] = (dsp->fConst2 * ((fTemp58 - dsp->fVec2[1]) + (dsp->fConst27 * dsp->fRec0[1])));
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
			dsp->fRec70[0] = ((fSlow2 * (dsp->fRec71[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec72[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec81[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec90[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec99[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec108[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec117[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec126[0])])))) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec70[2]) + (dsp->fConst26 * dsp->fRec70[1]))));
			float fTemp115 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec70[2] + (dsp->fRec70[0] + (2.0f * dsp->fRec70[1])))))) - fSlow1);
			dsp->fVec3[0] = fTemp115;
			dsp->fRec69[0] = (dsp->fConst2 * ((fTemp115 - dsp->fVec3[1]) + (dsp->fConst27 * dsp->fRec69[1])));
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
			dsp->fRec136[0] = ((fSlow2 * (dsp->fRec137[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec138[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec147[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec156[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec165[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec174[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec183[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec192[0])])))) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec136[2]) + (dsp->fConst26 * dsp->fRec136[1]))));
			float fTemp172 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec136[2] + (dsp->fRec136[0] + (2.0f * dsp->fRec136[1])))))) - fSlow1);
			dsp->fVec4[0] = fTemp172;
			dsp->fRec135[0] = (dsp->fConst2 * ((fTemp172 - dsp->fVec4[1]) + (dsp->fConst27 * dsp->fRec135[1])));
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
			dsp->fRec202[0] = ((fSlow2 * (dsp->fRec203[0] * (((((((fSlow9 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec204[0])]) + (fSlow15 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec213[0])])) + (fSlow18 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec222[0])])) + (fSlow22 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec231[0])])) + (fSlow25 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec240[0])])) + (fSlow29 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec249[0])])) + (fSlow32 * ftbl0mydspSIG0[(int)(65536.0f * dsp->fRec258[0])])))) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec202[2]) + (dsp->fConst26 * dsp->fRec202[1]))));
			float fTemp229 = ((float)tanhf((float)(fSlow1 + (dsp->fConst6 * (dsp->fRec202[2] + (dsp->fRec202[0] + (2.0f * dsp->fRec202[1])))))) - fSlow1);
			dsp->fVec5[0] = fTemp229;
			dsp->fRec201[0] = (dsp->fConst2 * ((fTemp229 - dsp->fVec5[1]) + (dsp->fConst27 * dsp->fRec201[1])));
			float fTemp230 = (float)tanhf((float)(fSlow0 * (((dsp->fRec0[0] + dsp->fRec69[0]) + dsp->fRec135[0]) + dsp->fRec201[0])));
			float fTemp231 = (dsp->fRec267[1] + (fSlow103 * dsp->fRec268[1]));
			float fTemp232 = (1.25313282f * fTemp231);
			float fTemp233 = (1.3831259f * fabsf(fTemp231));
			float fTemp234 = ((fTemp231 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp233 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp233, 0.0f), 10.0f) + -0.200000003f)))))):fTemp233))):(0.797999978f * ((fTemp232 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp232, 0.0f), 10.0f) + -0.434782594f)))))):fTemp232)));
			dsp->fRec267[0] = fTemp234;
			float fTemp235 = (4.65661287e-10f * (float)dsp->iRec14[0]);
			float fTemp236 = (fTemp235 - (fTemp234 + (fSlow104 * dsp->fRec268[1])));
			float fTemp237 = (1.25313282f * fTemp236);
			float fTemp238 = (1.3831259f * fabsf(fTemp236));
			float fTemp239 = ((fTemp236 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp238 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp238, 0.0f), 10.0f) + -0.200000003f)))))):fTemp238))):(0.797999978f * ((fTemp237 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp237, 0.0f), 10.0f) + -0.434782594f)))))):fTemp237)));
			float fTemp240 = (dsp->fRec268[1] + (fSlow103 * fTemp239));
			float fTemp241 = (1.25313282f * fTemp240);
			float fTemp242 = (1.3831259f * fabsf(fTemp240));
			dsp->fRec268[0] = ((fTemp240 <= 0.0f)?(0.0f - (0.72299999f * ((fTemp242 > 0.200000003f)?(1.0f - (0.800000012f * (1.0f - (float)tanhf((float)(1.25f * (min(max(fTemp242, 0.0f), 10.0f) + -0.200000003f)))))):fTemp242))):(0.797999978f * ((fTemp241 > 0.434782594f)?(1.0f - (0.565217376f * (1.0f - (float)tanhf((float)(1.76923072f * (min(max(fTemp241, 0.0f), 10.0f) + -0.434782594f)))))):fTemp241)));
			dsp->fVec6[0] = fSlow105;
			dsp->fRec270[0] = ((((fSlow105 - dsp->fVec6[1]) > 0.0f) > 0)?dsp->fConst29:max(0.0f, (dsp->fRec270[1] + -1.0f)));
			int iTemp243 = (dsp->fRec270[0] > 0.0f);
			int iTemp244 = (iTemp243 > 0);
			float fTemp245 = expf((0.0f - (dsp->fConst7 / (iTemp244?0.00800000038f:fSlow106))));
			dsp->fRec269[0] = ((dsp->fRec269[1] * fTemp245) + ((iTemp244?(float)iTemp243:0.0f) * (1.0f - fTemp245)));
			float fTemp246 = (fSlow101 * (dsp->fRec268[0] * dsp->fRec269[0]));
			float fTemp247 = ((fTemp246 > 1.0f)?1.0f:((fTemp246 < -1.0f)?-1.0f:fTemp246));
			float fTemp248 = (fTemp230 + fTemp247);
			dsp->fRec274[0] = (fSlow109 + (fSlow110 * dsp->fRec274[1]));
			dsp->iRec276[0] = (iSlow114 * (dsp->iRec276[1] + 1));
			int iTemp249 = (dsp->iRec276[0] < iSlow117);
			float fTemp250 = expf((0.0f - (dsp->fConst7 / (iSlow114?(iTemp249?fSlow119:fSlow118):fSlow115))));
			dsp->fRec275[0] = ((dsp->fRec275[1] * fTemp250) + ((iSlow114?(iTemp249?(float)iSlow114:fSlow120):0.0f) * (1.0f - fTemp250)));
			float fTemp251 = sinf((3.14159274f * min(0.25f, (dsp->fConst28 * (dsp->fRec274[0] * (fSlow111 + (fSlow112 * dsp->fRec275[0])))))));
			float fTemp252 = (dsp->fRec272[1] + (2.0f * (fTemp251 * dsp->fRec273[1])));
			float fTemp253 = (fTemp252 + 0.119999997f);
			float fTemp254 = (0.666666687f * fTemp253);
			float fTemp255 = ((fTemp254 > 1.0f)?1.0f:((fTemp254 < -1.0f)?-1.0f:(fTemp252 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp253))))));
			dsp->fRec272[0] = (fTemp255 + -0.119999997f);
			dsp->fRec278[0] = ((dsp->fRec278[1] * fSlow121) + fSlow122);
			float fTemp256 = max(1.00000001e-07f, fabsf(dsp->fRec274[0]));
			float fTemp257 = (dsp->fRec279[1] + (dsp->fConst8 * fTemp256));
			float fTemp258 = (fTemp257 + -1.0f);
			int iTemp259 = (fTemp258 < 0.0f);
			dsp->fRec279[0] = (iTemp259?fTemp257:fTemp258);
			float fRec280 = (iTemp259?fTemp257:(fTemp257 + ((1.0f - (dsp->fConst0 / fTemp256)) * fTemp258)));
			dsp->fRec277[0] = ((dsp->fRec278[0] * ((2.0f * fRec280) + -1.0f)) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec277[2]) + (dsp->fConst26 * dsp->fRec277[1]))));
			float fTemp260 = (dsp->fConst31 * (dsp->fRec277[2] + (dsp->fRec277[0] + (2.0f * dsp->fRec277[1]))));
			float fTemp261 = (fTemp255 + (dsp->fRec273[1] * min(fSlow123, min(2.0f, ((1.0f / fTemp251) - fTemp251)))));
			float fTemp262 = (fTemp260 + (0.239999995f - fTemp261));
			float fTemp263 = (0.666666687f * fTemp262);
			float fTemp264 = (((fTemp263 > 1.0f)?1.0f:((fTemp263 < -1.0f)?-1.0f:(fTemp260 + (0.239999995f - (fTemp261 + (0.148148149f * mydsp_faustpower3_f(fTemp262))))))) + -0.119999997f);
			float fTemp265 = (dsp->fRec273[1] + (2.0f * (fTemp251 * fTemp264)));
			float fTemp266 = (fTemp265 + 0.119999997f);
			float fTemp267 = (0.666666687f * fTemp266);
			dsp->fRec273[0] = (((fTemp267 > 1.0f)?1.0f:((fTemp267 < -1.0f)?-1.0f:(fTemp265 + (0.119999997f - (0.148148149f * mydsp_faustpower3_f(fTemp266)))))) + -0.119999997f);
			dsp->fRec271[0] = ((fSlow107 * dsp->fRec272[0]) - (dsp->fConst6 * ((dsp->fConst25 * dsp->fRec271[2]) + (dsp->fConst26 * dsp->fRec271[1]))));
			float fTemp268 = (dsp->fConst6 * (dsp->fRec271[2] + (dsp->fRec271[0] + (2.0f * dsp->fRec271[1]))));
			float fTemp269 = (fTemp268 + 0.200000003f);
			float fTemp270 = (0.666666687f * fTemp269);
			float fTemp271 = (((fTemp270 > 1.0f)?1.0f:((fTemp270 < -1.0f)?-1.0f:(fTemp268 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp269)))))) + -0.200000003f);
			float fTemp272 = (dsp->fRec281[1] + (fSlow127 * dsp->fRec282[1]));
			float fTemp273 = (1.02040815f * fTemp272);
			float fTemp274 = (min(max(fTemp273, 0.0f), 10.0f) + -0.625f);
			float fTemp275 = (1.77777779f * fTemp274);
			float fTemp276 = (1.33333337f * fabsf(fTemp272));
			float fTemp277 = (min(max(fTemp276, 0.0f), 10.0f) + -0.333333343f);
			float fTemp278 = (1.0f * fTemp277);
			float fTemp279 = ((fTemp272 <= 0.0f)?(0.0f - (0.75f * ((fTemp276 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp278 > 1.0f)?1.0f:((fTemp278 < -1.0f)?-1.0f:(fTemp277 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp277))))))))):fTemp276))):(0.980000019f * ((fTemp273 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp275 > 1.0f)?1.0f:((fTemp275 < -1.0f)?-1.0f:(fTemp274 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp274))))))))):fTemp273)));
			dsp->fRec281[0] = fTemp279;
			dsp->fVec7[0] = fSlow128;
			dsp->fRec284[0] = ((((fSlow128 - dsp->fVec7[1]) > 0.0f) > 0)?dsp->fConst36:max(0.0f, (dsp->fRec284[1] + -1.0f)));
			int iTemp280 = (dsp->fRec284[0] > 0.0f);
			int iTemp281 = (iTemp280 > 0);
			float fTemp282 = expf((0.0f - (dsp->fConst7 / (iTemp281?9.99999975e-05f:fSlow130))));
			dsp->fRec285[0] = ((dsp->fRec285[1] * fTemp282) + ((iTemp281?(float)iTemp280:0.0f) * (1.0f - fTemp282)));
			dsp->fRec283[0] = (((float)iTemp280 + (0.289999992f * dsp->fRec285[0])) - (dsp->fConst35 * ((dsp->fConst37 * dsp->fRec283[2]) + (dsp->fConst38 * dsp->fRec283[1]))));
			float fTemp283 = (dsp->fConst35 * (dsp->fRec283[2] + (dsp->fRec283[0] + (2.0f * dsp->fRec283[1]))));
			float fTemp284 = (fTemp283 - (fTemp279 + (fSlow132 * dsp->fRec282[1])));
			float fTemp285 = (1.02040815f * fTemp284);
			float fTemp286 = (min(max(fTemp285, 0.0f), 10.0f) + -0.625f);
			float fTemp287 = (1.77777779f * fTemp286);
			float fTemp288 = (1.33333337f * fabsf(fTemp284));
			float fTemp289 = (min(max(fTemp288, 0.0f), 10.0f) + -0.333333343f);
			float fTemp290 = (1.0f * fTemp289);
			float fTemp291 = ((fTemp284 <= 0.0f)?(0.0f - (0.75f * ((fTemp288 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp290 > 1.0f)?1.0f:((fTemp290 < -1.0f)?-1.0f:(fTemp289 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp289))))))))):fTemp288))):(0.980000019f * ((fTemp285 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp287 > 1.0f)?1.0f:((fTemp287 < -1.0f)?-1.0f:(fTemp286 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp286))))))))):fTemp285)));
			float fTemp292 = (dsp->fRec282[1] + (fSlow127 * fTemp291));
			float fTemp293 = (1.02040815f * fTemp292);
			float fTemp294 = (min(max(fTemp293, 0.0f), 10.0f) + -0.625f);
			float fTemp295 = (1.77777779f * fTemp294);
			float fTemp296 = (1.33333337f * fabsf(fTemp292));
			float fTemp297 = (min(max(fTemp296, 0.0f), 10.0f) + -0.333333343f);
			float fTemp298 = (1.0f * fTemp297);
			dsp->fRec282[0] = ((fTemp292 <= 0.0f)?(0.0f - (0.75f * ((fTemp296 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp298 > 1.0f)?1.0f:((fTemp298 < -1.0f)?-1.0f:(fTemp297 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp297))))))))):fTemp296))):(0.980000019f * ((fTemp293 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp295 > 1.0f)?1.0f:((fTemp295 < -1.0f)?-1.0f:(fTemp294 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp294))))))))):fTemp293)));
			float fTemp299 = (dsp->fRec286[1] + (fSlow134 * dsp->fRec287[1]));
			float fTemp300 = (1.02040815f * fTemp299);
			float fTemp301 = (min(max(fTemp300, 0.0f), 10.0f) + -0.625f);
			float fTemp302 = (1.77777779f * fTemp301);
			float fTemp303 = (1.33333337f * fabsf(fTemp299));
			float fTemp304 = (min(max(fTemp303, 0.0f), 10.0f) + -0.333333343f);
			float fTemp305 = (1.0f * fTemp304);
			float fTemp306 = ((fTemp299 <= 0.0f)?(0.0f - (0.75f * ((fTemp303 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp305 > 1.0f)?1.0f:((fTemp305 < -1.0f)?-1.0f:(fTemp304 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp304))))))))):fTemp303))):(0.980000019f * ((fTemp300 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp302 > 1.0f)?1.0f:((fTemp302 < -1.0f)?-1.0f:(fTemp301 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp301))))))))):fTemp300)));
			dsp->fRec286[0] = fTemp306;
			float fTemp307 = (fTemp283 - (fTemp306 + (fSlow135 * dsp->fRec287[1])));
			float fTemp308 = (1.02040815f * fTemp307);
			float fTemp309 = (min(max(fTemp308, 0.0f), 10.0f) + -0.625f);
			float fTemp310 = (1.77777779f * fTemp309);
			float fTemp311 = (1.33333337f * fabsf(fTemp307));
			float fTemp312 = (min(max(fTemp311, 0.0f), 10.0f) + -0.333333343f);
			float fTemp313 = (1.0f * fTemp312);
			float fTemp314 = ((fTemp307 <= 0.0f)?(0.0f - (0.75f * ((fTemp311 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp313 > 1.0f)?1.0f:((fTemp313 < -1.0f)?-1.0f:(fTemp312 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp312))))))))):fTemp311))):(0.980000019f * ((fTemp308 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp310 > 1.0f)?1.0f:((fTemp310 < -1.0f)?-1.0f:(fTemp309 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp309))))))))):fTemp308)));
			float fTemp315 = (dsp->fRec287[1] + (fSlow134 * fTemp314));
			float fTemp316 = (1.02040815f * fTemp315);
			float fTemp317 = (min(max(fTemp316, 0.0f), 10.0f) + -0.625f);
			float fTemp318 = (1.77777779f * fTemp317);
			float fTemp319 = (1.33333337f * fabsf(fTemp315));
			float fTemp320 = (min(max(fTemp319, 0.0f), 10.0f) + -0.333333343f);
			float fTemp321 = (1.0f * fTemp320);
			dsp->fRec287[0] = ((fTemp315 <= 0.0f)?(0.0f - (0.75f * ((fTemp319 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp321 > 1.0f)?1.0f:((fTemp321 < -1.0f)?-1.0f:(fTemp320 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp320))))))))):fTemp319))):(0.980000019f * ((fTemp316 > 0.625f)?(1.0f - (0.375f * (1.0f - ((fTemp318 > 1.0f)?1.0f:((fTemp318 < -1.0f)?-1.0f:(fTemp317 * (2.66666675f - (2.80932784f * mydsp_faustpower2_f(fTemp317))))))))):fTemp316)));
			dsp->fRec288[0] = ((4.65661287e-10f * ((float)dsp->iRec14[0] * dsp->fRec285[0])) - (dsp->fConst42 * ((dsp->fConst43 * dsp->fRec288[2]) + (dsp->fConst44 * dsp->fRec288[1]))));
			float fTemp322 = (fSlow124 * ((dsp->fRec282[0] + dsp->fRec287[0]) + (fSlow136 * (dsp->fRec288[2] + (dsp->fRec288[0] + (2.0f * dsp->fRec288[1]))))));
			float fTemp323 = (fTemp322 + -0.100000001f);
			float fTemp324 = (0.666666687f * fTemp323);
			float fTemp325 = (((fTemp324 > 1.0f)?1.0f:((fTemp324 < -1.0f)?-1.0f:(fTemp322 + (-0.100000001f - (0.148148149f * mydsp_faustpower3_f(fTemp323)))))) + 0.100000001f);
			dsp->fVec8[0] = fSlow137;
			dsp->fRec290[0] = ((((fSlow137 - dsp->fVec8[1]) > 0.0f) > 0)?dsp->fConst29:max(0.0f, (dsp->fRec290[1] + -1.0f)));
			int iTemp326 = (dsp->fRec290[0] > 0.0f);
			dsp->fVec9[0] = fSlow138;
			dsp->fRec291[0] = ((((fSlow138 - dsp->fVec9[1]) > 0.0f) > 0)?dsp->fConst29:max(0.0f, (dsp->fRec291[1] + -1.0f)));
			int iTemp327 = (dsp->fRec291[0] > 0.0f);
			int iTemp328 = ((iTemp326 + iTemp327) > 0);
			dsp->iVec10[0] = iTemp328;
			int iTemp329 = (iTemp328 > 0);
			int iTemp330 = ((dsp->iVec10[1] <= 0) & iTemp329);
			dsp->fRec292[0] = ((dsp->fRec292[1] * (float)(1 - iTemp330)) + ((float)iTemp330 * ((0.0839999989f * (float)iTemp326) + (fSlow139 * (float)iTemp327))));
			float fTemp331 = expf((0.0f - (dsp->fConst7 / (iTemp329?9.99999975e-05f:dsp->fRec292[0]))));
			dsp->fRec289[0] = ((dsp->fRec289[1] * fTemp331) + ((iTemp329?(float)iTemp328:0.0f) * (1.0f - fTemp331)));
			float fTemp332 = (dsp->fRec294[1] + (fSlow141 * dsp->fRec295[1]));
			float fTemp333 = (0.666666687f * fTemp332);
			float fTemp334 = ((fTemp333 > 1.0f)?1.0f:((fTemp333 < -1.0f)?-1.0f:(fTemp332 - (0.148148149f * mydsp_faustpower3_f(fTemp332)))));
			dsp->fRec294[0] = fTemp334;
			float fTemp335 = (dsp->fRec297[1] + (fSlow141 * dsp->fRec298[1]));
			float fTemp336 = (0.666666687f * fTemp335);
			float fTemp337 = ((fTemp336 > 1.0f)?1.0f:((fTemp336 < -1.0f)?-1.0f:(fTemp335 - (0.148148149f * mydsp_faustpower3_f(fTemp335)))));
			dsp->fRec297[0] = fTemp337;
			dsp->fVec11[0] = 394.0f;
			float fTemp338 = (dsp->fRec301[1] + (dsp->fConst28 * dsp->fVec11[1]));
			dsp->fRec301[0] = (fTemp338 - floorf(fTemp338));
			float fTemp339 = mydsp_faustpower2_f(((2.0f * dsp->fRec301[0]) + -1.0f));
			dsp->fVec12[0] = fTemp339;
			float fTemp340 = ((fTemp339 - dsp->fVec12[1]) * (float)dsp->iVec1[1]);
			dsp->fVec13[(dsp->IOTA & 255)] = fTemp340;
			dsp->fVec14[0] = 309.0f;
			float fTemp341 = (dsp->fRec302[1] + (dsp->fConst28 * dsp->fVec14[1]));
			dsp->fRec302[0] = (fTemp341 - floorf(fTemp341));
			float fTemp342 = mydsp_faustpower2_f(((2.0f * dsp->fRec302[0]) + -1.0f));
			dsp->fVec15[0] = fTemp342;
			float fTemp343 = ((fTemp342 - dsp->fVec15[1]) * (float)dsp->iVec1[1]);
			dsp->fVec16[(dsp->IOTA & 511)] = fTemp343;
			dsp->fVec17[0] = 493.0f;
			float fTemp344 = (dsp->fRec303[1] + (dsp->fConst28 * dsp->fVec17[1]));
			dsp->fRec303[0] = (fTemp344 - floorf(fTemp344));
			float fTemp345 = mydsp_faustpower2_f(((2.0f * dsp->fRec303[0]) + -1.0f));
			dsp->fVec18[0] = fTemp345;
			float fTemp346 = ((fTemp345 - dsp->fVec18[1]) * (float)dsp->iVec1[1]);
			dsp->fVec19[(dsp->IOTA & 255)] = fTemp346;
			dsp->fVec20[0] = 361.0f;
			float fTemp347 = (dsp->fRec304[1] + (dsp->fConst28 * dsp->fVec20[1]));
			dsp->fRec304[0] = (fTemp347 - floorf(fTemp347));
			float fTemp348 = mydsp_faustpower2_f(((2.0f * dsp->fRec304[0]) + -1.0f));
			dsp->fVec21[0] = fTemp348;
			float fTemp349 = ((fTemp348 - dsp->fVec21[1]) * (float)dsp->iVec1[1]);
			dsp->fVec22[(dsp->IOTA & 511)] = fTemp349;
			dsp->fVec23[0] = 422.0f;
			float fTemp350 = (dsp->fRec305[1] + (dsp->fConst28 * dsp->fVec23[1]));
			dsp->fRec305[0] = (fTemp350 - floorf(fTemp350));
			float fTemp351 = mydsp_faustpower2_f(((2.0f * dsp->fRec305[0]) + -1.0f));
			dsp->fVec24[0] = fTemp351;
			float fTemp352 = ((fTemp351 - dsp->fVec24[1]) * (float)dsp->iVec1[1]);
			dsp->fVec25[(dsp->IOTA & 255)] = fTemp352;
			dsp->fVec26[0] = 203.0f;
			float fTemp353 = (dsp->fRec306[1] + (dsp->fConst28 * dsp->fVec26[1]));
			dsp->fRec306[0] = (fTemp353 - floorf(fTemp353));
			float fTemp354 = mydsp_faustpower2_f(((2.0f * dsp->fRec306[0]) + -1.0f));
			dsp->fVec27[0] = fTemp354;
			float fTemp355 = ((fTemp354 - dsp->fVec27[1]) * (float)dsp->iVec1[1]);
			dsp->fVec28[(dsp->IOTA & 511)] = fTemp355;
			dsp->fRec300[0] = ((dsp->fConst0 * ((((((0.000634517753f * ((fTemp340 - (dsp->fConst55 * dsp->fVec13[((dsp->IOTA - dsp->iConst56) & 255)])) - (dsp->fConst57 * dsp->fVec13[((dsp->IOTA - dsp->iConst58) & 255)]))) + (0.000809061516f * ((fTemp343 - (dsp->fConst61 * dsp->fVec16[((dsp->IOTA - dsp->iConst62) & 511)])) - (dsp->fConst63 * dsp->fVec16[((dsp->IOTA - dsp->iConst64) & 511)])))) + (0.000507099379f * ((fTemp346 - (dsp->fConst67 * dsp->fVec19[((dsp->IOTA - dsp->iConst68) & 255)])) - (dsp->fConst69 * dsp->fVec19[((dsp->IOTA - dsp->iConst70) & 255)])))) + (0.000692520756f * ((fTemp349 - (dsp->fConst73 * dsp->fVec22[((dsp->IOTA - dsp->iConst74) & 511)])) - (dsp->fConst75 * dsp->fVec22[((dsp->IOTA - dsp->iConst76) & 511)])))) + (0.000592417084f * ((fTemp352 - (dsp->fConst79 * dsp->fVec25[((dsp->IOTA - dsp->iConst80) & 255)])) - (dsp->fConst81 * dsp->fVec25[((dsp->IOTA - dsp->iConst82) & 255)])))) + (0.00123152707f * ((fTemp355 - (dsp->fConst85 * dsp->fVec28[((dsp->IOTA - dsp->iConst86) & 511)])) - (dsp->fConst87 * dsp->fVec28[((dsp->IOTA - dsp->iConst88) & 511)]))))) - (dsp->fConst51 * ((dsp->fConst89 * dsp->fRec300[2]) + (dsp->fConst90 * dsp->fRec300[1]))));
			float fTemp356 = (dsp->fConst51 * (((dsp->fConst52 * dsp->fRec300[0]) + (dsp->fConst91 * dsp->fRec300[1])) + (dsp->fConst52 * dsp->fRec300[2])));
			float fTemp357 = (fTemp337 + (fSlow142 * dsp->fRec298[1]));
			float fTemp358 = (fTemp356 - fTemp357);
			float fTemp359 = (0.666666687f * fTemp358);
			float fTemp360 = ((fTemp359 > 1.0f)?1.0f:((fTemp359 < -1.0f)?-1.0f:(fTemp356 - (fTemp357 + (0.148148149f * mydsp_faustpower3_f(fTemp358))))));
			float fTemp361 = (dsp->fRec298[1] + (fSlow141 * fTemp360));
			float fTemp362 = (0.666666687f * fTemp361);
			dsp->fRec298[0] = ((fTemp362 > 1.0f)?1.0f:((fTemp362 < -1.0f)?-1.0f:(fTemp361 - (0.148148149f * mydsp_faustpower3_f(fTemp361)))));
			float fRec299 = fTemp360;
			float fTemp363 = (fTemp334 + (fSlow142 * dsp->fRec295[1]));
			float fTemp364 = (fRec299 - fTemp363);
			float fTemp365 = (0.666666687f * fTemp364);
			float fTemp366 = ((fTemp365 > 1.0f)?1.0f:((fTemp365 < -1.0f)?-1.0f:(fRec299 - (fTemp363 + (0.148148149f * mydsp_faustpower3_f(fTemp364))))));
			float fTemp367 = (dsp->fRec295[1] + (fSlow141 * fTemp366));
			float fTemp368 = (0.666666687f * fTemp367);
			dsp->fRec295[0] = ((fTemp368 > 1.0f)?1.0f:((fTemp368 < -1.0f)?-1.0f:(fTemp367 - (0.148148149f * mydsp_faustpower3_f(fTemp367)))));
			float fRec296 = fTemp366;
			dsp->fRec293[0] = (fRec296 - (dsp->fConst92 * ((dsp->fConst93 * dsp->fRec293[2]) + (dsp->fConst94 * dsp->fRec293[1]))));
			float fTemp369 = ((dsp->fRec289[0] * ((dsp->fConst48 * (dsp->fRec293[2] + (dsp->fRec293[0] + (2.0f * dsp->fRec293[1])))) + (9.31322554e-12f * (float)dsp->iRec14[0]))) * fSlow144);
			dsp->fVec29[0] = fSlow148;
			dsp->fRec310[0] = ((((fSlow148 - dsp->fVec29[1]) > 0.0f) > 0)?dsp->fConst95:max(0.0f, (dsp->fRec310[1] + -1.0f)));
			int iTemp370 = (dsp->fRec310[0] > 0.0f);
			dsp->fVec30[0] = fSlow149;
			dsp->fRec311[0] = ((((fSlow149 - dsp->fVec30[1]) > 0.0f) > 0)?dsp->fConst95:max(0.0f, (dsp->fRec311[1] + -1.0f)));
			int iTemp371 = (dsp->fRec311[0] > 0.0f);
			int iTemp372 = ((iTemp370 + iTemp371) > 0);
			dsp->iVec31[0] = iTemp372;
			int iTemp373 = (((iTemp372 - dsp->iVec31[1]) > 0) > 0);
			dsp->fVec32[0] = fSlow150;
			dsp->fRec309[0] = (iTemp373?0.0f:min(fSlow151, ((dsp->fRec309[1] + (dsp->fConst0 * (fSlow150 - dsp->fVec32[1]))) + 1.0f)));
			int iTemp374 = (dsp->fRec309[0] < dsp->fConst96);
			float fTemp375 = sinf((3.14159274f * min(0.25f, (fSlow146 * ((fSlow147 * (iTemp374?((dsp->fRec309[0] < 0.0f)?0.0f:(iTemp374?(dsp->fConst97 * dsp->fRec309[0]):1.0f)):((dsp->fRec309[0] < fSlow151)?((fSlow152 * (0.0f - (dsp->fRec309[0] - dsp->fConst96))) + 1.0f):0.0f))) + 1.0f)))));
			float fTemp376 = (dsp->fRec307[1] + (2.0f * (fTemp375 * dsp->fRec308[1])));
			float fTemp377 = (min(max(fTemp376, 0.0f), 10.0f) + -0.714285731f);
			float fTemp378 = (2.33333325f * fTemp377);
			float fTemp379 = (1.14942527f * fabsf(fTemp376));
			float fTemp380 = (min(max(fTemp379, 0.0f), 10.0f) + -0.333333343f);
			float fTemp381 = (1.0f * fTemp380);
			float fTemp382 = ((fTemp376 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp379 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp381 > 1.0f)?1.0f:((fTemp381 < -1.0f)?-1.0f:(fTemp380 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp380))))))))):fTemp379))):((fTemp376 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp378 > 1.0f)?1.0f:((fTemp378 < -1.0f)?-1.0f:(fTemp377 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp377))))))))):fTemp376));
			dsp->fRec307[0] = fTemp382;
			dsp->fRec312[0] = (iTemp373?0.0f:min(dsp->fConst98, (dsp->fRec312[1] + (1.0f - (0.00609999988f * (dsp->fVec0[1] - dsp->fConst0))))));
			int iTemp383 = (dsp->fRec312[0] < dsp->fConst99);
			int iTemp384 = ((dsp->iVec31[1] <= 0) & (iTemp372 > 0));
			dsp->fRec313[0] = ((dsp->fRec313[1] * (float)(1 - iTemp384)) + ((float)iTemp384 * ((0.850000024f * (float)iTemp370) + (fSlow153 * (float)iTemp371))));
			float fTemp385 = (((iTemp383?((dsp->fRec312[0] < 0.0f)?0.0f:(iTemp383?(dsp->fConst100 * dsp->fRec312[0]):1.0f)):((dsp->fRec312[0] < dsp->fConst98)?((dsp->fConst97 * (0.0f - (dsp->fRec312[0] - dsp->fConst99))) + 1.0f):0.0f)) * ((2.32830644e-09f * (float)dsp->iRec14[0]) + 5.0f)) - (fTemp382 + (dsp->fRec308[1] * min((2.0f * (1.0f - powf(dsp->fRec313[0], 0.25f))), min(2.0f, ((1.0f / fTemp375) - fTemp375))))));
			float fTemp386 = (min(max(fTemp385, 0.0f), 10.0f) + -0.714285731f);
			float fTemp387 = (2.33333325f * fTemp386);
			float fTemp388 = (1.14942527f * fabsf(fTemp385));
			float fTemp389 = (min(max(fTemp388, 0.0f), 10.0f) + -0.333333343f);
			float fTemp390 = (1.0f * fTemp389);
			float fTemp391 = ((fTemp385 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp388 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp390 > 1.0f)?1.0f:((fTemp390 < -1.0f)?-1.0f:(fTemp389 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp389))))))))):fTemp388))):((fTemp385 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp387 > 1.0f)?1.0f:((fTemp387 < -1.0f)?-1.0f:(fTemp386 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp386))))))))):fTemp385));
			float fTemp392 = (dsp->fRec308[1] + (2.0f * (fTemp375 * fTemp391)));
			float fTemp393 = (min(max(fTemp392, 0.0f), 10.0f) + -0.714285731f);
			float fTemp394 = (2.33333325f * fTemp393);
			float fTemp395 = (1.14942527f * fabsf(fTemp392));
			float fTemp396 = (min(max(fTemp395, 0.0f), 10.0f) + -0.333333343f);
			float fTemp397 = (1.0f * fTemp396);
			dsp->fRec308[0] = ((fTemp392 <= 0.0f)?(0.0f - (0.870000005f * ((fTemp395 > 0.333333343f)?(1.0f - (0.666666687f * (1.0f - ((fTemp397 > 1.0f)?1.0f:((fTemp397 < -1.0f)?-1.0f:(fTemp396 * (1.5f - (0.5f * mydsp_faustpower2_f(fTemp396))))))))):fTemp395))):((fTemp392 > 0.714285731f)?(1.0f - (0.285714298f * (1.0f - ((fTemp394 > 1.0f)?1.0f:((fTemp394 < -1.0f)?-1.0f:(fTemp393 * (3.5f - (6.35185194f * mydsp_faustpower2_f(fTemp393))))))))):fTemp392));
			float fTemp398 = (fSlow145 * dsp->fRec307[0]);
			float fTemp399 = (fTemp398 + 0.200000003f);
			float fTemp400 = (0.666666687f * fTemp399);
			float fTemp401 = (((fTemp400 > 1.0f)?1.0f:((fTemp400 < -1.0f)?-1.0f:(fTemp398 + (0.200000003f - (0.148148149f * mydsp_faustpower3_f(fTemp399)))))) + -0.200000003f);
			float fTemp402 = (0.5f * fTemp401);
			float fTemp403 = (fSlow166 * dsp->fRec314[1]);
			float fTemp404 = (fSlow171 * fabsf(dsp->fRec314[1]));
			float fTemp405 = ((dsp->fRec314[1] <= 0.0f)?(0.0f - (fSlow170 * ((fTemp404 > fSlow172)?(1.0f - (fSlow173 * (1.0f - (float)tanhf((float)(fSlow174 * (min(max(fTemp404, 0.0f), 10.0f) - fSlow172)))))):fTemp404))):(fSlow165 * ((fTemp403 > fSlow167)?(1.0f - (fSlow168 * (1.0f - (float)tanhf((float)(fSlow169 * (min(max(fTemp403, 0.0f), 10.0f) - fSlow167)))))):fTemp403)));
			dsp->fVec33[0] = (fSlow175 * fTemp405);
			dsp->fRec315[0] = ((dsp->fConst2 * ((fSlow164 * fTemp405) + (dsp->fConst27 * dsp->fRec315[1]))) - dsp->fVec33[1]);
			float fTemp406 = ((fSlow176 * (fTemp235 + -1.0f)) + 1.0f);
			dsp->fVec34[0] = fSlow177;
			dsp->fVec35[0] = fSlow179;
			float fTemp407 = (dsp->fConst30 * (fSlow179 - dsp->fVec35[1]));
			dsp->fRec316[0] = ((((fSlow177 - dsp->fVec34[1]) > 0.0f) > 0)?0.0f:min(fSlow180, ((dsp->fRec316[1] + fTemp407) + 1.0f)));
			int iTemp408 = (dsp->fRec316[0] < fSlow181);
			float fTemp409 = ((fSlow163 * dsp->fRec315[0]) + (fTemp406 * (iTemp408?((dsp->fRec316[0] < 0.0f)?0.0f:(iTemp408?(fSlow183 * dsp->fRec316[0]):1.0f)):((dsp->fRec316[0] < fSlow180)?((fSlow182 * (0.0f - (dsp->fRec316[0] - fSlow181))) + 1.0f):0.0f))));
			dsp->fVec36[(dsp->IOTA & 4095)] = fTemp409;
			dsp->fRec314[0] = ((fSlow161 * dsp->fVec36[((dsp->IOTA - iSlow185) & 4095)]) + (fSlow186 * (((fSlow187 * dsp->fVec36[((dsp->IOTA - iSlow188) & 4095)]) + (fSlow189 * dsp->fVec36[((dsp->IOTA - iSlow190) & 4095)])) + (fSlow191 * dsp->fVec36[((dsp->IOTA - iSlow192) & 4095)]))));
			float fTemp410 = (fSlow166 * dsp->fRec317[1]);
			float fTemp411 = (fSlow171 * fabsf(dsp->fRec317[1]));
			float fTemp412 = ((dsp->fRec317[1] <= 0.0f)?(0.0f - (fSlow170 * ((fTemp411 > fSlow172)?(1.0f - (fSlow173 * (1.0f - (float)tanhf((float)(fSlow174 * (min(max(fTemp411, 0.0f), 10.0f) - fSlow172)))))):fTemp411))):(fSlow165 * ((fTemp410 > fSlow167)?(1.0f - (fSlow168 * (1.0f - (float)tanhf((float)(fSlow169 * (min(max(fTemp410, 0.0f), 10.0f) - fSlow167)))))):fTemp410)));
			dsp->fVec37[0] = (fSlow175 * fTemp412);
			dsp->fRec318[0] = ((dsp->fConst2 * ((fSlow164 * fTemp412) + (dsp->fConst27 * dsp->fRec318[1]))) - dsp->fVec37[1]);
			dsp->fVec38[0] = fSlow202;
			dsp->fRec319[0] = ((((fSlow202 - dsp->fVec38[1]) > 0.0f) > 0)?0.0f:min(fSlow180, ((fTemp407 + dsp->fRec319[1]) + 1.0f)));
			int iTemp413 = (dsp->fRec319[0] < fSlow181);
			float fTemp414 = ((fSlow201 * dsp->fRec318[0]) + (fTemp406 * (iTemp413?((dsp->fRec319[0] < 0.0f)?0.0f:(iTemp413?(fSlow183 * dsp->fRec319[0]):1.0f)):((dsp->fRec319[0] < fSlow180)?((fSlow182 * (0.0f - (dsp->fRec319[0] - fSlow181))) + 1.0f):0.0f))));
			dsp->fVec39[(dsp->IOTA & 4095)] = fTemp414;
			dsp->fRec317[0] = ((fSlow200 * dsp->fVec39[((dsp->IOTA - iSlow204) & 4095)]) + (fSlow205 * (((fSlow206 * dsp->fVec39[((dsp->IOTA - iSlow207) & 4095)]) + (fSlow208 * dsp->fVec39[((dsp->IOTA - iSlow209) & 4095)])) + (fSlow210 * dsp->fVec39[((dsp->IOTA - iSlow211) & 4095)]))));
			float fTemp415 = (fSlow166 * dsp->fRec320[1]);
			float fTemp416 = (fSlow171 * fabsf(dsp->fRec320[1]));
			float fTemp417 = ((dsp->fRec320[1] <= 0.0f)?(0.0f - (fSlow170 * ((fTemp416 > fSlow172)?(1.0f - (fSlow173 * (1.0f - (float)tanhf((float)(fSlow174 * (min(max(fTemp416, 0.0f), 10.0f) - fSlow172)))))):fTemp416))):(fSlow165 * ((fTemp415 > fSlow167)?(1.0f - (fSlow168 * (1.0f - (float)tanhf((float)(fSlow169 * (min(max(fTemp415, 0.0f), 10.0f) - fSlow167)))))):fTemp415)));
			dsp->fVec40[0] = (fSlow175 * fTemp417);
			dsp->fRec321[0] = ((dsp->fConst2 * ((fSlow164 * fTemp417) + (dsp->fConst27 * dsp->fRec321[1]))) - dsp->fVec40[1]);
			dsp->fVec41[0] = fSlow221;
			dsp->fRec322[0] = ((((fSlow221 - dsp->fVec41[1]) > 0.0f) > 0)?0.0f:min(fSlow180, ((fTemp407 + dsp->fRec322[1]) + 1.0f)));
			int iTemp418 = (dsp->fRec322[0] < fSlow181);
			float fTemp419 = ((fSlow220 * dsp->fRec321[0]) + (fTemp406 * (iTemp418?((dsp->fRec322[0] < 0.0f)?0.0f:(iTemp418?(fSlow183 * dsp->fRec322[0]):1.0f)):((dsp->fRec322[0] < fSlow180)?((fSlow182 * (0.0f - (dsp->fRec322[0] - fSlow181))) + 1.0f):0.0f))));
			dsp->fVec42[(dsp->IOTA & 4095)] = fTemp419;
			dsp->fRec320[0] = ((fSlow219 * dsp->fVec42[((dsp->IOTA - iSlow223) & 4095)]) + (fSlow224 * (((fSlow225 * dsp->fVec42[((dsp->IOTA - iSlow226) & 4095)]) + (fSlow227 * dsp->fVec42[((dsp->IOTA - iSlow228) & 4095)])) + (fSlow229 * dsp->fVec42[((dsp->IOTA - iSlow230) & 4095)]))));
			float fTemp420 = (fSlow166 * dsp->fRec323[1]);
			float fTemp421 = (fSlow171 * fabsf(dsp->fRec323[1]));
			float fTemp422 = ((dsp->fRec323[1] <= 0.0f)?(0.0f - (fSlow170 * ((fTemp421 > fSlow172)?(1.0f - (fSlow173 * (1.0f - (float)tanhf((float)(fSlow174 * (min(max(fTemp421, 0.0f), 10.0f) - fSlow172)))))):fTemp421))):(fSlow165 * ((fTemp420 > fSlow167)?(1.0f - (fSlow168 * (1.0f - (float)tanhf((float)(fSlow169 * (min(max(fTemp420, 0.0f), 10.0f) - fSlow167)))))):fTemp420)));
			dsp->fVec43[0] = (fSlow175 * fTemp422);
			dsp->fRec324[0] = ((dsp->fConst2 * ((fSlow164 * fTemp422) + (dsp->fConst27 * dsp->fRec324[1]))) - dsp->fVec43[1]);
			dsp->fVec44[0] = fSlow240;
			dsp->fRec325[0] = ((((fSlow240 - dsp->fVec44[1]) > 0.0f) > 0)?0.0f:min(fSlow180, ((fTemp407 + dsp->fRec325[1]) + 1.0f)));
			int iTemp423 = (dsp->fRec325[0] < fSlow181);
			float fTemp424 = ((fSlow239 * dsp->fRec324[0]) + (fTemp406 * (iTemp423?((dsp->fRec325[0] < 0.0f)?0.0f:(iTemp423?(fSlow183 * dsp->fRec325[0]):1.0f)):((dsp->fRec325[0] < fSlow180)?((fSlow182 * (0.0f - (dsp->fRec325[0] - fSlow181))) + 1.0f):0.0f))));
			dsp->fVec45[(dsp->IOTA & 4095)] = fTemp424;
			dsp->fRec323[0] = ((fSlow238 * dsp->fVec45[((dsp->IOTA - iSlow242) & 4095)]) + (fSlow243 * (((fSlow244 * dsp->fVec45[((dsp->IOTA - iSlow245) & 4095)]) + (fSlow246 * dsp->fVec45[((dsp->IOTA - iSlow247) & 4095)])) + (fSlow248 * dsp->fVec45[((dsp->IOTA - iSlow249) & 4095)]))));
			float fTemp425 = (((dsp->fRec314[0] + dsp->fRec317[0]) + dsp->fRec320[0]) + dsp->fRec323[0]);
			dsp->fRec337[0] = ((dsp->fConst117 * dsp->fRec337[1]) + (dsp->fConst118 * (dsp->fRec333[1] + dsp->fRec333[2])));
			dsp->fRec336[0] = ((dsp->fConst112 * dsp->fRec336[1]) + (dsp->fConst113 * (dsp->fRec333[1] + (dsp->fConst114 * dsp->fRec337[0]))));
			dsp->fVec46[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec336[0]) + 9.99999968e-21f);
			float fTemp426 = (0.0500000007f * fTemp401);
			dsp->fVec47[(dsp->IOTA & 4095)] = (fSlow250 * (((((0.294f * fTemp230) + ((0.0289999992f * fTemp369) + (fTemp426 + (0.400000006f * fTemp425)))) + (0.319999993f * fTemp325)) + (0.600000024f * fTemp247)) + (0.180000007f * fTemp271)));
			float fTemp427 = (0.300000012f * dsp->fVec47[((dsp->IOTA - dsp->iConst121) & 4095)]);
			float fTemp428 = (((0.600000024f * dsp->fRec334[1]) + dsp->fVec46[((dsp->IOTA - dsp->iConst120) & 8191)]) - fTemp427);
			dsp->fVec48[(dsp->IOTA & 1023)] = fTemp428;
			dsp->fRec334[0] = dsp->fVec48[((dsp->IOTA - dsp->iConst122) & 1023)];
			float fRec335 = (0.0f - (0.600000024f * fTemp428));
			dsp->fRec341[0] = ((dsp->fConst117 * dsp->fRec341[1]) + (dsp->fConst118 * (dsp->fRec329[1] + dsp->fRec329[2])));
			dsp->fRec340[0] = ((dsp->fConst131 * dsp->fRec340[1]) + (dsp->fConst132 * (dsp->fRec329[1] + (dsp->fConst133 * dsp->fRec341[0]))));
			dsp->fVec49[(dsp->IOTA & 16383)] = ((0.353553385f * dsp->fRec340[0]) + 9.99999968e-21f);
			float fTemp429 = (((0.600000024f * dsp->fRec338[1]) + dsp->fVec49[((dsp->IOTA - dsp->iConst135) & 16383)]) - fTemp427);
			dsp->fVec50[(dsp->IOTA & 2047)] = fTemp429;
			dsp->fRec338[0] = dsp->fVec50[((dsp->IOTA - dsp->iConst136) & 2047)];
			float fRec339 = (0.0f - (0.600000024f * fTemp429));
			dsp->fRec345[0] = ((dsp->fConst117 * dsp->fRec345[1]) + (dsp->fConst118 * (dsp->fRec331[1] + dsp->fRec331[2])));
			dsp->fRec344[0] = ((dsp->fConst145 * dsp->fRec344[1]) + (dsp->fConst146 * (dsp->fRec331[1] + (dsp->fConst147 * dsp->fRec345[0]))));
			dsp->fVec51[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec344[0]) + 9.99999968e-21f);
			float fTemp430 = (dsp->fVec51[((dsp->IOTA - dsp->iConst149) & 8191)] + (fTemp427 + (0.600000024f * dsp->fRec342[1])));
			dsp->fVec52[(dsp->IOTA & 2047)] = fTemp430;
			dsp->fRec342[0] = dsp->fVec52[((dsp->IOTA - dsp->iConst150) & 2047)];
			float fRec343 = (0.0f - (0.600000024f * fTemp430));
			dsp->fRec349[0] = ((dsp->fConst117 * dsp->fRec349[1]) + (dsp->fConst118 * (dsp->fRec327[1] + dsp->fRec327[2])));
			dsp->fRec348[0] = ((dsp->fConst159 * dsp->fRec348[1]) + (dsp->fConst160 * (dsp->fRec327[1] + (dsp->fConst161 * dsp->fRec349[0]))));
			dsp->fVec53[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec348[0]) + 9.99999968e-21f);
			float fTemp431 = (fTemp427 + ((0.600000024f * dsp->fRec346[1]) + dsp->fVec53[((dsp->IOTA - dsp->iConst163) & 8191)]));
			dsp->fVec54[(dsp->IOTA & 1023)] = fTemp431;
			dsp->fRec346[0] = dsp->fVec54[((dsp->IOTA - dsp->iConst164) & 1023)];
			float fRec347 = (0.0f - (0.600000024f * fTemp431));
			dsp->fRec353[0] = ((dsp->fConst117 * dsp->fRec353[1]) + (dsp->fConst118 * (dsp->fRec332[1] + dsp->fRec332[2])));
			dsp->fRec352[0] = ((dsp->fConst173 * dsp->fRec352[1]) + (dsp->fConst174 * (dsp->fRec332[1] + (dsp->fConst175 * dsp->fRec353[0]))));
			dsp->fVec55[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec352[0]) + 9.99999968e-21f);
			dsp->fVec56[(dsp->IOTA & 4095)] = (fSlow250 * (((((0.195999995f * fTemp230) + ((0.261000007f * fTemp369) + (fTemp426 + (0.100000001f * fTemp425)))) + (0.479999989f * fTemp325)) + (0.400000006f * fTemp247)) + (0.419999987f * fTemp271)));
			float fTemp432 = (0.300000012f * dsp->fVec56[((dsp->IOTA - dsp->iConst121) & 4095)]);
			float fTemp433 = (dsp->fVec55[((dsp->IOTA - dsp->iConst177) & 8191)] - (fTemp432 + (0.600000024f * dsp->fRec350[1])));
			dsp->fVec57[(dsp->IOTA & 1023)] = fTemp433;
			dsp->fRec350[0] = dsp->fVec57[((dsp->IOTA - dsp->iConst178) & 1023)];
			float fRec351 = (0.600000024f * fTemp433);
			dsp->fRec357[0] = ((dsp->fConst117 * dsp->fRec357[1]) + (dsp->fConst118 * (dsp->fRec328[1] + dsp->fRec328[2])));
			dsp->fRec356[0] = ((dsp->fConst187 * dsp->fRec356[1]) + (dsp->fConst188 * (dsp->fRec328[1] + (dsp->fConst189 * dsp->fRec357[0]))));
			dsp->fVec58[(dsp->IOTA & 4095)] = ((0.353553385f * dsp->fRec356[0]) + 9.99999968e-21f);
			float fTemp434 = (dsp->fVec58[((dsp->IOTA - dsp->iConst191) & 4095)] - (fTemp432 + (0.600000024f * dsp->fRec354[1])));
			dsp->fVec59[(dsp->IOTA & 2047)] = fTemp434;
			dsp->fRec354[0] = dsp->fVec59[((dsp->IOTA - dsp->iConst192) & 2047)];
			float fRec355 = (0.600000024f * fTemp434);
			dsp->fRec361[0] = ((dsp->fConst117 * dsp->fRec361[1]) + (dsp->fConst118 * (dsp->fRec330[1] + dsp->fRec330[2])));
			dsp->fRec360[0] = ((dsp->fConst201 * dsp->fRec360[1]) + (dsp->fConst202 * (dsp->fRec330[1] + (dsp->fConst203 * dsp->fRec361[0]))));
			dsp->fVec60[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec360[0]) + 9.99999968e-21f);
			float fTemp435 = ((fTemp432 + dsp->fVec60[((dsp->IOTA - dsp->iConst205) & 8191)]) - (0.600000024f * dsp->fRec358[1]));
			dsp->fVec61[(dsp->IOTA & 1023)] = fTemp435;
			dsp->fRec358[0] = dsp->fVec61[((dsp->IOTA - dsp->iConst206) & 1023)];
			float fRec359 = (0.600000024f * fTemp435);
			dsp->fRec365[0] = ((dsp->fConst117 * dsp->fRec365[1]) + (dsp->fConst118 * (dsp->fRec326[1] + dsp->fRec326[2])));
			dsp->fRec364[0] = ((dsp->fConst215 * dsp->fRec364[1]) + (dsp->fConst216 * (dsp->fRec326[1] + (dsp->fConst217 * dsp->fRec365[0]))));
			dsp->fVec62[(dsp->IOTA & 8191)] = ((0.353553385f * dsp->fRec364[0]) + 9.99999968e-21f);
			float fTemp436 = ((dsp->fVec62[((dsp->IOTA - dsp->iConst219) & 8191)] + fTemp432) - (0.600000024f * dsp->fRec362[1]));
			dsp->fVec63[(dsp->IOTA & 1023)] = fTemp436;
			dsp->fRec362[0] = dsp->fVec63[((dsp->IOTA - dsp->iConst220) & 1023)];
			float fRec363 = (0.600000024f * fTemp436);
			float fTemp437 = (fRec363 + fRec359);
			float fTemp438 = (fRec351 + (fRec355 + fTemp437));
			dsp->fRec326[0] = (dsp->fRec334[1] + (dsp->fRec338[1] + (dsp->fRec342[1] + (dsp->fRec346[1] + (dsp->fRec350[1] + (dsp->fRec354[1] + (dsp->fRec358[1] + (dsp->fRec362[1] + (fRec335 + (fRec339 + (fRec343 + (fRec347 + fTemp438))))))))))));
			dsp->fRec327[0] = ((dsp->fRec350[1] + (dsp->fRec354[1] + (dsp->fRec358[1] + (dsp->fRec362[1] + fTemp438)))) - (dsp->fRec334[1] + (dsp->fRec338[1] + (dsp->fRec342[1] + (dsp->fRec346[1] + (fRec335 + (fRec339 + (fRec347 + fRec343))))))));
			float fTemp439 = (fRec355 + fRec351);
			dsp->fRec328[0] = ((dsp->fRec342[1] + (dsp->fRec346[1] + (dsp->fRec358[1] + (dsp->fRec362[1] + (fRec343 + (fRec347 + fTemp437)))))) - (dsp->fRec334[1] + (dsp->fRec338[1] + (dsp->fRec350[1] + (dsp->fRec354[1] + (fRec335 + (fRec339 + fTemp439)))))));
			dsp->fRec329[0] = ((dsp->fRec334[1] + (dsp->fRec338[1] + (dsp->fRec358[1] + (dsp->fRec362[1] + (fRec335 + (fRec339 + fTemp437)))))) - (dsp->fRec342[1] + (dsp->fRec346[1] + (dsp->fRec350[1] + (dsp->fRec354[1] + (fRec343 + (fRec347 + fTemp439)))))));
			float fTemp440 = (fRec363 + fRec355);
			float fTemp441 = (fRec359 + fRec351);
			dsp->fRec330[0] = ((dsp->fRec338[1] + (dsp->fRec346[1] + (dsp->fRec354[1] + (dsp->fRec362[1] + (fRec339 + (fRec347 + fTemp440)))))) - (dsp->fRec334[1] + (dsp->fRec342[1] + (dsp->fRec350[1] + (dsp->fRec358[1] + (fRec335 + (fRec343 + fTemp441)))))));
			dsp->fRec331[0] = ((dsp->fRec334[1] + (dsp->fRec342[1] + (dsp->fRec354[1] + (dsp->fRec362[1] + (fRec335 + (fRec343 + fTemp440)))))) - (dsp->fRec338[1] + (dsp->fRec346[1] + (dsp->fRec350[1] + (dsp->fRec358[1] + (fRec339 + (fRec347 + fTemp441)))))));
			float fTemp442 = (fRec363 + fRec351);
			float fTemp443 = (fRec359 + fRec355);
			dsp->fRec332[0] = ((dsp->fRec334[1] + (dsp->fRec346[1] + (dsp->fRec350[1] + (dsp->fRec362[1] + (fRec335 + (fRec347 + fTemp442)))))) - (dsp->fRec338[1] + (dsp->fRec342[1] + (dsp->fRec354[1] + (dsp->fRec358[1] + (fRec339 + (fRec343 + fTemp443)))))));
			dsp->fRec333[0] = ((dsp->fRec338[1] + (dsp->fRec342[1] + (dsp->fRec350[1] + (dsp->fRec362[1] + (fRec339 + (fRec343 + fTemp442)))))) - (dsp->fRec334[1] + (dsp->fRec346[1] + (dsp->fRec354[1] + (dsp->fRec358[1] + (fRec335 + (fRec347 + fTemp443)))))));
			output0[i] = (FAUSTFLOAT)(float)tanhf((float)((0.400000006f * fTemp248) + ((0.699999988f * fTemp271) + ((0.600000024f * fTemp325) + ((0.899999976f * fTemp369) + (fTemp402 + ((0.200000003f * fTemp425) + (0.370000005f * (dsp->fRec327[0] + dsp->fRec328[0])))))))));
			output1[i] = (FAUSTFLOAT)(float)tanhf((float)((0.600000024f * fTemp248) + ((0.300000012f * fTemp271) + ((0.400000006f * fTemp325) + ((0.100000001f * fTemp369) + (fTemp402 + ((0.800000012f * fTemp425) + (0.370000005f * (dsp->fRec327[0] - dsp->fRec328[0])))))))));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
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
			dsp->fVec2[1] = dsp->fVec2[0];
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
			dsp->fVec3[1] = dsp->fVec3[0];
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
			dsp->fVec4[1] = dsp->fVec4[0];
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
			dsp->fVec5[1] = dsp->fVec5[0];
			dsp->fRec201[1] = dsp->fRec201[0];
			dsp->fRec267[1] = dsp->fRec267[0];
			dsp->fRec268[1] = dsp->fRec268[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec270[1] = dsp->fRec270[0];
			dsp->fRec269[1] = dsp->fRec269[0];
			dsp->fRec274[1] = dsp->fRec274[0];
			dsp->iRec276[1] = dsp->iRec276[0];
			dsp->fRec275[1] = dsp->fRec275[0];
			dsp->fRec272[1] = dsp->fRec272[0];
			dsp->fRec278[1] = dsp->fRec278[0];
			dsp->fRec279[1] = dsp->fRec279[0];
			dsp->fRec277[2] = dsp->fRec277[1];
			dsp->fRec277[1] = dsp->fRec277[0];
			dsp->fRec273[1] = dsp->fRec273[0];
			dsp->fRec271[2] = dsp->fRec271[1];
			dsp->fRec271[1] = dsp->fRec271[0];
			dsp->fRec281[1] = dsp->fRec281[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec284[1] = dsp->fRec284[0];
			dsp->fRec285[1] = dsp->fRec285[0];
			dsp->fRec283[2] = dsp->fRec283[1];
			dsp->fRec283[1] = dsp->fRec283[0];
			dsp->fRec282[1] = dsp->fRec282[0];
			dsp->fRec286[1] = dsp->fRec286[0];
			dsp->fRec287[1] = dsp->fRec287[0];
			dsp->fRec288[2] = dsp->fRec288[1];
			dsp->fRec288[1] = dsp->fRec288[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec290[1] = dsp->fRec290[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec291[1] = dsp->fRec291[0];
			dsp->iVec10[1] = dsp->iVec10[0];
			dsp->fRec292[1] = dsp->fRec292[0];
			dsp->fRec289[1] = dsp->fRec289[0];
			dsp->fRec294[1] = dsp->fRec294[0];
			dsp->fRec297[1] = dsp->fRec297[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec301[1] = dsp->fRec301[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->IOTA = (dsp->IOTA + 1);
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec302[1] = dsp->fRec302[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec303[1] = dsp->fRec303[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec304[1] = dsp->fRec304[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec305[1] = dsp->fRec305[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec306[1] = dsp->fRec306[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec300[2] = dsp->fRec300[1];
			dsp->fRec300[1] = dsp->fRec300[0];
			dsp->fRec298[1] = dsp->fRec298[0];
			dsp->fRec295[1] = dsp->fRec295[0];
			dsp->fRec293[2] = dsp->fRec293[1];
			dsp->fRec293[1] = dsp->fRec293[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec310[1] = dsp->fRec310[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec311[1] = dsp->fRec311[0];
			dsp->iVec31[1] = dsp->iVec31[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec309[1] = dsp->fRec309[0];
			dsp->fRec307[1] = dsp->fRec307[0];
			dsp->fRec312[1] = dsp->fRec312[0];
			dsp->fRec313[1] = dsp->fRec313[0];
			dsp->fRec308[1] = dsp->fRec308[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec315[1] = dsp->fRec315[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fVec35[1] = dsp->fVec35[0];
			dsp->fRec316[1] = dsp->fRec316[0];
			dsp->fRec314[1] = dsp->fRec314[0];
			dsp->fVec37[1] = dsp->fVec37[0];
			dsp->fRec318[1] = dsp->fRec318[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec319[1] = dsp->fRec319[0];
			dsp->fRec317[1] = dsp->fRec317[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec321[1] = dsp->fRec321[0];
			dsp->fVec41[1] = dsp->fVec41[0];
			dsp->fRec322[1] = dsp->fRec322[0];
			dsp->fRec320[1] = dsp->fRec320[0];
			dsp->fVec43[1] = dsp->fVec43[0];
			dsp->fRec324[1] = dsp->fRec324[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec325[1] = dsp->fRec325[0];
			dsp->fRec323[1] = dsp->fRec323[0];
			dsp->fRec337[1] = dsp->fRec337[0];
			dsp->fRec336[1] = dsp->fRec336[0];
			dsp->fRec334[1] = dsp->fRec334[0];
			dsp->fRec341[1] = dsp->fRec341[0];
			dsp->fRec340[1] = dsp->fRec340[0];
			dsp->fRec338[1] = dsp->fRec338[0];
			dsp->fRec345[1] = dsp->fRec345[0];
			dsp->fRec344[1] = dsp->fRec344[0];
			dsp->fRec342[1] = dsp->fRec342[0];
			dsp->fRec349[1] = dsp->fRec349[0];
			dsp->fRec348[1] = dsp->fRec348[0];
			dsp->fRec346[1] = dsp->fRec346[0];
			dsp->fRec353[1] = dsp->fRec353[0];
			dsp->fRec352[1] = dsp->fRec352[0];
			dsp->fRec350[1] = dsp->fRec350[0];
			dsp->fRec357[1] = dsp->fRec357[0];
			dsp->fRec356[1] = dsp->fRec356[0];
			dsp->fRec354[1] = dsp->fRec354[0];
			dsp->fRec361[1] = dsp->fRec361[0];
			dsp->fRec360[1] = dsp->fRec360[0];
			dsp->fRec358[1] = dsp->fRec358[0];
			dsp->fRec365[1] = dsp->fRec365[0];
			dsp->fRec364[1] = dsp->fRec364[0];
			dsp->fRec362[1] = dsp->fRec362[0];
			dsp->fRec326[2] = dsp->fRec326[1];
			dsp->fRec326[1] = dsp->fRec326[0];
			dsp->fRec327[2] = dsp->fRec327[1];
			dsp->fRec327[1] = dsp->fRec327[0];
			dsp->fRec328[2] = dsp->fRec328[1];
			dsp->fRec328[1] = dsp->fRec328[0];
			dsp->fRec329[2] = dsp->fRec329[1];
			dsp->fRec329[1] = dsp->fRec329[0];
			dsp->fRec330[2] = dsp->fRec330[1];
			dsp->fRec330[1] = dsp->fRec330[0];
			dsp->fRec331[2] = dsp->fRec331[1];
			dsp->fRec331[1] = dsp->fRec331[0];
			dsp->fRec332[2] = dsp->fRec332[1];
			dsp->fRec332[1] = dsp->fRec332[0];
			dsp->fRec333[2] = dsp->fRec333[1];
			dsp->fRec333[1] = dsp->fRec333[0];
			
		}
		
	}
	
}

#ifdef __cplusplus
}
#endif


#endif
