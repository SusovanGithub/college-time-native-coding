// A program for find the longest and shortest word in a string

#include<stdio.h>
#include<string.h>

main()
{
	char s[100],ts[50],ls[30],ss[10];
	int i=0,l=0,m=0;
	printf("Enter a String =");
	fflush(stdin);
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			ts[l]='\0';
			if(m<l)
			{
				m=l;
				strcpy(ls,ts);
			}
			i++;
			l=0;
		}
		else
		 ts[l++]=s[i++];
	}
	ts[l]='\0';
	if(m<l)
	{
		m=l;
		strcpy(ls,ts);
	}
	printf("The longest word is =%s and it's length is %d",ls,m);
	l=i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			ts[l]='\0';
			if(m>l)
			{
				m=l;
				strcpy(ss,ts);
			}
			i++;
			l=0;
		}
		else
		 ts[l++]=s[i++];
	}
	ts[l]='\0';
	if(m>l)
	{
		m=l;
		strcpy(ss,ts);
	}
	printf("\nThe Shortest word is =%s and it's length is %d",ss,m);
}
