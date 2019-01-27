declare name "drm";
declare description "popfilter";
declare version "1.0";
declare description "popfilter drum";
declare nvoices "8";

import("stdfaust.lib");

freq = nentry("/freq",440,50,1000,0.01);
gate = button("/gate");
q = hslider("/q", 0.5, 0.01, 50.0, 0.01);

process = sy.popFilterDrum(freq,q,gate) : _ ;
