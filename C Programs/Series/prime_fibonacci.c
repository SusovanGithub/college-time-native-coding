// A program to compute the prime fibonacci scries

#include<stdio.h>

// A function to check a number is prime or not
int prime(int x)
{
	int i;
	for(i=2;i<x/2;i++)
 	 if((x%i)==0)
	  return 0;
	return 1;
}

main()
{
	int n,i,a=2,b=3,c;
	printf("Enter the total no of terms=");
	scanf("%d",&n);
	for(i=0;i<n;)
	{
		if(prime(a))
		{
			printf("%d ",a);
			i++;
		}
		c=a+b;
		a=b;
		b=c;
	}
}
