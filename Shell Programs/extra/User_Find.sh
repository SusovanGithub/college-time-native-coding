# A shell program to find a user valid or not

echo -n "Enter the Username to find = "
read str
s=`cat /etc/passwd | grep -w "$str" | cut -d":" -f 6-7`
if [ "$s" == "" ]
then
	echo "$str is not a user of this System."
	exit
fi
IFS=":"
set $s
echo "Default Home Directy of $str = $1"
echo "Default Shell of $str =$2"
