# Write a shell script to find the smallest of the three numbers that are read from keyboard.

str=""
for ((i=0;i<3;i++))
do
	echo -n "Enter the Number ="
	read n
	str=$str$n"\n"
done
echo "Smallest Number =`echo -e "$str"|sort -n|sed -n 2,2p`"