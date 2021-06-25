# Write a shell script to display all files in the current directory.

echo "FIles in the path =`pwd`"
for i in `ls`
do
	if [ -f $i ]
	then
		echo "$i"
	fi
done