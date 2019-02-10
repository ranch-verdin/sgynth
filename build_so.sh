faustfile=drumbum


gcc -Wall -c -fPIC -lmath engine_faustExample.c -o engine_faustExample.o
cp faustglue.h $faustfile.c
faust -lang c -vec -vs 256 $faustfile.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> $faustfile.c
gcc -O3 -c -fPIC $faustfile.c -o $faustfile.o
gcc engine_faustExample.o $faustfile.o -shared -o $faustfile.so

gcc -Wall -c -fPIC -lmath engine_example.c -o engine_example.o
gcc -shared engine_example.o -o engine_example.so

# gcc -g main.c faustglue.c -llo -ljack -ldl
gcc -Wall -c -g faustglue.c -llo -ljack -ldl -o faustglue.o
gcc -Wall -g engine_main.c engineglue.c -llo -ljack -ldl
