// A Program to convert Decimal to Hexadecimal

#include<stdio.h>

main()
{
	int n,a[10],i;
	printf("Enter A Number=");
	scanf("%d",&n);
	printf("Equivalent Hexadecimal Number=");
	while(n)
	{
		a[++i]=n&15;
		n=n>>4;
	}
	while(i)
	 if(a[i]>9)
	  printf("%c",a[i--]+55);
	 else
	 printf("%d",a[i--]);
}
