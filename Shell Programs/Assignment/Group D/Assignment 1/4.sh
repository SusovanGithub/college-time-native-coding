# Assignment No :- 4
# Write a shell script / program to print a reverse number of a given number.

echo -n "Enter a Number ="
read n
n=`echo "$n"|rev`
echo "Number in reverse order =$n"
