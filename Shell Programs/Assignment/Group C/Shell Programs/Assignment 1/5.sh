# Assignment No :- 5
# Write a shell script / program to determine whether the number is prime or not.

echo -n "Enter a Number ="
read n
flag=0
for ((i=2;i<=n/2;i++))
do
	if [ $((n%i)) -eq 0 ]
	then
		flag=1
		break
	fi
done
if [ $flag -eq 0 -a $n -ne 1 ]
then
	echo "$n is a Prime Number."
else
	echo "$n is Not a Prime Number."
fi
