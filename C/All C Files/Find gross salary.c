// Find gross salary

#include<stdio.h>

int main(void)
{
	int gross,basic,da,ta;

	printf("Enter basic salary: ");
	scanf("%d", &basic);
	
	da=(10*basic)/100;
	ta=(12*basic)/100;
	gross= basic+da+ta;
	
	printf("\nGross Salary=%d", gross);
	
	return 0;
}
