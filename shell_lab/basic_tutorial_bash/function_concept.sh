#!/bin/bash
# write a shell function to check a file exists or not.
usage()
{
echo "you need to give up an argument"
echo "usage : $0 file_name"
}
is_file_exists()
{
local file="$1" # $1 here is first argument provided to function .
[[ -f "$file" ]] && return 0 || return 1
} 
[[ $# -eq 0 ]] && usage
if (is_file_exists "$1")  # $1 here is first argument provided to shell script.
then 
   echo "file is found"
else 
  echo " file not found "
fi
