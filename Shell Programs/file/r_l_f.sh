# A Shell program to reverse all lines in a file

if [ $# -ne 1 ]
then 
 	echo "Wrong arguments passes."
	exit
fi

fn=$1
exec<$fn          # opening a file in read mode
while read l      # read lines one by one from the file
do
	str=""
	j=1
	while true
	do
		ch=`echo "$l"|cut -c $j`
		if [ "$ch" = "" ]
		then
			break
		fi
		str=$ch$str
		j=$((j+1))
	done
	echo "$str">>file.txt
done
