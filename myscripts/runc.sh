#!/bin/bash

binary_file_name=$1
file_type=".c"
file_name=$binary_file_name$file_type

compile_type=$2

if [ "$compile_type" = "lm" ];then 
    gcc -o $binary_file_name $file_name -lm
    ./$binary_file_name
else 
    gcc -o $binary_file_name $file_name
    ./$binary_file_name
fi

