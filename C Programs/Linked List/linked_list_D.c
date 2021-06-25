											/* Header Files */
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

											/* Declaration */
// Structure declaration
typedef struct node
{
	int x;
	struct node *next,*pre;
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
	p->pre=NULL;
	return(p);
}

// Create a list
void create_list()
{
	node *p,*q;
	int x;
	char ch;
	q = h->pre = h->next = NULL;
	do
	{
		printf("\nEnter a Element =");
		scanf("%d",&x);
		p=getnode(x);
		if(h->pre==NULL)
		 h->pre=p;
		else
		{
			q->next=p;
			p->pre=q;
		}
		q=p;
		printf("\nDo you want to continue(Y/N)=");
		fflush(stdin);
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	h->next=p;
}

											/* Insertion */
// Insert an element at beg
void insert_beg()
{
	node *p;
	int x;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter a Element =");
	scanf("%d",&x);
	p=getnode(x);
	p->next=h->pre;
	h->pre->pre=p;
	h->pre=p;
}

// Insert an element at end
void insert_end()
{
	node *p;
	int x;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	p=getnode(x);
	p->pre=h->next;
	h->next->next=p;
	h->next=p;
}

// Insert an element at any Position
void insert_mid()
{
	node *p,*q;
	int x,c=1,pos;
	if(h->pre==NULL)
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
		p->next=h->pre;
		h->pre->pre=p;
		h->pre=p;
		return;
	}
	q=h->pre;
	while(q->next!=NULL&&c<pos-1)
	{
		q=q->next;
		c++;
	}
	if(q->next == NULL)
	{
		p->pre=h->next;
		h->next->next=p;
		h->next=p;
		return;
	}
	p->next=q->next;
	q->next->pre=p;
	p->pre=q;
	q->next=p;
}

// Insert an element before an element
void insert_pre()
{
	node *p,*q;
	int x,n;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	printf("\nEnter the Element whose before you want to insert %d = ",x);
	scanf("%d",&n);
	q=h->pre;
	while(q->next!=NULL && q->x!=n)
		q=q->next;
	if(q->x != n)
	{
		printf("\n%d is not in the List.\n",n);
		return;
	}
	p=getnode(x);
	if(q==h->pre)
	{
		p->next=h->pre;
		h->pre->pre=p;
		h->pre=p;
		return;
	}
	p->next = q;
	p->pre = q->pre;
	q->pre->next = p;
	q->pre = p;
	
}

// Insert an element after an element
void insert_next()
{
	node *p,*q;
	int x,n;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element =");
	scanf("%d",&x);
	printf("\nEnter the Element whose after you want to insert %d = ",x);
	scanf("%d",&n);
	p=h->pre;
	while(p->next!=NULL && p->x!=n)
		p=p->next;
	if(p->x != n)
	{
		printf("\n%d is not in the List.\n",n);
		return;
	}
	if(p->next == NULL)
	{
		p=getnode(x);
		p->pre=h->next;
		h->next->next=p;
		h->next=p;
		return;
	}
	q=getnode(x);
	q->next=p->next;
	p->next->pre=q;
	p->next=q;
	q->pre=p;
}

											/* Deletion */
// Delete an element from the beginning
void del_beg()
{
	node *p;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\n%d is deleted.",h->pre->x);
	p=h->pre;
	h->pre=h->pre->next;
	free(p);
}

// Delete an element from the end
void del_end()
{
	node *p;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\n%d is deleted.",h->next->x);
	p=h->next;
	if(h->next == h->pre)
		h->next = h->pre = NULL;
	else
	{
		h->next = h->next->pre;
		h->next->next = NULL;
	}
	free(p);
}

// Delete any element
void del_any()
{
	node*p,*q;
	int x;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element to Delete =");
	scanf("%d",&x);
	p=q=h->pre;
	while(q->x!=x&&q->next!=NULL)
		q=q->next;
	if(q->x!=x)
	{
		printf("\nElement not Found.");
		return;
	}
	printf("\n%d is deleted.",x);
	if(h->next == h->pre)
		h->next = h->pre = NULL;
	else
	{
		if(h->pre->x==x)
     		h->pre=h->pre->next;
    	else
	 	{
	 		if(q->next == NULL)
	 		{
				h->next = h->next->pre;
				h->next->next = NULL;
			}
			else
			{
				q->next->pre = q->pre;
				q->pre->next = q->next;
			}
		}	
	}
	free(q);
}

//  Delete an element before an element
void del_pre()
{
	node *r;
	int x;
	printf("\nEnter the Element whose previous Element have to Delete =");
	scanf("%d",&x);
	if(h->pre->x==x)
	{
		printf("\nDeletion Not possible.");
		return;
	}
	r=h->pre;
	while(r!=NULL&&r->x!=x)
		r=r->next;
	if(r==NULL)
	{
		printf("\nElement Not Found.");
		return;
	}
	r=r->pre;
	if(r->pre == NULL)
		h->pre = h->pre->next;
	else
	{
		r->next->pre = r->pre;
		r->pre->next = r->next;
	}
	free(r);
}

// Delete an element after an element
void del_next()
{
	node *p,*q;
	int x;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nEnter the Element whose Next Element have to Delete =");
	scanf("%d",&x);
	q=h->pre;
	while(q->x!=x&&q->next!=NULL)
		q=q->next;
	if(q->next==NULL)
	{
		printf("\nDeletion Not Possible.");
		return;
	}
	if(q->next->next==NULL)
	{
		q->next=NULL;
		h->next=h->next->pre;
	}
	else
	{
		q=q->next;
		q->pre->next=NULL;
	}
	free(q);
}

											/* Display */
// Display the list
void display()
{
	node *p;
	int n;
	if(h->pre==NULL)
	{
		printf("\nList Not Exist.");
		return;
	}
	printf("\nDisplay Order\n1 for Forward Display.\n2 for Backward Display.\nEnter Your Choice = ");
	scanf("%d",&n);
	printf("\nThe Elements :-\n");
	switch(n)
	{
		case 1: p=h->pre;
				while(p!=NULL)
				{
					printf("%d  ",p->x);
					p=p->next;
				}
				break;
		case 2: p=h->next;
				while(p!=NULL)
				{
					printf("%d  ",p->x);
					p=p->pre;
				}
				break;
		default:printf("\nWrong Choice........");
	}	
}


											/* MAIN PROGRAM */
int main()
{
	int n;
	h=(node*)malloc(sizeof(node));
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
			case 0:exit(0);
			default:printf("\nWrong Choice........");
		}
	}
}
