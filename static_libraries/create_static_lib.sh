#!@/usr/bin/bash env
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
