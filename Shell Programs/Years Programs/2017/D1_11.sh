# Input any integer number 'n'. Write a shell script to count number of bits required to represent the integer number to its binary equivalent.

echo -n "Enter a Number ="
read n
ch=`echo "obase=2;$n"|bc|wc -c`
echo "Bits required to represent '$n' =$(($ch-1))"