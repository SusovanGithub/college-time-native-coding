# Write a shell script to create a database having following fields -
# name,stream ,year ,date of birth(dd/mm/yy)

echo -n "Enter the number of records ="
read n
for ((i=0;i<n;i++))
do
	echo -e "\nEnter the data :-"
	echo -n "Name ="
	read nm
	echo -n "Stream ="
	read st
	echo -n "Year ="
	read ye
	echo -n "DOB(dd/mm/yy) ="
	read dob
	echo "$nm $st $ye $dob">>D1_18database
done
echo -e "\n\nRecords are in the file:-"
for ((i=1;i<=n;i++))
do
	exec<D1_18database
	read l
	set $l
	echo -e "\nRecord No :- $i"
	echo "Name =$1"
	echo "Stream =$2"
	echo "Year =$3"
	echo "DOB(dd/mm/yy) =$4"
done