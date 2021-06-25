# A Shell program to find the prime numbers between a range

echo -n "Enter the Lower Bound ="
read l 
echo -n "Enter the Upper Bound ="
read u 

for ((;l<=u;l++))
do
	a=`factor $l`
	set $a
	if [ $# -eq 2 ]
	then
		echo -e "$a \n $l"
	fi
done
