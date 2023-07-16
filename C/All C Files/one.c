#include <stdio.h>
//#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    if(top==NULL)
    {
    	printf("\n Stack Underflow \n");
    	return;
	}
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}


void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

void display_prime(node *head)
{	int val,i,count=0;
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {	val=head -> data;
    	for (i=1;i<=val;i++)
    	{
    		if (val%i==0)
    			count++;
		}
		if(count==2)
        printf("%d\n", head -> data);
        display_prime(head->next);
    }
}
int main()
{
	int choice,data;
	initialize();

        while (1)

        {

            printf("1.Insert element to stsck \n");

            printf("2.Delete element from stsck \n");

            printf("3.Display all elements of stsck \n");

            printf("4.Display all prime elements of stsck \n");
            printf("5.Exit \n");

            printf("Enter your choice : ");

            scanf("%d", &choice);

            switch (choice)

            {

                case 1:
				printf("\n Enter value to stack :");
				scanf("%d",&data);
                 push(data);

                break;

                case 2:

                 printf("\n Poped value is %d \n",pop());

                break;

                case 3:

                display(top);

                break;

                case 4:

                display_prime(top);
                break;
                case 5:

                return 0;

                default:

                printf("Wrong choice \n");

            } /*End of switch*/

        } /*End of while*/
    
   
   
    
   

    
    return 0;
}
