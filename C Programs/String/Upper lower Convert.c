// A programe that convert upper case to lower and vice versa

#include<stdio.h>
#include<ctype.h>

main()
{
	int i;
	char c[100];
	printf("\nEnter string  : ");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
	    if(c[i]>=65 && c[i]<=90)
	     c[i]=c[i]+32;	
	    else
	     if(c[i]>=97 && c[i]<=122)
		  c[i]=c[i]-32;	
	}
	printf("\nConverted string is  %s",c);
}
