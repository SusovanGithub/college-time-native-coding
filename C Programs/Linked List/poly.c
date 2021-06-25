#include<stdio.h>
#include<malloc.h>

typedef struct polynomial
{
	int c,e;
	struct polynomial *next;
}poly;

poly* getnode(int c,int e)
{
	poly *p;
	p=(poly*)malloc(sizeof(poly));
	p->c=c;
	p->e=e;
	p->next=NULL;
	return p;
}

poly* create_poly(poly *h)
{
	int c,e;
	poly *p,*q;
	char s;
	printf("\nEnter the polynomial in higher to lower order :-\n");
	h=NULL;
	do
	{
		printf("\nEnter the coefficient = ");
		scanf("%d",&c);
		printf("\nEnter the power = ");
		scanf("%d",&e);
		p=getnode(c,e);
		if(h==NULL)
			h=p;
		else
			q->next=p;
		q=p;
		printf("\nDo you want to continue(y/n)? = ");
		fflush(stdin);
		scanf("%s",&s);
	}while(s=='y');
	return h;
}

void display(poly *h)
{
	poly *p;
	if (h==NULL)
	{
		printf("\nNo Polynomial Function Exist......");
		return;
	}
	p=h;
	if(p->c > 0)
		printf("%dX^%d ",p->c,p->e);
	else
		printf("-%dX^%d ",p->c*(-1),p->e);
	p=p->next;
	while(p!=NULL)
	{
		if(p->c > 0)
			printf("+ %dX^%d ",p->c,p->e);
		else
			printf("- %dX^%d ",p->c*(-1),p->e);
		p=p->next;
	}

}

poly* add(poly *h1,poly *h2)
{
	poly *p,*q,*r,*t,*h=NULL;
	p=h1;
	q=h2;
	while(p!=NULL && q != NULL)
	{
		if(p->e == q->e)
		{
			r=getnode(p->c+q->c,p->e);
			p=p->next;
			q=q->next;
		}
		else
		 if(p->e > q->e)
		 {
		 	r=getnode(p->c,p->e);
		 	p=p->next;
		 }
		 else
		 {
		 	r=getnode(q->c,q->e);
		 	q=q->next;
		 }
		if(h==NULL)
			h=r;
		else
			t->next=r;
		t=r;
	}
	while(p!=NULL)
	{
		r=getnode(p->c,p->e);
		p=p->next;
		if(h==NULL)
			h=r;
		else
			t->next=r;
		t=r;	
	}
	while(q!=NULL)
	{
		r=getnode(q->c,q->e);
		q=q->next;
		if(h==NULL)
			h=r;
		else
			t->next=r;
		t=r;
	}
	return h;
}

poly *multi(poly *h1,poly *h2)
{
	poly *h=NULL;
	poly *p,*q,*r,*t,*temp;
	p=h1;
	while(p!=NULL)
	{
		temp=NULL;
		q=h2;
		while(q!=NULL)
		{
			r=getnode(p->c * q->c,p->e + q->e);
			q=q->next;
			if(temp==NULL)
				temp=r;
			else
				t->next=r;
			t=r;
		}
		h=add(h,temp);
		p=p->next;
	}
	return h;
}

int main()
{
	poly *h1,*h2,*h3;
	printf("\nEnter the First Polynomial :- \n");
	h1=create_poly(h1);
	printf("\nEnter the Second Polynomial :- \n");
	h2=create_poly(h2);
	printf("\n\nFirst polynomial is :-   ");
	display(h1);
	printf("\nSecond polynomial is :-   ");
	display(h2);
	printf("\n\nAfter Adding 1st and 2nd polynomial :-\n");
	h3 = add(h1,h2);
	printf("\nResult =   ");
	display(h3);
	printf("\n\nAfter Multiplying 1st and 2nd polynomial :-\n");
	h3 = multi(h1,h2);
	printf("\nResult =   ");
	display(h3);
}