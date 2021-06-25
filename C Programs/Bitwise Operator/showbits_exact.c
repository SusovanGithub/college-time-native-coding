// A Program to show the exact bits of a Number

#include<stdio.h>
#include<math.h>

main()
{
	int n,i,y;
	printf("Enter A Number=");
	scanf("%d",&n);
	if(n>0)
	{
	 i=(log(n)/log(2))+1;
	 printf("That number in Binary format=");
	 for(i--;i>=0;i--)
	 {
 		y=1<<i;
		(n&y)?printf("1"):printf("0");
	 }
    }
    else
     printf("Can't Print The Bits");
}
