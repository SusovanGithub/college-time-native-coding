/* A program to implement Trapezoidal rule

the problem = x+1/x
*/

#include<stdio.h>

float f(float x)
{
	return (x+1/x);
}

main()
{
	float x,h,a,b,s=0;
	int i,n;
	printf("Enter the lower limit=");
	scanf("%f",&a);
	printf("Enter the upper limit=");
	scanf("%f",&b);
	printf("Enter the no. of subintervals=");
	scanf("%d",&n);
	h=(b-a)/n;
	s=f(a)+f(b);
	x=a;
	for(i=1;i<n;i++)
	{
		x=x+h;
		s=s+2*f(x);
	}
	s=s*(h/2);
	printf("The Integral value = %f",s);
}
