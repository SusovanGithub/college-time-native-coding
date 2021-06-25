// A Programe to create an encrepted file and read it

#include<stdio.h>

void create_encrepted_file()
{
	FILE *fp;
	char c,s[20];
	int i=1;
	printf("Enter The File Name:");
	fflush(stdin);
	gets(s);
	fp=fopen(s,"w");
	if(fp==NULL)
	{
		printf("File can't be opened");
		return;
	}
	printf("Enter the Records of the File Now:-\n");
	while(1)
	{
		fflush(stdin);
		c=getche();
		if(c==27)
		 break;
		c=c-2;
		putc(c,fp);
    }
    fclose(fp);
}

void read_encrepted_file()
{
	FILE *fp;
	char c,s[20];
	int i=1;
	printf("Enter The File Name:");
	fflush(stdin);
	gets(s);
	fp=fopen(s,"r");
	if(fp==NULL)
	{
		printf("File can't be opened");
		return;
	}
	printf("The Recoreds of the File:-\n");
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
		 break;
		c=c+2;
		printf("%c",c);
    }
    fclose(fp);
}

main()
{
	int n;
	while(1)
	{
	 printf("\n1 for STORE Records in a FILE.\n2 for READ Records from FILE.\n3 for EXIT.\n\t\t\t\tEnter your choice=");
	 scanf("%d",&n);
	 switch(n)
	 {
 		case 1:create_encrepted_file();
		       break;
		case 2:read_encrepted_file();
		       break;
		case 3:exit(0);
	 }
    }
}
