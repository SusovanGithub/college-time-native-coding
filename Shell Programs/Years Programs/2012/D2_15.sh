# Write a shell script for bubble sort of given set input numbers.

echo -n "Enter the No of numbers ="
read n
for ((i=0;i<n;i++))
do
	echo -n "Enter the Number ="
	read arr[$i]
done
echo -e "Array in original order:\n${arr[*]}"
# Performing Bubble sort 
for ((i=0;i<n;i++))
do  
    for((j=0;j<n-i-1;j++))
    do
        if [ ${arr[$j]} -gt ${arr[$((j+1))]} ]
        then
            temp=${arr[$j]}
            arr[$j]=${arr[$((j+1))]}
            arr[$((j+1))]=$temp
        fi
    done
done
echo -e "Array in sorted order :\n${arr[*]}"