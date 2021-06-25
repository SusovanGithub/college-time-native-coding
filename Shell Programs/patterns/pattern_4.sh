# A Shell program to print a Reverce Triangle pattern

echo -n "Enter the Line Number ="
read n

for ((i=0;i<n;i++))
do
	for ((j=0;j<i;j++))
	do
		echo -n "  "
	done
	for ((j=2*i+1;j<=2*n-1;j++))
	do
		echo -n "* "
	done
	echo
done
