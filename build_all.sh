rm `find . -name "*.o"` `find . -name "*.so"` engine &>/dev/null

gcc -I include -O3 -Wall -c -fPIC -lmath c_src/engine_faustExample.c -o c_src/engine_faustExample.o
gcc -I include -O3 -Wall -c -fPIC c_src/faustglue.c -llo -ljack -ldl -o c_src/faustglue.o

faust --help &>/dev/null
have_faust=$?
for faustfile in `ls faust_src/*.dsp | sed -e s/.dsp//g`; do
    if [ $have_faust -eq 0 ]; then
	echo faust is installed, regenerating c code for $faustfile
	echo "#include \"faustglue.h\"" > $faustfile.c
	echo "#define min fmin" >> $faustfile.c
	echo "#define max fmax" >> $faustfile.c
	# faust -lang c  -vec -vs 256
	faust -lang c $faustfile.dsp >> $faustfile.c
	fi
    echo building $faustfile
    gcc -I include -O3 -Wall -c -fPIC $faustfile.c -o $faustfile.o
    gcc -I include c_src/engine_faustExample.o c_src/faustglue.o $faustfile.o -shared -o $faustfile.so
    mv $faustfile.so ./
done

gcc -I include -Wall -c -fPIC -lmath engine_example/engine_example.c -o engine_example/engine_example.o
gcc -shared engine_example/engine_example.o -o engine_example.so

gcc -I include -Wall -g c_src/engine_main.c c_src/engineglue.c -llo -ljack -ldl -o engine
