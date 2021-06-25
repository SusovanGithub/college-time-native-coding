// Write a program in c++ to generate postfix expression from the infix from, the infix expression constructor of class.

// HEADER FILES
#include<iostream>
#include<ctype.h>
#include<string.h>

using namespace std;

class postfix
{
	private:
		char stack[20];
		int top=-1;
	public:
		// A function to push a element in the stack
		void push(char c)
		{
			stack[++top]=c;
		}

		// A function to pop a element from the Stack
		char pop()
		{
			if(top==-1)
		     return(-1);
			else
			 return(stack[top--]);
		}

		// A function to check the priority
		int priority(char c)
		{
			if(c=='(')
	 		 return(0);
			if(c=='+'||c=='-')
			 return(1);
			if(c=='*'||c=='/')
			 return(2);
			if(c=='^'||c=='$')
			 return(3);
		}

		// A function to change the Infix expression to the equivalent Postfix expression
		postfix(char *c)
		{
			char P[20];
			int i=0;
			while(*c!='\0')
			{
				if(isalnum(*c))
				 P[i++]=*c;
				else
				 if(*c=='(')
				  push(*c);
				 else
				  if(*c==')')
				   while(pop()!='(')
				  	P[i++]=stack[top+1];
				  else
				  {
					   while(priority(stack[top])>=priority(*c))
					    P[i++]=pop();
					   push(*c);
			      }
				c++;
			}
			while(top!=-1)
			 P[i++]=pop();
		    P[i]='\0';
		    strcpy(stack,P);
		}
		void display()
		{
			printf("\nThe Equivalent Postfix Expression=");
			cout<<stack;
		}
		
};

main()
{
	char a[20];
	cout<<"Enter a Infix Expression =";
	cin>>a;
	postfix A(a);
	A.display();
}
