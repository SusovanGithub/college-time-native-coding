# Assignment No :- 9
# Write a recursive shell script / program to calculate x^y where both x and y are non-negative integer.

p()
{
	if [ $2 -eq 0 ]
	then
		return
	fi
	s=`echo "scale=2;$s*$1"|bc`
	p $1 $(($2-1))
}

echo "Calculating  X^Y"
echo -n "Enter X="
read x 
echo -n "Enter Y="
read y
if [ $x -lt 0 -o $y -lt 0 ]
then
	echo "Calculation Not possible."
	exit
fi
s=1
p $x $y
echo "Ans of $x^$y =$s"