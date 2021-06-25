# A Shell program to print a pattern

echo -n "Enter the Line no ="
read n

# Upper part printing
n=`echo "$n/2+1"|bc`

for ((i=0;i<n;i++))
do
	for ((j=0;j<i;j++))
	do
		echo -n "  "
	done
	for ((j=2*i;j<2*n-1;j++))
	do
		echo -n "* "
	done
	echo
done

# Lower part printing
let n=$n-1

for ((i=1;i<=n;i++))
do
	for ((j=i;j<n;j++))
	do
		echo -n "  "
	done
	for ((j=0;j<2*i+1;j++))
	do
		echo -n "* "
	done
	echo
done
