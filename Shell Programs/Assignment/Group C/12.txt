# Assignment No :- 12
# Write a shell script / program to check whether a given me string is palindrome or not.

echo -n "Enter a String ="
read n
s=''
j=1
while true 
do
	i=`echo "$n"|cut -c $j`
	if [ "$i" = "" ]
	then
		break
	fi
	s=$i$s
	j=$((j+1))
done
if [ $n = $s ]
then
	echo "$n is Palindrome"
else
	echo "$n is Not Palindrome"
fi

