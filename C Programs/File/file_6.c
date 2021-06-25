// A program to print all words of file(file name given in command line) with line number

#include<stdio.h>

main(int c,char **v)
{
	char s[50],ch;
	int ln=0,i=0;
	FILE *fp;
	if(c!=2)
	{
		printf("Wrong Argument passed.");
		return;
	}
	fp=fopen(v[1],"r");
	if(fp==NULL)
	{
		printf("file name is not exits.");
		return;
	}
	while(!feof(fp))
	{
		ch=getc(fp);
		if(ch==' ')
		{
			s[i]='\0';
			i=0;
			printf("%s line %d\n",s,ln);
		}
		else
		 if(ch=='.'||ch=='\n')
		  ln++;
		 else
		  s[i++]=ch;
	}
	fclose(fp);
}
