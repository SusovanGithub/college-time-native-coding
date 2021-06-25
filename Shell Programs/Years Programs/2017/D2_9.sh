# Write a shell script to find the sum of the following series up to n terms.
# 1 - 3 + 5 - 7 +..... up to n terms

echo -n "Enter the Number of terms ="
read n
s=0
for ((i=0;i<n;i++))
do
	if [ $(($i%2)) -eq 0 ]
	then
		s=`echo "$s+($i*2+1)"|bc`
	else
		s=`echo "$s-($i*2+1)"|bc`
	fi
done
echo "Sum =$s"