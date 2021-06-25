// A Program to find Even Integers(6 to 100) As Two Prime Numbers SUM

// HEADER FILE
#include<stdio.h>

// MAXIMUM range denoted by "max"
int max=100;

// A function to check that a Number is prime or not
int prime(int x)
{
	int i,n=x/2;
	for(i=2;i<=n;i++)
	 if(x%i==0)
	  return(0);
	return(1);
}

// MAIN FUNCTION
main()
{
	int m,n,s;
	for(m=3;m<=max/2;m++)
	 if(prime(m))
	 {
	 	s=0;
	 	for(n=m;n<=max-m;n++)
	     if(prime(n))
	     {
	     	s=m+n;
	     	if(s<=max)
	     	 printf("%d=%d+%d\n",s,m,n);
	     	else
	     	 break;
	 	 }
     } 
}
