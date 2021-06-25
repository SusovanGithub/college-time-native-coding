# A Shell program to print the Fibonacci series by recursion

clear
fibo()
{
	if [ $n -eq 0 ]
	then
		return
	fi
	c=$(($a+$b))
	echo -n "$a  "
	a=$b
	b=$c
	n=$(($n-1))
	fibo
}

echo -n "Enter the Number of terms ="
read n

a=0
b=1
echo "The series is :-"
fibo
echo