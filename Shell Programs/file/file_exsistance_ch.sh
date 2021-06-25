# Write a shell script to determine whether a given file exists or not.The file name is supplied as command line argument.Also  validate that there is a single command line argument.

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi
ch=`find -name $1`
if [ "$ch" = "" ]
then
	echo "File '$1' Does not Exists."
else
	echo "File '$1' Exists."
fi