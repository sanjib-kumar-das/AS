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
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
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
    
    displaylist();    
}


void insertbeg()
{
    struct node *new; 
    new=malloc(sizeof(struct node));
    int num;
    printf("Enter number to insert:\n");
    scanf("%d",&num);
    new->data=num;
    if(head==NULL)
    {
        new->next=NULL;
        head=new;
    }
    else
    {
        new->next=head;
        head=new;
    }
}

void insertend()
{
     int num;
     struct node *new,*ref;
     new=malloc(sizeof(struct node));
     printf("Enter number to insert:\n");
     scanf("%d",&num);
     new->data=num;
     new->next=NULL;
     if(head==NULL)
     {
         head=new;
     }
     else
     {
         ref=head;
         while(ref->next!=NULL)
         ref=ref->next;
         ref->next=new;
     }
      
}

void insertpos()
{   
    struct node *new, *ref;
    int position;
    int num;
    if(head==NULL)
    {
        printf("List is empty!!");
    }   
   new=malloc(sizeof(struct node));
   printf("Enter position to insert:");
   scanf("%d", &position);
   printf("Enter the number to insert:");
   scanf("%d", &num);
   new->data=num;
   
   ref=head;
   int i;
   for(i=1;i<position-1;i++)
   {
       if(ref->next==NULL)
       {
           printf("There are less elements!!");
       }
    ref=ref->next;
   }
  new->next= ref->next;
  ref->next=new;

}

void displaylist()
{
    struct node *tmp;
    if(head==NULL)
    {
        printf("No data found");
    }
    else
    {
        tmp=head;   
        printf("THE LINKED LIST IS:\n");
        while(tmp!=NULL)
        {
           
            printf("%d  ", tmp->data);
            tmp=tmp->next;
        }
    }
}

int main()
{
    int ch, flag;
    void insertbeg();
    void insertend();
    void insertpos();
    void displaylist();
    printf("Inserting elements for list\n");
    insert_node();
    

    while (1)
    {
        printf("\n\nSINGLY LINKED LIST MENU\n");
       	printf("\nEnter 1 for Insertion\nEnter 2 for Display\nEnter 3 for Exit\n" );
        scanf("%d", &ch);
    
        switch(ch)
        {
            case 1:	printf("\n1.Insert at beginning\n2.Insert at intermediate position\n3.Insert at end\n4.Exit");
                    printf("\n\nEnter your choice(1 to 4):");
                    scanf("%d",&flag);
 
                    switch(flag)
                    {
                        case 1: insertbeg(head);
                                displaylist(head);
                                break;
                        case 2: insertpos(head);
                                displaylist(head);
                                break;
                        case 3: insertend(head);
                                displaylist(head);
                                break;
                        case 4: exit(0);
                        default: printf("Invalid Choice!!");
                    }
                    break;
 
            case 2: displaylist(head);
                    break;
            case 3: exit(0);
            
			default: printf("Wrong Choice!!");
        }
    }
 return 0;
}
