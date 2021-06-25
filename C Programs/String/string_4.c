//  A Progarm For printing a String By Own Made Function

#include<stdio.h>


void print_string(char *a)
{
	int i;
	printf("Your Entered String Is:");
	for(i=0;a[i]!=NULL;i++)
	 printf("%c",a[i]);
}

main()
{
	char str[20];
	printf("Enter a String:");
	fflush(stdin);
	gets(str);
	print_string(str);
}
