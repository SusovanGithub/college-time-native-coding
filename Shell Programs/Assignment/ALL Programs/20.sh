# Assignment No :- 20
# Write a shell script accept a file name as command line argument and display the size of the file.

echo -n "Enter the name ="
read fn
ch=`ls -l $fn`
ch=`echo "$ch"|cut -d' ' -f 5`
echo "Size of the file '$fn' is $ch bytes."