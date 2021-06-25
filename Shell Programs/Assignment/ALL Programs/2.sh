# Assignment No :- 2
# Write a shell script / program to check whether it is an even number or not.

echo -n "Enter a Number="
read x
if [ $(($x%2)) -eq 0 ]
then
	echo "$x is a Even Number"
else
	echo "$x is an Odd Number"
fi
