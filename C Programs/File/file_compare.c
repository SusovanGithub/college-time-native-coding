// A Program to compare two files are identical or not (file name given in command line argument)

#include<stdio.h>

main(int c,char **v)
{
	FILE *fp1,*fp2;
	char ch1=0,ch2;
	if(c!=3)
	{
		printf("Wrong Argument passed.");
		return;
	}
	fp1=fopen(v[1],"r");
	fp2=fopen(v[2],"r");
	if(fp1==NULL||fp2==NULL)
	{
		printf("file name is not exits.");
		return;
	}
    while(ch1!=EOF)
    {
       ch1=getc(fp1);
       ch2=getc(fp2);
       if(ch1!=ch2)
       {
       	printf("%s & %s are not Identical Files.",v[1],v[2]);
       	return;
	   }
    }
    printf("%s & %s are Identical Files.",v[1],v[2]);
}
