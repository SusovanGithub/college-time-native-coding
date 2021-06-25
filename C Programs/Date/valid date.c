// A program to check the date is correct or not

#include<stdio.h> 

main() 
{ 
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},date, mon, year;
 
 printf("Enter a valid date (dd/mm/yyyy) : "); 
 scanf("%d%d%d",&date,&mon,&year); 
 
 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) // checking for leep year
  month[1]=29; 
 if(mon > 0 || mon < 13) // checking for valid date 
  if(date <= month[mon-1])
   printf("Valid date.");
  else
  {
   	printf("Not valid date.");
  	exit(0);
  }
 else
 {
    printf("Not valid date.");
  	exit(0);
 }
}
