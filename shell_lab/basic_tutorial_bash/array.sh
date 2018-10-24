#!/bin/bash
os=('ubantu' 'windows' 'kali')
echo "${os[@]}" # to print element of array.
os[3]='mac' #add element in array.
echo "${os[1]}"  # by default indexs of arrys are also defined from 0 in linux.
echo "${!os[@]}" # to print all indexes of array.
echo "${#os[@]}" #to print length of array.os 
os[0]='boss'  # replae element in array by prev index.
echo "${os[@]}"
os[3]='mac' # similarly delete thet element and replace.
echo "${os[@]}"
os[6]='android'
echo "${os[@]}"

string=ddsfgahjkfvdbghfjdk #whole value of string is considered  as on 0th index.
echo "${string[@]}" # string as array in bash.
echo "${string[0]}"
echo "${string[1]}"
echo "${#string[@]}"
# means in bash char and int both type of arrays are treated as same if gap is not given in string it willl be considerd as a single value at first index of string array.
