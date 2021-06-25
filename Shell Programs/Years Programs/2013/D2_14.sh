# Write a shell script to print the digits of a given number in reverse order i.e. if the number is 123 it prints 321.

echo -n "Enter a number ="
read n
echo "Reverse of the number '$n' =`echo "$n"|rev`"