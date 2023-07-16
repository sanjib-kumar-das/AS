// C program to find LCM of numbers
#include <stdio.h>

int main(void)
{
	int num1, num2, max;
	printf("Please enter two integer values : ");
	scanf("%d %d", &num1, &num2);
	
	max = (num1>num2)?num1:num2;
	
	while(1) 
	{
		if(max%num1 == 0 && max%num2 == 0)
		{
			printf("LCM of %d and %d is  ==> %d", num1, num2, max);
			break;
		}
		++max;
	}
	return 0;
}
