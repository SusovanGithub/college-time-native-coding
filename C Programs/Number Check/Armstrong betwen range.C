#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 int n,r,i,s,p,l,u,o;
 clrscr();
 printf("Enter The Lower Bound:");
 scanf("%d",&l);
 printf("Enter The Upper Bound:");
 scanf("%d",&u);
 printf("Armstong numbers are::-\n");
 for(i=l;i<=u;i++)
 {
  o=0;
  s=0;
  n=i;
  while(n>0)
  {
   n=n/10;
   o=o+1;
  }
  n=i;
  while(n>0)
  {
   r=n%10;
   p=pow(r,o);
   s=s+p;
   n=n/10;
  }
  if(i==s)
   printf("%d ",s);
 }
 getch();
}
