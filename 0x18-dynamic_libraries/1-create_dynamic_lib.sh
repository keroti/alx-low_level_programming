#!/bin/bash
gcc -c -fPIC *.c
gcc *.o -shared -o liabll.so
