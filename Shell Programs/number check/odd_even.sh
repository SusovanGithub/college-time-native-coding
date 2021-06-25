# A Shell program for Odd Even check

echo -n "Enter a Number="
read x

#let r=$x mod 2
#let r=$x%2
#if [ $r -eq 0 ] 
#then
#	echo "$x is a Even Number"
#else
#	echo "$x is an Odd Number"
#fi

if [ `expr $x % 2` -eq 0 ]
then
	echo "$x is a Even Number"
else
	echo "$x is an Odd Number"
fi