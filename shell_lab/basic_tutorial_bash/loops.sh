#!/bin/bash
# while loops
n=1
while [ $n -le 10 ]  # can be use (( condition )) also.
 do 
 echo -n ""  $n""  # can be use ""single also.
 n=$(( n+1 )) # use of two parenthesis is  required. also can be used as (( ++n ))simply in this line.
 sleep 1 # it gives pos for that much second which you given after whole output gives command line .
gnome-terminal &  # to open that of terminal as times as loops works.
xterm &    # it is also a terminal of ubantu.
 done

