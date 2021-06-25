# Write a shell program to find GCD of three numbers that are read from keyboard.

gcd()
{
	x=$1
	y=$2
	while [ $y -ne 0 ]
	do
		gcd=$y
		let y=$x%$y
		x=$gcd
	done
	gcd=$x
}

echo -n "Enter the three Number ="
read a b c

gcd $a $b
gcd $c $gcd

echo "GCD of $a,$b,$c = $gcd"