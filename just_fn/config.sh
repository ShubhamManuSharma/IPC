#!/bin/bash
A=`grep -nr $1 classification.config`
HASH=`grep -nr $1 classification.config | grep -o "#"`
B=`echo $A | cut -d':' -f1`
if [ $2 = comment ]
then
	if [ $HASH = "#" ]
	then
	echo "HASH"
	else 
	sed -i  "`echo $B`s,^,#," classification.config
	fi
else
	if [ $HASH = "#" ]
	then
	echo "inside"
	sed -i  "`echo $B`s,#,," classification.config
	fi
fi
