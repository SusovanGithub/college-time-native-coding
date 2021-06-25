# A file contains a list numbers (one per line). Write a shell script that takes the name of the file as command line argument and prints the lowest and highest number present in the file.

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi
echo "File '$1' contains :-"
cat $1
echo -e "\nLowest Number =`sort -n $1|head -1`"
echo "Highest Number =`sort -n $1|tail -1`"