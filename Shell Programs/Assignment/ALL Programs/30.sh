# Assignment No :- 30
# Write a shell script to find out the no. of vowel frequency of a given string.

echo -n "Enter a String ="
read n
n=`echo "$n"|tr [AEIOU] [aeiou]`
echo "">file.txt
echo "$n"|grep -o [aeiou]|sort|uniq -c >file.txt
exec<file.txt
read l
if [ "$l" = "" ]
then
	echo "No Vowels are there in the String."
	rm file.txt
	exit
fi
set $l
echo "Vowel '$2' Occurs $1 times."
while read l
do
	set $l
	echo "Vowel '$2' Occurs $1 times."
done
rm file.txt