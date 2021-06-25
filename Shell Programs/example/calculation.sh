# A Shell program to find the addition,subtraction,multiplication,divition of two numbers

echo -n "Enter A ="
read a
echo -n "Enter B ="
read b

#c=`expr $a + $b`
let c=$a+$b
echo "$a + $b = $c"
# Another method to print
#echo "$a + $b = `expr $a + $b`"
#echo "$a + $b = `echo "$a+$b"|bc`" 


#c=`expr $a - $b`
let c=$a-$b
echo "$a - $b = $c"


#c=`expr $a \* $b`
let c=$a*$b
echo "$a * $b = $c"


# For Divition if let and expr both are not good because the can't find fractional value 
#c=`expr $a / $b`
#let c=$a/$b
c=`echo "scale=2;$a/$b"|bc` # So we use basic calcutator(bc) to get the result
echo "$a / $b = $c"
# Another method to print
#echo "$a / $b = `echo "scale=2;$a/$b"|bc`"
