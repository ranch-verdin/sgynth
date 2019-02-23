import("stdfaust.lib");
// tubes = library("tubes.lib");
hatz = library("hatz.lib");
drumbum = library("drumbum.lib");
organ = library("organ.lib");
import("sat.lib");



process = hgroup("sgynth",hatz.hatz,drumbum.drumbum,organ.organ :> ma.tanh);
