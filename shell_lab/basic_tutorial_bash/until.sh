#!/bin/bash
# until loops
# if commans are wrong then only until  loops are exicuted. while 'while' loops are exicuted if commands are    right.
n=1
until [ $n -gt 10 ]
do 
echo -n " $n "    # -n option is for to print output in same line.
(( n++ ))        # here (( )) is compulsary .one ( ) can # not work note it in mind. 
done  
m=2
until  (( $m  >  10 )) # if use (( )) then also you can not use gt now it is need of use of symbol of it also as >  ...  with square bracket you can  use only gt ge and so on.
do
echo -n " $m "
(( m++ ))
done
