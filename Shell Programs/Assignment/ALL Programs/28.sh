# Assignment No :- 28
# Write a shell script to find rename a group of file.

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