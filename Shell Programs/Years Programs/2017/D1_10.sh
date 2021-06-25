# Write a shell script /program that reads an integer and test whether it is divisible by 11 using divisibility rule.

echo -n "Enter a Number ="
read n
i=1
s=0
while true
do
	ch=`echo "$n"|cut -c $i`
	if [ "$ch" = "" ]
	then
		break
	fi
	if [ $(($i%2)) -eq 1 ]
	then
		s=$(($s+$ch))
	else
		s=$(($s-$ch))
	fi
	i=$(($i+1))
done
if [ $(($s%11)) -eq 0 ]
then
	echo "$n is Divisible by 11."
else
	echo "$n is Not Divisible by 11."
fi