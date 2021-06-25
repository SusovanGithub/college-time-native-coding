/* A program to implement Secant method

the problem = x*x*x - 9*x + 1
*/

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return(x*x*x-9*x+1);
}

main()
{
	float x,y,a0,b0,a,b,e,temp;
	a=0;b=1;
	a0=0;b0=-1;
	printf("Enter the error=");
	scanf("%f",&e);
	while(!((f(a)*f(b)<0)||(f(a0)*f(b0)<0)))
	{
		a=b;
		b=b+1;
		a0=b0;
		b0=b0-1;
	}
	if(f(a0)*f(b0)<0)
	{
		a=a0;
		b=b0;
	}
	if(f(a)>0)
	{
		temp=a;
		a=b;
		b=temp;
	}
	x=b;
	y=a-(f(a)/(f(a)-f(x)))*(a-x);
	while(fabs(y-x)>e)
	{
		x=y;
		y=a-(f(a)/(f(a)-f(x)))*(a-x);
	}
	printf("Root =%f",y);
}
