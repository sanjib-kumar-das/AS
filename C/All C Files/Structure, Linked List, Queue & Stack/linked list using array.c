#include<stdio.h>
#define max 5

int stack[max], top = -1;

void push (int x);
int pop();

void main()
{
	int val, prompt;
	do
	{
	printf("\n*** Enter your choice ! ***\n");
	printf("\nEnter <1> to PUSH\n");
	printf("\nEnter <2> to POP\n");
	printf("\nEnter <3> to END\n\n");
	scanf("%d",&prompt);
	switch(prompt)
	{
		case 1: printf("\nEnter value to push : ");
				scanf("%d",&val);
				push(val);
				break;
				
		case 2: printf("\nPopped value = %d\n\n",pop());
				break;
				
		case 3: exit(0);
				break;
		
		default: printf("\n***INVALID CHOICE***\n");
				break;
	}
	}
	while(prompt != 0);
}

void push (int x)
{
	if(top == max-1)
	{
		printf("\n!!! STACK OVERFLOW !!!\n");
	}
	else
	{
		stack[++top] = x;
	}
}

int pop()
{
	if(top == -1)
	{
		printf("\n!!! STACK UNDERFLOW !!!\n");
		return 0;
	}
	else
	{
		return stack[top--];
	}
}

