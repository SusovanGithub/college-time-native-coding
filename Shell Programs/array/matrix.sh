# A Shell program for the matrix operation

# Insert into values to the 1st matrix
echo -n "Enter the Row and Column for first matrix="
read r1 c1
echo "Enter the Numbers :-"
for ((i=0;i<r1;i++))
do
	for((j=0;j<c1;j++))
	do
		echo -n "A[$i][$j] ="
		read a[$i$j]
	done
done

# Display the 1st matrix
echo "First matrix is :-"
for ((i=0;i<r1;i++))
do
	for((j=0;j<c1;j++))
	do
		echo -n "${a[$i$j]} "
	done
	echo
done

# Insert into values to the 2nd matrix
echo -n "Enter the Row and Column for second matrix="
read r2 c2
echo "Enter the Numbers :-"
for ((i=0;i<r2;i++))
do
	for((j=0;j<c2;j++))
	do
		echo -n "B[$i][$j] ="
		read b[$i$j]
	done
done

# Display the 1st matrix
echo "Second matrix is :-"
for ((i=0;i<r2;i++))
do
	for((j=0;j<c2;j++))
	do
		echo -n "${b[$i$j]} "
	done
	echo
done

# Multiplication condition checking
if [ $c1 -ne $r2 ]
then
	echo "Multiplication Not possible"
	exit
fi

# Multiplication operation
for ((i=0;i<r1;i++))
do
	for ((j=0;j<c2;j++))
	do
		s=0
		for ((k=0;k<c1;k++))
		do
			let s=s+${a[$i$k]}*${b[$k$j]}
		done
		let c[$i$j]=$s
	done
done

# Display the 3rd Matrix
echo "After Multiplication matrix is :-"
for ((i=0;i<r1;i++))
do
	for((j=0;j<c2;j++))
	do
		echo -n "${c[$i$j]} "
	done
	echo
done
