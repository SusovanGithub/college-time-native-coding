// Radix Sort

#include<stdio.h>
#include<math.h>

int main()
{
	int r[20][10],e[20],len,i,j,k,n,p,pos,top[10];
	printf("Enter the no. of Elements:");
	scanf("%d",&n);
	printf("Enter the highest length of Element:");
	scanf("%d",&len);
	printf("Enter the Element for sorting:-\n");
	for(i=0;i<n;i++)
	 scanf("%d",&e[i]);
	// Radix Sort technic begins
	for(i=0;i<len;i++)
	{
		// Initialize the stack
		for(j=0;j<10;j++)
		 top[j]=-1;
		// Separate digits from numbers and put into stack
		for(j=0;j<n;j++)
		{
			pos=(int)(e[j]/pow(10,i))%10;
			r[pos][++top[pos]]=e[j];
		}
		// Collect elements from stack to the array
		for(j=0,p=-1;j<10;j++)
		 for(k=0;k<=top[j];k++)
		  e[++p]=r[j][k];
	}
	printf("Elements is Sorted order:-  ");
	for(i=0;i<n;i++)
	 printf("%d ",e[i]);
	return 0; 
}
