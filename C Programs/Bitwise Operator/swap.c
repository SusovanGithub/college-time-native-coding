// A Program to Swap two variable

#include<stdio.h>

main()
{
	int x,y;
	printf("Enter the X=");
	scanf("%d",&x);
	printf("Enter the Y=");
	scanf("%d",&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("After Swap\nX=%d\nY=%d",x,y);
}
