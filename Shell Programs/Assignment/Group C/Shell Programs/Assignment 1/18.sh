# Assignment No :- 18
# A student examination files containing the following format:
# Name sub1 sub2 sub3 sub4
# The students are awarded division as per following rules :
#    i) Percentage above or equal to 60-1st division. 
#    ii) Percentage between 50 to 59 - 2nd division. 
#    iii) Percentage between 40 to 49 - 3rd division. 
#    iv) percentage lesa than 40 -FAIL.
# Write a shell script to the division awarded to each student.

echo "Data In Student File :-"
cat 18student.txt
echo
echo "Students Divisions :-"
exec<18student.txt
read l
while read l 
do
	set $l
	nm=$1
	p=`echo "scale=2;($2+$3+$4+$5)/4"|bc`
	echo -n $nm"      "
	if [ 1 -eq `echo "$p>=60"|bc` ]
	then
		echo "1st division."
	elif [ 1 -eq `echo "$p>=50"|bc` ]
	then
		echo "2nd division."
	elif [ 1 -eq `echo "$p>=40"|bc` ]
	then
		echo "3rd division."
	else
		echo "Fail."
	fi
done