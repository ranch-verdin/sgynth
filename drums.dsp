import("stdfaust.lib");

freq = hslider("freq",440,50,1000,0.01);
gate = button("gate");
q = hslider("q", 0.5, 0.01, 10.0, 0.01);

process = sy.popFilterDrum(freq,q,gate) : _ ;
