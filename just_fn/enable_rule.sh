#!/bin/bash

file_ids="/usr/local/etc/suricata/suricata.yaml"
ret=`cat suricata.yaml | grep "$1"` 
if [ "$ret" ];
then
	echo "ret : $ret"
	flag=`echo $ret|awk '{print match($0,"#")}'`;
	if [ "$flag" -gt 0 ] ;
	then
		new=`echo "$ret" | cut -d"#" -f2`
		sed -i 's,'"$ret"','"$new"',' suricata.yaml
	else
		echo "Already Enabled"
	fi
fi
