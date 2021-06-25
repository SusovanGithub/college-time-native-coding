# A Shell program to print a pascal triangle

fact()
{
	f=1;
	for ((k=$1;k>0;k--))
	do
		f=$(($f*$k))
	done
}

com()
{
	fact $1
	a=$f
	fact $2
	b=$f
	fact $3
	c=$f
	s=`echo "$a/($b*$c)"|bc`
}

echo -n "Enter the Number of Lines ="
read n

for ((i=0;i<n;i++))
do
	for ((j=n-1;j>i;j--))
	do
		echo -n " "
	done
	for ((j=0;j<=i;j++))
	do
		com $i $j $((i-j))
		echo -n "$s "
	done
	echo
done
