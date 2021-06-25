/* A program to implement Newton Raphson's method

the problem = x*x*x - 8*x - 4
*/

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return(x*x*x-8*x-4);
}

float f1(float x)
{
	return(3*x*x-8);
}

float f2(float x)
{
	return(6*x);
}

main()
{
	float x,y,h,e;
	printf("Enter the Initial value=");
	scanf("%f",&x);
	if((f(x)*f2(x))>=(f1(x)*f1(x)))
	 exit(0);
	printf("Enter the error=");
	scanf("%f",&e);
	y=x-(f(x)/f1(x));
	while(fabs(y-x)>e)
	{
		x=y;
		y=x-(f(x)/f1(x));
	}
	printf("Root = %f",y);
}
