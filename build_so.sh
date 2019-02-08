cp faustglue.h drumbum.c
faust -lang c drumbum.dsp | sed -e s/"min("/"fmin("/g -e s/"max("/"fmax("/g>> drumbum.c
gcc -c -fPIC drumbum.c -o drumbum.o
gcc drumbum.o -shared -o drumbum.so


gcc -g main.c faustglue.c -llo -ljack -ldl
