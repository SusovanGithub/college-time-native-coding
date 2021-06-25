// A program to compute non fibonacci series

#include<stdio.h>

main()
{
	int n,a,b,c,i,nf;
	printf("Enter the total no of terms=");
	scanf("%d",&n);
	a=2;
	b=3;
	for(i=0,nf=4;i<n;)
	{
		c=a+b;
		a=b;
		b=c;
		while((nf<c)&&(i<n))
		{
			printf("%d ",nf);
			nf++;
			i++;
		}
		nf++;
	}
}
