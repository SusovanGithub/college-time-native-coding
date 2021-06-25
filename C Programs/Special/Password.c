//  A Program to implement password mechanism

// HEADER FILES
#include<stdio.h>
#include<string.h>

// MAIN FUNCTION
main()
{
 char s[16],ch;
 char c[]="12345678";
 int i,j,n;
 for(j=3;j>0;j--)
 {
  printf("Enter The Password:");
  for(i=0;i<15;i++)
  {
   fflush(stdin);
   ch=getch();
   if(ch==13)
    break;
   s[i]=ch;
   printf("*");
  }
  s[i]='\0';
  n=strcmp(c,s);
  if(n==0)
   {
    printf("\n\t\t\t\t::Wright Password::");
    break;
   }
  else
  {
   printf("\n\t\t\t\t::Wrong Password::\n");
   printf("\t\t\t     You  Can Try %d More Times\n\n",j-1);
  }
 }
}

