// A Programe to delete the duplicate elements in an Array.

// HEADER FILE
#include<stdio.h>

// MAIN Function
main()
{
	int a[100],i,j,k,n;
	printf("Enter the Size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element of A[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	  if(a[i]==a[j])
	  {
	  	for(k=j;k<n-1;k++)
	  	 a[k]=a[k+1];
	  	n--;
	  	j--;
	  }
	printf("\nThe Array without Duplicate Elements:-\n");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);  
}
