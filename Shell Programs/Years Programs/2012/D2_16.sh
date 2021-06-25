# Write a shell script for binary search on the given data.

echo -n "Enter the No. of Numbers ="
read n
echo "Enter the data in sorted order :-"
for ((i=1;i<=n;i++))
do
	echo -n "A[$i] ="
	read a[$i]
done
l=1
u=$n
echo -n "Enter a Number to search ="
read n
while [ $l -le $u ]
do
	if [ ${a[$((($l+$u)/2))]} -eq $n ]
	then
		echo "Element found."
		exit
	elif [ ${a[$((($l+$u)/2))]} -lt $n ]
	then
		let l=($l+$u)/2+1
	else
		let u=($l+$u)/2-1
	fi
done
echo "Element not Found."