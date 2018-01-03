s = Server.default;
s.options.memSize = 128 * 1024;

s.boot;


~presets = [
	10002,
	1808, //rich FM bass
	759, // frog bass
	2219, // squelch
	1840, // warm rhodes
	2025, // soft hammond
	2018, // harpsichord
	2021, // pipe organ
	2026, // spooky church organ
	1823, // cheez-ee sax
	2085, // jester's piccolo
	1920, // mario bleep
	2043, // haunted house
	2148, // cats in space
	2227, //  metal whack
	1753, // crazy cries
];

~drumnotes = [
	[27, 2162, 50], // High Q (GM2)
	[28, 2162, 50], // Slap (GM2)
	[29, 2162, 50], // Scratch Push (GM2)
	[30, 2162, 50], // Scratch Pull (GM2)
	[31, 2162, 50], // Sticks (GM2)
	[32, 2162, 50], // Square Click (GM2)
	[33, 2162, 50], // Metronome Click (GM2)
	[48, 2167, 50], // Metronome Bell (GM2)
	[28, 2162, 50], // Bass Drum 2
	[35, 842, 20], // Bass Drum 1
	[44, 1759, 50], // Side Stick
	[45, 1692, 50], // Snare Drum 1
	[39, 922, 50], // Hand Clap
	[45, 1692, 50], // Snare Drum 2
	[41, 2162, 50], // Low Tom 2
	[42, 900, 20], // Closed Hi-hat
	[43, 2162, 50], // Low Tom 1
	[42, 900, 10], // Pedal Hi-hat
	[45, 2162, 50], // Mid Tom 2
	[42, 900, 50], // Open Hi-hat
	[47, 2162, 50], // Mid Tom 1
	[48, 2162, 50], // High Tom 2
	[49, 2174,10], // Crash Cymbal 1
	[50, 2162, 50], // High Tom 1
	[51, 2162, 50], // Ride Cymbal 1
	[52, 1737, 50], // Chinese Cymbal
	[53, 2162, 50], // Ride Bell
	[54, 2162, 50], // Tambourine
	[55, 2162, 50], // Splash Cymbal
	[56, 2162, 50], // Cowbell
	[57, 2162, 50], // Crash Cymbal 2
	[58, 2162, 50], // Vibra Slap
	[59, 2162, 50], // Ride Cymbal 2
	[60, 2162, 50], // High Bongo
	[61, 2162, 50], // Low Bongo
	[62, 2162, 50], // Mute High Conga
	[63, 2162, 50], // Open High Conga
	[64, 2162, 50], // Low Conga
	[65, 2162, 50], // High Timbale
	[66, 2162, 50], // Low Timbale
	[67, 2162, 50], // High Agogo
	[68, 2162, 50], // Low Agogo
	[69, 2162, 50], // Cabasa
	[70, 2162, 50], // Maracas
	[71, 2166, 50], // Short Whistle
	[72, 2166,10], // Long Whistle
	[73, 2162, 50], // Short Guiro
	[74, 2162, 50], // Long Guiro
	[75, 2162, 50], // Claves
	[76, 2162, 50], // High Wood Block
	[77, 2162, 50], // Low Wood Block
	[78, 2162, 50], // Mute Cuica
	[79, 2162, 50], // Open Cuica
	[80, 2162, 50], // Mute Triangle
	[81, 2162, 50], // Open Triangle
];

~dx7;
~noteOff = Array.newClear(15);
~noteOn = Array.newClear(15);

