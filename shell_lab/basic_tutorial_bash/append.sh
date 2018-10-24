echo -e "enter the name of file: \c" #""with string in echo option ``option for mathematical calculation or expressions.
read file_name
if [ -f  "$file_name" ]
then 
     if [ -w  "$file_name" ] #space after if as well as [ 's after notice.
     then
     echo "some type data can be done to quit press ctrl+d."
     cat  >> "$file_name"   # >> redirection for append as catenate add #something. but  if single redirection is used it works as overrite  keep #in mind.
     else 
     echo "the file do not have write permission."
     fi
else
echo " "$file_name" not exists"
fi
