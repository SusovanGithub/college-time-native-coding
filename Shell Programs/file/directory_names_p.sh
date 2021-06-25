# Write a shell script that display the name of all directory files ,but no other type of files in working directory.

flag=0
echo "Files in the working directory :-"
for i in `ls`
do
	if [ -d $i ]
	then
		echo "$i"
		flag=1
	fi
done
if [ $flag -eq 0 ]
then
	echo "No directory exists in the working directory."
fi