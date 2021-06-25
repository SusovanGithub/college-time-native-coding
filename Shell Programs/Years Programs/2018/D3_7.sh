# Write A shell perform any base to any base conversion

echo -n "Enter the Number ="
read n
echo -n "Enter the Input Base="
read ib
n=`echo "ibase=$ib;$n"|bc`
if [ $? -eq 0 ]
then
	echo "Wrong Base"
	exit
fi
echo -n "Enter the Base number to convert="
read ob
n=`echo "obase=$ob;$n"|bc`
echo "Output =$n"
