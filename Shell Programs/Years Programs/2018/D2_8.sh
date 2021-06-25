# Write a shell script to compute the given series
# 1/(1)^1 + (1*2)/2^2 + (1*2*3)/3^3 + (1*2*3*4)/4^4 + ........

str=""
for i in $*
do
	str=$str$i
done
n=`echo "$str"|tr -t '.' '*'`
echo -e "Answer of the series :-\n$str =`echo "scale=2;$n"|bc`"