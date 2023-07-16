//Program to check wheather an integer entered by user is odd or even
#include <stdio.h>
int main()
{
	int number;
	printf("Enter any integer :");
	scanf("%d", & number);
	//True if reminder is 0
	if (number %2 == 0)
	{
		printf("%d is an even integer", number);
	}
	else
	{
		printf("%d is an odd integer", number);
	}
	return 0;
}
