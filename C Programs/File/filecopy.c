// A Program to copy a file to another file 

#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fs,*ft;
    char ch,s[20];
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
    while(1)
    {
       ch=getc(fs);
	   if(ch==EOF)
         break;
       else
         putc(ch,ft);
    }
    printf("File copied successfully");
    fclose(fs);
    fclose(ft);
}
  
