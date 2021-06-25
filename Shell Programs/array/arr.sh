# A Shell program to implement a array

echo -n "Enter  the Size of the array ="
read n

for ((i=0;i<n;i++))
do
	echo -n "A[$i]="
	read a[$i]
done

echo -e "Your entered data is :-"
for ((i=0;i<n;i++))
do
	echo "A[$i] =${a[$i]}"
done
