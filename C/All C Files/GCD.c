#include <stdio.h>

int main()
{
	int num1, num2, temp, gcd;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	if(num1<=0 || num2<=0)
	{
		printf("Enter positive numbers only!!");
	}
	else
	{
		while (num2 != 0)
		{
			temp = num2;
			num2 = num1 % num2;
			num1 = temp;
		}
	gcd = num1;
	printf("gcd = %d", gcd);
	}
	
	return 0;
}
