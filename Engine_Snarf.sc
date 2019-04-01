Engine_Snarf : CroneEngine {

	var amp=0;
	var <snarf;

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

		context.server.sync;

		snarf = Synth.new(\faustSnarf, [ \out, context.out_b.index], context.xg);

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
		this.addCommand("ssd", "f", {|msg|
			~blat.value(snarf,\sd);
		});
	}

	free {
		// here you should free resources (e.g. Synths, Buffers &c)
		// and stop processes (e.g. Routines, Tasks &c)
		snarf.free;
	}

}
