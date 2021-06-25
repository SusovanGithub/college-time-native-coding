#include <stdio.h>
#include<stdlib.h>

void bouble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-i-1;j++)
	 	if(a[j]>a[j+1])
	 	{
	 		temp=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
	 	}
}

void selection_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 	if(a[i]>a[j])
	 	{
	 		temp=a[j];
	 		a[j]=a[i];
	 		a[i]=temp;
	 	}
}

void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}
}

void display(int a[],int n)
{
	int i;
	printf("\nElements are :- \n");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
}

int main()
{
	int *a,len,i,n;
	printf("Enter the lenth of the Array = ");
	scanf("%d",&len);
	a = (int *)malloc(sizeof(len));
	printf("\nEnter the Elements :-\n");
	for(i=0;i<len;i++)
	{
		printf("\nA[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	display(a,len);
	printf("\n1 for bouble sort.\n2 for selection sort.\n3 for insertion sort.\nEnter Your choice = ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:bouble_sort(a,len);
				break;
		case 2:selection_sort(a,len);
				break;
		case 3:insertion_sort(a,len);
				break;
		case 4:exit(0);
	}
	printf("\nAfter Sorting :- ");
	display(a,len);
}