// A program to compute the fibonacci series

#include<stdio.h>

main()
{
	int n,a,b,c,i;
	printf("Enter the total no of terms=");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=0;i<n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
