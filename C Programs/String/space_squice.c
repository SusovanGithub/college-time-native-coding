//    A Programe  for Squeeze the blanks From a String.(INPUT=   I   am    a    boy    . | OUTPUT=I am a boy .)

#include<stdio.h>
#include<conio.h>

main()
{
 char a[200];
 int i,j;
 printf("Enter Your Name:");
 fflush(stdin);
 scanf("%[^\n]s",a);
 for(i=0;a[i]==32;i++);
 for(j=0;a[i]!=NULL;i++)
  if((a[i]!=32)||(a[i+1]!=32))
  {
   a[j]=a[i];
   j++;
  }
 a[j]=NULL;
 printf("After Space Control:-%s",a);
}


/*

another method

main()
{
	int i=0,j=0,count=0;
	char  a[50];
	printf("Enter the string=");;
	fflush(stdin);
	gets(a);
	while(a[j]!='\0')
	{
		if(a[j]==' ')
		{
			while(a[++j]==' ')
				count++;
			a[i++]=' ';
	    }
		while(a[j]!='\0'&&a[j]!=' ')
		{
			a[i]=a[j];
			i++;
			j++;
		}
	}
	a[i]=NULL;
	printf("Enter the string=%s",a);
}

*/

