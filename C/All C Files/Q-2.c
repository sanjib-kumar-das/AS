/* Q.2 : Write a C program to create a stack using array having 10 
integers.Write the PUSH & POP function of that stack and as well as display
the numbers.*/
 
//  IMPLEMENTING STACK USING ARRAY   //
  
  
#include<stdio.h>
#define max 10

int stack[max], top = -1;
void push(int x);
int pop();
void display();

void main()
{
	int val, choice;
	
		while(1)
		{
			
		printf("\nEnter <1> to PUSH.");
		printf("\nEnter <2> to POP.");
		printf("\nEnter <3> to Display.");
		printf("\nEnter <4> to Exit.");
		
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		
			switch (choice)
			{
				case 1: printf("\nEnter value to push : ");
						scanf("%d",&val);
						push(val);
						break;
					
				case 2: printf("\nPopped value is : %d", pop());
						break;
					
				case 3: display();
						break;
					
				case 4: exit(0);
					
				default: printf("*** Invalid Choice !!! ***");
				
			}
		}
}


void push(int x)
{
	if(top == max-1)
	{
		printf("\nStack Overflow !!!");
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
		printf("\nStack Underflow !!!");
		return 0;
	}
	else
	{
		return stack[top--];
	}
}


void display()
{
	int i;
	if(top == -1)
	{
		printf("Stack is empty !\n");
		return;
	}
	else
	{
		printf("\nThe status of the stack:\n ");
		printf("\nTOP ----> ");
		for(i=top;i>=0;i--)
		{
			printf("%d ----> ",stack[i]);
		}
		printf("NULL\n");
	}
	printf("\n");
}
