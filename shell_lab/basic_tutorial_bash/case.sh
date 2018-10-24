#!/bin/bash
echo -e "Enter some character: \c"
read value
case "$value" in
[a-z]  )
echo "user entered  '"$value"' a to z" ;;
[A-Z]  )
echo "user entered '"$value"' A to Z" ;;
[0-9]  )
echo "user entered '"$value"' 0 to 9" ;;
? ) # for one character any .
echo "user entered '$value' special character" ;;
* ) # (*)means a wild cards which matches any text. 
echo "unknown input" ;;
esac
  #  note that it will give wrong output with AA... # #it will open under lowercase.
# to avoid it type in terminal under that directory  
#   as LANG=C then enter and type command to run # # #then. 
