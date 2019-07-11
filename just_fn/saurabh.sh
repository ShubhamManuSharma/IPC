#!/bin/bash

file_ids="/usr/local/etc/suricata/classification.config"
ret=`cat classification.config | grep "$1"`
if [ "$ret" && $2 = "comment" ];
then
        echo "inside "
#        flag=`echo $ret|awk '{print match($0,"#")}'`;
#	echo "$flag"

#        if [ "$flag" -gt 0 ] ;
#        then
#                new=`echo "$ret" | cut -d"#" -f2`
#		echo $new
#                sed -i 's,'"$ret"','"$new"',' classification.config
#        elif [ $flag = 1 ]
#	then
#                echo "Already Enabled"
#        fi
fi



#ret=`cat suricata.yaml | grep "$1"`
#if [ "$ret" ];
#then
#        echo "ret : $ret"
#        flag=`echo $ret|awk '{print match($0,"#")}'`;
#        if [ "$flag" -gt 0 ] ;
#        then
#                echo "Already Disabled"
#        else
#                new="#$ret"
#                sed -i 's,'"$ret"','"$new"',' suricata.yaml
#        fi
#fi

