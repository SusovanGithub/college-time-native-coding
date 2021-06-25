# A Shell program to find out the factorial of a number by recursion

clear
fac()
{
	if [ $n -eq 0 ]
	then
		return
	fi
	f=$(($f*$n))
	n=$(($n-1))
	fac
}

echo -n "Enter the Number ="
read n
f=1
echo -n "Factorial of $n is"
fac
echo -n " $f"
echo