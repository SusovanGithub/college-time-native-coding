# Write a shell script which prints the contents of a text file from line number m to line number to n. m,n are to be supplied from command line argument (check on your script that m<=n)

if [ $# -ne 3 ]
then
	echo "Wrong Argument Passes."
	exit
elif [ $2 -gt $3 ]
then
	echo "Wrong Position of Argument Passes."
	n=$2
	m=$3
else
	m=$2
	n=$3
fi
str=$m","$n"p"
sed -n $str $1
echo