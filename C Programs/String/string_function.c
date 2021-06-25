//  A Program that simulates String using Menu Driven Program.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

main()
{
	int i,j,f;
	char c,str1[50],str2[50],str3[100];
	do
	{
	 printf("\n\na for Check the String Length.");
	 printf("\nb for Copy the String.");
	 printf("\nc for Concat two Strings.");
	 printf("\nd for Reverse a String.");
	 printf("\ne for Compare two Strings.");
	 printf("\nf for Count the Word Number of a String.");
	 printf("\ng for Count the Letter Number of a String.");
	 printf("\nh For Exit.");
	 printf("\n\nEnter Your Choise:");
	 fflush(stdin);
	 c=getche();
	 printf("\n");
	 switch(c)
	 {
	 	case 'a':printf("\nEnter The String:");
	 	         fflush(stdin);
	 	         gets(str1);
	 	         printf("Length is=%d",strlen(str1));
	 	         break;
	 	case 'b':printf("\nEnter A String to Copy:");
		         fflush(stdin);
		         gets(str1);
				 printf("The Copied String is:");
				 strcpy(str2,str1);
				 puts(str2);
				 break;     
		case 'c':printf("\nEnter The First String:");
		         fflush(stdin);
				 gets(str3);
				 printf("Enter The Second String:");
				 fflush(stdin);
				 gets(str2);
				 strcat(str3,str2);
				 printf("The Concatenated String is:%s",str3);
				 break;
		case 'd':printf("\nEnter The String:");
		         fflush(stdin);
				 gets(str1);
				 strrev(str1);
				 printf("The Reversed String is:%s",str1);
				 break;
		case 'e':printf("\nEnter the First String:");
		         fflush(stdin);
				 gets(str1);
				 printf("Enter the Second Strin:");
				 fflush(stdin);
				 gets(str2);
				 if(strcmp(str1,str2))
				  printf("Two Strings are NOT SAME");
				 else
				  printf("Two Strings are SAME");
				 break;
		case 'f':printf("\nEnter The String:");
		         fflush(stdin);
				 gets(str1);
				 for(i=0,f=1,j=0;str1[i]!=NULL;i++)
				 {
				 	if(f&&(isalpha(str1[i])))
                    {
                      f=0;
                      j=j+1;
                      continue;
                    } 
                    if(str1[i]==32&&!f)
                     f=1;
				 }
				 printf("This String Have %d Words",j);
				 break;		
		case 'g':printf("\nEnter The String:");
		         fflush(stdin);
				 gets(str1);
				 for(i=0,j=0;str1[i]!=NULL;i++)
				 	if(isalpha(str1[i]))
                      j=j+1;
				 printf("This String Have %d Letters",j);
				 break;    
		case 'h':exit(0);
		default: printf("\nWrong INPUT");
		         break;
	 }
    }while(1);
}
