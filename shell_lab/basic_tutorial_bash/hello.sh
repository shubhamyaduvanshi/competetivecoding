echo "hello world"
echo "$BASH"
echo "$BASH_VERSION"
echo "$PWD"
read -p 'username: ' user_var #-p option to read a value in a  variable.
echo "username: $user_var"
read -sp 'password : ' pass_var # -s option to read a value st a passwdinvsible sometime.
echo
echo "password :$pass_var"
read -a names # a option to like read value in array by single variable
echo "Names: ${names[0]}, ${names[1]}"
read 
echo "MY NAME IS :$REPLY" #reply is system var storing all data to read.
echo $1 $2 $3  ' > echo  $1 $2 $3 '
echo  $0 $1 $2 $3  ' > echo  $1 $2 $3 '
args=("$@") # be careful with spaces.'=' is without spaces bothsides .
echo  ${args[0]}  ${args[1]}  ${args[2]} ${args[3]} ${args[4]}
echo  "can be also siply be represented as "
echo  $@ # @ and # are default variables of shells. 
echo  no  of arguments passed is: $#   # if not use ""n echo all after echo writtten.
# look appliacation of  if -else in bash codes.
s='a'
if [[ "$s" = 'b' ]] #be alert as there is so optionl cases.
then
echo "a is same as b"
else 
echo " a is not same as b"
fi
