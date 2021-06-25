# Write a shell script to print the following pattern.Number of rows will be supplied from command line.
# * * * * * 
#  * * * 
#    * 
#  * * * 
# * * * * *

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi
n=$1
let n=$n/2+1
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