#!/bin/bash

str="hello, world"
src="a/b/c"
dst="x/y/z"
file="a/b/c/1.txt"

echo $src, $dst, $file
echo ${file/$src/$dst}

echo str
echo ${str//o/a}

echo `pwd`
mkdir `pwd`/jk