(
SynthDef(\SOSkick,
	{ arg out = 0, freq = 50, mod_freq = 5, mod_index = 5, sustain = 0.4, amp = 0.8,beater_noise_level = 0.025, beater_len = 0.01;
	var pitch_contour, drum_osc, drum_lpf, drum_env;
	var beater_source, beater_hpf, beater_lpf, lpf_cutoff_contour, beater_env;
	var kick_mix;
	pitch_contour = Line.kr(freq*2, freq, 0.02);
	drum_osc = PMOsc.ar(	pitch_contour,
				mod_freq,
				mod_index/1.3,
				mul: 1,
				add: 0);
	drum_lpf = LPF.ar(in: drum_osc, freq: 1000, mul: 1, add: 0);
	drum_env = drum_lpf * EnvGen.ar(Env.perc(0.005, sustain), 1.0, doneAction: 2);
	beater_source = WhiteNoise.ar(beater_noise_level);
	beater_hpf = HPF.ar(in: beater_source, freq: 500, mul: 1, add: 0);
	lpf_cutoff_contour = Line.kr(6000, 500, 0.03);
	beater_lpf = LPF.ar(in: beater_hpf, freq: lpf_cutoff_contour, mul: 1, add: 0);
	beater_env = beater_lpf * EnvGen.ar(Env.perc, 10.0, doneAction: 2);
	kick_mix = Mix.new([drum_env, beater_env]) * 0.2 * amp;
	Out.ar(out, [kick_mix, kick_mix])
	}
	).add
);
(
SynthDef(\SOSsnare,
	{arg out = 0, sustain = 0.1, drum_mode_level = 0.25,
	snare_level = 40, snare_tightness = 1000,
	freq = 405, amp = 0.8;
	var drum_mode_sin_1, drum_mode_sin_2, drum_mode_pmosc, drum_mode_mix, drum_mode_env;
	var snare_noise, snare_brf_1, snare_brf_2, snare_brf_3, snare_brf_4, snare_reson;
	var snare_env;
	var snare_drum_mix;

	drum_mode_env = EnvGen.ar(Env.perc(0.005, sustain), 1.0, doneAction: 2);
	drum_mode_sin_1 = SinOsc.ar(freq*0.53, 0, drum_mode_env * 0.5);
	drum_mode_sin_2 = SinOsc.ar(freq, 0, drum_mode_env * 0.5);
	drum_mode_pmosc = PMOsc.ar(	Saw.ar(freq*0.85),
					184,
					0.5/1.3,
					mul: drum_mode_env*5,
					add: 0);
	drum_mode_mix = Mix.new([drum_mode_sin_1, drum_mode_sin_2, drum_mode_pmosc]) * drum_mode_level;

// choose either noise source below
//	snare_noise = Crackle.ar(2.01, 1);
	snare_noise = LFNoise0.ar(20000, 0.1);
	snare_env = EnvGen.ar(Env.perc(0.005, sustain), 1.0, doneAction: 2);
	snare_brf_1 = BRF.ar(in: snare_noise, freq: 8000, mul: 0.5, rq: 0.1);
	snare_brf_2 = BRF.ar(in: snare_brf_1, freq: 5000, mul: 0.5, rq: 0.1);
	snare_brf_3 = BRF.ar(in: snare_brf_2, freq: 3600, mul: 0.5, rq: 0.1);
	snare_brf_4 = BRF.ar(in: snare_brf_3, freq: 2000, mul: snare_env, rq: 0.0001);
	snare_reson = Resonz.ar(snare_brf_4, snare_tightness, mul: snare_level) ;
	snare_drum_mix = Mix.new([drum_mode_mix, snare_reson]) * 1.0 * amp;
	Out.ar(out, [snare_drum_mix, snare_drum_mix])
	}
).add
);
(
SynthDef(\SOShats,
	{arg out = 0, freq = 6000, sustain = 0.1, amp = 0.8;
	var root_cymbal, root_cymbal_square, root_cymbal_pmosc;
	var initial_bpf_contour, initial_bpf, initial_env;
	var body_hpf, body_env;
	var cymbal_mix;
	
	root_cymbal_square = Pulse.ar(freq, 0.5, mul: 1);
	root_cymbal_pmosc = PMOsc.ar(root_cymbal_square,
					[freq*1.34, freq*2.405, freq*3.09, freq*1.309],
					[310/1.3, 26/0.5, 11/3.4, 0.72772],
					mul: 1,
					add: 0);
	root_cymbal = Mix.new(root_cymbal_pmosc);
	initial_bpf_contour = Line.kr(15000, 9000, 0.1);
	initial_env = EnvGen.ar(Env.perc(0.005, 0.1), 1.0);
	initial_bpf = BPF.ar(root_cymbal, initial_bpf_contour, mul:initial_env);
	body_env = EnvGen.ar(Env.perc(0.005, sustain, 1, -2), 1.0, doneAction: 2);
	body_hpf = HPF.ar(in: root_cymbal, freq: Line.kr(9000, 12000, sustain),mul: body_env, add: 0);
	cymbal_mix = Mix.new([initial_bpf, body_hpf]) * amp * 0.2;
	Out.ar(out, [cymbal_mix, cymbal_mix])
	}).add
);
(
SynthDef(\SOStom,
	{arg out = 0, sustain = 0.4, drum_mode_level = 0.25,
	freq = 90, drum_timbre = 1.0, amp = 0.2;
	var drum_mode_sin_1, drum_mode_sin_2, drum_mode_pmosc, drum_mode_mix, drum_mode_env;
	var stick_noise, stick_env;
	var drum_reson, tom_mix;

	drum_mode_env = EnvGen.ar(Env.perc(0.005, sustain), 1.0, doneAction: 2);
	drum_mode_sin_1 = SinOsc.ar(freq*0.8, 0, drum_mode_env * 0.5);
	drum_mode_sin_2 = SinOsc.ar(freq, 0, drum_mode_env * 0.5);
	drum_mode_pmosc = PMOsc.ar(	Saw.ar(freq*0.9),
								freq*0.85,
								drum_timbre/1.3,
								mul: drum_mode_env*5,
								add: 0);
	drum_mode_mix = Mix.new([drum_mode_sin_1, drum_mode_sin_2, drum_mode_pmosc]) * drum_mode_level;
	stick_noise = Crackle.ar(2.01, 1);
	stick_env = EnvGen.ar(Env.perc(0.005, 0.01), 1.0) * 3;
	tom_mix = Mix.new([drum_mode_mix, stick_env]) * 0.5 * amp;
	Out.ar(out, [tom_mix, tom_mix])
	}
).add
);
~drumNoteOn = {arg vel, note;
	var drumidx;
	drumidx = note - 27;
	// (("drum"+vel)+note).postln;
	if((drumidx == 8), {
		Synth(\SOSkick, ["sustain",0.3, "freq", 50, "beater_len", 0.1, "beater_noise_level", 0.01]);
	});
	if((drumidx == 9), {
		Synth(\SOSsnare)
	});
	if((drumidx == 10), {
		Synth(\SOShats);
	});
	if((drumidx == 11), {
		Synth(\SOStom);
	});
	if((drumidx >= 12) && (drumidx < ~drumnotes.size), {
		~dx7.note(note+16, ~drumnotes[drumidx][0], vel, ~drumnotes[drumidx][1]);
		SystemClock.sched(~drumnotes[drumidx][2]*0.001,{
			if(~noteOnLock,
				{"yikes, trying to noteoff in the middle of a noteon".postln;});
			~dx7.note(note+16, ~drumnotes[drumidx][0], 0);
		});
	});
	// if((drumidx >= 0) && (drumidx < ~drumnotes.size), {
	// 	~dx7.note(note+16, ~drumnotes[drumidx][0], vel, ~drumnotes[drumidx][1]);
	// 	SystemClock.sched(~drumnotes[drumidx][2]*0.001,{
	// 		if(~noteOnLock,
	// 			{"yikes, trying to noteoff in the middle of a noteon".postln;});
	// 		~dx7.note(note+16, ~drumnotes[drumidx][0], 0);
	// 	});
	// });
};
~otherNoteOn = {arg vel, note, chan;
	~dx7.note(chan, note, vel, ~presets[chan]);
};

~otherNoteOff = {arg vel, note, chan;
	~dx7.note(chan, note, 0);
};

~noteOnLock = false;

~myDX7NoteOn = {arg vel, note, chan;
	if(~noteOnLock,
		{"zoinks, simultaneous noteons, bailing!".postln;},
		{~noteOnLock = true;
			if(chan == 0,
				{~drumNoteOn.value(vel, note);},
				{~otherNoteOn.value(vel, note, chan);});
			~noteOnLock = false;
		});
};

~myDX7NoteOff = {arg vel, note, chan;
	if(~noteOnLock,
		{"zoinks, simultaneous noteoffs, bailing!".postln;},
		{~noteOnLock = true;
		if(chan != 0,
			{~otherNoteOff.value(vel, note, chan);});
			~noteOnLock = false;
		});
};

~setupChans = Routine {
	MIDIIn.connect(0,0);
	~dx7 = DX7Clone.new(s);
	~dx7.noteFreeTimeout(10);
	MIDIdef.noteOn(\DX7On, ~myDX7NoteOn);
	MIDIdef.noteOff(\DX7Off, ~myDX7NoteOff);
};

s.waitForBoot { ~setupChans.play; };
