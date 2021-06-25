# Assignment No :- 31
# Write a shell script to find the no. of word that containing vowel in text file.

echo -n "Enter the File Name ="
read fn
str=""
exec<$fn
while read l
do
	for i in $l
	do
		ch=`echo "$i"|grep -i [aeiou]`
		if [ "$ch" != "" ]
		then
			str=$ch"\n"$str
		fi
	done
done
ch=`echo -e "$str"|wc -l`
ch=`echo "$ch"|cut -d' ' -f 1`
echo "In File '$fn' the number of words that containing vowels is $ch"