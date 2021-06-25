# Assignment No :- 23
# Write a shell script to find sort of n numbers of an array in ascending order.

echo -n "Enter the Size of Array ="
read n
echo "Enter the Elements :- "
for ((i=0;i<n;i++))
do
	echo -n "A[$i] ="
	read a[$i]
done
echo "Elements Are :-"
for ((i=0;i<n;i++))
do
	echo -n "${a[$i]} "
done
for ((i=0;i<n;i++))
do
	for ((j=i+1;j<n;j++))
	do
		if [ ${a[$i]} -gt ${a[$j]} ]
		then
			temp=${a[$i]}
			a[$i]=${a[$j]}
			a[$j]=$temp
		fi
	done
done
echo -e "\nElements After Sorting:-"
for ((i=0;i<n;i++))
do
	echo -n "${a[$i]} "
done
echo