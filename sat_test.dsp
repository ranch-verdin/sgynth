import("oscillators.lib");
import("sat.lib");
ramp = lf_sawpos(0.5) * 2 - 1;
process = hgroup("clip_controls", (in_sig, 0 - out_fn(in_sig))) with {
	in_sig = vslider("ramp_height", 0.1, 0.001, 1.0, 0.001) * ramp;
	out_fn = asym_soft_clipper_tanc(vslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
                                        vslider("knee_pos", 2, 1, 10.0, 0.1),
                                        vslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
                                        vslider("knee_neg", 2, 1, 10.0, 0.1));
                          
};