# A Shell program to calculation by  Command Line Argument

if [ $# -ne 3 ]
then
	echo "Arguments are not complete."
	exit
fi

if [  $2='+' -o $2='-' -o $2='*' -o $2='/' -o $2='%' -o $2='^' ] 
then
    echo "$1 $2 $3 = `echo "scale=2;$1$2$3"|bc`"
else 
    echo "Wrong Arguments"
fi
