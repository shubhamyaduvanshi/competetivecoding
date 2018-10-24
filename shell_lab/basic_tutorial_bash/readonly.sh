#!/bin/bash
# read only variable can not be overwrite.
val=50
readonly val
val=50
echo "the value in val => $val"
hello()
{
echo "hello world"
}
readonly -f hello #  functions are made readonly by -f option. 
hello()
{
echo "hello world again"
}
readonly  # alone it indicates all variable of bash by default.which are read only.
readonly -p # it also give above result for all readonly variable.
readonly -f #it give sfunction which are readonly if they are present.
