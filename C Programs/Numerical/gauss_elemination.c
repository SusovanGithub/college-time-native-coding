// A program gauss elemination 

#include<stdio.h>

main()
{
	float a[20][20],r,x[20];
	int i,n,j,k;
	printf("Enter the Order of the matrex:");
	scanf("%d",&n);
	printf("entr the coefficeant & RHS:-\n");
	for(i=1;i<=n;i++)
	 for(j=1;j<=n+1;j++)
	  scanf("%f",&a[i][j]);
	for(k=1;k<n;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			r=a[i][k]/a[k][k];
			for(j=1;j<=n+1;j++)
			 a[i][j]=a[i][j]-r*a[k][j];
		}
	}
	for(k=n;k>=1;k--)
	{
		x[k]=a[k][n+1];
		for(j=k+1;j<=n;j++)
		 x[k]=x[k]-a[k][j]*x[j];
		x[k]=x[k]/a[k][k];
	}
	printf("ANS=\n");
	for(i=1;i<=n;i++)
	 printf("x(%d) = %f\n",i,x[i]);
}
