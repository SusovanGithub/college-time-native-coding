											/* Header Files */
#include <stdio.h>
#include <stdlib.h>

											/* Declaration */
#define N 50  // Hight Number of element can store

int arr[N];   // Array name 
int len;      // Array size

											/* Creation */
// Create a array
void create_array()
{
	int i;
	while(1)
	{
		printf("\nEnter the Number Of Elements (less then %d)= ",N);
		scanf("%d",&len);
		if(len>N || len<1)
		 printf("Wrong size of the Array...");
		else
		 break;
	}
	printf("Enter the Elements :-\n");
	for(i=0;i<len;i++)
	{
		printf("A[%d] = ",i+1 );
		scanf("%d",&arr[i]);
	}
}

											/* Insertion */
// Insert an element at beg
void insert_beg()
{
	int i,n,temp;
	if(len>=N)
	{
		printf("\nArray is full...");
		return;
	}
	printf("\nEnter the element = ");
	scanf("%d",&n);
	for(i=0;i<len;i++)
	{
		temp=arr[i];
		arr[i]=n;
		n=temp;
	}
	arr[i]=n;
	len=len+1;
}

// Insert an element at end
void insert_end()
{
	int n;
	if(len>=N)
	{
		printf("\nArray is full...");
		return;
	}
	printf("\nEnter the element = ");
	scanf("%d",&n);
	arr[len]=n;
	len=len+1;
}

// Insert an element at any Position
void insert_any()
{
	int i,n,temp,pos;
	if(len>=N)
	{
		printf("\nArray is full...");
		return;
	}
	printf("\nEnter the element = ");
	scanf("%d",&n);
    printf("\nEnter the Position =");
    scanf("%d",&pos);
    for(i=pos-1;i<len;i++)
    {
    	temp=arr[i];
    	arr[i]=n;
    	n=temp;
    }
    if(i>=len)
     arr[len]=n;
 	else
     arr[i]=n;
    len=len+1;
}

// Insert an element after an element
void insert_after()
{
	int i,n,af,temp;
	if(len>=N)
	{
		printf("\nArray is full...");
		return;
	}
	printf("\nEnter the element to insert = ");
	scanf("%d",&n);
    printf("\nEnter the element after you want to insert %d = ",n);
    scanf("%d",&af);
    for(i=0;i<len;i++)
     if(arr[i]==af)
      break;
  	if(i==len)
  	{
  		printf("\n%d is not exist in the array",af);
  		return;
  	}
    for(i=i+1;i<len;i++)
    {
    	temp=arr[i];
    	arr[i]=n;
    	n=temp;
    }
    arr[i]=n;
    len=len+1;
}

// Insert an element before an element
void insert_before()
{
	int i,n,bf,temp;
	if(len>=N)
	{
		printf("\nArray is full...");
		return;
	}
	printf("\nEnter the element to insert = ");
	scanf("%d",&n);
    printf("\nEnter the element before you want to insert %d = ",n);
    scanf("%d",&bf);
    for(i=0;i<len;i++)
     if(arr[i]==bf)
      break;
    if(i==len)
  	{
  		printf("\n%d is not exist in the array",bf);
  		return;
  	}
    for(;i<len;i++)
    {
    	temp=arr[i];
    	arr[i]=n;
    	n=temp;
    }
    arr[i]=n;
    len=len+1;
}

											/* Deletion */
// Delete an element from the beginning
void del_beg()
{
	int i;
	if(len==0)
	{
		printf("\nArray is empty.");
		return;
	}
	printf("\n%d is Deleted.",arr[0]);
	for(i=0;i<len-1;i++)
	 arr[i]=arr[i+1];
	len = len - 1;
}

// Delete an element from the end
void del_end()
{
	if(len==0)
	{
		printf("\nArray is empty.");
		return;
	}
	printf("\n%d is Deleted.",arr[len-1]);
	len = len - 1;
}

