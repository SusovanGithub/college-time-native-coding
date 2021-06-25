// A program to print a number in it's equivalent word

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char s[20];
	char *dig[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
	int i,n,j;
	printf("Enter a number=");
	fflush(stdin);
	gets(s);
	n=strlen(s);
	i=0;
	while(1)
	{
		switch(n)
		{
			case 9:j=s[i]-48;
				   if(j==1)
				   {
				   		j=s[++i]-48;
				   		n=n-2;
				   		i++;
				   		printf("%s crors ",dig[j+10]);
				   		break;
				   }
				   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
			       printf("%s",dig[j+18]);
			       i++;
		    	   n--;
			case 8:j=s[i]-48;
			       if(j==0)
				   {
				   		n--;
				   		i++;
				   		printf(" crore ");
				   		break;
				   }
		    	   printf("%s crore ",dig[j]);
		    	   i++;
		    	   n--;
		    case 7:j=s[i]-48;
				   if(j==1)
				   {
				   		j=s[++i]-48;
				   		n=n-2;
				   		i++;
				   		printf("%s lakh ",dig[j+10]);
				   		break;
				   }
				   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
			       printf("%s",dig[j+18]);
			       i++;
		    	   n--;
			case 6:j=s[i]-48;
			       if(j==0)
				   {
				   		n--;
				   		i++;
				   		printf(" lakh ");
				   		break;
				   }
		    	   printf("%s lakh ",dig[j]);
		    	   i++;
		    	   n--;
		    case 5:j=s[i]-48;
				   if(j==1)
				   {
				   		j=s[++i]-48;
				   		n=n-2;
				   		i++;
				   		printf("%s thousend ",dig[j+10]);
				   		break;
				   }
				   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
			       printf("%s",dig[j+18]);
			       i++;
		    	   n--;
		    case 4:j=s[i]-48;
		    	   if(j==0)
				   {
				   		n--;
				   		i++;
				   		printf(" thousend ");
				   		break;
				   }
		    	   printf("%s thousend ",dig[j]);
		    	   i++;
		    	   n--;
		    case 3:j=s[i]-48;
		    	   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
		    	   printf("%s hundred ",dig[j]);
		    	   i++;
		    	   n--;
		    case 2:j=s[i]-48;
				   if(j==1)
				   {
				   		j=s[++i]-48;
				   		n=n-2;
				   		i++;
				   		printf("%s ",dig[j+10]);
				   		break;
				   }
				   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
			       printf("%s",dig[j+18]);
			       i++;
		    	   n--;
		    case 1:j=s[i]-48;
		      	   if(j==0)
				   {
				   		n--;
				   		i++;
				   		break;
				   }
		    	   printf("%s ",dig[j]);
		    	   i++;
		    	   n--;
		    case 0:exit(0);
		}
	}
}
