# Write a Shell program that will print the prime numbers with in a given range to be supplied as command line argument.

prime()
{
	p=1
	for ((i=2;i<=$(($1/2));i++))
	do
		if [ $(($1%2)) -eq 0 ]
		then
			p=0
			return
		fi
	done
	p=1
}

if [ $# -ne 2 ]
then
	echo "Wrong Argument Passes"
	exit
fi

if [ $1 -gt $2 ]
then
	l=$2
	u=$1
else
	l=$1
	u=$2
fi

echo "Prime Numbers between $l to $u :-"
for ((;l<=u;l++))
do
	prime $l
	if [ $p -eq 1 ]
	then
		echo -n "$l "
	fi
done
echo