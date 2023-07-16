#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c=0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	c = a+b;

	printf("Answer: %d",c);

	return 0;

}