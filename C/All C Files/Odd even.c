// Program to find Wheather a number is odd or even
#include<stdio.h>
int main()

{
int number;
printf("Enter any integer :");
scanf("%d", &number);
if (number % 2 == 0)
{
	printf("This is an Even number");
}	
else
{
	printf("This is a Odd number");
}
	
	return 0;
}
