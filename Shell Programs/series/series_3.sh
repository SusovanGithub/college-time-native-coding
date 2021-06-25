# Write a shell script to compute the given series
# 1/(1)^1 + (1*2)/2^2 + (1*2*3)/3^3 + (1*2*3*4)/4^4 + ........

fact()
{
	f=1
	for ((i=$1;i>0;i--))
	do
		f=$(($f*$i))
	done
}

if [ $# -ne 1 ]
then
	echo "Wrong Argument Passes."
	exit
fi

if [ $1 -lt 1 ]
then
	echo "Wrong Line Number Passes."
	exit
fi

n=$1
s=0
for ((j=1;j<=n;j++))
do
	fact $j
	s=`echo "scale=4;$s+($f/($j^$j))"|bc`
done

echo "Ans is =$s"