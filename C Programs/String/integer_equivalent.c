// A Program to convert an integer to it's equivalent string

// HEADER FILE
#include<stdio.h>

// MAIN FUNCTION
main()
{
	int n,i=0,f=0;
	char s[20];
	printf("Enter a Number=");
	scanf("%d",&n);
	if(n<0)
	{
		f=1;
		n=n*(-1);
	}	 
	while(n>0)
	{
		s[i++]=n%10+48;
		n=n/10;
	}
	if(f)
	 s[i]='-';
	strrev(s);
	printf("Your Entered Number as String format=");
	puts(s);
}
