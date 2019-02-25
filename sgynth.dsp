import("stdfaust.lib");
// tubes = library("tubes.lib");
hatz = library("hatz.lib");
drumbum = library("drumbum.lib");
organ = library("organ.lib");
string = library("string.lib");
snarf = library("snarf.lib");
clack = library("clack.lib");
wub = library("wub.lib");
import("sat.lib");


verb = hgroup("reverb",re.zita_rev1_stereo(pre_del, lf_x, hf_damp, low_rt60, mid_rt60,fsmax))
with{
    fsmax = 20000.0 ;
    pre_del = 14// vslider("[1] pre_del [unit:ms] [tooltip: reverb pre-delay ]", 20, 0, 200, 1)
    ;
    lf_x = 617// vslider("[2] lf_fc [unit:Hz] [scale:log] [tooltip: low band cutoff frequency ] ", 200, 30, 1200, 1)
    ;
    low_rt60 = 0.9// vslider("[3] low_rt60 [unit:s] [tooltip: -60db decay time for low band ]", 1, 0.1, 3, 0.1)
    ;
    mid_rt60 = 2.2// vslider("[4] mid_rt60 [unit:s] [tooltip: -60db decay time for middle band ]", 1, 0.1, 3, 0.1)
    ;
    hf_damp = 6933// vslider("[5] hf_damp [unit:Hz] [tooltip: damping frequency (decay time is 1/2 mid) ] [scale:log]", 6000, 1200, 0.49*fsmax, 1)
    ;

};

verbbus(l,r,l_wet,r_wet) =  verb(l_wet*wet,r_wet*wet) :> +(l),+(r) with {
  wet = vslider("reverb",0.1,0.0,2.0,0.01);
};

panrev(pan,rev,sig) = panned,(panned : *(rev),*(rev)) with {
  panned = sp.panner(pan,sig);
};

instruments = panrev(0.5,bd_rev,bd),panrev(0.1,hh_rev,hh),panrev(0.6,og_rev,og),panrev(0.8,tw_rev,tw),panrev(0.4,sd_rev,sd),panrev(0.6,cp_rev,cp),panrev(0.3,wb_rev,wb) :> si.bus(4) with {
  bd = drumbum.drumbum;
  bd_rev = 0.1// vslider("bd_rev",0.1,0.0,1.0,0.01)
  ;
  hh = hatz.hatz;
  hh_rev = 0.29// vslider("hh_rev",0.1,0.0,1.0,0.01)
  ;
  og = organ.organ;
  og_rev = 0.49// vslider("og_rev",0.1,0.0,1.0,0.01)
  ;
  tw = string.string;
  tw_rev = 0.5// vslider("tw_rev",0.1,0.0,1.0,0.01)
  ;
  sd = snarf.snarf;
  sd_rev = 0.8// vslider("sd_rev",0.1,0.0,1.0,0.01)
  ;
  cp = clack.clack;
  cp_rev = 1.0// vslider("cp_rev",0.1,0.0,1.0,0.01)
  ;
  wb = wub.wub;
  wb_rev = 0.6;
};


process = tgroup("sgynth", instruments : verbbus : ma.tanh,ma.tanh );

// process = instruments;
