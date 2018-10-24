#!/bin/bash
awk -F ":" 'NR!=1 {print $1}' 9.txt
