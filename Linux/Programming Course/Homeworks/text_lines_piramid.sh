#!/bin/bash

# Get input file and folder name.
# Create folder and files in it named n.txt.
# While the n present number from 1 to n lines in input file.
# In every n.txt put n first line from input file.

if [[ $# -ne 2 ]] ; then
  echo -e "\nUsage: $0 <file> <dir_name>\n"
  exit
fi

mkdir $2
for i in $(seq 1 `wc -l $1 | cut -f1 -d " "`);do
  head -n$i $1 > "$2/$i.txt"
done