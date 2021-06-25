// A program to sort the names in strings

#include<stdio.h>
#include<malloc.h>
#include<string.h>

main()
{
	char **a,b[20];
	int n,i,j,k;
	printf("Enter no of Names=");
	scanf("%d",&n);
	a=(char**)malloc(n);
	for(i=0;i<n;i++)
	{
		a[i]=(char *)malloc(20);
		printf("Enter a Name:");
		fflush(stdin);
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	 for(j=0;j<n-i-1;j++)
	 {
	 	k=strcmpi(a[j],a[j+1]);
	 	if(k>0)
	 	{
	 		strcpy(b,a[j]);
	 		strcpy(a[j],a[j+1]);
	 		strcpy(a[j+1],b);
		 }
	 }
	printf("The Names After Sorting:\n");
	for(i=0;i<n;i++)
	 puts(a[i]);
}
