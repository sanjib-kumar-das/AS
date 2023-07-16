#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
	int num, org, rem, temp = 0,i = 0;
	int sum;
	int choice; 
	
	while(1)
	{
		printf("Press 1 to check Armstrong number \n");
		printf("Press 2 for Perfect number \n");
		printf("Press 3 to Exit \n");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	
	printf("\nEnter any integer: ");
	scanf("%d", &num);
				
	switch(choice)
	{
		case 1: org = num;
	
				while (org != 0)
				{
					org /= 10;
					i++;
				}
				org = num;
				while (org != 0)
				{
					rem = org%10;
					temp += pow(rem,i);
					org /= 10;
				}
				if (temp == num)
				{
					printf("\n %d is an Armorstorng no\n\n",num);
				}
				else 
				{
					printf("\n %d is not an Armstorng no\n\n",num);
				}
				break;
				
		case 2: sum =0;
				for(i=1 ; i<=(num-1) ; i++)   
				{   
					if(num%i == 0)   
					   sum += i;   
				}    
				
				if (sum == num)   
					printf("\n%d is a Perfect Number\n\n", num) ;   
				else   
				    printf("\n%d is not a Perfect Number\n\n", num) ;   

				break;
				
		case 3: exit(0);
				break;
				
		default: printf("\nINVALID CHOICE !!!\n");
				 
				break;
	}
	
}
	return 0;
}

