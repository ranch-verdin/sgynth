import("stdfaust.lib");
import("sat.lib");

// off = hslider("off", 0.00, 0.0, 1.0, 0.0001);

nl_lagrangecombfilter(maxdel,del,g,nl_element) = (+ : de.fdelayltv(3,maxdel,del) ) ~ (nl_element : fi.dcblockerat(5) : *(g));

// myString(freq,res,gate) = excitation : fi.fb_fcomb(maxDel,N,b0,aN)
myString(res,limit_pos,knee_pos,limit_neg,knee_neg,attack,decay,noise,sign) = excitation : nl_lagrangecombfilter(maxDel,N,aN,nl_element)
with{
  freq = vslider("freq",440,50,1000,0.01) // : fi.lowpass(1, 10.0)
  ;
  gate = button("gate");
  nl_element=sign * asym_soft_clipper_tanc(limit_pos,knee_pos,limit_neg,knee_neg);
  maxDel = 8192;
  N = ma.SR/freq;
  b0 = 1;
  aN = ba.tau2pole(res * freq * 0.00001);
  excitation = (1.0-noise+noise*no.noise)*en.ar(attack,decay,gate);
};

inargs = vgroup("params",res,limit_pos,knee_pos,limit_neg,knee_neg,attack,decay,noise,sign) with {
  res = hslider("res", 1.0, 0.1, 10.0, 0.0001);
  limit_pos = hslider("limit_pos", 0.1, 0.001, 1.0, 0.001);
  knee_pos = hslider("knee_pos", 2, 1, 10.0, 0.1);
  limit_neg = hslider("limit_neg", 0.1, 0.001, 1.0, 0.001);
  knee_neg = hslider("knee_neg", 2, 1, 10.0, 0.1);
  attack = hslider("attack",0.5, 0.1, 10.0, 0.01) * 0.001;
  decay = hslider("decay",0.5, 0.1, 50.0, 0.01) * 0.001;
  noise = hslider("noise", 0.1, 0.0, 1.0, 0.0001);
  sign = hslider("sign", 1.0, -1.0, 1.0, 2.0);
};

process = hgroup("thing", (inargs : hgroup("string1", myString)),
		 (inargs : hgroup("string2", myString)),
		 (inargs : hgroup("string3", myString)),
		 (inargs : hgroup("string4", myString))) :> _ ;
