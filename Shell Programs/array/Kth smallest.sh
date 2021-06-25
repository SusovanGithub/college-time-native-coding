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

echo -ne "\nEnter which Smallest number have to be find (Kth) ="
read k
for ((i=0;i<n && i<k;i++))
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

if [ $n -lt $k ]
then
	echo "The $k'th Smallest element =${a[$((n-1))]}"
else
	echo "The $k'th Smallest element =${a[$((k-1))]}"
fi