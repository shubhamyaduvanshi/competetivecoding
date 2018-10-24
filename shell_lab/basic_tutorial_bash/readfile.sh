#!/bin/bash
while read p
do
echo $p
done <readfile.sh  #input redirection inside while loop. give desired name of files.
cat hello.sh | while read p #read file content in 1 variable and then print it.
do
echo $p
done
# IFS =internal fiels separator of bash system is used . like in c as typecasting.because above read file may crate some problem if file have some special character as content of file.
 while IFS= read -r line # actually space is assigned to IFS  so space is compulsary keep in mind it .
do
echo $line
done <loop.sh
while IFS=' 'read -r line
do
echo $line
done <loop.sh
# read file of etc folder. type as ls /etc 
# for look it as type cat /etc/host.conf# 
# now also you can also give file path in after done as /etc/host.conf.
#                  thank you.

