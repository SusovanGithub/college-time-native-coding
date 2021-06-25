# Write a shell script to perform the basic mathematical operations as follows:
# (+) addition, (-) subtraction, (*) multiplication, (/) division. Write a menu driven program to implement it.

echo -en "1 for Addition.\n2 for Subtraction.\n3 for Multiplication.\n4 for Division.\nEnter Your choice ="
read n
case $n in
	1 )	echo -e "Your choice =A+B"
		echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		c=`echo "scale=3;$a+$b"|bc`
		echo "$a + $b =$c"
		;;
	2 )	echo -e "Your choice =A-B"
		echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		c=`echo "scale=3;$a-$b"|bc`
		echo "$a - $b =$c"
		;;
	3 )	echo -e "Your choice =A*B"
		echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		c=`echo "scale=3;$a*$b"|bc`
		echo "$a * $b =$c"
		;;
	4 )	echo -e "Your choice =A/B"
		echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		c=`echo "scale=3;$a/$b"|bc`
		echo "$a / $b =$c"
		;;
	* )	echo "Wrong Choice"
esac