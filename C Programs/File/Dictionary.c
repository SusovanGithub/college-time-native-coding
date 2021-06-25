// A Program for create a small Dictionary

// HEADER FILES
#include<stdio.h>
#include<stdlib.h>

// File pointer
FILE *fp;

// The structure of the "Dictionary" Whose a variable is "s"
struct dic
{
	char s1[10];
	char s2[30];
}s;

// A function for data Entry in a File
void enter_data()
{
	char ch;
	fp=fopen("dic.txt","a");
	if(fp==NULL)
	{
		printf("\t\t\t\tFile Can't Open.\n");
		return;
	}
	do
	{
		printf("\nEnter The DATA=");
		fflush(stdin);
		gets(s.s1);
		printf("Enter It's Information:");
		fflush(stdin);
		gets(s.s2);
		fwrite(&s,sizeof(s),1,fp);
		printf("\nDo you want to enter another DATA(y/n)=");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');	
	fclose(fp);
}

// A function for searching data from the File
search_data()
{
	char s1[10];
	fp=fopen("dic.txt","rb");
	if(fp==NULL)
	{
		printf("\t\t\t\tFile Can't Open.\n");
		return;
	}
	printf("\nEnter the DATA to Search=");
	fflush(stdin);
	gets(s1);
	while(fread(&s,sizeof(s),1,fp)!=0)
	{
		if(stricmp(s1,s.s1)==0)
		{
			printf("The information is=%s",s.s2);
			return;
		}
	}
	printf("\n\t\t\t\tYour DATA is Not Found.");
	fclose(fp);
}

// MAIN FUNCTION
main()
{
	int n;
	while(1)
	{
		printf("\n1 for Enter Data.\n2 for Search Data.\n3 for Exit.\n\nEnter Your Choice=");
		scanf("%d",&n);
		switch(n)
		{
			case 1:enter_data();
				   break;
			case 2:search_data();
			       break;
			case 3:exit(0);
			default:printf("\t\t\t\tWrong Input");
		}
    }
}
