#!/bin/sh
mkdir build
gcc  main.c  -o build/main.o  -c  -std=gnu17  -O0  -g
g++  cpptest.cpp  -o build/cpptest.o  -c  -std=gnu++20  -O0  -g
as   hello.S -o build/hello.o  -c  -g


