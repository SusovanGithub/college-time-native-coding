#include<stdio.h>
#include<conio.h>

void main()
{
 int l,u,i,s;
 clrscr();
 printf("Enter The Lower Bound:");
 scanf("%d",&l);
 printf("Enter The Upper Bound:");
 scanf("%d",&u);
 for(;l<=u;l++)
 {
  s=0;
  for(i=1;i<l;i++)
   if(l%i==0)
    s=s+i;
  if(l==s)
   printf("%d ",l);
 }
 getch();
}
