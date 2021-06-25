# Assignment No :- 8.iii
# Write a shell / program to print the following pattern
# 1
# 0 1
# 1 0 1
# 0 1 0 1
# .........

echo -n "Enter the Line Number ="
read n
str=""
for ((i=0;i<n;i++))
do
	if [ $(($i%2)) -eq 0 ]
	then
		str="1 "$str
	else
		str="0 "$str
	fi
	echo "$str"
done