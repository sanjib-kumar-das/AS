#include<stdio.h>

void main()
{
	int a, b, c;
	
	printf("Enter the values of three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if ((a>b)&&(a>c))
	printf("\n%d is greatest", a);
	
	if ((b>c)&&(b>a))
	printf("\n%d is greatest", b);
	
	if ((c>a)&&(c>b))
	printf("\n%d is greatest", c);
	
	return 0;

}
