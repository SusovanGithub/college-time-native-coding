# Assignment No :- 19
# Write a shell script which deleted all lines containing the word "LINUX" from a given file.

echo -n "Enter the File Name ="
read f
echo -n "Enter the word ="
read w
grep -wiv $w $f > file1.txt
mv file1.txt $f