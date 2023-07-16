#include<stdio.h>
#define max 5

int queue[max], front = -1, rear = -1;

void store(int x);
int delete();
void display();
    
void main()
{  
	int val, prompt;
	
	while(1)
	{
		printf("\n*** Enter your choice :- ***\n");
		printf("Enter <1> to STORE\n");
		printf("Enter <2> to DELETE\n");
		printf("Enter <3> to DISPLAY\n");
		printf("Enter <4> to EXIT\n\n");
		
		scanf("%d",&prompt);
		
		switch(prompt)
		{
			case 1 : store(val);
					 break;
					 
			case 2 : delete();
					 break;
					 
			case 3 : display();
					 break;
					 
			case 4 : exit(0);
					 break;
					 
			default: printf("\n*** INVALID CHOICE ***\n");
		}
	}
}

void store(int x)
{
	int i;
	
	if(rear == max-1)
	{
		printf("Queue Overflow !!!\n");
	}
	else
	{
		if (front == -1)
		front = 0;
		printf("\nInsert element in Queue : ");
		scanf("%d",&i);
		rear = rear+1;
		queue[rear] = i;
	}
}

int delete()
{
	
	if(front == -1 || front > rear)
	{
		printf("Queue Underflow !!!\n");
		return;	
	}
	
	else
	{
		printf("\nDeleted element is : %d\n",queue[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if(front == -1)
	{
		printf("\nQueue is empty !\n");
	}
	else
	{
		printf("Queue is : \n");
		{
			for (i=front;i<=rear;i++)
			printf("%d -> ",queue[i]);
		}
		printf("\n");
	}
}
