//Program to calculate the sum and average of maximum 5 numbers
//If user enters negetive number the sum and average of previously entered positive number is displayed
#include<stdio.h>
int main()

{
	const int maxinput = 5;
	int i;
	float number, average, sum=0.0;
	for (i=1; i<=maxinput; ++i)
	{
		printf("\nEnter a number :");
		scanf("%f", &number);
		if (number <0.0)
		goto jump;
		sum += number ;
	}
	jump:
		average = sum/(i-1);
		printf("Sum = %2f\n", sum);
		printf("Average = %2f", average);
		
		return 0;
}
