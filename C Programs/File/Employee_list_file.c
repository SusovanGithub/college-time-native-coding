// A program for creat a file and keep data of employee

#include<stdio.h>

struct employee
{
	int e_code;
	char name[30];
	int d,m,y;
	float salary;
}s[10],temp;

main()
{
	int i,j,N;
	FILE *fp;
	fp=fopen("employee.txt","w");
	printf("Enter the total no of Employeess = ");
	scanf("%d",&N);
	printf("Enter the Employee Records:-\n");
	for(i=0;i<N;i++)
	{
		printf("Enter the records for the Employee no. %d\n",i+1);
		printf("Employ code = ");
		scanf("%d",&s[i].e_code);
		printf("Name = ");
		fflush(stdin);
		gets(s[i].name);
		printf("Date Of Joining (dd/mm/yyyy) = ");
		scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
		printf("Salary = ");
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<N;i++)
	 for(j=0;j<N-i;j++)
	  if((s[j].d+s[j].m*32+s[j].y*512)<(s[j+1].d+s[j+1].m*32+s[j+1].y*512))
	  {
	  	temp=s[j];
		s[j]=s[j+1];
		s[j+1]=temp;	  	
	  }
	for(i=0;i<N;i++)
	 fprintf(fp,"%d%s%d%d%d%f\n",s[i].e_code,s[i].name,s[i].d,s[i].m,s[i].y,s[i].salary);
	fclose(fp);
}
