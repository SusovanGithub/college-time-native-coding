// A Program to show the bits of Any Number

#include<stdio.h>

main()
{
	int n,i,y;
	printf("Enter A Number=");
	scanf("%d",&n);
	printf("That number in Binary format=");
	for(i=sizeof(int)*8-1;i>=0;i--)
	{
		y=1<<i;
		(n&y)?printf("1"):printf("0");
	}
}
