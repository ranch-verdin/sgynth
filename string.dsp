import("stdfaust.lib");

// off = hslider("off", 0.00, 0.0, 1.0, 0.0001);

nl_lagrangecombfilter(maxdel,del,g,off) = (+ : de.fdelayltv(3,maxdel,del) ) ~ (+(off) : ma.tanh : -(off) : fi.dcblockerat(5) : *(g));

// myString(freq,res,gate) = excitation : fi.fb_fcomb(maxDel,N,b0,aN)
myString(res, off) = excitation : nl_lagrangecombfilter(maxDel,N,aN,off)
with{
	freq = hslider("freq",440,50,1000,0.01) : fi.lowpass(1, 10.0);
	gate = button("gate");
	maxDel = 8192;
	N = ma.SR/freq;
	b0 = 1;
	aN = ba.tau2pole(res * freq * 0.00001)*(off + 1.0);
	excitation = (1.0 + no.noise)*en.ar(0.0005,0.0005,gate);
};

process = (inargs : vgroup("string1", myString)),
	(inargs : vgroup("string2", myString)),
	(inargs : vgroup("string3", myString)),
	(inargs : vgroup("string4", myString)) :> _ with {
	res = hslider("res", 0.1, 0.1, 10.0, 0.0001);
	off = hslider("off",0.0, 0.0, 10.0, 0.01);
	inargs = res, off;
};
