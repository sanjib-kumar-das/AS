#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;
node *head,*head1,*head2;
int main()
{

void create(node *p);
int count(node *p);
void print(node *p);
void split(node *p);

head=(node *)malloc(sizeof(node));
create(head);
printf("\n");
print(head);
printf("\n");
split(head);
printf("\nPositive numbers are \n");
print(head1);
printf("\n Negative numbers are \n");
print(head2);
printf("\n");
printf("\n Number of item = %d \n ",count(head));

return 0;
}

void create(node *list)
{
	printf("\n Input Number");
	printf("\n type 0 to end");
	scanf("%d",&list->number);  /*entering data in current node*/
	
	if (list->number==0)
	{
		list->next=NULL;
	 	
	}
	else     /* allocating space for next node*/
	{
		list->next=(node *)malloc(sizeof(node));
		create(list->next);
	}
	
}

void print(node *list)
{
	while(list->next!=NULL)
	{
		printf("%d -->",list->number);  /* print current item*/
		
		
		 list=list->next ; 
		   
	}
}

void split(node *list)
{	node *p1,*p2;
	head1=(node *)malloc(sizeof(node));
	head2=(node *)malloc(sizeof(node));
	p1=head1;
	p2=head2;
	while(list->next!=NULL)
	{
		if(list->number>0)
		{
			p1->number=list->number;
			p1->next=(node *)malloc(sizeof(node));
			p1=p1->next;
		}
		else
		{
			p2->number=list->number;
			p2->next=(node *)malloc(sizeof(node));
			p2=p2->next;
		}
		
		
		 list=list->next ; 
		   
	}
	p1->next=NULL;
	p2->next=NULL;
}

int count(node *list)
{
	if(list->next==NULL)
	return 0;
	else
	return (1+count(list->next));
}
