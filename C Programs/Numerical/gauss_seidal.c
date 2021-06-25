// Gauss Sedel

#include<stdio.h>
#include<math.h>

main()
{
	float a[10][11],b[10],c[10],e,s;
	int i,j,n,con;
	printf("Enter the order of Matrix =");
	scanf("%d",&n);
	printf("Enter the cofficent matrix & R.H.S :-\n");
	for(i=0;i<n;i++)
	 for(j=0;j<=n;j++)
	  scanf("%f",&a[i][j]);
	printf("Enter the Error =");
	scanf("%f",&e);
	for(i=0;i<n;i++)
	 b[i]=0;
	do
	{
		con=0;
		for(i=0;i<n;i++)
		 c[i]=b[i];
		for(i=0;i<n;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(i==j)
				 continue;
				else
				 s=s+a[i][j]*b[j];
			}
			b[i]=a[i][n]-s;
			b[i]=b[i]/a[i][i];
		}
		for(i=0;i<n;i++)
		 if(fabs(b[i]-c[i])>e)
		  con++;
		for(i=0;i<n;i++)
	 	 printf("%f  ",b[i]);
	 	printf("\n");
	}while(con!=0);
	printf("\n\nANS:-\n");
	for(i=0;i<n;i++)
	 printf("%f  ",b[i]);
}
