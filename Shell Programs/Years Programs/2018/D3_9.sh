# Write a Shell program that receives two integer number "m" and "n" and display all non-prime integer between them

prime()
{
	p=0
	for ((i=2;i<=$(($1/2));i++))
	do
		if [ $(($1%i)) -eq 0 ]
		then
			p=1
			return
		fi
	done
	p=0
}

echo -n "Enter the Lower Limits ="
read m
echo -n "Enter the Upper Limits ="
read n

for ((;m<=n;m++))
do
	prime $m
	if [ $p -eq 1 ]
	then
		echo -n "$m "
	fi
done
echo