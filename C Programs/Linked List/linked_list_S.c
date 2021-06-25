											/* Header Files */
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

											/* Declaration */
// Structure declaration
typedef struct node
{
	int x;
	struct node *next;
}node;

node *h;  // Pointer to the head of List

											/* Creation */
// Creating the Node of the List
node *getnode(int x)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->x=x;
	p->next=NULL;
	return(p);
}

// Create a list
void create_list()
{
	node *p,*q;
	int x;
	char ch;
	h=NULL;
	q=h;
	do
	{
		printf("\nEnter a Element =");
		scanf("%d",&x);
		p=getnode(x);
		if(h==NULL)
		 h=p;
		else
		 q->next=p;
		q=p;
		printf("\nDo you want to continue(Y/N)=");
		fflush(stdin);
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
}

											/* Insertion */
// Insert an element at beg
void insert_beg()
{
	node *p;
	int x;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter a Element =");
	scanf("%d",&x);
	p=getnode(x);
	p->next=h;
	h=p;
}

// Insert an element at end
void insert_end()
{
	node *p,*q;
	int x;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	p=getnode(x);
	q=h;
	while(q->next!=NULL)
	 q=q->next;
	q->next=p;
}

// Insert an element at any Position
void insert_mid()
{
	node *p,*q;
	int x,c=1,pos;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	printf("\nEnter the Position =");
	scanf("%d",&pos);
	p=getnode(x);
	if(pos==1)
	{
		p->next=h;
		h=p;
		return;
	}
	q=h;
	while(q->next!=NULL&&c<pos-1)
	{
		q=q->next;
		c++;
	}
	p->next=q->next;
	q->next=p;
}

// Insert an element before an element
void insert_pre()
{
	node *p,*q;
	int x,n;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	printf("\nEnter the Element whose before you want to insert %d = ",x);
	scanf("%d",&n);
	p=h;
	while(p->next!=NULL && p->x!=n)
	{
		q=p;
		p=p->next;
	}
	if(p==h)
	{
		p=getnode(x);
		p->next=h;
		h=p;
		return;
	}
	q->next=getnode(x);
	q->next->next=p;
}

// Insert an element after an element
void insert_next()
{
	node *p,*q;
	int x,n;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	printf("\nEnter the Element whose after you want to insert %d = ",x);
	scanf("%d",&n);
	p=h;
	while(p->next!=NULL && p->x!=n)
		p=p->next;
	q=p->next;
	p->next=getnode(x);
	p->next->next=q;
}

											/* Deletion */
// Delete an element from the beginning
void del_beg()
{
	node *p;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\n%d is deleted.",h->x);
	p=h;
	h=h->next;
	free(p);
}

// Delete an element from the end
void del_end()
{
	node *p,*q;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	p=q=h;
	while(q->next!=NULL)
	{
		p=q;
		q=q->next;
	}
	printf("\n%d is deleted.",q->x);
	if(p==q)
	 h=NULL;
	else
	 p->next=NULL;
	free(q);
}

// Delete any element
void del_any()
{
	node*p,*q;
	int x;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element to Delete =");
	scanf("%d",&x);
	p=q=h;
	while(q->x!=x&&q->next!=NULL)
	{
		p=q;
		q=q->next;
	}
	if(q->x!=x)
	{
		printf("\nElement not Found.");
		return;
	}
	printf("\n%d is deleted.",x);
	if(h->x==x)
     h=h->next;
    else
	 p->next=q->next;
	free(q);
}

//  Delete an element before an element
void del_pre()
{
	node *p,*q,*r;
	int x;
	printf("\nEnter the Element whose previous Element have to Delete =");
	scanf("%d",&x);
	if(h->x==x)
	{
		printf("\nDeletion Not possible.");
		return;
	}
	p=q=h;
	r=h->next;
	while(r!=NULL&&r->x!=x)
	{
		p=q;
		q=r;
		r=r->next;
	}
	if(r==NULL)
	{
		printf("\nElement Not Found.");
		return;
	}
	if(p==q)
	 h=h->next;
	else
	 p->next=r;
	free(q);
}

// Delete an element after an element
void del_next()
{
	node *p,*q;
	int x;
	if(h==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element whose Next Element have to Delete =");
	scanf("%d",&x);
	p=h;
	q=h->next;
	while(p->x!=x&&q!=NULL)
	{
		p=q;
		q=q->next;
	}
	if(q==NULL)
	{
		printf("\nDeletion Not Possible.");
		return;
	}
	p->next=q->next;
	free(q);
}

											/* Display */
// Display the list
void display()
{
	node *p;
	p=h;
	if(p==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nThe Elements :-\n");
	while(p!=NULL)
	{
		printf("%d  ",p->x);
		p=p->next;
	}
}

// Reverse display of the list
node *r_display(node *p)
{
	if(p==NULL)
	 return 0;
	r_display(p->next);
	printf("%d  ",p->x);
}



											/* MAIN PROGRAM */
int main()
{
	int n;
	while(1)
	{
		printf("\n\n1 for Create a List.");
		printf("\n2 for Insert an Element in the List at Beginning.");
		printf("\n3 for Insert an Element in the List at Any Position.");
		printf("\n4 for Insert an Element in the List at End.");
		printf("\n5 for Insert an Element Before the given Element.");
		printf("\n6 for Insert an Element After the given Element.");
		printf("\n7 for Delete an Element from the Beginning of the List.");
		printf("\n8 for Delete an Element from the End of the List.");
		printf("\n9 for Delete any Element from the List.");
		printf("\n10 for Delete the Previous Element of the given Element from the List.");
		printf("\n11 for Delete the Next Element of the given Element from the List.");
		printf("\n12 for Display the List.");
		printf("\n13 for Reverse Display of the List.");
		printf("\n0 for EXIT.");
		printf("\nEnter your Choice =");
		scanf("%d",&n);
		switch(n)
		{
			case 1:create_list();
					break;
			case 2:insert_beg();
					break;
			case 3:insert_mid();
					break;
			case 4:insert_end();
					break;
			case 5:insert_pre();
					break;
			case 6:insert_next();
					break;
			case 7:del_beg();
					break;
			case 8:del_end();
					break;
			case 9:del_any();
					break;
			case 10:del_pre();
					break;
			case 11:del_next();
					break;
			case 12:display();
					break;
			case 13:printf("\nThe Elements :-\n");
					r_display(h);
					break;
			case 0:exit(0);
			default:printf("\nWrong Choice........");
		}
	}
}
