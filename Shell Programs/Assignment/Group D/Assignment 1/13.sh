# Assignment No :- 13
# Write a shell script / program to count number of lines and words in a file. 

echo -n "Enter the File name ="
read fn
ln=0
w=0
flag=0
exec<$fn
while read l
do
	i=1
	while true
	do
		ch=`echo "$l"|cut -c $i`
 		if [ "$ch" = "" ]
		then
			break
		fi
		if [ "$ch" = " " -o "$ch" = "," -o "$ch" = "." -o "$ch" = ";" -o "$ch" = "?" ]
		then
			if [ $flag -eq 0 ]
			then
				w=$(($w+1))
				flag=1
			fi
		else
			flag=0
		fi		
		i=$(($i+1))
	done
	if [ $flag -eq 0 ]
	then
		w=$(($w+1))
	fi
	ln=$((ln+1))
done
echo "In file '$fn'"
echo "Words =$w"
echo "lines =$ln"
