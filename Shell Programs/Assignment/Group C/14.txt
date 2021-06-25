# Assignment No :- 14
# Write a shell script / program to find the sum and average of first "N" numbers (20<=N=<50).User will asked to input N. The program must check the validity of "N" as input on by user.

# Input Taking
echo -n "Enter the N (20<=N<=50) ="
read n
# Input condition checking
if [ $n -gt 50 -o $n -lt 20 ]
then
	echo "Your Entered Number is Not in Range."
	exit
fi
# Calculation
sum=0
for ((i=1;i<=$n;i++))
do
	sum=$(($sum+$i))
done
echo "Sum =$sum"
echo "Average =`echo "scale=2;$sum/$n"|bc`"