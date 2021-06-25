# A Shell program to find the word frequency in a file

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi

ff=$1
echo -n "">file.txt
exec<$ff
while read l
do
	for i in $l
	do
		echo "$i">>file.txt
	done
done

sort file.txt|uniq -c>file1.txt
exec<file1.txt
read l
if [ "$l" = "" ]
then
	echo "No Words are there in the $ff."
	rm file.txt file1.txt
	exit
fi
set $l
echo "'$2' Occurs $1 times."
while read l
do
	set $l
	echo "'$2' Occurs $1 times."
done
rm file.txt file1.txt