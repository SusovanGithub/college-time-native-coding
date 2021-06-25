// A program for invers a matrix by gauss jordon

#include<stdio.h>

main()
{
	float a[20][20],b[20][20],r;
	int n,i,j,k;
	printf("Enter the order of the Matrix=");
	scanf("%d",&n);
	printf("Enter the Matrix:-\n");
	for(i=1;i<=n;i++)
	 for(j=1;j<=n;j++)
	 {
	 	scanf("%f",&a[i][j]);
	 	if(i==j)
	 	 b[i][j]=1;
	 	else
	 	 b[i][j]=0;
	 }
	for(k=1;k<=n;k++)
	 for(i=1;i<=n;i++)
	  {
	  	if(i==k)
		 continue;
		r=a[i][k]/a[k][k];
		for(j=1;j<=n;j++)
		{
			a[i][j]=a[i][j]-r*a[k][j];
			b[i][j]=b[i][j]-r*b[k][j];
		}  
	  }
	printf("ANS=\n");
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n;j++)
	 {
	 	b[i][j]=b[i][j]/a[i][i];
	 	printf("%f ",b[i][j]);
	 }
	 printf("\n");
    }
}
