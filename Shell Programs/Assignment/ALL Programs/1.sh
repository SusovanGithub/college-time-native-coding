# Assignment No :- 1
# Write a shell script / program to generate Fibonacci series up to a certain number.

echo -n "Enter the Extreme Limit ="
read n
a=0
b=1
while [ $a -le $n ]
do
	echo -n  "$a  "
	c=$(($a+$b))
	a=$b
	b=$c
done
echo
