# A Shell program for printing a Squar pattern

echo -n "Enter the Line Number ="
read n
for (( i = 0; i < n ; i++))
do
	for (( j = 0; j < n; j++ ))
	do
		echo -n "* "
	done
	echo
done
