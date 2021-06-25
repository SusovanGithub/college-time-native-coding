# Write a shell script / program to determine whether a particular user logged into the system or not.

echo -n "Enter the User Name ="
read u
t=0
f=0
while true
do
	ch=`who|grep -i $u`
	if [ "$ch" != ""  ]
	then
		if [ $f -eq 0 ]
		then
			echo "$u is already logged in."
		else
			echo "$u is logged in after $t minutes."
		fi
		exit
	else
		sleep 60
		t=$(($t+1))
		f=1
	fi
done