// Delete any element
void del_any()
{
	int i,n;
	if(len==0)
	{
		printf("\nArray is empty.");
		return;
	}
	printf("\nEnter the element to delete = ");
	scanf("%d",&n);
	for(i=0;i<len && arr[i]!=n;i++);
	if(i==len)
	{
		printf("\n%d is not found.",n);
		return;
	}
	printf("\n%d is deleted.",arr[i]);
	for(;i<len-1;i++)
	 arr[i]=arr[i+1];
	len = len - 1;
}

//  Delete an element after an element
void del_after()
{
	int i,n;
	if(len==0)
	{
		printf("\nArray is empty.");
		return;
	}
	printf("\nEnter the element whose after element have to delete = ");
	scanf("%d",&n);
	for(i=0;i<len && arr[i]!=n;i++);
	if(i==len)
	{
		printf("\n%d is not found.",n);
		return;
	}
	else
	 if(i==len-1)
	 {
	 	printf("\n%d is the last element so farther deletion not possible.",n);
	 	return;
	 }
	printf("\n%d is deleted.",arr[i+1]);
	for(i=i+1;i<len-1;i++)
	 arr[i]=arr[i+1];
	len = len - 1;
}

// Delete an element before an element
void del_before()
{
	int i,n;
	if(len==0)
	{
		printf("\nArray is empty.");
		return;
	}
	printf("\nEnter the element whose before element have to delete = ");
	scanf("%d",&n);
	for(i=0;i<len && arr[i]!=n;i++);
	if(i==len)
	{
		printf("\n%d is not found.",n);
		return;
	}
	else
	 if(i==0)
	 {
	 	printf("\n%d is the first element so farther deletion not possible.",n);
	 	return;
	 }
	printf("\n%d is deleted.",arr[i-1]);
	for(i=i-1;i<len-1;i++)
	 arr[i]=arr[i+1];
	len = len - 1;
}

											/* Display */
// Display the array
void display()
{
	int i;
	printf("\nThe Elements are :-\n");
	for (i = 0; i < len; i++)
	 printf("A[%d] = %d\n",i+1,arr[i]);
}

// Reverse display of the array
void r_display()
{
	int i;
	printf("\nThe Elements are :-\n");
	for (i = len-1 ; i >= 0; i--)
	 printf("A[%d] = %d\n",i+1,arr[i]);
}

											/* Sorting */
// Sorting of the array
void sort()
{
	int i,j,temp;
	for(i=0;i<len;i++)
	 for(j=i+1;j<len;j++)
	  if(arr[i]>arr[j])
	  {
	  	temp = arr[i];
	  	arr[i] = arr[j];
	  	arr[j] = temp;
	  }
	printf("\nThe Array is sorted\n");
}


											/* MAIN PROGRAM */
int main()
{
	int n;
	while(1)
	{
		printf("\n\n(1) Create an array.\n(2) Insert an element at first.\n(3) Insert an element at end.");
		printf("\n(4) Insert an element at any position.\n(5) Insert an element after an element.");
		printf("\n(6) Insert an element at before an element.\n(7) Delete an element from the beginning.");
		printf("\n(8) Delete an element from end.\n(9) Delete any element.");
		printf("\n(10) Delete any element after an element.\n(11) Delete an element before an element.");
		printf("\n(12) Display.\n(13) Reverse Display.\n(14) Sorting.\n(15) Exit.");
		printf("\n\nEnter Your choice = ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:create_array();
					break;
			case 2:insert_beg();
					break;
			case 3:insert_end();
					break;
			case 4:insert_any();
					break;
			case 5:insert_after();
					break;
			case 6:insert_before();
					break;
			case 7:del_beg();
					break;
			case 8:del_end();
					break;
			case 9:del_any();
					break;
			case 10:del_after();
					break;
			case 11:del_before();
					break;
			case 12:display();
					break;
			case 13:r_display();
					break;
			case 14:sort();
					break;
			case 15:exit(0);
			default:printf("\nWrong choice.........\n");
					break;
		}
	}
	return 0;
}