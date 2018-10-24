#!/bin/bash
# note $$ is used to print pid of script of itselfs.
file=home/shubham/Desktop/tutorial_bash/file.txt
trap "rm -f  $file  &&  echo "file deleted" ; exit "  0 2 15  # ; is used to connect exit and a other command.
trap  echo "exit signal is detected" SIGINT # in place of 2 u can its signakl vaklue as for sigint put 2.
echo " pid is :$$"
while (( count < 10 ))
do 
sleep 10 
(( count ++ ))
echo $count
done 
exit 0
# ctrl +c is calles interrupt signal called as sig int =2 signal also.sig end
# ctrl +z is also used  to stopped script it is called suspend signal sig ts tp in signal form it is called. it is also intterruptsignal to stop script.
# it can also used by (kill -9  pidno) then script is also stopped.
# trap commands.
#ctrl +g=sigtstp [sigkill =9] are signals. prefer man 7 signal if want to read more.

trap  echo "exit command is detected" 0 # o as success signal 
echo "hello world"
exit 0  # trap actually do as when a signal is recieved then after trap written command are exicuted.

#  except :  trap can not catch sigkill or sigstop .
# semicolon ; is used to combine two commands.
# to remove trap is used as trap - signalno.
