// A Program for Subtraction

#include<stdio.h>

main()
{
	int x,y;
	printf("Enter the X=");
	scanf("%d",&x);
	printf("Enter the Y=");
	scanf("%d",&y);
	y=~y+1;
	x=x+y;
	printf("Subtraction of X-Y=%d",x);
}
