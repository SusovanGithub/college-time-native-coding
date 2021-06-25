# Write a Shell program to find the sum if the following series up to n terms.
# 1!+2!+3!+.....up to n terms.

fact()
{
	f=1
	for ((j=2;j<=$1;j++))
	do
		f=$(($f*$j))
	done
}

echo  "1!+2!+3!+........ up to n terms"
echo -n "Enter the Term Numbers ="
read n
s=0
for ((i=1;i<=n;i++))
do
	fact $i
	let s=$s+$f
done
echo "Sum of the Series =$s"