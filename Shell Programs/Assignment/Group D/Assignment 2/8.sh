# Assignment No :- 8
# Write a shell script to find a factorial of a number using recursive process. 

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