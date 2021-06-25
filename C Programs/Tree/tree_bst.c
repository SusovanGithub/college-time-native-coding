// BST

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int x;
	struct node *left,*right;
}tree;


tree *root;

tree* getnode(int x)
{
	tree *p;
	p=(tree*)malloc(sizeof(tree));
	p->x=x;
	p->left=p->right=NULL;
	return(p);
}


void create_bst()
{
	tree *p1,*p2;
	int x;
	root=NULL;
	printf("Enter the root Element =");
	scanf("%d",&x);
	root=getnode(x);
	printf("Enter the Element(0 for None) =");
	scanf("%d",&x);
	while(x!=0)
	{
		p1=p2=root;
		while(p2!=NULL)
		{
			p1=p2;
			if(p2->x>x)
			 p2=p2->left;
			else
			 p2=p2->right;
		}
		if(p1->x>x)
		 p1->left=getnode(x);
		else
		 p1->right=getnode(x);
		printf("Enter the Element(0 for None) =");
		scanf("%d",&x);
	}
}

tree *inorder(tree *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d  ",p->x);
		inorder(p->right);
	}
}

tree *preorder(tree *p)
{
	if(p!=NULL)
	{
		printf("%d  ",p->x);
		preorder(p->left);
		preorder(p->right);
	}
}

tree *postorder(tree *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d  ",p->x);
	}
}

void insert()
{
	tree *p1,*p2;
	int x;
	if(root == NULL)
	{
		printf("\nBST is Not Exist....");
		return;
	}
	printf("Enter the Element =");
	scanf("%d",&x);
	p1=p2=root;
	while(p2!=NULL)
	{
		p1=p2;
		if(p2->x>x)
		 p2=p2->left;
		else
		 p2=p2->right;
	}
	if(p1->x>x)
	 p1->left=getnode(x);
	else
	 p1->right=getnode(x);
}

void del()
{
	tree *p1,*p2,*p3,*p4;
	int x;
	printf("Enter the Element to Delete =");
	scanf("%d",&x);
	p1=p2=root;
	while(p2!=NULL&&p2->x!=x)
	{
		p1=p2;
		if(p2->x>x)
		 p2=p2->left;
		else
		 p2=p2->right;
	}
	if(p2==NULL)
	{
		printf("Element Not Found.");
		return;
	}
	if(p2->left==NULL&&p2->right==NULL)
	{
		if(p1==p2)
		{
			root=NULL;
			free(p2);
			return;
		}
		if(p1->left==p2)
		 p1->left=NULL;
		else
		 p1->right=NULL;
	}
	else
	 if(p2->left==NULL)
	 {
	 	if(p1->left==p2)
	 	 p1->left=p2->right;
	 	else
	 	 p1->right=p2->right;
	 }
	 else
	  if(p2->right==NULL)
	  {
	  	if(p1->left==p2)
	  	 p1->left=p2->left;
	  	else
	  	 p1->right=p2->right;
	  }
	  else
	  {
	  	p3=p4=p2->right;
	  	while(p4->left!=NULL)
	  	{
	  		p3=p4;
	  		p4=p4->left;
		}
		if(p3==p4)
		 p4->left=p2->left;
		else
		{
			p3->left=p4->right;
			p4->left=p2->left;
			p4->right=p2->right;
		}
		if(p1->left==p2)
		  p1->left=p4;
		else
		 if(p1->right==p2)
		  p1->right=p4;
		if(p1==p2)
		 root=p4;
	  }
	free(p2);
}


int main()
{
	int ch;
	do
	{
		printf("\n\n1 for Create a BST.\n2 for Inorder Display.\n3 for Preorder Display.");
		printf("\n4 for Postorder Display.\n5 for Insert a element from BST.");
		printf("\n6 for Delete a element from BST.");
		printf("\n0 for Exit.\n\nEnter Your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create_bst();
					break;
			case 2:printf("\nElements in INORDER : ");
			        inorder(root);
				    break;
			case 3:printf("\nElements in PREORDER : ");
			        preorder(root);
				    break;
			case 4:printf("\nElements in POSTORDER : ");
			        postorder(root);
				    break;
			case 5:insert();
					break;
			case 6:del();
			        break;
			case 0:exit(0);
		}
	}while(1);
	return 0;
}
