// A Program for checking that Three given Sides can fromed a triangle or Not

// HEADER FILE
#include<stdio.h>

// MAIN FUNCTION
main()
{
	int a,b,c,temp;
	printf("Enter the Three SIDES:");
	scanf("%d%d%d",&a,&b,&c);
    // We store the max value in c 
	if(a>b)
     if(a>c)
     {
     	temp=c;
     	c=a;
     	a=temp;
	 }
	else
	 if(b>c)
	 {
	 	temp=c;
	 	c=b;
	 	b=temp;
	 }  
	if((a+b)<=c)
	 printf("It's Not a Triangle.");
	else
 	 if((a*a+b*b)>c*c)
	  if(a==b&&b==c)
	   printf("It's a Equilateral Triangle.");
	  else
	   if(a==b||b==c||c==a)
		printf("It's a Acute Isosceles Triangle.");
	   else
	    printf("It's a Acute Angle Triangle.");
	 else
	  if(a==b||b==c||c==a)
	   printf("It's a Isosceles Triangle.");
	  else
	   printf("It's a Triangle.");
}
