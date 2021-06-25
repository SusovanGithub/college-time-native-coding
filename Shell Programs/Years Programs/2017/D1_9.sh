# Input n numbers through keyboard. Write a shell script to find the frequency of a particular number in the given list.

echo -n "Enter the No of Numbers ="
read n
str=""
for ((i=0;i<n;i++))
do
	echo -n "Enter the Number ="
	read a
	str=$str$a"\n"
done
echo -n "Enter a Number a to find it's frequency ="
read n
ch=`echo -e "$str"|grep -w $n|uniq -c|tr -s ' '|cut -d' ' -f 2`
if [ "$ch" = "" ]
then
	echo "Frequency of '$n' =0"
else
	echo "Frequency of '$n' =$ch"
fi