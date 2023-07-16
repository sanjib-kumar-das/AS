#include<stdio.h>

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
	
	tmp = malloc (sizeof(node));
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
		printf("\nStack Underflow !!!\n");
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
		printf("\nNULL\n");
	}
	else
	{
		printf("%d\n",head->data);
		display(head->next);
	}
}


void dis_prm(node *head	)
{
	int val, i, count=0;
	
	if(head == NULL)
	{
		printf("\nNULL\n");
	}
	else
	{
		val = head->data;
		
		for(i=1;i<=val;i++)
		{
			if(val%i == 0)
				count++;
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
		printf("Enter 1 -> Insert element to the stack \n");
		printf("Enter 2 -> Delete element from stack \n");
		printf("Enter 3 -> Dispay the stack \n");
		printf("Enter 4 -> Dispay the prime numbers entered \n");
		printf("Enter 5 -> Exit ");
		
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\nEnter value : ");
					scanf("%d",&data);
					push(data);
					printf("\n\n");
					
					break;
					
			case 2: printf("\nPopped value is : %d",pop());
					printf("\n\n");
					
					break;
					
			case 3: display(top);
			
					break;
					
			case 4: dis_prm(top);
					
					break;
		
		
			case 5: exit(0);
			
			default: printf("\nInvalid Choice !!\n");
		}
	}
	return 0;
}
