# A Shell program that calculates the Sum of the digits of a Number

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
echo "Sum =$s"