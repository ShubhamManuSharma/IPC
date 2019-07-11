#!/bin/bash

file_ids="/usr/local/etc/suricata/suricata.yaml"
ret=`cat suricata.yaml | grep "$1"` 
if [ "$ret" ];
then
	echo "ret : $ret"
	flag=`echo $ret|awk '{print match($0,"#")}'`;
	if [ "$flag" -gt 0 ] ;
	then
		echo "Already Disabled"
	else
		new="#$ret"
		sed -i 's,'"$ret"','"$new"',' suricata.yaml
	fi
fi
