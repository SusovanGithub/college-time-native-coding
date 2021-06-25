// Cercular linked List 

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
}node;

node *h;

node *getnode(x)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->x=x;
	p->next=NULL;
}

void create_list()
{
	node *p;
	int x;
	char ch;
	h=NULL;
	do
	{
		printf("Enter the Element =");
		scanf("%d",&x);
		p=getnode(x);
		if(h==NULL)
		{
			h=p;
			h->next=h;
		}
		else
		{
			p->next=h->next;
			h->next=p;
			h=p;
		}
		printf("Do you want to continue(Y/N)=");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
}

void insert_end()
{
	node *p;
	int x;
	if(h==NULL)
	{
		printf("List Not Exsit.");
		return;
	}
	printf("Enter the Element =");
	scanf("%d",&x);
	p=getnode(x);
	p->next=h->next;
	h->next=p;
	h=p;
}

void insert_any()
{
	node *p,*q;
	int c=1,x,pos;
	if(h==NULL)
	{
		printf("List not exsit.");
		return;
	}
	printf("Enter the possition To insert =");
	scanf("%d",&pos);
	printf("Enter the Element =");
	scanf("%d",&x);
	p=getnode(x);
	if(pos==1)
	{
		p->next=h->next;
		h->next=p;
		return;
	}
	q=h;
	do
	{
		q=q->next;
		c++;
	}while(c<pos&&q!=h);
	if(q==h)
	{
		p->next=h->next;
		h->next=p;
		h=p;
	}
	else
	{
		p->next=q->next;
	 	q->next=p;
	}
}

void del_beg()
{
	node *p;
	if(h==NULL)
	{
		printf("List Not Exsit.");
		return;
	}
	p=h->next;
	if(p==h)
	  h=NULL;
	else
	h->next=p->next;
	free(p);
}

void del_any()
{
	node *p,*q;
	int x;
	if(h==NULL)
	{
		printf("List Not  Exsit.");
		return;
	}
	printf("Enter the element.");
	scanf("%d",&x);
	p=q=h;
	do
	{
		p=q;
		q=q->next;
	}while(q!=h&&q->x!=x);
	if(q->x!=x)
	{
		printf("Element not found.");
		return;
	}
	if(q==h)
	{
		if(p==q)
		{
			h=NULL;
			return;
		}
		p->next=h->next;
		h=p;
	}
	else
	 p->next=q->next;
	free(q);
}

void display()
{
	node *p;
	if(h==NULL)
	{
		printf("List Not Exsit.");
		return;
	}
	p=h->next;
	do
	{
		printf("%d  ",p->x);
		p=p->next;
	}while(p!=h->next);
}

void reverse()
{
	node *p,*q,*r;
	r=h->next;
	p=h->next=NULL;
	h=r;
	q=h->next;
	while(q!=NULL)
	{
		h->next=p;
		p=h;
		h=q;
		q=q->next;
	}
	h->next=p;
	r->next=h;
	h=r;
}

void sort()
{
	node *p,*q;
	int temp;
	if(h==NULL)
	{
		printf("List Not Exsit.");
		return;
	}
	p=h->next;
	do
	{
		q=p->next;
		while(q!=h->next)
		{
			if(p->x>q->x)
			{
				temp=p->x;
				p->x=q->x;
				q->x=temp;
			}
			q=q->next;
		}
		p=p->next;
	}while(p!=h->next);
}

node *r_display(node *p)
{
	if(p==h)
	{
		printf("%d  ",p->x);
		return;
	}
	r_display(p->next);
	printf("%d  ",p->x);
}


main()
{
	int n;
	while(1)
	{
		printf("\n1 for Create a List.");
		printf("\n2 for Insert an element.");
		printf("\n3 for delete an element.");
		printf("\n4 for display.");
		printf("\n5 for Insert at end.");
		printf("\n6 for delete from beg.");
		printf("\n7 for Revrse the list.");
		printf("\n8 for Reverse Display.");
		printf("\n9 for sort.");
		printf("\nEnter your choice=");
		scanf("%d",&n);
		switch(n)
		{
			case 1:create_list();
					break;
			case 2:insert_any();
					break;
			case 3:del_any();
					break;
			case 4:display();
					break;
			case 5:insert_end();
					break;
			case 6:del_beg();
					break;
			case 7:reverse();
					break;
			case 8:r_display(h->next);
					break;
			case 9:sort();
					break;
			case 0:exit(0);
		}
	}
}
