// avl tree

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int x;
	int bf;
	struct node *left,*right;
}tree;


tree *root;

tree* getnode(int x)
{
	tree *p;
	p=(tree*)malloc(sizeof(tree));
	p->x=x;
	p->bf=0;
	p->left=p->right=NULL;
	return(p);
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int height(tree *p)
{
	if(p==NULL)
		return 0;
	return 1+max(height(p->left),height(p->right));
}

void balance_bf(tree *p)
{
	if(p != NULL)
	{
		balance_bf(p->left);
		p->bf = height(p->left) - height(p->right);
		balance_bf(p->right);
	}	
}

void balance_tree()
{
	tree *p1,*p2,*p3;
	int flag =0;
	if(root->bf>-2 && root->bf<2)
		return;
	p1=p2=root;
	while( p2->bf>1 || p2->bf<-1 )
	{
		p3=p1;
		p1=p2;
		if(p2->bf>1)
			p2=p2->left;
		else
			p2=p2->right;
	}
	if(p1==p3)
		flag = 1;
	if(p1->bf>1)
	{
		if(p2->bf>0) // LL rotation 
		{ 
			p3->left=p2;
			p1->left=p2->right;
			p2->right=p1;
			if(flag)	// at root node time
				root = p2;
		}
		else 		// LR rotation 
		{	
			if(flag)	// at root node time
			{
				root=p2->right;
				p1->left=root->right;
				root->right=p1;
				p2->right=root->left;
				root->left=p2;
			}
			else
			{
				p3->left=p2->right;
				p1->left=p2->right->right;
				p2->right->right=p1;
				p2->right=p2->right->left;
				p3->left->left=p2; 
			}
		}
	}
	else
	{
		if(p2->bf<0)
		{
			p3->right=p2;
			p1->right=p2->left;
			p2->left=p1;
			if(flag)
				root = p2;
		}
		else
		{
			if(flag)
			{
				root=p2->left;
				p1->right=root->left;
				root->left=p1;
				p2->left=root->right;
				root->right=p2;	
			}
			else
			{
				p3->right=p2->left;
				p1->right=p2->left->left;
				p2->left->left=p1;
				p2->left=p2->left->right;
				p3->right->right=p2; 
			}
		}
	}
	balance_bf(root);
}

tree *inorder(tree *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d(%d)   ",p->x,p->bf);
		inorder(p->right);
	}
}

tree *preorder(tree *p)
{
	if(p!=NULL)
	{
		printf("%d(%d)   ",p->x,p->bf);
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
		printf("%d(%d)   ",p->x,p->bf);
	}
}

void create_avl()
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
			{
				p2->bf=p2->bf+1;
				p2=p2->left;
			}
			else
			{
				p2->bf=p2->bf-1;
			 	p2=p2->right;
			}
		}
		if(p1->x>x)
		 p1->left=getnode(x);
		else
		 p1->right=getnode(x);
		printf("\nTree before balance(preorder)\n");
		preorder(root);
		balance_tree();
		printf("\nTree after balance(preorder)\n");
		preorder(root);
		printf("\n\nEnter the Element(0 for None) =");
		scanf("%d",&x);
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
		{
			p2->bf=p2->bf+1;
			p2=p2->left;
		}
		else
		{
			p2->bf=p2->bf-1;
		 	p2=p2->right;
		}
	}
	if(p1->x>x)
	 p1->left=getnode(x);
	else
	 p1->right=getnode(x);
	printf("\nTree before balance(preorder)\n");
	preorder(root);
	balance_tree();
	printf("\nTree after balance(preorder)\n");
	preorder(root);	
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
	printf("\nTree before balance(preorder)\n");
	preorder(root);
	balance_bf(root);
	printf("\nTree after bf balance(preorder)\n");
	preorder(root);
	balance_tree();
	printf("\nTree after balance(preorder)\n");
	preorder(root);
}


int main()
{
	int ch;
	do
	{
		printf("\n\n1 for Create a AVL Tree.");
		printf("\n2 for Insert a element from AVL Tree.");
		printf("\n3 for Delete a element from AVL Tree.");
		printf("\n4 for Inorder Display.\n5 for Preorder Display.");
		printf("\n6 for Postorder Display.");
		printf("\n0 for Exit.\n\nEnter Your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create_avl();
					break;
			case 2:insert();
					break;
			case 3:del();
			        break;
			case 4:printf("\nElements in INORDER : ");
			        inorder(root);
			        break;
			case 5:printf("\nElements in PREORDER : ");
			        preorder(root);
			        break;
			case 6:printf("\nElements in POSTORDER : ");
			        postorder(root);
				    break;
			case 0:exit(0);
		}
	}while(1);
	return 0;
}
