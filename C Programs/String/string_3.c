/*A programe for print a input string as an Upper case.
INPUT=Bat
OUTPUT=B
        A
         T

*/
#include<stdio.h>
#include<ctype.h>

main()
{
	char str[20];
	int i,j;
	printf("Enter Any String:");
	fflush(stdin);
	gets(str);
	printf("The String Is:-\n");
	for(i=0;str[i]!=NULL;i++)
	{
	 for(j=0;j<i;j++)
	  printf(" ");
	 printf("%c\n",toupper(str[i]));
    }
}       
