# Write a shell script to reverse each of the string supplied as command line argument.Any number of arguments could be supplied at command line.

if [ $# -lt 1 ]
then
	echo "No Argument Passes in the Command line Argument."
	exit
fi

echo "Argument Passes in the Command line :-"
for i in $*
do
	echo -n "$i "
done

echo
echo "After reverce:-"
for i in $*
do
	str=""
	j=1
	while true
	do
		ch=`echo "$i"|cut -c $j`
		if [ "$ch" = "" ]
		then
			break
		fi
		str=$ch$str
		j=$(($j+1))
	done
	echo -n "$str "
done 
echo
