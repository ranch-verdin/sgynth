// thanks reddit!
// https://www.reddit.com/r/synthesizers/comments/2d2muh/how_to_synthesize_hihats_through_subtractive/

import("stdfaust.lib");
import("svf.lib");
import("perc.lib");
squares = os.square(// vslider("freq1",394,200,500,1)
		   394) +
       	  os.square(// vslider("freq2",309,200,500,1)
		   309) +
       	  os.square(// vslider("freq3",493,200,500,1)
		   493) +
       	  os.square(// vslider("freq4",361,200,500,1)
		   361) +
       	  os.square(// vslider("freq5",422,200,500,1)
		   422) +
       	  os.square(// vslider("freq6",315,200,500,1)
		   203);
hatz_hpf = svf(vslider("hpfreq",6150.4,300,8000,0.2),
	       vslider("q",1.04,0.1,5,0.01),
	       pseudotanh) :
	   !,!,_;
tone = hgroup("osc",  squares) :
       hgroup("filt", fi.highpass(2,1000) :
		      hatz_hpf : hatz_hpf :
	              fi.lowpass(2,vslider("lpfreq",13593,1000,15000,1))) ;


drone = tone * vslider("tone_level",0.54,0.0,1.0,0.01) +
	no.noise * vslider("noise_level",0.03,0.0,1.0,0.01);


strike(decay,gate) =
  hgroup("hatz", drone * en.are(attack,decay,gate));

attack = vslider("attack",0.1,0.1,10,0.1) * 0.001;
length = vslider("length",6.4,0.1,10,0.1) * 0.001;
decay_oh = vslider("decay_oh",1401.9,2,2000,0.1) * 0.001;
decay_hh = vslider("decay_hh",84.7,2,2000,0.1) * 0.001;

oh = button("oh") : trigger(length);
hh = button("hh") : trigger(length);
process = strike(trig_param_select(hh,decay_hh,
				   oh,decay_oh),
	  	 trig_either(hh,oh));
