# Write a shell program to take three A,B and C check whether this three points are collinear or not.

echo -n "Enter the X of point(1) ="
read x1
echo -n "Enter the Y of point(1) ="
read y1
echo -n "Enter the X of point(2) ="
read x2
echo -n "Enter the Y of point(2) ="
read y2
echo -n "Enter the X of point(3) ="
read x3
echo -n "Enter the Y of point(3) ="
read y3

a=$(($x1 * ($y2 - $y3) + $x2 * ($y3 - $y1) + $x3 * ($y1 - $y2)))
if [ $a -eq 0 ]
then
	echo "That three points are Collinear."
else
	echo "That three points are Not Collinear."
fi