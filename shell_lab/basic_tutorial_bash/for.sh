#!/bin/bash
# for loop.
for var in 1  2 3 4 5   # for smaLL range.here u can also give as command also.
do 
echo $var
done
for var in {1..10}  #for large range .
do  
echo  -n "" $var" "
done
for var in {0..10..2} # for large range as well as  some increment and decrement particularly.
do
echo  -n "" $var "" 
done
echo "${BASH_VERSION}"
# more simple is used for loop as in c but use two parenthesis is compulsary.
for command in ls pwd date 
do
 echo ".................$command......................."     
 $command  
done
for item in *
do
  if [ -f $item ]
  then
  echo $item
  fi  
done
