# A Shell program to calculation by  Command Line Argument

if [ $# -ne 3 ]
then
	echo "Arguments are not complete."
	exit
fi

case $2 in 
	'+')echo "$1 + $3 = `expr $1 + $3`"
		;;
	'-')echo "$1 - $3 = `expr $1 - $3`"
		;;
	'*')echo  "$1 * $3 = `expr $1 \* $3`"
		;;
    '/')echo "$1 / $3 = `echo "scale=2;$1/$3"|bc`"
		;;
	'%')echo "$1 % $3 = `expr $1 % $3`"
		;;
	'^')s=1
		for((i=0;i<$3;i++))
		do
			s=`echo "$s*$1"|bc`
		done
		echo "$1 ^ $3 = $s"
		;;
	*)echo "Wrong Arguments"
	    ;;
esac
