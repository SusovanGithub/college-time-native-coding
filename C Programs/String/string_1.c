// A program to reverse the words of a string where ',' '.' is the terminals

#include<stdio.h>

main()
{
	int i,j,k;
	char s[30],temp[10];
	printf("Enter a string:");
	fflush(stdin);
	gets(s);
	i=k=0;
	j=-1;
	while(s[i]!='\0')
	{
		if(s[i]==' '||s[i]==','||s[i]=='.')
		{
		    while(j!=-1)
		     s[k++]=temp[j--];
		    s[k]=s[i];
		    i=i+1;
		    k=i;
		    j=-1;
		}
		else	
		 temp[++j]=s[i++];	
	}
	printf("Output of that string=%s",s);
}
