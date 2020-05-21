#!/bin/bash

gcc -c libft-test-bonus.c
gcc libft-test-bonus.o -L. -lft
./a.out
