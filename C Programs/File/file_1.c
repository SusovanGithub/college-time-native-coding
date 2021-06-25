// A Program to read a file and separate the words which are starts with a vioual and save them to a new file

#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fs,*ft;
	char ch,s[30];
	int f=1,f1=1;
    printf("Enter The Source File Name=");
	fflush(stdin);
    gets(s);
    fs=fopen(s,"r");
    if(fs==NULL)
    {
      printf("Can't open source file");
      fclose(fs);
      exit(1); 
    }
    printf("Enter The Target File Name=");
    fflush(stdin);
    gets(s);
    ft=fopen(s,"w");
    if(ft==NULL)
    {
      printf("Can't open target file");
      fclose(fs);
      exit(1);
    }
    while((ch=getc(fs))!=EOF)
    {
    	if((ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')&&f)
    	{
    	    f1=1;
    		f=0;
        }
        else
        {
        	f=0;
		    if(ch==32)
		    {
		    	f=1;
		    	if(f1)
		    	 putc('\n',ft);
		    	f1=0;
			}
	    }
        if(f1)
         putc(ch,ft);
	}
    printf("File scaned and saved successfully");
	fclose(fs);
	fclose(ft);
}
