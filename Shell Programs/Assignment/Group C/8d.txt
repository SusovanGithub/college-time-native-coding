# Assignment No :- 8.iv
# Write a shell / program to print the following pattern
# sinx = x - x^3/3! + x^5/5! - x^7/7! + ......

echo -n "Enter the term numbers ="
read n
echo -n "Sin x  = x "
for ((i=1;i<n;i++))
do
	if [ $(($i%2)) -eq 0 ]
	then
		echo -n "+ x^$((2*$i+1))/$((2*$i+1))! "
	else
		echo -n "- x^$((2*$i+1))/$((2*$i+1))! "
	fi
done
echo