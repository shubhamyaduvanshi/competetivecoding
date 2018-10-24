#!/bin/bash
# select loop. break and continue in looping application.
for (( i=1 ; i<=10 ; i++ ))
do
 if [ $i -gt 5 ]
 then
 break
 fi
 echo "$i"
done
for (( i=1 ; i<=10 ; i++ ))
do
 if [ $i -eq 3 -o $i -eq 6 ]
 then
 continue
 fi
 echo "$i"
done
select name in shubham ashish amar riya urmila
do
    case $name in 
    shubham )
    echo "shubham selected" ;;
    ashish )
    echo "ashish selected " ;;
    riya )
    echo "riya selected " ;;
    amar )
    echo "amar selected " ;;  
    *)
    echo "error please provide the no bw 1 to 4"
    esac
done

