/* A program that prints two prime triplets

like (p,p+2,p+6) or (p,p+4,p+6)

*/

#include<stdio.h>

int prime(int x)
{
	int i;
	for(i=2;i<x/2;i++)
	 if(x%i==0)
	  return(0);
	return(1);
}

main()
{
	int i,n=0;
	for(i=2;n<20;i++)
	{
		if(prime(i) && prime(i+6))
		{
			if(prime(i+2))
			{
				printf("%d %d %d\n",i,i+2,i+6);
				n++;
			}
			else
			 if(prime(i+4))
			 {
			     printf("%d %d %d\n",i,i+4,i+6);
				 n++;
			 }
		}
	}
}
