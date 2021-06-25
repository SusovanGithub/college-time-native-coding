# Assignment No :- 8.i
# Write a shell / program to print the following pattern
# *
# * *
# * * *
# * * * *
# ...

echo -n "Enter the Line Number ="
read n
for ((i=0;i<n;i++))
do
	for ((j=0;j<=i;j++))
	do
		echo -n "* "
	done
	echo
done