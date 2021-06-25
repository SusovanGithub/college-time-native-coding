//  A Program for deleting Comments line from a c file

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

FILE *fp,*fp1;

void single()
{
	char ch1;
    while((ch1=fgetc(fp))!=EOF)  
    {
        if(ch1=='\n')   
        return;  
    }
}

void multiple()
{
	char ch1,ch2;
    while((ch1=fgetc(fp))!=EOF)   
    {
        if(ch1=='*')    
        {
            ch2=fgetc(fp);  
            if(ch2=='/')  
                return;
        }
   }
}

main(int c,char **v)
{
    char ch,ch1;
	if(c!=2)
	{
		printf("Wrong Argument passed.");
		return;
	}
    fp=fopen(v[1],"r");
    fp1=fopen("m","w");    
    while((ch=fgetc(fp))!=EOF)       
    {	
        if(ch=='/')   
    	{
        	if((ch1=fgetc(fp))=='*') 
			 multiple();
        	else if(ch1=='/')   
			 single();
        	else
        	{
            	fputc(ch,fp1);
            	fputc(ch1,fp1);
        	}	
    	}	
    	else
    	{
        	fputc(ch,fp1);
    	}	   
    }
	fclose(fp);     
    fclose(fp1);
    remove(v[1]);
    rename("m",v[1]);
    printf("Comment lines are deleted from the %s file.",v[1]);
}
