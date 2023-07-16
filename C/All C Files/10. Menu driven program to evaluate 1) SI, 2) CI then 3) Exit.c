// Menu driven program to evaluate 1) Simple interest, 2) Compound interest 3) Exit

#include <stdio.h>
#include <math.h>

int main(void)
{
	int choice, p, t; 
	float r, sim, com, temp;
	
	while(1)
	{
		printf("Press 1 to get Simple Interest \n");
		printf("Press 2 for Compound Interest \n");
		printf("Press 3 to Exit \n");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	
	printf("Enter the Principal, time in years & rate of interest respectively: ");
	scanf("%d%d%f", &p, &t, &r);
				
	switch(choice)
	{
		case 1: sim = (p*t*r)/100;
				
				printf("\nSimple Interest : %.2f\n\n",sim);
				break;
				
		case 2: temp = p*pow((1 + r/100),t);
				com = temp-p;
				
				printf("\nCompound Interest : %.2f\n\n",com);
				break;
				
		case 3: exit(0);
				break;
				
		default: printf("\nINVALID CHOICE !!!\n");
				break;
	}
	
}
}

