# A Shell program to find the grade of a student

echo -n "Enter Number of Maths ="
read m 
echo -n "Enter Number of Physics ="
read p
echo -n "Enter Number of Chemistry ="
read c  
echo -n "Enter Number of Computer Scince ="
read com
total=`echo "$m+$p+$c+$com"|bc`
echo "Total Number =$total"
avg=`echo "scale=2;$total/4"|bc`
echo "Average Number =$avg"
echo -n "Grade is "
if [ $avg -ge 80 -a $avg -le 100 ]
then
	echo "A+"
elif [ $avg -ge 60 ]
then
	echo "A"
elif [ $avg -ge 40 ]
then
	echo "B"
elif [ $avg -ge 30 ]
then
	echo "C"
elif [ $avg -lt 30 ]
then
	echo "FAIL"
fi