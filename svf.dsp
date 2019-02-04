import("svf.lib");
process = svf(hslider("freq",500,10,1000,1),
	      hslider("q",0.54,0,5,0.01),
	      asym_soft_clipper_tanc(hslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
					hslider("knee_pos", 2, 1, 10.0, 0.1),
					hslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
					hslider("knee_neg", 2, 1, 10.0, 0.1)));