#include <stdio.h>
#include<stdlib.h>

void bouble_sortM(int a[],int n)
{
	int i,j,temp,flag=1;
	for(i=0;i<n-1 && flag;i++)
	{
		flag = 0;
	 	for(j=0;j<n-i-1;j++)
	 	 if(a[j]>a[j+1])
	 	 {
	 	    temp=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
	 		flag = 1;
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
	bouble_sortM(a,len);
	printf("\nAfter Sorting :- ");
	display(a,len);
}