echo -n "Enter the Number of Terms ="
read n

for ((i=0;i<n;i++))
do
	echo -n "A[$i]="
	read a[$i]
done

echo "The Numbers :-"
for ((i=0;i<10;i++))
do
	echo -n "${a[$i]}  "
done

echo -ne "\nEnter which Largest number have to be find (Kth) ="
read k
for ((i=0;i<n && i<k;i++))
do
	for ((j=i+1;j<n;j++))
	do
		if [ ${a[$i]} -lt ${a[$j]} ]
		then
			temp=${a[$i]}
			a[$i]=${a[$j]}
			a[$j]=$temp
		fi
	done
done

if [ $n -lt $k ]
then
	echo "The $k'th Largest element =${a[$((n-1))]}"
else
	echo "The $k'th Largest element =${a[$((k-1))]}"
fi