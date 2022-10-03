#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc *.o -shared -o liabll.so
