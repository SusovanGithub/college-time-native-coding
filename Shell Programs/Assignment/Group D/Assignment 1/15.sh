# Assignment No :- 15
# Write a shell script / program to print a text file in reverse way.

echo -n "Enter the File name ="
read fn
str=""
exec<$fn
while read l
do
	str=$l"\n"$str
done
echo -e "$str"