// kickdrum voice

import("stdfaust.lib");
import("svf.lib");
import("perc.lib");

// standard parameters
freq = vslider("freq",100,10,500,10);
q_bd = vslider("q_bd",0.96,0.8,1.0,0.001);
q_bl = vslider("q_bl",0.995,0.8,1.0,0.001);
attack = vslider("attack",1,0.1,10,0.1) * 0.001;
decay = vslider("decay",20,2,100,0.1) * 0.001;
jump = vslider("jump",10,0.0,10,0.01);
length = vslider("length",6.4,0.1,10,0.1) * 0.001;

basic_env(gate) = en.ar(attack,decay,gate) * jump;
popFilterDrum(freq,q,gate) = hgroup("noise",basic_env(gate))*(0.5 + 0.5*no.noise ):
			     svf(freq *(1.0 + hgroup("freq",basic_env(gate))),
				 q,
				 asym_soft_clipper_tanc(vslider("limit_pos", 0.1, 0.001, 1.0, 0.001),
							vslider("knee_pos", 2, 1, 10.0, 0.1),
							vslider("limit_neg", 0.1, 0.001, 1.0, 0.001),
							vslider("knee_neg", 2, 1, 10.0, 0.1)));

kick_strike(q,gate) = hgroup("bd", gate:popFilterDrum(freq, q) : _,!,!);


bd = button("bd") : trigger(length);
bl = button("bl") : trigger(length);

process = kick_strike(trig_param_select(bd, q_bd,
					bl, q_bl),
	              trig_either(bd,bl));
