#include<stdio.h>

void push();
void pop();
void display();

typedef struct Node
{
	int info;
	struct node *link;
}node;

node *top = NULL;

void push()
{
	node *p;
	p = (node*)malloc(sizeof(node));
	if(p == NULL)
	{
		printf("\nOut of memory location !\n");
		return;
	}
	printf("\nEnter new node --> ");
	scanf("%d",&p->info);
	p->link=NULL;
	if(top == NULL)
	{
		top = p;
	}
	else
	{
		p->link = top;
		top=p;
	}
}


void pop()
{
	node *r;
	if(r == NULL)
	{
		printf("\nStack Underflow !\n");
		return;
	}
	else
	{
		r = top;
		top = top->link;
		printf("\nThe popped element is : %d\n",r->info);
	}
}


	
void display()
	{
		node *r;
		if(top == NULL)
		{
			printf("\nStack Underflow !\n");
			return;
		}
		else
		{
			r = top;
			printf("\nThe list elements are :- \n\n");
			printf("TOP -> ");
			while(r != NULL)
			{
				printf("%d -> ",r->info);
				r=r->link;
			}
			printf("\n\n");
		}
		
	}

				
int main()
{
	int choice;
	while(1)
	{
		printf("\n*** Enter your choice ***");
		printf("\n1 : PUSH");
		printf("\n2 : POP");
		printf("\n3 : DISPLAY");
		printf("\n4 : EXIT\n\n");
		
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
					break;
					
			case 2: pop();
					break;
					
			case 3: display();
					break;
					
			case 4: exit(0);
					break;
					
			default: printf("\n\n***INVALID CHOICE***\n\n");
					break;
		}
	}
	return 0;
}
