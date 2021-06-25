/*A programe for print a input string as an Upper case.
INPUT=Bat
OUTPUT=
       B
       A
       T
*/

// HEADER FILES
#include<stdio.h>
#include<ctype.h>

// MAIN Function
main()
{
	char str[20];
	int i;
	printf("Enter Any String:");
	fflush(stdin);
	gets(str);
	printf("The String Is:-");
	for(i=0;str[i]!=NULL;i++)
	 printf("\n%c",toupper(str[i]));
}       

