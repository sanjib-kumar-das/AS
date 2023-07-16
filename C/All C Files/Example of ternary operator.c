#include<stdio.h>

void main()
{
	int a, b;
	
	printf("Enter the values of a and b: ");
	scanf("%d%d", &a, &b);
	
	(a>b) ? printf("\n%d is greater", a) : printf("\n%d is greater", b);
	
	return 0;

}
