// =====================================================================
// SuperCollider Workspace
// =====================================================================

s.boot;
s.freeAll;
(

~blat = {arg thing,prang;
	thing.set(prang,1);
	SystemClock.sched(0.005,{ thing.set(prang,0) } );
};

~hatz = {FaustHatz.ar( \decay_oh.kr(1401.9), \tone.kr(6150.4), \hh.kr(0.0), \oh.kr(0.0), \vol.kr(0.2) )}.play;

~bum = {FaustDrumbum.ar( \bd.kr(0.0), \bdd.kr(0.0), \gulp.kr(4.73), \gulpdecay.kr(12.0), \freq.kr(60.0), \q_bdd.kr(0.989), \vol.kr(1.0) )}.play;

~snarf = {FaustSnarf.ar( \sd.kr(0.0), \sizzle.kr(0.5), \tone.kr(1.0), \vol.kr(0.2))}.play;
~clack = {FaustClack.ar( \clapfreq.kr(1500.0), \clapq.kr(1.3), \cp.kr(0.0), \decay.kr(300.0), \vol.kr(1.5))}.play;
~strang = {FaustStrang.ar( \expos.kr(0.5), \res.kr(1.0), \sign.kr(1.0), \strength.kr(2.0), \freq_0.kr(440.0), \gate_0.kr(0.0), \freq_1.kr(440.0), \gate_1.kr(0.0), \freq_2.kr(440.0), \gate_2.kr(0.0), \freq_3.kr(440.0), \gate_3.kr(0.0), \vol_3.kr(0.7))}.play;
~organeek = {FaustOrgan.ar( \a1.kr(0.5), \a2.kr(0.5), \a3.kr(0.5), \a4.kr(0.5), \a5.kr(0.5), \a6.kr(0.5), \a8.kr(0.5), \attack.kr(1.0), \drive.kr(0.1), \drivecolour.kr(0.1), \release.kr(1.0), \vibrato.kr(1.0), \freq_0.kr(100.0), \gate_0.kr(0.0), \freq_1.kr(100.0), \gate_1.kr(0.0), \freq_2.kr(100.0), \gate_2.kr(0.0), \freq_3.kr(100.0), \gate_3.kr(0.0), \vol_3.kr(0.5), \volcolour_3.kr(0.1) )}.play;

~wub = {FaustWub.ar( \freq.kr(100.0), \gate_0.kr(0.0), \attack.kr(150.0), \basefreq.kr(0.8), \decay.kr(300.0), \env.kr(20.0), \q.kr(1.2), \release_0.kr(50.0), \sustain_0.kr(0.0), \release_1.kr(1.0), \vol_1.kr(0.2), \portamento_1.kr(0.5) )}.play
)

(
~blat.value(~hatz,\hh);
~blat.value(~hatz,\hh);
~blat.value(~hatz,\oh);
~blat.value(~bum,\bd);
~blat.value(~bum,\bdd);
~blat.value(~bum,\bd);
~blat.value(~snarf,\sd);
~blat.value(~clack,\cp);
~strang.set(\freq_0, 200);
~strang.set(\res,5.0,\sign,-1.0);
~strang.set(\res,5.0,\sign,1.0);
~blat.value(~strang,\gate_0);
~strang.set(\freq_1, 250);
~blat.value(~strang,\gate_1);
~strang.set(\res,5.0,\sign,1.0);
~strang.set(\freq_2, 300);
~blat.value(~strang,\gate_2);
~strang.set(\freq_2, 400);
~strang.set(\freq_3, 500,\res,5.0,\sign,-1);
~blat.value(~strang,\gate_3);
~strang.set(\freq_3, 300,\res,2.0);
~organeek.set(\freq_0,200);
~organeek.set(\gate_0,1);
~organeek.set(\freq_0,80);
~organeek.set(\gate_1,1);
~organeek.set(\gate_0,0);
~organeek.set(\gate_1,0);
~wub.set(\gate_0,1);
~wub.set(\gate_0,0);
)