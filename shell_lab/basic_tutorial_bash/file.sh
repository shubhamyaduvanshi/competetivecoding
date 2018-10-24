echo -e "enter the name of file: \c" # the option c is used to put cursor on same line for giving input in same line.
#  -e option  with echo enables the option of cursor to put in same line as option  /c is used.
read file_name
if [ -e $file_name ] #-e flag is  used for test existing or not
then
echo "$file_name found"
else 
 echo "$file_name is not found"
fi
if [ -f $file_name ] #-f flag is  used for test existing regularly or not
then
echo "$file_name found"
else 
 echo "$file_name is not found"
fi
if [ -d $file_name ] #-d flag is  used for test existing regularly or n$
then
echo "$file_name found is directory or folder "
else 
echo "$file_name found is not  not a directory."
fi
#files are of  two types:-1. block special file=videofile,music,image file are binary file also. whether 2.char special file=containing  text normal text file or bash file such..
if [ -b $file_name ] # flag option -b is used to check existing block special type file or not.
then
echo "$file_name found is block special file"
else 
 echo "$file_name found is not character special file"
fi
if [ -c $file_name ] # flag option -c is used to check existing character  special type file i.e. text normal file or not.
then
echo "$file_name found is character special"
else 
 echo "$file_name is  found is not a character special file"
fi
if [ -s $file_name ] # flag option -s is used to  check that file is empty or not.
then
echo "$file_name found is empty"
else 
echo "$file_name is  found is not a empty file"
fi
# other permission to be check for file as -x -r -w for exicute check , -r read permission , -w to check edit /write permission to be checked respectively.
# SUMMARY:
# e -exit file
# d -directory check or file.
# f -found regularly
# b -block special file
# c -character special file
# s -found file is empty or not.
