#include<stdio.h>
#include<stdlib.h>
#define NUll 0


struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;


main()
{
	int n;
	node *head;
	void create (node *p);
	node *insert(node *p, int n);
	void print(node *p);
	
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	printf("\nOriginal list : ");
	print(head);
	printf("\n\n");
	
	printf("Input the number to be inserted: ");
	scanf("%d",&n);
	head = insert(head,n);
	printf("\n");
	printf("New list : ");
	print(head);
}


void create(node *list)
{
	printf("Input a number :\n ");
	printf("[type -999 to end] : ");
	scanf("%d",&list->number);
	
	if(list->number == -999)
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
	if(list->next != NULL)
	{
		printf("%d-->",list->number);
		
	if(list->next->next == NULL)
		printf("%d",list->next->number);
		
	print(list->next);
	}
	return;
}


node *insert(node *head, int x)
{
	node *p, *p1, *p2;
	p1 = NULL;
	p2 = head;
	
	for( ; p2->number < x; p2=p2->next)
	{
		p1 = p2;
		
		if(p2->next->next == NULL)
		{
			p2 = p2->next;
			break;
		}
	}
	
	p = (node *)malloc(sizeof(node));
	p->number = x;
	p->next = p2;
	
	if(p1 == NULL)
		head = p;
	else
		p1->next = p;
		
	return(head);
}
