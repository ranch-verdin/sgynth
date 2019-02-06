// thanks sound on sound!
// https://www.soundonsound.com/techniques/practical-snare-drum-synthesis
import("stdfaust.lib");
import("svf.lib");
import("perc.lib");

freq1 = vslider("freq1",100,10,1000,10);
freq2 = vslider("freq1",240,10,1000,10);
q1 = vslider("q1",0.98,0.8,1.0,0.001);
q2 = vslider("q2",0.96,0.8,1.0,0.001);
attack = vslider("attack",1,0.1,10,0.1) * 0.001;
decay = vslider("decay",20,2,2000,0.1) * 0.001;
jump = vslider("jump",10,0.0,10,0.01);
length = vslider("length",6.4,0.1,10,0.1) * 0.001;
snappy = vslider("snappy",0.1,0,1,0.01);
sizzlefreq = vslider("sizzlefreq",8000,5000,10000,10);
sizzle = vslider("sizzle",0.2,0,1,0.01);
vol = vslider("vol",0.2,0,10.0,0.01);

sd = button("sd") : trigger(length);

contour = en.are(attack,decay,sd);

thwack = sd + snappy * contour : fi.lowpass(2, 10000);

clip_func =
    asym_soft_clipper_tanc(vslider("limit_pos", 0.706, 0.001, 1.0, 0.001),
    		   	   vslider("knee_pos", 1.9, 1, 10.0, 0.1),
			   vslider("limit_neg", 0.421, 0.001, 1.0, 0.001),
			   vslider("knee_neg", 3.9, 1, 10.0, 0.1));

clip_func1 = hgroup("clip1", clip_func);
clip_func2 = hgroup("clip2", clip_func);

shake = thwack <: svf_bpf(freq1, q1, clip_func1),svf_bpf(freq2, q2, clip_func2) :> _;

rattle = contour * no.noise : fi.lowpass(2,sizzlefreq) : *(sizzle);


process = hgroup("sd",shake + rattle * vol);