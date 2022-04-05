#!/bin/bash


# Get file name as input and print the 
# number of lines in every file in the folder


if [[ $# -ne 1 ]]; then
  echo "Usage error: <dirname>"
  exit 1
fi

for filename in $1/*; do
  if [[ -f $filename ]]; then
    echo -n -e "$filename\t num of lines = "
    cat $filename | wc -l
  fi
done