#include<stdio.h>
#include<stdlib.h>

// quick sort start
int partition(int *a,int lb,int ub)
{
	int start,end,pivot,temp;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
			start++;
		while(a[end]>pivot)
			end--;
		if(start<end)
		{
			temp=a[end];
			a[end]=a[start];
			a[start]=temp;
		}
	}
	temp=a[end];
	a[end]=a[lb];
	a[lb]=temp;
	return end;
}

void quick_sort(int *a,int lb,int ub)
{
	int part;
	if(lb<ub)
	{
		part = partition(a,lb,ub);
		quick_sort(a,lb,part-1);
		quick_sort(a,part+1,ub);
	}
}
// quick sort end


// merge sort start
void merge(int *a,int lb,int mid,int ub)
{
	int i,j,k,*b;
	b=(int*)malloc(sizeof(int)*(ub-lb+1));
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=ub)
		b[k++]=a[j++];
	for(k=lb;k<=ub;k++)
		a[k]=b[k];
}

void merge_sort(int *a,int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid = (lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
// merge sort end



int main()
{
	int *a,n,i,ch;
	printf("\nEnter the Number of the array elements = ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the Elements :- \n");
	for(i=0;i<n;i++)
	{
		printf("Arr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe Elements are :- \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n\n1 for quick sort.\n2 for merge sort.\nEnter Your choice = ");
	scanf("%d",&ch);
	if(ch == 1)
		quick_sort(a,0,n-1);
	else
		if(ch == 2)
			merge_sort(a,0,n-1);
		else
		{
			printf("\nwrong choice....");
			exit(0);
		}
	printf("\nThe Elements are after sorting :- \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}