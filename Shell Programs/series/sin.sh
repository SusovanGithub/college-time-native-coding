# A Shell program to find the SIN Value

fact()
{
	f=1
	for ((i=(2*$1)+1;i>0;i--))
	do
		f=$(($f*$i))
	done
}

echo -n "Enter the X ="
read d
x=`echo "scale=2;$d*3.14/180"|bc`
echo -n "Enter the extreme N="
read n

s=0
for ((j=0;j<n;j++))
do
	fact $j
	if [ $((j%2)) -eq 0 ]
	then
		t=`echo "scale=2;($x^(2*$j+1))/$f"|bc`
	else
		t=`echo "scale=2;-($x^(2*$j+1))/$f"|bc`
	fi
	s=`echo "scale=2;$s+$t"|bc`
done
echo "Sin($d)=$s"