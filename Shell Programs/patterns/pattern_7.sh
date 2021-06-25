# A Shell program to print a Triangle

echo -n "Enter the Line Number ="
read n

for ((i=0;i<n;i++))
do
	for ((j=i+1;j<n;j++))
	do
		echo -n " "
	done
	for  ((j=0;j<=i;j++))
	do
		echo -n "* "
	done
	echo
done
