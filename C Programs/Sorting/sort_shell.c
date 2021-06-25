#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void shell_sort(int *a,int gap,int n)
{
	int i,j,t1,t2;
	if(gap == 0)
		return;
	for(i=0,j=i+gap;j<n;j++,i++)
	{
		t1=i;
		t2=j;
		while(t1>=0)
		{
			if(a[t1]>a[t2])
				swap(&a[t1],&a[t2]);
			t2=t1;
			t1=t1-gap;
		}
	}
	shell_sort(a,gap/2,n);
}



int main()
{
	int *a,n,i;
	printf("\nEnter the Number of the elements = ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the Elements :-\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe Elements Before Sort :- \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	shell_sort(a,n/2,n);
	printf("\nThe Elements After Sort :- \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}