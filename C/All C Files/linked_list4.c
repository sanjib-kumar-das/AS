#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
    struct node *next;
};

struct node *head = NULL;

void insert_node()
{
    struct node *ptr,*previous, *list;
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    head=NULL;
    for(i=0;i<n;i++)
    {
        ptr=malloc(sizeof(struct node*));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if (head==NULL){
            head= ptr;
        }else
        previous->next=ptr;
        previous= ptr;

    }
    list=head;
    while(list->next!=NULL){
        list=list->next;
    }
      
}


void displaylist()
{
    struct node *tmp;
    if(head==NULL)
    {
        printf("\nNo data found!!\n");
    }
    else
    {
        tmp=head;   
        printf("\n\nTHE LINKED LIST IS:\n");
        while(tmp!=NULL)
        {
           
            printf("%d  ", tmp->data);
            tmp=tmp->next;
        }
    }
    printf("\n\n");
}

void delbeg()
{
	struct node *temp;
	temp=head;
	head = head->next;
	printf("\nDeleted element: %d",temp->data);
	free(temp);
}

void delpos()
{
	int pos,i=1;
	struct node *p, *temp;
	
	if (head == NULL)
	{
		printf("\nList is empty!\n");
	}
	else
	{
		printf("Enter the index number: ");
		scanf("%d",&pos);
		p = malloc(sizeof(struct node));
		
		temp = head;
		
		while(i<pos-1)
		{
			temp = temp->next;
			i++;
		}
		p = temp->next;
		temp->next = p->next;
		free(p);
	}
}

void delend()
{
	struct node *curr1, *curr2;
	
	curr1=head;
	curr2=curr1->next;
	
	while(curr2->next!=NULL)
	{
		curr1=curr2;
		curr2=curr1->next;
	}
	
	printf("\nDeleted element: %d",curr2->data);
	curr1->next=NULL;
	free(curr2);
}

int main()
{
	insert_node();
	displaylist();
	int flag;
	
	while(1)
	{
		printf("\n1.Delete at beginning\n2.Delete at intermediate position\n3.Delete at end\n4.Display List\n5.Exit");
        printf("\n\nEnter your choice(1 to 5):");
        scanf("%d",&flag);
 
        switch(flag)
        {
            case 1: delbeg(head);
            		displaylist(head);
            		break;
            
            case 2: delpos(head);
            		displaylist(head);
            		break;
            
            case 3: delend(head);
            		displaylist(head);
            		break;
            
            case 4: displaylist();
            		break;
            
            case 5: exit(0);
            
            default: printf("Invalid Choice!!");
        }
                   
	}
}
