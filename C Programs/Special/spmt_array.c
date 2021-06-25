#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **a,**sm,i,j,c,r,nz=0,k=0;
	printf("\nEnter the Size of the Matrix(row,coll) :- ");
	scanf("%d%d",&r,&c);
	a=(int**)malloc(r*sizeof(int*));
	printf("\nEnter the Elemnets of the Matrix :- \n");
	for(i=0;i<r;i++)
	{
		a[i] = (int*)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			printf("Matrix[%d][%d] = ",i+1,j+1	);
			scanf("%d",&a[i][j]);
			if(a[i][j])
				nz++;
		}
	}
	printf("\nElements In the Matrix :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("\nThe Percentage of non-zero element in the Matrix is = %.2f(%)",(float)(nz*100)/(r*c));
	printf("\n\nSparse Matrix Representation of the above Matrix is ;-\n");
	sm=(int**)malloc(nz*sizeof(int*));
	for(i=0;i<nz;i++)
		sm[i] = (int*)malloc(3*sizeof(int));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(a[i][j])
			{
				sm[k][0]=a[i][j];
				sm[k][1]=i;
				sm[k++][2]=j;
			}
	for(i=0;i<nz;i++)
		printf("%d %d %d\n",sm[i][0],sm[i][1],sm[i][2]);
}