// Program to calculate the sum of first n natural numbers
// positive integers 1, 2, 3 ...n are known as natural numbers(not 0)
#include <stdio.h>
int main()

{
	int num, count, sum=0;
	printf("Enter a positive number :");
	scanf("%d", &num);
	// For loop terminates when count is greater than number
	for (count = 1; count <= num; ++count)
	{
		sum += count;
	}
	printf("sum = %d", sum);
	return 0;
}
