// A Program to convert decimal to octal

#include<stdio.h>

// A function to convert the decimal number to octal by recurtion
int octal(int n)
{
	if(n==0)
	 return;
	octal(n>>3);
	printf("%d",n&7);
}

main()
{
	int n;
	printf("Enter A Number=");
	scanf("%d",&n);
	printf("Equivalent Octal Number=");
	octal(n);
}
