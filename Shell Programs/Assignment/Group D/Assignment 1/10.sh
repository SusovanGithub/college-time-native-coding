# Assignment No :- 10
# Write a shell script /program to generate a possible combinations of 1,2 and 3.

echo "All possible combinations of 1, 2 and 3 :-"
for i in 1 2 3
do
	for j in 1 2 3
	do
		for k in 1 2 3
		do
			echo "$i$j$k"
		done
	done
done