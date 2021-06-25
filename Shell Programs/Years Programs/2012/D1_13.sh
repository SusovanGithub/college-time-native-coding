# Write a shell script that receives any number of filenames as argument and checks if every argument supplied is file or a directory and reports accordingly. Whenever the argument is a file ,the number of lines on it is also reported.

if [ $# -lt 1 ]
then
	echo "No Arguments are Passes."
	exit
fi
for i in $*
do
	if [ -d $i ]
	then
		echo "$i is a Directory."
		continue
	fi
	tac $i > tempfile
	mv tempfile $i
	n=`wc -l $i|cut -d' ' -f 1`
	echo "$i have $n lines."
done