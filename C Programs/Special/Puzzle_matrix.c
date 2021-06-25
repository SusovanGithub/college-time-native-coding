/* A Program for print a PUZZLE 
EX-
 for Row=3 & Column=3 it's print
 1 2 3
 8 9 4
 7 6 5
*/ 

// HEADER FILE
#include<stdio.h>

// MAIN FUNCTION
main()
{
	int a[10][10],i,j,r,c,k,m,l1,l2;
	printf("Enter the Row & column=");
	scanf("%d%d",&r,&c);
	m=0;
	k=1;
	l1=c;
	l2=r;
	while(k<=r*c)
	{
		for(i=m;i<l1;i++)
		 a[m][i]=k++;
		for(i--,j=m+1;j<l2;j++)
		 a[j][i]=k++;
		for(i--,j--;i>=m;i--)
		 a[j][i]=k++;
		for(i++,j--;j>m;j--)
		 a[j][i]=k++;
		m++;
		l1--;
		l2--;
	}
	for(i=0;i<r;i++)
	{
	 printf("\n");
	 for(j=0;j<c;j++)
	  printf("%d ",a[i][j]);
	}
}
