import("stdfaust.lib");
// tubes = library("tubes.lib");
hatz = library("hatz.lib");
drumbum = library("drumbum.lib");
organ = library("organ.lib");
string = library("string.lib");
snarf = library("snarf.lib");
clack = library("clack.lib");
import("sat.lib");



process = tgroup("sgynth",hatz.hatz,drumbum.drumbum,organ.organ, string.string,snarf.snarf,clack.clack :> ma.tanh);
