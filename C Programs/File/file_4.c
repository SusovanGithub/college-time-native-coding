// A Program to find the longest line along with its length in file (file name given in command line argument)

#include<stdio.h>
#include<string.h>

main(int c,char **v)
{
	FILE *fp;
	char s[500],ls[300],ch;
	int i=0,m=0;
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
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='.')
		{
			s[i++]='.';
			s[i]='\0';
			if(m<i)
			{
			 	m=i;
				strcpy(ls,s);
			}
			i=0;
		}
		else
		 s[i++]=ch;
	}
	printf("longest line in the %s file is:-%s",v[1],ls);
	printf("\nlength of that line =%d",m);
}
