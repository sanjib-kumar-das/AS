// Find simple interest

#include <stdio.h>

int main(void)
{
	int t; 
	float p, r, si;
	
	printf("Enter the princple, time in years and rate of interest respectively: ");
	scanf("%f%f%d", &p, &r,&t);
	
	si = (p*r*t)/100;
	
	printf("Simple interest: %.3f", si);
	
	return 0;
}
