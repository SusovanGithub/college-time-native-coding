# A Shell program to reverse all words in a file

if [ $# -ne 1 ]
then 
 	echo "Wrong arguments passes."
	exit
fi

str=""
exec<$1           # opening a file in read mode
while read l      # read lines one by one from the file
do
	str=$l"\n"$str
done
echo -e "$str">$1