# Assignment No :- 3
# Write a shell script / program to print sum of the digit of a number.

echo -n "Enter a Number ="
read n
s=0
i=1
while true
do
	ch=`echo "$n"|cut -c $i`
	if [ "$ch" = "" ]
	then
		break
	fi
	s=$(($s+$ch))
	i=$(($i+1))
done
echo "Sum of the Digits=$s"
