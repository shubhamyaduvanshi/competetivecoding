#!/bin/bash 
# note sign of append a\
sed  '/word/ { x++ } if( x==2 ) {a\ shubham kumar yadav\son of sardar amarnath yadav\son of god mahadev yadav} ' 2.txt
#look insertion.............
sed  '/word/ =' 2.txt
