#include<stdio.h>
#include<conio.h>

int fact(int x)
{
	int result=1,k;
	for(k=2;k<=x;k++)
	{
		result=result*k;
	}
	return(result);
}

main()
{
	int n,i,j,c;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i-2;j++)
		{
			printf(" ");
		}
		for(c=0;c<=i;c++)
		{
			printf("%d ",fact(i)/(fact(c)*fact(i-c)));
		}
	printf("\n");
	}
}
