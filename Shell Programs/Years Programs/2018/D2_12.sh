# Write a shell script to print the following pattern. Number of rows to be supplied from command line

if [ $1 -lt 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi

str=""
for ((i=1;i<=$1;i++))
do
	if [ 1 -eq $(($i%2)) ]
	then
		str=1" "$str
	else
		str=0" "$str
	fi
	echo "$str"
done
