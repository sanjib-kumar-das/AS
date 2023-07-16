#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *current, *head, *p, *q;
    char ch;
    head=NULL;
    do
    {
        p=malloc(sizeof(struct node));
        printf("Enter the value of node: ");
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            current->next=p;
        current=p;
        printf("\n\nEnter 'Y' to enter one more element else press any key to continue : ");
        scanf(" %c",&ch);
    }
    while(ch=='Y'||ch=='y');
    q=head;
    while(q->next!=NULL){
        printf("%d -> ", q->data);
        q=q->next;
    }
    printf("%d", q->data);
    return 0;
}
