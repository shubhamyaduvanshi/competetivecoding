#!/bin/bash
awk  'BEGIN{FS=":";OFS="|"} NR!=1 {print $1,$2;}' 9.txt
cat 9.txt | awk -F ":" '!/person/ {print $1}' | sort | uniq
