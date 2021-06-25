// A Program to repregent a date into a intezer

#include<stdio.h>

main()
{
	int d,m,y,n;
	printf("Enter the Date(DD/MM/YYYY)=");
	fflush(stdin);
	scanf("%d%d%d",&d,&m,&y);
	n=512*y+32*m+d;
	d=n&31;
	n=n>>5;
	m=n&15;
	n=n>>4;
	y=n;
	printf("\n%d %d %d",d,m,y);
}
