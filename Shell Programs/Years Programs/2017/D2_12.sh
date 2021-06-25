# write a shell program that print all prime numbers between the range 'm' and 'n'.n,m will be supplied in command line.

if [ $# -ne 2 ]
then
	echo "Wrong Argument Passes."
	exit
fi
m=$1
n=$2
echo "Prime Numbers Between $1 and $2 :-"
for ((;m<=n;m++))
do
	a=`factor $m`
	set $a
	if [ $# -eq 2 ]
	then
		echo -n "$2 "
	fi
done
echo