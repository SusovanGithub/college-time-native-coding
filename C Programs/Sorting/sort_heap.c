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

void heap_sort(int a[],int n)
{
	int item,ptr;
	item=a[n];
	a[n]=a[1];
	n=n-1;
	ptr=1;
	while(2*ptr+1<=n)
	{
		if(item>a[2*ptr]&&item>a[2*ptr+1])
		 break;
		if(a[2*ptr]>a[2*ptr+1])
		{
			a[ptr]=a[2*ptr];
			ptr=ptr*2;
		}
		else
		{
			a[ptr]=a[2*ptr+1];
			ptr=2*ptr +1;
		}
	}
	if(2*ptr>n)
	 a[ptr]=item;
	else
	if(a[2*ptr]<item)
	 a[ptr]=item;
	else
	{
		a[ptr]=a[ptr*2];
		a[ptr*2]=item;
	}
}

int main()
{
	int a[100],n,i=1,item;
	printf("Enter the total number of elements=");
	scanf("%d",&n);
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
	for(i=n;i>=2;i--)
	 heap_sort(a,i);
	printf("\nElements after sort :  ");
	for(i=1;i<=n;i++)
	 printf("%d ",a[i]);
	return 0;
}
