// A program for string revers

#include<stdio.h>

main()
{
	char a[20],temp;
	int i,n;
	printf("Enter the string:");
	fflush(stdin);
	gets(a);
	for(i=0;a[i]!='\0';i++);  // for finding the length of the string
	n=i;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("The revers string is:%s",a);
}
