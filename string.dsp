import("stdfaust.lib");

slew = hslider("slew", 1.0, 0.1, 100.0, 0.01);
freq = hslider("freq",440,50,1000,0.01) : fi.lowpass(1,slew);
gate = button("gate");
res = hslider("res", 0.1, 0.1, 10.0, 0.0001);
// off = hslider("off", 0.00, 0.0, 1.0, 0.0001);

lagrangecombfilter(maxdel,del,g) = (+ : de.fdelayltv(3,maxdel,del) // : ef.cubicnl(0.1, off)
) ~ *(g);

// myString(freq,res,gate) = excitation : fi.fb_fcomb(maxDel,N,b0,aN)
myString(freq,res,gate) = excitation : lagrangecombfilter(maxDel,N,aN)
with{
	maxDel = 8192;
	N = ma.SR/freq;
	b0 = 1;
	aN = ba.tau2pole(res * freq * 0.00001)*-1;
	excitation = no.noise*en.ar(0.001,0.001,gate);
};


process = myString(freq,res,gate) : _;
