// kickdrum voice

import("stdfaust.lib");
import("svf.lib");

// standard parameters
freq = hslider("freq",100,10,500,10);
q = hslider("q",0.96,0.8,1.0,0.001);
attack = hslider("attack",1,0.1,10,0.1) * 0.001;
decay = hslider("decay",20,2,100,0.1) * 0.001;
jump = hslider("jump",10,0.0,10,0.01);
// x = hslider("x",1,0,1,0.001);
// y = hslider("y",1,0,1,0.001);
// keyboard = hslider("keyboard",0,0,1,0.001) : int;
// key = hslider("key",0,0,1,0.001) : int;
basic_env(gate) = en.ar(attack,decay,gate) * jump;
popFilterDrum(freq,q,gate) = hgroup("noise",basic_env(gate))*(0.5 + 0.5*no.noise ):
			     svf(freq *(1.0 + hgroup("freq",basic_env(gate))),
				 q,
				 asym_soft_clipper_tanc(hslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
					hslider("knee_pos", 2, 1, 10.0, 0.1),
					hslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
					hslider("knee_neg", 2, 1, 10.0, 0.1)));

process = button("gate"):popFilterDrum(freq, q);
