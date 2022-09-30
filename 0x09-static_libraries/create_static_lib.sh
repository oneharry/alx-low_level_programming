#!bin/bash -e
gcc -c *.c
ar cr liball.a *.0
ranlib liball.a
