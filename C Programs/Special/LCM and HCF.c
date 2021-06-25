// A Program to find H.C.F & L.C.M of N Numbers

// HEADER FILE
#include<stdio.h>

// A function for find the HCF of 2 Numbers
int gcd(int a, int b)
{
	int n;
    while(b!=0)
    {
    	n=b;
    	b=a%b;
    	a=n;
	}
    return a;
}
 
// A fuction returns LCM of N Nunbers
long long int lcm_n(int arr[], int n)
{
    long long int ans = arr[0];
    int i;
    for (i=1;i<n;i++)
     ans = ((arr[i]*ans)/gcd(arr[i],ans));
    return ans;
}
 
// MAIN FUNCTION
main()
{
    int arr[10],n,i,hcf;
    long long int lcm;
    printf("Enter the No of Numbers=");
    scanf("%d",&n);
    printf("Enter the Numbers:-\n");
    for(i=0;i<n;i++)
    {
    	printf("A[%d]=",i);
    	scanf("%d",&arr[i]);
    }
    hcf=arr[0];
    for(i=1;i<n;i++)
     hcf=gcd(hcf,arr[i]);
    printf("\nH.C.F of the above Numbers=%d",hcf);
    lcm=lcm_n(arr,n);
    printf("\nL.C.M of the above Numbers=%lld",lcm);
}
