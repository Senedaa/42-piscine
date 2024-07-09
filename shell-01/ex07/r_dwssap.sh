#!/bin/sh

cat /etc/passwd | grep -v '^#' | sed -n '1d;p;n' | cut -f 1 -d ':'| rev | sort -r | awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2 'NR >= FT_LINE1 && NR<=FT_LINE2 {print}' | tr '\n' ',' |sed 's/,/, /g' |sed 's/, $/./' | tr -d '\n'


