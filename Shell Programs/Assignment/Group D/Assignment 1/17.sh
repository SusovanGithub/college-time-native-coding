# Assignment No :- 17
# Write a shell script / program to rename a group of files for example, rename all files where file name end with HTM so that they end with HTML.

echo -n "Enter the Existing file Extension ="
read efe 
echo -n "Enter the Converting file Extension ="
read cfe
for i in `ls *$efe`
do
	ch=`echo "$i"|cut -d'.' -f 1`
	ch=$ch$cfe
	mv $i $ch
done
echo "Complete conversion"