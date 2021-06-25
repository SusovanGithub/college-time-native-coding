# Assignment No :- 24
# Write a shell script to find Prime factor of a given number.

echo -n "Enter A Number ="
read n
ch=`factor $n`
ch=`echo "$ch"|cut -d':' -f 2-`
echo "Prime factors of $n =$ch"