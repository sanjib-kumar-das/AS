#include <stdio.h>
#include <stdlib.h>


struct node {
    int data; 
    struct node *next;
};

struct node *head=NULL;

void insert_node();
void reverse_list();
void display_list();


int main()
{
    int n; 
	int choice;

    insert_node();

    printf("\nData in the linked list \n");
    display_list();

    printf("\n1. Press '1' to reverse the linked list!\n2. Press '0' to exit\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        reverse_list();
        
    }
    

    printf("\nData in the linked list\n");
    display_list();

    return 0;
}


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


void reverse_list()
{
    struct node *prev, *curr;

    if(head != NULL)
    {
        prev = head;
        curr = head->next;
        head = head->next;

        prev->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            curr->next = prev;

            prev = curr;
            curr = head;           
        }

        head = prev; 

        printf("Linked list is successfully reversed!\n\n");
    }
}


void display_list()
{
    struct node *tmp;
    if(head==NULL)
    {
        printf("\nNo data found!!\n");
    }
    else
    {
        tmp=head;   

        while(tmp!=NULL)
        {
           
            printf("%d  ", tmp->data);
            tmp=tmp->next;
        }
    }
    printf("\n\n");
}
