# Write a shell script that receives certain filenames as its argument and searches for a specific word on these files one by one. It stops as soon as the search word is found on a file on a file and reports the name of the file, otherwise  suitable message will be displayed.

if [ $# -lt 1 ]
then
	echo "No Argument Passes."
	exit
fi
echo -n "Enter the word to search ="
read w
for i in $*
do
	grep -w $w $i>FFF
	if [ $? -eq 1 ]
	then
		echo "$w is not in $i"
	else
		echo "$w is in $i"
	fi
done
rm FFF