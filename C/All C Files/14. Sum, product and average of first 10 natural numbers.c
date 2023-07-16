#include<stdio.h>

int main(void)
{
	int i, sum=1, mul=1;
	float avg;
	
	for (i=1;i<=10;i++)
	{
		sum = sum+i;
		mul = mul*i;
		avg = (sum/10);
	}
	printf("\nThe sum of first 10 natural numbers: %d", sum);
	printf("\nThe product of first 10 natural numbers: %d", mul);
	printf("\nThe average of first 10 natural numbers: %.3f", avg);
	
	return 0;
}
