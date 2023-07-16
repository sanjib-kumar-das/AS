//C Program to Print series 1 + 2^2 + 3^3 + ... n^n 
 
#include<stdio.h>
#include<math.h>
 
int main(void)
{
	int num, sum=0, i;
	
	printf("Enter any integer: ");
	scanf("%d", &num);
	
	for(i=1 ; i<=num ; i++)
	{
		sum = sum + pow(i,i);
	}
	
	printf("\nThe sum of series is: %d", sum);
	
	return 0;
}
