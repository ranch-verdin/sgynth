faustfile=drumbum


cp faustglue.h $faustfile.c
faust -lang c -vec -vs 256 $faustfile.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> $faustfile.c
gcc -Wall -c -fPIC $faustfile.c -o $faustfile.o
gcc -Wall -c -fPIC -lmath engine_faustExample.c -o engine_faustExample.o
gcc -Wall -c -g -fPIC faustglue.c -llo -ljack -ldl -o faustglue.o
gcc engine_faustExample.o faustglue.o $faustfile.o -shared -o $faustfile.so

gcc -Wall -c -fPIC -lmath engine_example.c -o engine_example.o
gcc -shared engine_example.o -o engine_example.so

gcc -Wall -g engine_main.c engineglue.c -llo -ljack -ldl
