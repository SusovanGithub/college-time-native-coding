# Write a shell script using for-loop to print the following pattern on the screen.
# 1
# 1 0
# 1 0 1
# 1 0 1 0
# 1 0 1 0 1

echo -n "Enter the Number of Lines ="
read n
str=""
for ((i=1;i<=n;i++))
do
	if [ 1 -eq $(($i%2)) ]
	then
		str=1" "$str
	else
		str=0" "$str
	fi
	echo "$str"
done