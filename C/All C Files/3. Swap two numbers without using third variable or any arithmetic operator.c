// Swap two numbers without using third variable or any arithmetic operator

#include<stdio.h>

int main(void)
{
	int a, b;
	printf("\nEnter the value of a: ");
	scanf("%d",&a);
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	
	printf("\nBefore swap: a= %d & b= %d", a, b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("\nAfter swap: a= %d & b= %d", a, b);
	return 0;
}
