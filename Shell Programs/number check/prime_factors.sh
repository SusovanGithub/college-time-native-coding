# A Shell program to find the prime factors of a number

echo -n "Enter a Number ="
read n
a=`factor $n`
ch=`echo $a|cut -d" " -f 2-`
echo "Prime factor of $n =$ch"