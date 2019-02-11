for faustfile in snarf drumbum hatz clack;
do
    # faust -lang c  -vec -vs 256
    faust
    have_faust = $?
    if [ $OUT -eq 0 ];then
	cp faustglue.h $faustfile.c
	faust -lang c $faustfile.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> $faustfile.c
    fi
done
gcc -O3 -Wall -c -fPIC $faustfile.c -o $faustfile.o
gcc -O3 -Wall -c -fPIC -lmath engine_faustExample.c -o engine_faustExample.o
gcc -O3 -Wall -c -fPIC faustglue.c -llo -ljack -ldl -o faustglue.o
gcc engine_faustExample.o faustglue.o $faustfile.o -shared -o $faustfile.so

gcc -Wall -c -fPIC -lmath engine_example.c -o engine_example.o
gcc -shared engine_example.o -o engine_example.so

gcc -Wall -g engine_main.c engineglue.c -llo -ljack -ldl
