// thanks, sessionville!
// http://sessionville.com/articles/anatomy-of-a-drum-machine
import("stdfaust.lib");
import("svf.lib");
import("perc.lib");

attack = vslider("attack",1,0.1,10,0.1) * 0.001;
decay = vslider("decay",20,2,2000,0.1) * 0.001;
clapfreq = vslider("clapfreq",5000,2000,10000,10);
clapq = vslider("clapq",0.98,0.5,5.0,0.001);
length = vslider("length",6.4,0.1,10,0.1) * 0.001;

cp = button("gate") : trigger(length);

clapenv = en.are(attack,decay,cp);

clip_func =
  asym_soft_clipper_tanc(vslider("limit_pos", 0.706, 0.001, 1.0, 0.001),
    		   	 vslider("knee_pos", 1.9, 1, 10.0, 0.1),
			 vslider("limit_neg", 0.421, 0.001, 1.0, 0.001),
			 vslider("knee_neg", 3.9, 1, 10.0, 0.1));

clapnoise = no.noise : svf(clapfreq, clapq, clip_func) : !, _, ! ;

process = hgroup("cp", clapnoise * clapenv);
