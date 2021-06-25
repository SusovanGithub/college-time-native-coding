// A program to read a file "a.txt" and stroe those lines of "a.txt" to "b.txt" which have more than 15 characters

#include<stdio.h>
#include<string.h>

main()
{
	FILE *fp,*fp1;
	char s[500],ch;
	int i=0,l,c=0;
	fp=fopen("a.txt","r");
	fp1=fopen("b.txt","w");
	if(fp==NULL || fp1==NULL)
	{
		printf("files dno't exits.");
		return;
	}
	while(!feof(fp))
	{
		ch=getc(fp);
		if(ch=='.')
		{
			s[i++]='.';
			s[i]='\0';
			l=strlen(s);
			i=0;
			if(l>15)
			{
			 	fputs(s,fp1);
			 	c=c+1;
			}
		}
		else
		 s[i++]=ch;
	}
	if(c!=0)
	{
		printf("Copy complete a.txt to b.txt");
		printf("There %d lines have more than 15 characters",c);
	}
	else
	 printf("There are no line with more than 15 characters.");
	fclose(fp);
	fclose(fp1);
}
