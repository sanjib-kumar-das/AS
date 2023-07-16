#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;

node *head, *head1, *head2;

main()
{
	
	void create (node *p);
	int count (node *p);
	void print (node *p);
	void split(node *p);
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	
	printf("\nNumber of items = %d \n", count(head));
}


void create(node *list)
{
	printf("Input any number :");
	printf("(type -999 to end) : ");
	scanf("%d",&list->number );
	
	if (list->number == -999)
	{
		list->next = NULL;
	}
	else
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}



void print(node *list)
{
	if (list->next != NULL)
	{
		printf("%d -->", list->number);
		
		if(list->next->next == NULL)
			printf("%d", list->next->number);
			
			print(list->next);
	}


}


void split (node *list)
{
	node *p1, *p2;
	head1 = (node *)malloc(sizeof(node));
	head2 = (node *)malloc(sizeof(node));
	
	p1 = head1;
	p2 = head2;
	
	while (list->next != NULL)
	{
		if(list->number > 0)
		{
			p1->number = list->number;
			p1->next = (node *)malloc(sizeof(node));
			
			p1 = p1->next;
			print(p1);
			
		}
		else
		{
			p2->number = list->number;
			p2->next = (node *)malloc(sizeof(node));
			
			p2 = p2->next;
			print(p2->number);
			
		}
		list = list->next;
	}
	p1->next = NULL;
	p2->next = NULL;
	
	
}
 


int count(node *list)
{
	if(list->next == NULL)
	{
		return 0;
	}
	else
	{
		return (1+count(list->next));
	}
}
