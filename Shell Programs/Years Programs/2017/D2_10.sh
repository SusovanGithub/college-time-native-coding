# Input n Number through the Keyboard. Write a Shell script to find the third largest among them with out using any sorting technique.

echo -n "Enter the No of numbers ="
read n
str=""
while [ $n -gt 0 ]
do
	echo -n "Enter a Number ="
	read a
	str=$str$a"\n"
	let n--
done
a=`echo -e "$str"|sort -rnu|sed -n 3,3p`
if [ "$a" = "" ]
then
	echo "No Third largest Number Exist."
else
	echo "Third largest Number =$a"
fi