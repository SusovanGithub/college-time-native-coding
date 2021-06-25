// A Programe for compute a SERICES: (1/2^2)-(1/3^3)+(1/4^2)-(1/5^3)+(1/6^2)-(1/7^3)+..........

// HEADER FILE
#include<stdio.h>

// MAIN Function
main()
{
	int i,n;
	float s=0;
	printf("Enter the number of terms:");
    scanf("%d",&n);
    n=n+2;
    for(i=2;i<n;i++)
    {	
		if(i%2)
    	 s=s-(float)1/(i*i*i);
    	else
		 s=s+(float)1/(i*i); 
    }
    printf("The Result is=%f",s);
}

