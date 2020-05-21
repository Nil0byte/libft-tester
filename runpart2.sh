#!/bin/bash

gcc -c libft-test-part2.c
gcc libft-test-part2.o -L. -lft
./a.out
