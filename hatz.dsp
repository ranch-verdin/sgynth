import("hatz.lib");


process = hatz(oh,decay_oh,hh,decay_hh) with {
  oh = button("oh") : trigger(length);
  hh = button("hh") : trigger(length);
  decay_oh = vslider("decay_oh",1401.9,2,2000,0.1) * 0.001;
  decay_hh = 84// vslider("decay_hh",84.7,2,2000,0.1)
	     * 0.001;
};
