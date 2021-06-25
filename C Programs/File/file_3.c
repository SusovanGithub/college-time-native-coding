// A Program to find the shortest line along with its length in file (file name given in command line argument)

#include<stdio.h>
#include<string.h>

main(int c,char **v)
{
	FILE *fp;
	char s[500],ls[100],ch;
	int i=0,l,m;
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
		 break;
		s[i++]=ch;
	}
	s[i++]='.';
	s[i]='\0';
	m=i;
	strcpy(ls,s);
	i=0;
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='.')
		{
			s[i++]='.';
			s[i]='\0';
			if(m>i)
			{
			 	m=i;
				strcpy(ls,s);
			}
			i=0;
		}
		else
		 s[i++]=ch;
	}
	printf("shortest line in the %s file is:-%s",v[1],ls);
	printf("\nlength of that line =");
	printf("%d",m);
}
