#include<stdio.h>
#include<stdlib.h>


struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;   

  main()
{
	node *head;
	void create(node *p);
	void print (node *p);
	
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
}


void create(node *list)
{
	printf("\nInput a number: ");
	printf("type -999 at end\n\n");
	scanf("%d", &list->number);
	
	if(list->number == -999)
	{
		list->next = NULL;
	}
	else     //creating next node
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}

void print (node *list)
{
	if(list->next != NULL)
	{
		printf("%d  ",list->number);
				
		print(list->next);
	}
	
	return;
}
