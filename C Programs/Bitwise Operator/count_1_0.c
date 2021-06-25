// A Program to count the Number of o's and 1's

#include<stdio.h>

main()
{
	int i,n,y,c0,c1;
	c0=c1=0;
	printf("Enter A Number=");
	scanf("%d",&n);
	for(i=sizeof(int)*8-1;i>=0;i--)
	{
		y=1<<i;
		(n&y)?c1++:c0++;
	}
	printf("That number has %d no's of 1 and %d no's of 0 in binary format.",c1,c0);
}
