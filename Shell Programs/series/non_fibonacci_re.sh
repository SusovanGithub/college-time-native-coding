# Write a shell script to generate  non_fibonacci number up to n using recursion.

non_febo()
{
	if [ $j -gt $n ]
	then
		return
	fi
	if [ $j -ne $c ]
	then
		echo -n "$j "
	else
		a=$b
		b=$c
		let c=$a+$b
	fi
	let j++
	non_febo
}

echo -n "Enter the limit ="
read n
echo "Non Fibonacci series up to $n :-"
a=2
b=3
let c=$a+$b
j=4
i=0
non_febo
echo