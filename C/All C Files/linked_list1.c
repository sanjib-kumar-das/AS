#include <stdio.h>
#include <stdlib.h>
	
struct node 
{
	int data;
	struct node *next;
};
typedef struct node node; 
	
	
int main()
{
	node *head, *prev;
	void print (node *p);
	
	// create new node
	
	int n, i=0;
	node *list;
	
	printf("Enter total number of elements: ");
	scanf("%d", &n);
	head = NULL;
	
	for (i=0;i<n;i++)
	{
		list = (node *) malloc(sizeof(node));
		scanf("%d",&list->data);
		list->next = NULL;
		
		if(head==NULL)
			head=list;
		else
			prev->next=list;
		
		prev=list;
	}
	
	printf("\n");
	print(head);
}
	
	// display node
	
	void print (node *list)
{
	if(list->next != NULL)
	{
		printf("%d --> ",list->data);
		
		if(list->next->next == NULL)
		{
			printf("%d",list->next->data);
		}
		print(list->next);
	}
	return;
}
	
