# Input 3 numbers through the keyboard. Write a shell script to find their LCM.

str=""
for ((i=0;i<3;i++))
do
	echo -n "Enter a Number ="
	read n
	n=`factor $n|cut -d' ' -f 2-`
	str=$str$n" "
done
str=`echo "$str"|tr -t ' ' '\n'`
echo -e "$str"|sort -u >ff
lcm=1
exec<ff
while read n
do
	let lcm=$lcm*$n
done
echo "LCM of that numbers =$lcm"
rm ff