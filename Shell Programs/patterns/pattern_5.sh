# A Shell program to print a Dimond pattern

echo -n "Enter the Line Number(Odd) ="
read n

# Upper part printing
n=`echo "$n/2+1"|bc`

for ((i=0;i<n;i++))
do
	for ((j=n-1;j>i;j--))
	do
		echo -n "  "
	done
	for ((j=0;j<i*2+1;j++))
	do
		echo -n "* "
	done
	echo
done

# Lower part printing
let n=$n-1

for ((i=0;i<n;i++))
do
	for ((j=0;j<=i;j++))
	do
		echo -n "  "
	done
	for ((j=2*i+1;j<=2*n-1;j++))
	do
		echo -n "* "
	done
	echo
done
