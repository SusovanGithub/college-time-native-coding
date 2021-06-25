/* A programe to implement Renge Kutta Method

the problem=(dy/dx)=x*x + y*y
*/

#include<stdio.h>

float f(float x,float y)
{
	return(x*x+y*y);
}

main()
{
	float x0,xn,h,y,d1,d2,d3,d4;
	printf("Enter the step size=");
	scanf("%f",&h);
	printf("Enter the initial of x=");
	scanf("%f",&x0);
	printf("Enter the initial of y=");
	scanf("%f",&y);
	printf("Enter the final of x=");
	scanf("%f",&xn);
	while(x0<xn)	
	{
		d1=h*f(x0,y);
		d2=h*f(x0+h/2,y+d1/2);
		d3=h*f(x0+h/2,y+d2/2);
		d4=h*f(x0+h,y+d3);
		y=y+(d1+2*d2+2*d3+d4)/6;
		x0=x0+h;
	}
	printf("ANS=%f",y);
}

