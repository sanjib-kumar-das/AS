// Program to find factorial of a number for a positive integer n, factorial = 1*2*3...n
#include<stdio.h>
int main()

{
	int number;
	long int factorial;
	printf ("Enter an integer :");
	scanf ("%d", &number);
	factorial = 1;
	//Loop terminates when number is less than or equal to 0
	while (number>0)
	{
		factorial *= number;
		--number;
		printf("\nFactorial = %d", factorial);
	}
	return 0;
}
