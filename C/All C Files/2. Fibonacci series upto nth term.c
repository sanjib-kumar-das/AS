// Fibonacci Series upto Nth term

#include<stdio.h>

int main(void)

{
	int n, no1=1, no2=1, no3, i;
	printf("How many numbers you want to print: ");
	scanf("%d", &n);
	if (n==1)
	{
		printf("1");
	}
	else if (n==2)
	{
		printf("1 1");
	}
	else
	printf("1 1");
	for (i=1;i<=(n-2);i++)
	{
		no3=no1+no2; 
		no1=no2; 
		no2=no3;
		printf(" %d ", no3);
	}
	return 0;
}
