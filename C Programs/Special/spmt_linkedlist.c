#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int ele,r,c;
	struct node *next;	
}node;

node *head;

void create_list(int ele,int r,int c)
{
	node *p;
	if(head == NULL)
	{
		head = (node*)malloc(sizeof(node));
		head->ele = ele;
		head->r = r;
		head->c = c;
		head->next = NULL;
		return;
	}
	p=head;
	while(p->next!=NULL)
		p=p->next;
	p->next = (node*)malloc(sizeof(node));
	p=p->next;
	p->ele = ele;
	p->r = r;
	p->c = c;
	p->next = NULL;
}

void display()
{
	node *p;
	if(head == NULL)
		printf("Above Matrix don't have non-zero element..");
	p=head;
	while(p!=NULL)
	{
		printf("%d  %d  %d\n",p->ele,p->r,p->c);
		p=p->next;
	}
}

int main()
{
	int **a,i,j,c,r;
	head = NULL;
	printf("\nEnter the Size of the Matrix(row,coll) :- ");
	scanf("%d%d",&r,&c);
	a=(int**)malloc(r*sizeof(int*));
	printf("\nEnter the Elemnets of the Matrix :- \n");
	for(i=0;i<r;i++)
	{
		a[i] = (int*)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			printf("Matrix[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j])
				create_list(a[i][j],i,j);
		}
	}
	printf("\nElements In the Matrix :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("\n\nSparse Matrix Representation of the above Matrix is ;-\n");
	display();
}
