// A Program to find the Sum of numbers given in command line arguments recursively

// HEADER FILES
#include<stdio.h>
#include<stdlib.h>

// A  for find the SUM of N Numbers by Recurtion
int sum(int a[],int n,int i,int s)
{
	if(i==n)
	 return(s);
	else
	 s=s+a[i];
	sum(a,n,i+1,s);
}

// MAIN FUNCTION
main(int argc,char *argv[])
{
    int i,s=0,a[10];
    if(argc==1)
	{
		printf("No Numbers Found.");
		exit(0);
	}   
	for(i=1;i<argc;i++)
	 a[i-1]=atoi(argv[i]);
	printf("Numbers given in Command Line Arguments=");
	for(i=0;i<argc-1;i++)
	 printf("%d ",a[i]);
	s=sum(a,argc-1,0,s);
    printf("\nThe Sum of that Numbers=%d",s);
}
