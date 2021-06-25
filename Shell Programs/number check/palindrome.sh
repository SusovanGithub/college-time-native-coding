# A Shell program for checking palindrome

echo -n "Enter a Number ="
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