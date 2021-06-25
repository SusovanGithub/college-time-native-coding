# Write a Shell program to implement a recursive shell function to find out the factorial of a given Integer Number

fact()
{
	if [ $1 -eq 0 ]
	then
		return
	fi
	let f=$f*$1
	fact $(($1-1))
}

#MAIN Starts 
echo -n "Enter a Integer Number ="
read n

f=1
fact $n
echo "Factorial of $n is $f"