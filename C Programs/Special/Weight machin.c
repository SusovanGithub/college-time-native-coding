// A Program for find The Appropriate weight format in the Weight machine for given weight

// HEADER FIlE
#include<stdio.h>

// A function for find the nearest weight
int sum(int a[],int i)
{
	int s=0;
	i++;
	while(i<4)
	{
		s=s+a[i];
		i++;		
	}
	return(s);
}

// MAIN FUCTION
main()
{
	int a[4],n,i,l[4],r[4],lc=0,rc=0;
	a[0]=27;
	a[1]=9;
	a[2]=3;
	a[3]=1;
	printf("INPUT WEIGHT IS=");
	scanf("%d",&n);
	r[rc++]=n;
	while(n!=0)
	{
		i=0;
	    while(n>0)
	    {
		    if(n>sum(a,i))
		    {
				n=n-a[i];
				l[lc++]=a[i];
			}
			i++;
		}
		n=n*(-1);
		i=0;
		while(n>0)
		{
			if(n>sum(a,i))
			{
				n=n-a[i];
				r[rc++]=a[i];
			}
			i++;
		}
		n=n*(-1);
	}
	printf("\nLEFT Pan's WEIGHTS=%d",l[0]);
	for(i=1;i<lc;i++)
	 printf("+%d",l[i]);
	printf("\nRIGHT Pan's WEIGHTS=%d",r[0]);
	for(i=1;i<rc;i++)
	 printf("+%d",r[i]);
}
