# A Shell program to find the factorial of a number

echo -n "Enter a Number ="
read n

f=1
for ((i=1;i<=n;i++))
do
	f=$(($f*$i))
done

echo "Factorial of $n is $f"
