#!/bin/bash

gcc -c libft-test-part1.c
gcc libft-test-part1.o -L. -lft
./a.out
