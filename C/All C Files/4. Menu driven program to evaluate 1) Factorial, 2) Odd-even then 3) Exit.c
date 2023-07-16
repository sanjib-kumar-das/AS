// Menu driven program to evaluate 1) Factorial, 2) Odd-even then 3) Exit

#include<stdio.h>

int main(void)
{
	int choice, num, fact=1;
	
	while(1)
	{
		printf("Press 1 to get Factorial \n");
		printf("Press 2 for Odd/Even check \n");
		printf("Press 3 to Exit \n");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("\nEnter the number: ");
				scanf("%d",&num);
	
				while(num>0)
				{
					fact = fact*num;
					num--;
				}
				printf("\nThe factorial is : %d\n\n",fact);
				break;
				
		case 2: printf("\nEnter any integer: ");
				scanf("%d", &num);
				
				if (num%2 == 0)
				{
					printf("\nThis is an Even number\n\n");
				}	
				else
				{
					printf("\nThis is a Odd number\n\n");
				}
				break;
				
		case 3: exit(0);
				break;
				
		default: printf("\nINVALID CHOICE !!!\n");
				break;
	}
	
}
}

