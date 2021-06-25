# Write a shell script that will perform the of 'wc' command. The script should be able to accept the switches '-c' (character count),'-l' (line count),'-w' (word count).

if [ $# -gt 2 ]
then
	echo "Wrong Argument Passes."
	exit
fi

fn=$1			# save the file name
op=$2			# saving the option 
ln=0
w=0
c=0
flag=0

# Open the file in output mode
exec<$fn
while read l    # read the file line by line
do
	i=1
	while true
	do
		ch=`echo "$l"|cut -c $i`		# read every character of that line
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
	c=$(($c+$i))
done

# Print the analyzed data by the Option
case $op in
	'-c')echo "Characters =$c"
		;;
	'-w')echo "Words =$w"
		;;
	'-l')echo "lines =$ln"
		;;
	''	)echo "Characters =$c"
		 echo "Words =$w"
		 echo "lines =$ln"
		;;
	*	)echo "Wrong Option"
		;;
esac