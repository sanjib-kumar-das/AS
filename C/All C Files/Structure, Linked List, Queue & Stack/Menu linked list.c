#include<stdio.h>

void insert_begin();
void insert_end();
void delete_begin();
void delete_end();
void display();

typedef struct Node
{
	int info;
	struct node *link;
}node;

node *head = NULL;

void insert_begin()
{
	node *p;
	p = (node*)malloc(sizeof(node));
	if(p == NULL)
	{
		printf("\nOut of memory location !\n");
		return;
	}
	printf("\nEnter new node at beginning--> ");
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

void insert_end()
{
	node *p, *r;
	p = (node*)malloc(sizeof(node));
	if(p == NULL)
	{
		printf("\nOut of memory space :\n");
		return;
	}
	printf("\nEnter new node at end--> ");
	scanf("%d",&p->info);
	p->link = NULL;
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		r = head;
		while(r->link != NULL)
		{
			r=r->link;
		}
		r->link = p;
	}
}

void delete_begin()
{
	node *r;
	if(r == NULL)
	{
		printf("\nList is empty !\n");
		return;
	}
	else
	{
		r = head;
		head = head->link;
		printf("\nThe deleted element from beginning is : %d\n",r->info);
		free(r);
	}
}

void delete_end()
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
		printf("\nThe deleted element from end is = %d\n",r->info);
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
		printf("\nThe deleted element from end is = %d\n",r->info );
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
		printf("\n*** Enter your choice ***");
		printf("\n1 : Insert at beginning");
		printf("\n2 : Insert at end");
		printf("\n3 : Delete at beginning");
		printf("\n4 : Delete at end");
		printf("\n5 : Display");
		printf("\n6 : Exit\n\n");
		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: insert_begin();
					break;
					
			case 2: insert_end();
					break;                                   
					
			case 3: delete_begin();
					break;
					
			case 4: delete_end();
					break;
					
			case 5: display();
					break;
					
			case 6: exit(0);
					break;
					
			default: printf("\n\n***INVALID CHOICE***\n\n");
					break;
		}
	}
	return 0;
}
