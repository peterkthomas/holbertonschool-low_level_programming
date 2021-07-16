#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
gcc *.o -shared -o liball.so
