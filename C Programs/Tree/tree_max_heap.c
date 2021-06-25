// Heap Sort
#include<stdio.h>
#include <stdlib.h>

void create_heap(int a[],int n,int ite)
{
	int ptr,par;
	ptr=n;
	while(ptr!=1)
	{
		par=ptr/2;
		if(ite>a[par])
		 a[ptr]=a[par];
		else
		 break;
		ptr=par;
	}
	a[ptr]=ite;	
}

int main()
{
	int *a,n,i=1,item;
	printf("Enter the total number of elements=");
	scanf("%d",&n);
	a = (int *)malloc((n+1)*sizeof(int));
	printf("Enter the element=");
	scanf("%d",&a[i]);
	for(i=2;i<=n;i++)
	{
		printf("Enter the element=");
		scanf("%d",&item);
		create_heap(a,i,item);		
	}
	printf("The elements are in MAX Heap Tree:  ");
	for(i=1;i<=n;i++)
	 printf("%d ",a[i]);
	return 0;
}
