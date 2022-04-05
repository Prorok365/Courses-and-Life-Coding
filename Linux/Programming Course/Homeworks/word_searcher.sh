#!/bin/bash


# Get name of existent folder and word for search.
# Check all files in the folder and print for every file 
# the number of lines where appeared search word
 

if [[ $# -ne 2 ]] ; then
  echo -e "\nUsage: $0 <dir_name> <word_for-search>\n"
  exit
fi

for filename in $1/*.txt; do
  echo -n -e "$filename\t"
  grep $2 $filename | wc -l 
done