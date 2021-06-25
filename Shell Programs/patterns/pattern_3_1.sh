# A Shell program to print a Triangle pattern

echo -n "Enter the Line Number ="
read n

for ((i=0;i<n;i++))
do
	for ((j=n-1;j>i;j--))
	do
		echo -n "  "
	done
	for ((j=0;j<i*2+1;j++))
	do
		echo -n "* "
	done
	echo
done
