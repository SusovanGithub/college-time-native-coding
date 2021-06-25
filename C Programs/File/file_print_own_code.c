// A program to print it's own source code 

#include<stdio.h>

main()
{
	FILE *fp;
	char c;
	fp=fopen(__FILE__,"r");   // __FILE__ is a preprocesssor macro that keeps the full path of the current file.
	if(fp==NULL)
	{
		printf("File not found");
		return;
	}
	while(!feof(fp))
	{
		c=getc(fp);
		printf("%c",c);
	}
	fclose(fp);
}
