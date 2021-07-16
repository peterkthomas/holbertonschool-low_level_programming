#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rc libholberton.a *.o
ranlib libholberton.a
