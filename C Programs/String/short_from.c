//   A Programe for Display The approprite short from of a Full Name.(INPUT=Susovan Das | OUTPUT=S.Das)

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

main()
{
 char a[100];
 int i,f,j;
 printf("Enter Your Name:");
 fflush(stdin);
 gets(a);
 printf("The Shorted Name Is:-");
 for(i=0,f=1;a[i]!=NULL;i++)
 {
  if(f&&(isalpha(a[i])))
  {
   printf("%c.",a[i]);
   f=0;
   j=i+1;
   continue;
  }
  if(a[i]==32&&!f)
   f=1;
 }
 printf("\b");
 for(;a[j]!=NULL;j++)
  printf("%c",a[j]);
}
