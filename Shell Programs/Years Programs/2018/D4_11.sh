# Write a shell script that will find the minimum and maximum from a list of numbers.

i=0
while true 
do
	echo -n "Enter a Number ="
	read a[$i]
	if [ "${a[$i]}" = "" ]
	then
		break
	fi
	i=$(($i+1))
done
n=$i
min=${a[0]}
max=${a[0]}
echo "Number are :-"
for ((i=0;i<n;i++))
do
	echo -n "${a[$i]} "
	if [ ${a[$i]} -gt $max ]
	then
		max=${a[$i]}
	fi

	if [ ${a[$i]} -le $min ]
	then
		min=${a[$i]}
	fi
done
echo -e "\nMaximum=$max\nMinimum=$min"
