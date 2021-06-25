// A program for creat a file and keep data of students

#include<stdio.h>
#define N 2

struct student
{
	int roll;
	char name[30];
	int d,m,y;
	float marks;
}s[N],temp;

main()
{
	int i,j;
	FILE *fp;
	fp=fopen("student.txt","w");
	printf("Enter the Students Records:-\n");
	for(i=0;i<N;i++)
	{
		printf("Enter the records for the student no. %d\n",i+1);
		printf("Roll No = ");
		scanf("%d",&s[i].roll);
		printf("Name = ");
		fflush(stdin);
		gets(s[i].name);
		printf("Date Of Birth (dd/mm/yyyy) = ");
		scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
		printf("Marks = ");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<N;i++)
	 for(j=0;j<N-i;j++)
	  if(s[j].marks<s[j+1].marks)
	  {
	  	temp=s[j];
		s[j]=s[j+1];
		s[j+1]=temp;	  	
	  }
	for(i=0;i<N;i++)
	 fprintf(fp,"%d%s%d%d%d%f\n",s[i].roll,s[i].name,s[i].d,s[i].m,s[i].y,s[i].marks);
	fclose(fp);
}
