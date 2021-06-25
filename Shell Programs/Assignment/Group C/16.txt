# Assignment No :- 16
# Write a shell script / program to find the sum of N numbers taken as parameter input.

if [ $# -eq 0 ]
then
	echo "No Arguments Passes."
	exit
fi
s=0
echo -n "Arguments Passes as the Parameter:- "
for i in $*
do
	echo -n "$i  "
	s=$(($s+$i))
done
echo -e "\nSum of that Numbers =$s"