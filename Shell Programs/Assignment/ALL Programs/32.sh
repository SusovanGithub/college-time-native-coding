# Assignment No :- 32
# Write a shell script to find a large name to its shorted representation.

echo -n "Enter a Name ="
read n
l=`echo "$n"|wc -w`
l=`expr $l`
str=""
for ((i=1;i<l;i++))
do
	ch=`echo $n|cut -d' ' -f $i`
	ch=`echo "$ch"|cut -c 1`
	str=$str$ch"."
done
ch=`echo $n|cut -d' ' -f $i`
str=$str$ch
echo "Short from of the name =$str"