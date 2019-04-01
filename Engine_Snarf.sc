Engine_Snarf : CroneEngine {

	var amp=0;
	var <snarf;
	var <clack;
	var <drumbum;
	var <hatz;
	var <organ;
	var <strang;
	var <wub;

	// this is your constructor. the 'context' arg is a CroneAudioContext.
	// it provides input and output busses and groups.
	// see its implementation for details.
	*new { arg context, doneCallback;
		^super.new(context, doneCallback);
	}

	// this is called when the engine is actually loaded by a script.
	// you can assume it will be called in a Routine,
	//  and you can use .sync and .wait methods.
	alloc {
		//Add SynthDefs
		SynthDef(\faustSnarf,
			{ |out=0|
				Out.ar(out,
					FaustSnarf.ar(
						\sd.kr(0.0), \sizzle.kr(0.5), \tone.kr(1.0), \vol.kr(0.2)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\sd:[0.0, 1, 0, 1, 0.0].asSpec,
				\sizzle:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\tone:[1.0, 2.0, 0, 0.01, 1.0].asSpec,
				\vol:[0.0, 2.0, 0, 0.01, 0.2].asSpec
			) ) ).add;
		SynthDef(\faustClack,
			{ |out=0|
				Out.ar(out,
					FaustClack.ar(
						\clapfreq.kr(1500.0), \clapq.kr(1.3), \cp.kr(0.0), \decay.kr(300.0), \vol.kr(1.5)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\clapfreq:[1000.0, 3000.0, 0, 10.0, 1500.0].asSpec,
				\clapq:[0.5, 5.0, 0, 0.001, 1.3].asSpec,
				\cp:[0.0, 1, 0, 1, 0.0].asSpec,
				\decay:[2.0, 1500.0, 0, 0.1, 300.0].asSpec,
				\vol:[0.0, 5.0, 0, 0.01, 1.5].asSpec
			) ) ).add;
		SynthDef(\faustDrumbum,
			{ |out=0|
				Out.ar(out,
					FaustDrumbum.ar(
						\bd.kr(0.0), \bl.kr(0.0), \gulp.kr(4.73), \gulpdecay.kr(12.0), \freq.kr(60.0), \qbl.kr(0.989), \vol.kr(1.0)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\bd:[0.0, 1, 0, 1, 0.0].asSpec,
				\bl:[0.0, 1, 0, 1, 0.0].asSpec,
				\gulp:[0.0, 10.0, 0, 0.01, 4.73].asSpec,
				\gulpdecay:[0.0, 100.0, 0, 0.01, 12.0].asSpec,
				\freq:[10.0, 500.0, 0, 10.0, 60.0].asSpec,
				\qbl:[0.8, 0.991, 0, 0.001, 0.989].asSpec,
				\vol:[0.0, 10.0, 0, 0.01, 1.0].asSpec
			) ) ).add;
		SynthDef(\faustHatz,
			{ |out=0|
				Out.ar(out,
					FaustHatz.ar(
						\decay_oh.kr(1401.9), \tone.kr(6150.4), \hh.kr(0.0), \oh.kr(0.0), \vol.kr(0.2)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\decay_oh:[2.0, 2000.0, 0, 0.1, 1401.9].asSpec,
				\tone:[300.0, 8000.0, 0, 0.2, 6150.4].asSpec,
				\hh:[0.0, 1, 0, 1, 0.0].asSpec,
				\oh:[0.0, 1, 0, 1, 0.0].asSpec,
				\vol:[0.0, 2.0, 0, 0.01, 0.2].asSpec
			) ) ).add;
		SynthDef(\faustOrgan,
			{ |out=0|
				Out.ar(out,
					FaustOrgan.ar(
						\a1.kr(0.5), \a2.kr(0.5), \a3.kr(0.5), \a4.kr(0.5), \a5.kr(0.5), \a6.kr(0.5), \a8.kr(0.5), \attack.kr(1.0), \drive.kr(0.1), \drivecolour.kr(0.1), \release.kr(1.0), \vibrato.kr(1.0), \freq_0.kr(100.0), \gate_0.kr(0.0), \freq_1.kr(100.0), \gate_1.kr(0.0), \freq_2.kr(100.0), \gate_2.kr(0.0), \freq_3.kr(100.0), \gate_3.kr(0.0), \vol_3.kr(0.5), \volcolour_3.kr(0.1)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\a1:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a2:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a3:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a4:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a5:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a6:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\a8:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\attack:[0.1, 100.0, 0, 0.1, 1.0].asSpec,
				\drive:[0.0, 2.0, 0, 0.01, 0.1].asSpec,
				\drivecolour:[0.0, 1.0, 0, 0.01, 0.1].asSpec,
				\release:[0.1, 1000.0, 0, 0.1, 1.0].asSpec,
				\vibrato:[0.0, 10.0, 0, 0.1, 1.0].asSpec,
				\freq_0:[10.0, 2000.0, 0, 0.1, 100.0].asSpec,
				\gate_0:[0.0, 1.0, 0, 1.0, 0.0].asSpec,
				\freq_1:[10.0, 2000.0, 0, 0.1, 100.0].asSpec,
				\gate_1:[0.0, 1.0, 0, 1.0, 0.0].asSpec,
				\freq_2:[10.0, 2000.0, 0, 0.1, 100.0].asSpec,
				\gate_2:[0.0, 1.0, 0, 1.0, 0.0].asSpec,
				\freq_3:[10.0, 2000.0, 0, 0.1, 100.0].asSpec,
				\gate_3:[0.0, 1.0, 0, 1.0, 0.0].asSpec,
				\vol_3:[0.0, 2.0, 0, 0.01, 0.5].asSpec,
				\volcolour_3:[0.0, 1.0, 0, 0.01, 0.1].asSpec
			) ) ).add;
		SynthDef(\faustStrang,
			{ |out=0|
				Out.ar(out,
					FaustStrang.ar(
						\expos.kr(0.5), \res.kr(1.0), \sign.kr(1.0), \strength.kr(2.0), \freq_0.kr(440.0), \gate_0.kr(0.0), \freq_1.kr(440.0), \gate_1.kr(0.0), \freq_2.kr(440.0), \gate_2.kr(0.0), \freq_3.kr(440.0), \gate_3.kr(0.0), \vol_3.kr(0.7)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\expos:[0.0, 1.0, 0, 0.01, 0.5].asSpec,
				\res:[0.01, 2.0, 0, 0.0001, 1.0].asSpec,
				\sign:[-1.0, 1.0, 0, 2.0, 1.0].asSpec,
				\strength:[0.0, 5.0, 0, 0.1, 2.0].asSpec,
				\freq_0:[50.0, 1000.0, 0, 0.01, 440.0].asSpec,
				\gate_0:[0.0, 1, 0, 1, 0.0].asSpec,
				\freq_1:[50.0, 1000.0, 0, 0.01, 440.0].asSpec,
				\gate_1:[0.0, 1, 0, 1, 0.0].asSpec,
				\freq_2:[50.0, 1000.0, 0, 0.01, 440.0].asSpec,
				\gate_2:[0.0, 1, 0, 1, 0.0].asSpec,
				\freq_3:[50.0, 1000.0, 0, 0.01, 440.0].asSpec,
				\gate_3:[0.0, 1, 0, 1, 0.0].asSpec,
				\vol_3:[0.0, 10.0, 0, 0.01, 0.7].asSpec
			) ) ).add;
		SynthDef(\faustWub,
			{ |out=0|
				Out.ar(out,
					FaustWub.ar(
						\freq.kr(100.0), \gate.kr(0.0), \attack.kr(150.0), \basefreq.kr(0.8), \decay.kr(300.0), \env.kr(20.0), \q.kr(1.2), \release_0.kr(50.0), \sustain_0.kr(0.0), \release_1.kr(1.0), \vol_1.kr(0.2), \portamento_1.kr(0.5)
					)
				)
			}, metadata: (specs:(
				//\controlName:[min, max, warp, step, default, units].asSpec,
				\freq:[10.0, 2000.0, 0, 0.1, 100.0].asSpec,
				\gate:[0.0, 1.0, 0, 1.0, 0.0].asSpec,
				\attack:[0.1, 1000.0, 0, 0.1, 150.0].asSpec,
				\basefreq:[0.0, 10.0, 0, 0.01, 0.8].asSpec,
				\decay:[0.1, 1000.0, 0, 0.1, 300.0].asSpec,
				\env:[0.0, 50.0, 0, 0.01, 20.0].asSpec,
				\q:[0.8, 5.0, 0, 0.001, 1.2].asSpec,
				\release_0:[0.1, 1000.0, 0, 0.1, 50.0].asSpec,
				\sustain_0:[0.0, 1.0, 0, 0.1, 0.0].asSpec,
				\release_1:[0.1, 1000.0, 0, 0.1, 1.0].asSpec,
				\vol_1:[0.0, 5.0, 0, 0.01, 0.2].asSpec,
				\portamento_1:[0.01, 1.0, 0, 0.01, 0.5].asSpec
			) ) ).add;

		context.server.sync;

		snarf = Synth.new(\faustSnarf, [ \out, context.out_b.index], context.xg);
		clack = Synth.new(\faustClack, [ \out, context.out_b.index], context.xg);
		drumbum = Synth.new(\faustDrumbum, [ \out, context.out_b.index], context.xg);
		hatz = Synth.new(\faustHatz, [ \out, context.out_b.index], context.xg);
		organ = Synth.new(\faustOrgan, [ \out, context.out_b.index], context.xg);
		strang = Synth.new(\faustStrang, [ \out, context.out_b.index], context.xg);
		wub = Synth.new(\faustWub, [ \out, context.out_b.index], context.xg);


		// this is how you add "commands",
		// which is how the lua interpreter controls the engine.
		// the format string is analogous to an OSC message format string,
		// and the 'msg' argument contains data.

		~blat = {arg thing,prang;
			thing.set(prang,1);
			SystemClock.sched(0.005,{ thing.set(prang,0) } );
		};


		this.addCommand("sd", "", {|msg|
			~blat.value(snarf,\sd);
		});
		this.addCommand("bd", "", {|msg|
			~blat.value(drumbum,\bd);
		});
		this.addCommand("bl", "", {|msg|
			~blat.value(drumbum,\bl);
		});
		this.addCommand("cp", "", {|msg|
			~blat.value(clack,\cp);
		});
		this.addCommand("hh", "", {|msg|
			~blat.value(hatz,\hh);
		});
		this.addCommand("oh", "", {|msg|
			~blat.value(hatz,\oh);
		});
		this.addCommand("og0", "ff", {|msg|
			organ.set(\gate_0, msg[1]);
			organ.set(\freq_0, msg[2]);
		});
		this.addCommand("og1", "ff", {|msg|
			organ.set(\gate_1, msg[1]);
			organ.set(\freq_1, msg[2]);
		});
		this.addCommand("og2", "ff", {|msg|
			organ.set(\gate_2, msg[1]);
			organ.set(\freq_2, msg[2]);
		});
		this.addCommand("og3", "ff", {|msg|
			organ.set(\gate_3, msg[1]);
			organ.set(\freq_3, msg[2]);
		});
		this.addCommand("str0", "f", {|msg|
			strang.set(\freq_0, msg[1]);
			~blat.value(strang,\gate_0)
		});
		this.addCommand("str1", "f", {|msg|
			strang.set(\freq_1, msg[1]);
			~blat.value(strang,\gate_1)
		});
		this.addCommand("str2", "f", {|msg|
			strang.set(\freq_2, msg[1]);
			~blat.value(strang,\gate_2)
		});
		this.addCommand("str3", "f", {|msg|
			strang.set(\freq_3, msg[1]);
			~blat.value(strang,\gate_3)
		});
		this.addCommand("wb", "ff", {|msg|
			wub.set(\gate,msg[1]);
			wub.set(\freq, msg[2]);
		});

	}

	free {
		// here you should free resources (e.g. Synths, Buffers &c)
		// and stop processes (e.g. Routines, Tasks &c)
		snarf.free;
	}

}
