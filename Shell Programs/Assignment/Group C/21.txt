# Assignment No :- 21
# write a program to find a number within as array using linear search.

echo -n "Enter the Size of the array ="
read n
echo "Enter the Elements :-"
for ((i=0;i<n;i++))
do
	echo -n "A[$i] ="
	read a[$i]
done
flag=0
echo -n "Enter A Number to Search ="
read t
for ((i=0;i<n;i++))
do
	if [ ${a[$i]} -eq $t ]
	then
		echo "Element found at $(($i+1)) position of the Array."
		flag=1
	fi
done
if [ $flag -eq 0 ]
then
	echo "Element Not Found."
fi