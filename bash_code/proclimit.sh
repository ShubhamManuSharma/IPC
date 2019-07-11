#!/bin/bash

new=`ps -ax | grep a.out`
val=`echo $new | cut -d ' ' -f1`
echo $val

prlimit --pid $val
prlimit --pid $val --rss --nofile=4096:4096
prlimit --pid $val
