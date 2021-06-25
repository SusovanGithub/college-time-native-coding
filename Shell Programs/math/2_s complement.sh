echo -n "Enter a Binary Number ="
read n
# transfer 0 to a and the 1 to 0 and at least a to 1 for creating 1's complement of that number
nn=`echo "$n"|tr "0" "a"`
nn=`echo "$nn"|tr "1" "0"`
nn=`echo "$nn"|tr "a" "1"`
# echo "1's Complement of $n = $nn"
# 2's Complement process start
nn=`echo "ibase=2;$nn"|bc`
let nn=$nn+1
nn=`echo "obase=2;$nn"|bc`
echo "2's Complement of $n = $nn"