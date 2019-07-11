#!/bin/bash
name=`echo $1 | cut -d "." -f1` 
rm build/$name
gcc -o /home/shubham/fun/threads/build/$name $1 -lpthread
./build/$name
