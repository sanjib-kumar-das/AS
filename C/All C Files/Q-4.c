/* Q.2 : Write a C program to implement a linked list which eill store 5 integer values. Then delete the last 
node of that list.*/
 
//  IMPLEMENTING LINKED LIST USING STACK    //
       
          
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void insert();
void remove();
void display();

struct Node
{
	int info;
	struct node *link;
};
typedef struct Node node;

node *head = NULL;

void insert()
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
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		p->link = head;
		head=p;
	}
}


void remove()
{
	node *p, *r;
	if(head == NULL)
	{
		printf("\nList is empty !\n");
	}
	else if(head->link == NULL)
	{
		r = head;
		head = NULL;
		printf("\nThe deleted element is = %d\n",r->info);
		free(r);
	}
	else
	{
		r = head;
		while(r->link != NULL)
		{
			p = r;
			r = r->link;
		}
		p->link = NULL;
		printf("\nThe deleted element is = %d\n",r->info );
		free(r);
	}
}
	
void display()
	{
		node *r;
		if(head == NULL)
		{
			printf("\nList is empty !\n");
			return;
		}
		else
		{
			r = head;
			printf("\nThe list elements are :- \n\n");
			printf("HEAD -> ");
			while(r != NULL)
			{
				printf("%d -> ",r->info);
				r=r->link;
			}
			printf("NULL\n\n");
		}
		
	}

				
int main()
{
	int choice;
	while(1)
	{
		printf("\n\n*** Enter your choice ***");
		printf("\nEnter <1> : Insert.");
		printf("\nEnter <2> : Delete.");
		printf("\nEnter <3> : Display.");
		printf("\nEnter <4> : Exit\n\n");
		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: insert();
					break;
					
			case 2: remove();
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
