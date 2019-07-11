#!/bin/bash

while true; do
  inotifywait -r -e modify,attrib,close_write,move,create,delete /home/shubham/DEV_git/
  rsync -avz -e "ssh -i /root/.ssh/id_rsa_rsync -o StrictHostKeyChecking=no" /home/shubham/DEV_git/ shubham.sharma2@jerry.inventum.in:/home/shubham.sharma2/git_work/
done
