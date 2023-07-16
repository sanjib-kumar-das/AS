#include <stdio.h>

int main()
{
double number;
printf ("Enter a number : ");
scanf ("%lf", &number);

if (number<=0.0)
{
	if (number==0.0)
	
	printf("You entered 0 .");
	
	else
	
	printf("\n  You entered a Negative number .", number);
}
else
{
	printf("\n  You entered a Positive number .", number);
}
return 0;
}
