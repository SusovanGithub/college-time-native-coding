# A Shell program to evaluate the postfix expression

echo "Enter the Postfix Expression (Use space for Separate the terms)"
echo -n "="
read p

for i in $p
do
	if [ "$i" = "+" -o "$i" = "-" -o "$i" = "*" -o "$i" = "/" -o "$i" = "^" ]
	then
		x=${a[$t]}
		t=$(($t-1))
		y=${a[$t]}
		a[$t]=`echo "$y $i $x"|bc`
	else
		t=$(($t+1))
		a[$t]=$i
	fi
done
echo -e "ANS\n$p \n=${a[1]}"
