import("stdfaust.lib");
import("svf.lib");

my_env(gate) = en.adsre(attack,decay,sustain,release,gate) with {
  attack = vslider("attack",1,0.1,100,0.1) * 0.001;
  decay = vslider("decay",20,2,1000,0.1) * 0.001;
  sustain = vslider("sustain", 0.5, 0.0, 1.0, 0.01);
  release = vslider("release",1,0.1,1000,0.1) * 0.001;
};

harmonics(f) = os.oscrs(f)*a1+os.oscrs(2*f + d2)*a2+os.oscrs(3*f + d3)*a3+os.oscrs(4f + d4)*a4+os.oscrs(5*f + d5)*a5 with {
  a1 = vslider("a1", 0.5, 0.0, 1.0, 0.01);
  a2 = vslider("a2", 0.5, 0.0, 1.0, 0.01);
  a3 = vslider("a3", 0.5, 0.0, 1.0, 0.01);
  a4 = vslider("a4", 0.5, 0.0, 1.0, 0.01);
  a5 = vslider("a5", 0.5, 0.0, 1.0, 0.01);
  d1 = vslider("d1", 0.5, 0.0, 10.0, 0.01);
  d2 = vslider("d2", 0.5, 0.0, 10.0, 0.01);
  d3 = vslider("d3", 0.5, 0.0, 10.0, 0.01);
  d4 = vslider("d4", 0.5, 0.0, 10.0, 0.01);
  d5 = vslider("d5", 0.5, 0.0, 10.0, 0.01);
};

basic(freq,gate) = hgroup("organ", harmonics(freq) * my_env(gate));

filt(freq,gate) =
  hgroup("filter", svf(freq * vslider("wang",1.0,0.1,10.0,0.01) * my_env(gate),
		       q,
		       asym_soft_clipper_tanc(vslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
					      vslider("knee_pos", 2, 1, 10.0, 0.1),
					      vslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
					      vslider("knee_neg", 2, 1, 10.0, 0.1)))) with {
  q = vslider("q",0.96,0.1,5.0,0.001);
};

organ(freq,gate) = basic(freq,gate) : filt(freq,gate);

process = hgroup("controls", vslider("freq", 100.0, 10.0, 5000.0, 0.1), button("gate")) : organ;


