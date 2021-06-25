#include<stdio.h>

main()
{
	FILE *fp;
	char ch,s[20],f[20];
	int i=0,j;
	printf("Enter the file Name =");
	fflush(stdin);
	gets(f);
	fp=fopen(f,"r");
	while(!feof(fp))
	{
		ch=getc(fp);
		if(ch==' '||ch==','||ch=='.'||ch=='\n')
		{
			s[i]='\0';
			strrev(s);
			printf("%s%c",s,ch);
			i=0;
		}
		else
		 s[i++]=ch;
	}
	s[i]='\0';
	strrev(s);
	printf("%s%c",s,ch);
}
