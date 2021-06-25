# Write a shell script which would arrange the set of data in descending order.if the set if data contain some repeating value delete then from the set

while true
do
	echo -n "Enter a Number ="
	read n
	if [ "$n" = "" ]
	then
		break
	fi
	echo "$n">>temp.txt
done
echo "Numbers with out Duplicate and in Descending Order :-"
for i in `sort -n temp.txt|uniq`
do 
	echo $i
done
rm temp.txt
