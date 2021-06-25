# A Shell program to reverse all words in a file

if [ $# -ne 1 ]
then 
 	echo "Wrong arguments passes."
	exit
fi

fn=$1
exec<$fn          # opening a file in read mode
while read l      # read lines one by one from the file
do
	fstr=""
	j=1
	while true
	do
		str=""
		while true
		do
			ch=`echo "$l"|cut -c $j`
			j=$((j+1))
			if [ "$ch" = " " -o "$ch" = "" ]
			then
				break
			fi
			str=$ch$str
		done
		fstr=$fstr$str$ch
		if [ "$ch" = "" ]
		then
			break
		fi
	done
	echo "$fstr">>file.txt
done
