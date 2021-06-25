# Write a shell script to display the prime factors of the numbers between two numbers m and n  

echo -n "Enter the Lower limit ="
read m
echo -n "Enter the Upper limit ="
read n
for ((;m<=n;m++))
do
	a=`factor $m`
	ch=`echo $a|cut -d" " -f 2-`
	echo "Prime factor of $m = $ch"
done