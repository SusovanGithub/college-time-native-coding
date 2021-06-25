# Assignment No :- 11
# Write a menu driven shell script / program using switch statement that has the following options :
# 1. Add numbers
# 2. Subtract numbers 
# 3. Multiply numbers 
# 4. Divide numbers 
# 5. Exit 

echo -e "1. Add Numbers.\n2. Subtract Numbers.\n3. Multiply Numbers.\n4. Divide Numbers.\n5. Exit."
echo -n "Enter your Choice ="
read n
case $n in
	1)	echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		echo "Ans of $a+$b =`echo "scale=2;$a+$b"|bc`"
		;;
	2)	echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		echo "Ans of $a-$b =`echo "scale=2;$a-$b"|bc`"
		;;
	3)	echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		echo "Ans of $a*$b =`echo "scale=2;$a*$b"|bc`"
		;;
	4)	echo -n "Enter A ="
		read a
		echo -n "Enter B ="
		read b
		echo "Ans of $a/$b =`echo "scale=2;$a/$b"|bc`"
		;;
	5)	exit
		;;
	*)  echo "Wrong Choice."
		;;
esac