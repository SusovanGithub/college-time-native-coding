# Assignment No :- 22
# Write a shell script for minimum of n numbers within an array element.

echo -n "Enter the Size of Array ="
read n
echo "Enter the Elements :-"
for ((i=0;i<n;i++))
do
	echo -n "A[$i] ="
	read a[$i]
done
min=${a[0]}
for ((i=1;i<n;i++))
do
	if [ $min -gt ${a[$i]} ]
	then
		temp=min
		min=${a[$i]}
		a[$i]=temp
	fi
done
echo "Smallest Element in the Array is $min"