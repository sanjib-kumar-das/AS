#include<stdio.h>
#define max 5

struct stack
{
	int stk[max];
	int top;
}s;

void push(void);
int pop(void);
void display(void);

int main()
{
	int choice;
	s.top = -1;
	printf("Stack Operation\n");
	while(1)
	{
		printf("---------------------------------\n");
		printf("1.	----------> PUSH \n");
		printf("2.	----------> POP \n");
		printf("3.	----------> DISPLAY \n");
		printf("4.	----------> EXIT \n");
		printf("---------------------------------");
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 4: exit(0);
				break;
		default: printf("\nINVALID CHOICE !!!\n");
				break;
	}
	
}
}

void push()
{
	int num;
	if(s.top == max-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	else
	{
		printf("Enter the element to be pushed : \n");
		scanf("%d",&num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
	}
	return;
}
int pop()
{
	int num;
	if(s.top == -1)
	{
		printf("Stack Underflow !\n");
		return(s.top);
	}
	else
	{
		num = s.stk[s.top];
		printf("Popped element : %d\n",num);
		s.top = s.top - 1;
	}
	return(num);
}

void display()
{
	int i;
	if(s.top == -1)
	{
		printf("Stack is empty !\n");
		return;
	}
	else
	{
		printf("\nThe status of the stack:\n ");
		printf("\nTOP ----> ");
		for(i=s.top;i>=0;i--)
		{
			printf("%d ----> ",s.stk[i]);
		}
		printf("NULL\n");
	}
	printf("\n");
}
