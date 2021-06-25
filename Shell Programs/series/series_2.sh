# Write a shell script to find the sum of the following series up to n terms.
# 1 - 1/2! + 1/4! - 1/6! + 1/8! ..... up to n terms 

fact()
{
	f=1
	for ((j=2;j<=$1;j++))
	do
		let f=$f*$j
	done
}

echo -n "Enter the Term Number ="
read n
s=0
for ((i=0;i<n;i++))
do
	fact $(($i*2))
	a=`echo "scale=2;1/$f"|bc`
	if [ $(($i%2)) -eq 0 ]
	then
		s=`echo "scale=2;$s+$a"|bc`
	else
		s=`echo "scale=2;$s-$a"|bc`
	fi
done
echo "Sum =$s"