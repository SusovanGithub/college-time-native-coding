// Hashing by using the Channing 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;	
}node;

node **hl;

int hash_fun(int data,int n)
{
	return(data%n);
}

void create_hash_table(int n)
{
	int i;
	hl = (node **) malloc(sizeof(node)*n);
	for(i=0;i<n;i++)
		hl[i] = NULL;
}

void insert(int n)
{
	int key,data;
	node *p;
	printf("\nEnter the data to Insert= ");
	scanf("%d",&data);
	key = hash_fun(data,n);
	if(hl[key] == NULL)
	{
		hl[key] = (node *) malloc(sizeof(node));
		hl[key]->data = data;
		hl[key]->next = NULL;
	}
	else
	{
		p = hl[key];
		while(p->next != NULL)
			p=p->next;
		p->next = (node *) malloc(sizeof(node));
		p->next->data = data;
		p->next->next = NULL;
	}
	printf("\nData Inserted ..");
}

void search(int n)
{
	int key,data;
	node *p;
	printf("\nEnter the data to search = ");
	scanf("%d",&data);
	key = hash_fun(data,n);
	if(hl[key] != NULL)
	{
		p=hl[key];
		while(p!=NULL)
		{
			if(p->data == data)
			{
				printf("\nData Found.");
				return;
			}
			p=p->next;
		}
	}
	printf("\nData Not Found.....");
}

void display(int n)
{
	int i;
	node *p;
	printf("\nAll Data's in Hash Table -----\n");
	for(i=0;i<n;i++)
		if(hl[i] == NULL)
			printf("\nHash Table key value (%d) -   None",i);
		else
		{
			p=hl[i];
			printf("\nHash Table key value (%d) -   ",i);
			while(p!=NULL)
			{
				printf("%d   ",p->data);
				p=p->next;
			}
		}
}

int main()
{
	int n,ch;
	printf("\nEnter the size of Hash Table = ");
	scanf("%d",&n);
	create_hash_table(n);
	while(1)
	{
		printf("\n\n1. Insert\n2. Search\n3. Display\n0. Exit\n\nEnter Your Choice = ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(n);
					break;
			case 2:search(n);
					break;
			case 3:display(n);
					break;
			case 0:exit(0);
			default:printf("\nWrong Choice...");
		}

	}
}