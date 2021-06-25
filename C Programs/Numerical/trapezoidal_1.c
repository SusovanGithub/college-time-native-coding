/* A program to implement Trapezoidal rule

the problem = x^3
*/

#include<stdio.h>

float f(float x)
{
	return x*x*x;
}

main()
{
	float x,h,a,b,s=0;
	int n,i;
	printf("Enter the lower Limit=");
	scanf("%f",&a);
	printf("Enter the upper Limit=");
	scanf("%f",&b);
	printf("Enter the no. of subintervals=");
	scanf("%d",&n);
	h=(b-a)/n;
	s=f(a)+f(b);
	x=a;
	for(i=1;i<n;i++)
	{
		x=x+h;
		s=s+2.0*f(x);
	}
	s=s*(h/2.0);
	printf("The Integral value = %f",s);
}
