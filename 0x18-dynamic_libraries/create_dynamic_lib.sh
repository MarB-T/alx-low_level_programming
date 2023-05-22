#!/bin/bash

filename="$1"
libname="${filename%.c}.so"

gcc -c -Wall -Werror -fpic "$filename"
gcc -shared -o "$libname" *.o

echo "Dynamic library $libname generated."

