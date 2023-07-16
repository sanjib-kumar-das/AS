#include<stdio.h>

int main()
{
	int a,b,sum,mul,sub,div;
	int *m=&a,*n=&b;
	
	printf("Enter two numbers:-\n");
	scanf("%d%d", &a, &b);
	sum = *m + *n;
	mul = *m * *n;
	sub = *m - *n;
	div = *m / *n;
	
	printf("\n Addition result : %d",sum);
	printf("\n Subtraction result : %d",sub);
	printf("\n Multiplication result : %d",mul);
	printf("\n Division result : %d",div);
	
	return 0;
}
