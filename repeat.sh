#!/bin/bash

versions="c90 c99 c11 c18 c2x gnu90 gnu99 gnu11 gnu2x"

for ver in $versions ; do
  gcc test.c -o test -std=$ver; ./test > $ver.result
done
