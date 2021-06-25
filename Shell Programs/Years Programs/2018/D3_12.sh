# Input an n digit number. Write a Shell script to reverse the number

echo -n "Enter the Number ="
read n

i=1
str=""
while :
do
	ch=`echo "$n"|cut -c $i` #cut every character one by one
	if [ "$ch" = "" ]
	then
		break
	fi
	str=$ch$str #string containing reversely
	i=$(($i+1))
done
echo "Reverse Number =$str"