cp faustglue.h $1.c
faust -lang c $1.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> $1.c
gcc -c -fPIC $1.c -o $1.o
gcc $1.o -shared -o $1.so


gcc -g main.c faustglue.c -llo -ljack -ldl
