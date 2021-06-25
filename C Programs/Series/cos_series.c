// A programe to compute the series cos(x)=1-(x^2)/2!+(x^4)/4!-(x^6)/6!+....

#include<stdio.h>
#include<math.h>

int fact(x)
{
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
	return f;
}

main()
{
	int i=0;
	float x,e,n=0,p,s=0;
	printf("Enter the X of COS(X)=");
	scanf("%f",&x);
	x=x*3.14/180;
	printf("Enter the error=");
	scanf("%f",&e);
	do
	{
		p=n;
		if(i%2==0)
		 n=pow(x,i*2)/fact(i*2);
		else
		 n=-pow(x,i*2)/fact(i*2);
		s=s+n;
		i++;
	}while(fabs(fabs(n)-fabs(p))>e);
	printf("COS(%.4f)=%.4f",x,s);
}
