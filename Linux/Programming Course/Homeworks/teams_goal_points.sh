#!/bin/bash


# Get file with matches data in him 
# and print how much points get every team


if [[ $# -ne 1 ]] ; then
  echo -e "\nUsage: $0 <matches-game>\n"
  exit
fi

matches_file=$1
teams=""
for line in `cut -f1 "$matches_file"`; do
  team=$line
  if [[ `echo $teams | grep $team | wc -l` -eq 0 ]]; then
    teams="${teams} $team"
    n=0
    for line in `cut -f1,3 "$matches_file" |  grep "$team"` ; do
      n=$((n+$line))
    done
    
    for line in `cut -f2,4 "$matches_file" |  grep "$team"` ; do
      n=$((n+$line))
    done
    
    echo "$team scored $n goals"
  fi
done
