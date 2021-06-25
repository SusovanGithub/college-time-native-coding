// A Programe for convert a number any base to another base(2-16)

// HEADER FILES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

char num[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

// A function for convert a number of any base to base(10) number
long int o_to_d(int b)
{
	int i,j;
	long int dig=0;
	char a[20];
	printf("Enter the NUMBER=");
	fflush(stdin);
	gets(a);
	j=strlen(a);
	for(i=0,j=j-1;a[i]!='\0';i++,j--)
	{
		if(isdigit(a[i]))
		{
			a[i]=a[i]-48;
			if(a[i]>=b)
			{
				printf("Wrong Input.\n");
				main();
			}
			dig=dig+a[i]*pow(b,j);
		}
		else
		 if(isalpha(a[i]))
	     {
			a[i]=a[i]-55;
			if(a[i]>=b)
			{
				printf("Wrong Input.\n");
				main();
			}
			dig=dig+a[i]*pow(b,j);
		 }
	}	
	return(dig);
}

// A function for convert a number of base(10) to another base number
void d_to_o(int b,long int dig)
{
	int a[20],i=0;
	a[0]=0;
	while(dig>0)
	{
		a[i]=dig%b;
		dig=dig/b;
		i++;
	}
	printf("That NUMBER in BASE(%d)=",b);
	for(i=i-1;i>=0;i--)
	 printf("%c",num[a[i]]);
	exit(0); 
}

// MAIN function
main()
{
	int b;
	long int dig;
	printf("Enter the BASE of the Number(2-16)=");
	scanf("%d",&b);
    while(b>16||b<2)
	{
		printf("Your base no is NOT CORRECT.\n");
		printf("Enter the BASE of the Number(2-16)=");
        scanf("%d",&b);
	}
	dig=o_to_d(b);
	printf("Enter the BASE to convert that Number(2-16)=");
	scanf("%d",&b);
	while(b>16||b<2)
	{
		printf("Your base no is NOT CORRECT.\n");
		printf("Enter the BASE to convert that Number(2-16)=");
        scanf("%d",&b);
	}
	d_to_o(b,dig);
}
