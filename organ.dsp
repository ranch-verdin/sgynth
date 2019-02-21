import("tubes.lib");
import("stdfaust.lib");
import("svf.lib");

my_env(gate) = en.adsre(attack,decay,sustain,release,gate) with {
  attack = vslider("attack",1,0.1,100,0.1) * 0.001;
  decay = vslider("decay",20,2,1000,0.1) * 0.001;
  sustain = vslider("sustain", 0.5, 0.0, 1.0, 0.01);
  release = vslider("release",1,0.1,1000,0.1) * 0.001;
};

partial(f,N) = os.oscrs(f * N *(1 + 0.002 * no.lfnoise(f * N / 10.0)));

harmonics(f) = partial(f,1)*a1 + partial(f,2)*a2 + partial(f,3)*a3 + partial(f,4)*a4 + partial(f,5)*a5 + partial(f,6)*a6 + partial(f,8)*a8 with {
  a1 = vslider("a1", 0.5, 0.0, 1.0, 0.01);
  a2 = vslider("a2", 0.5, 0.0, 1.0, 0.01);
  a3 = vslider("a3", 0.5, 0.0, 1.0, 0.01);
  a4 = vslider("a4", 0.5, 0.0, 1.0, 0.01);
  a5 = vslider("a5", 0.5, 0.0, 1.0, 0.01);
  a6 = vslider("a6", 0.5, 0.0, 1.0, 0.01);
  a8 = vslider("a8", 0.5, 0.0, 1.0, 0.01);
};

basic(freq,gate) = hgroup("organ", harmonics(freq*(1 + 0.01 * os.oscrs(5))) * my_env(gate));

filt(freq,gate) =
  hgroup("filter", svf(freq * (vslider("filt_freq",0.5,0.1,5.0,0.01) +
			       vslider("filt_depth",1.0,0.1,10.0,0.01) * my_env(gate)),
		       q,
		       basic_hard_clip)) with {
  q = vslider("q",0.96,0.1,5.0,0.001);
};

organ(freq,gate) = basic(freq,gate) : *(vslider("drive", 0.1, 0.0,2.0,0.01)) : T1_12AX7 : filt(freq,gate) : _,!,!;

process = hgroup("controls", vslider("freq", 100.0, 10.0, 5000.0, 0.1), button("gate")) : organ;


