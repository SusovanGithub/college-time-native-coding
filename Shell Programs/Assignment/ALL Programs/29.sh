# Assignment No :- 29
# Write a shell script to print the form text file in reverse way.

echo -n "Enter the File name ="
read fn
str=""
exec<$fn
while read l
do
	str=$l"\n"$str
done
echo -e "$str"