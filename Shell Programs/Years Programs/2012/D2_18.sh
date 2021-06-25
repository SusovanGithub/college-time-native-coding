# A Shell program to find the root of a quadratic equation

echo -n "Enter the Coefficients of the equation (ax*x + bx + c) ="
read a b c

echo "$a x^2 + $b x + $c"
if [ 1 -eq `echo "$a == 0"|bc` ]
then
	echo "Wrong Value of Coefficient 'a'"
	exit
fi
d=`echo "scale=2;$b^2-4*$a*$c"|bc`
if [ 1 -eq `echo "$d < 0"|bc` ]
then
	d=`echo "- $d"|bc`
	x1=`echo "scale=4;(-$b)/(2*$a)"|bc`
	x2=`echo "scale=4;(sqrt($d))/(2*$a)"|bc`
	echo "Imaginary Roots are:-"
	echo "$x1 + i$x2"
	echo "$x1 - i$x2"
else
	x1=`echo "scale=4;(-$b+sqrt($d))/(2*$a)"|bc`
	x2=`echo "scale=4;(-$b-sqrt($d))/(2*$a)"|bc`
	echo "Roots are $x1 , $x2"
fi
