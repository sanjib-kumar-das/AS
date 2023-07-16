#include<stdio.h>   // ERROR in 'dis_prm()' program
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

void push(int val)
{
	node *tmp;
	tmp = malloc(sizeof(node));
	tmp->data = val;
	tmp->next = top;
	top = tmp;
}

int pop()
{
	node *tmp;
	int n;
	
	if(top == NULL)
	{
		printf("\nStack Underflow !!");
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
		printf("\nNull");
	}
	else
	{
		printf("%d\n",head->data);
		display(head->next);
	}
}

void dis_prm(node *head)
{
	int val, i, count = 0;
	
	if(head == NULL)
	{
		printf("\nNULL");
	}
	else
	{
		val = head->data;
		for(i=1;i<=val;i++)
		{
			if(val%i == 0)
			{
				count ++;
			}
		}
			if(count == 2)
			{
				printf("%d\n",head->data);
				dis_prm(head->next);
			}
		
	}
}


main()
{
	int choice, data;
	initialize();
	
	while(1)
	{
		printf("\nEnter 1 to insert element into stack. ");
		printf("\nEnter 2 to delete element from stack. ");
		printf("\nEnter 3 to display the stack. ");
		printf("\nEnter 4 to display the prime numbers into the stack. ");
		printf("\nEnter 5 to Exit. ");
		
		printf("\n\nEnter Your Choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: printf("Enter value : ");
					scanf("%d",&data);
					push(data);
					break;
					
			case 2: printf("Popped value is : %d",pop());
					break;
					
			case 3: display(top);
					break;
					
			case 4: dis_prm(top);
					break;
					
			case 5: return 0;
			
			default: printf("Invalid choice !!");
		}
	}
	return 0;
}
