// thanks reddit!
// https://www.reddit.com/r/synthesizers/comments/2d2muh/how_to_synthesize_hihats_through_subtractive/

import("stdfaust.lib");
import("svf.lib");
squares = os.square(vslider("freq1",450,300,500,1)) +
       	  os.square(vslider("freq2",450,300,500,1)) +
       	  os.square(vslider("freq3",450,300,500,1)) +
       	  os.square(vslider("freq4",450,300,500,1)) +
       	  os.square(vslider("freq5",450,300,500,1)) +
       	  os.square(vslider("freq6",450,300,500,1));
hatz_hpf = svf(vslider("hpfreq",450,300,8000,0.2),
	       vslider("q",0.5,0.1,5,0.01),
	       asym_soft_clipper_tanc(vslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
				      vslider("knee_pos", 2, 1, 10.0, 0.1),
				      vslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
				      vslider("knee_neg", 2, 1, 10.0, 0.1))) :
	   !,!,_;
tone = hgroup("osc",  squares) :
       hgroup("filt", hatz_hpf : hatz_hpf :
	              fi.lowpass(2,vslider("lpfreq",2000,1000,15000,1))) ;


drone = tone * vslider("tone_level",0.2,0.0,1.0,0.01) +
	no.noise * vslider("noise_level",0.2,0.0,1.0,0.01);


strike(decay,gate) =
   hgroup("hatz", drone * en.are(attack,decay,gate));

attack = vslider("attack",1,0.1,10,0.1) * 0.001;
length = vslider("length",1,0.1,10,0.1) * 0.001;
decay_oh = vslider("decay_oh",20,2,2000,0.1) * 0.001;
decay_hh = vslider("decay_hh",20,2,2000,0.1) * 0.001;

oh =button("oh") : ba.impulsify : ba.countdown(length * SR) > 0;
hh =button("hh") : ba.impulsify : ba.countdown(length * SR) > 0;
process = strike(oh * decay_oh + hh * decay_hh : ba.latch(oh+hh > 0),
	  	 (hh + oh > 0));
