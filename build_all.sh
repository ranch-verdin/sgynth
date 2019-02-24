rm *.so *.o engine &>/dev/null

gcc -O3 -Wall -c -fPIC -lmath engine_faustExample.c -o engine_faustExample.o
gcc -O3 -Wall -c -fPIC faustglue.c -llo -ljack -ldl -o faustglue.o

faust --help &>/dev/null
have_faust=$?
for faustfile in snarf drumbum hatz clack string organ sgynth; do
    if [ $have_faust -eq 0 ]; then
	echo faust is installed, regenerating c code for $faustfile
	echo "#include \"faustglue.h\"" > $faustfile.c
	echo "#define min fmin" >> $faustfile.c
	echo "#define max fmax" >> $faustfile.c
	# faust -lang c  -vec -vs 256
	faust -lang c $faustfile.dsp >> $faustfile.c
	fi
    gcc -O3 -Wall -c -fPIC $faustfile.c -o $faustfile.o
    gcc engine_faustExample.o faustglue.o $faustfile.o -shared -o $faustfile.so
done

gcc -Wall -c -fPIC -lmath engine_example.c -o engine_example.o
gcc -shared engine_example.o -o engine_example.so

gcc -Wall -g engine_main.c engineglue.c -llo -ljack -ldl -o engine
