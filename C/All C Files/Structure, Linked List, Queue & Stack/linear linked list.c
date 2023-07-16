#include<stdio.h>
#include<stdlib.h>


struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;    // node type defined

 main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print (node *p);
	
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("\nNumber of items = %d \n", count(head));
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
	else     //create next node
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
		printf("%d-->",list->number);
		
		if(list->next->next == NULL)
		{
			printf("NULL");
		}
		print(list->next);
	}
	return;
}

int count(node *list)
{
	if(list->next == NULL)
		return 0;
	else
		return(1+ count(list->next));
}
