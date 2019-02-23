import("stdfaust.lib");
// tubes = library("tubes.lib");
hatz = library("hatz.lib");
drumbum = library("drumbum.lib");
import("sat.lib");


process = hgroup("sgynth",(hatz.hatz + drumbum.drumbum): ma.tanh);
