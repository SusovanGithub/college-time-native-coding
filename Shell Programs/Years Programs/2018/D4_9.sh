# Write ashell script to do the transpose of supplied matrix

echo -n "Enter the row and column ="
read row col
echo "Enter the Matrix :-"
for ((i=0;i<row;i++))
do
	for ((j=0;j<col;j++))
	do
		echo -n "Enter Matrix[$i][$j] ="
		read a[$i$j]
	done
done

echo "The Matrix :-"
for ((i=0;i<row;i++))
do
	for ((j=0;j<col;j++))
	do
		echo -n "${a[$i$j]} "
	done
	echo
done

echo "Transpose of the Matrix :-"
for ((i=0;i<col;i++))
do
	for ((j=0;j<row;j++))
	do
		echo -n "${a[$j$i]} "
	done
	echo
done
