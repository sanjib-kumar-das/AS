#include<stdio.h>

int main(void)
{
	int x, y;
	
	printf("Enter any integer: ");
	scanf("%d", &x);
	
	x<<=2;
	y=x;
	
	printf("\nLeft shifted data is= %d", y);
	
	return 0;
}
