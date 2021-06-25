# A Shell program to print Reverce Triangle

echo -n "Enter the Line Number ="
read n

for((i=0;i<n;i++))
do
	for((j=0;j<i;j++))
	do
		echo -n " "
	done
	for((j=i;j<n;j++))
	do
		echo -n "* "
	done
	echo
done
