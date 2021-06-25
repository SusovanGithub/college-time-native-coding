# Write a shell script that accepts one filename as argument and converts all character present in file to uppercase.

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi
cat $1|tr '[a-z]' '[A-Z]'>ff
mv ff $1