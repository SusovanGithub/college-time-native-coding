#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,n,j,max,min,div,*a,*c;
	printf("\nEnter the Number of elements = ");
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int)*n);
	printf("\nEnter The ELements :-- \n");
	for (i = 0; i < n; ++i)
	{
		printf("Arr[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nArray :- \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	max = min = a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max = a[i];
		if(min>a[i])
			min = a[i];
	}
	div = max - min;
	c = (int *)malloc(sizeof(int)*div);
	for (i = 0; i <= div; ++i)
		c[i] = 0;
	
	for (i = 0; i < n; ++i)
		c[a[i]-min] = c[a[i]-min]+1;
	
	for(i=0,j=0;i<=div;i++,min++)
		if(c[i]!=0)
		{
			while(c[i])
			{
				a[j++]=min;
				c[i]=c[i]-1;
			}
		}
	printf("\nArray after sort:- \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}