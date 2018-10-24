#!/bin/bash
# all variables are by default globally in bash but if local keyword is used before a variable then only it will treats as a local variable.
function print()
{
local name=$1
echo " the name is: $name"
}
name="tom"
echo "the name is :$name :Before a function calling is used."
print shubham 
echo " the name is :$name :after calling of a function is used."
