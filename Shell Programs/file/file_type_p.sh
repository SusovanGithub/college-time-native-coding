# Assignment No :- 25
# Write a shell script to check the type of the input on file name.

echo -n "Enter the file name ="
read fn
ch=`file $fn|cut -d' ' -f 2-`
echo "File Type of '$fn' =$ch"