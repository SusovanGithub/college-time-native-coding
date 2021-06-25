/* A program to implement Simpson's 1/3 rule

the problem = e^sinx
*/

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return exp(sin(x));
}

main()
{
	float x,h,a,b,s=0;
	int n,i;
	printf("Enter the lower Limit=");
	scanf("%f",&a);
	printf("Enter the upper Limit=");
	scanf("%f",&b);
	printf("Enter the no. of subintervals(Even)=");
	scanf("%d",&n);
	h=(b-a)/n;
	s=f(a)+f(b);
	x=a;
	for(i=1;i<n;i++)
	{
		x=x+h;
		if(i%2)
		 s=s+4*f(x);
		else
		 s=s+2*f(x);
	}
	s=s*(h/3);
	printf("The Integral value = %f",s);
}
