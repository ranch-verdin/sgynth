cp faustglue.h $1.c
faust -lang c -vec -vs 256 $1.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> $1.c
gcc -O3 -c -fPIC $1.c -o $1.o
gcc $1.o -shared -o $1.so


gcc -g main.c faustglue.c -llo -ljack -ldl
