#!/bin/bash
gcc _wall -pedantic -werror -wextra -c *.c
ar rcs liball.a *.o
ranlib liball.a
