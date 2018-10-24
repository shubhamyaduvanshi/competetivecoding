#!/bin/bash
awk '$4 ~/shubham/' 8.txt
echo "also look"
awk '$4=="shubham"' 8.txt
