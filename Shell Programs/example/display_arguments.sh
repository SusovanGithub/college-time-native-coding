# A Shell program to print the Arguments passes through the command line argument

echo -n -e "Arguments  are:-\n"
j=1
for i in $*
do
	echo "$j) $i"
	let j=$j+1
done