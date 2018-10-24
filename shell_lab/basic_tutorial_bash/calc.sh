# !/bin/bash
read a b
echo $(( a + b )) # if not want want to use expr and want  (( )).
echo $(( a - b ))
echo $(( a * b ))
echo $(expr $a + $b )
echo $(expr $a - $b )
echo $(expr $a \* $b ) # nnote  keep mind  expr unable to understand * as wild char so use  \* 
