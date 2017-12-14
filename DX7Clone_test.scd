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

~drumNoteOn = {arg vel, note;
	var drumidx;
	drumidx = note - 27;
	// (("drum"+vel)+note).postln;
	if((drumidx >= 0) && (drumidx < ~drumnotes.size), {
		~dx7.note(note+16, ~drumnotes[drumidx][0], vel, ~drumnotes[drumidx][1]);
		SystemClock.sched(~drumnotes[drumidx][2]*0.001,{
			if(~noteOnLock,
				{"yikes, trying to noteoff in the middle of a noteon".postln;});
			~dx7.note(note+16, ~drumnotes[drumidx][0], 0);
		});
	});
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
