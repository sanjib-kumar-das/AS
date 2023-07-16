#include<stdio.h>

void swap(int*,int*);

int main()
{
	int a,b;
	printf("\n Enter the value of 'a' : ");
	scanf("%d",&a);
	printf("\n Enter the value of 'b' : ");
	scanf("%d",&b);
	
	swap(&a,&b);
	printf("\n a = %d and b = %d",a,b);
}

void swap(int *x,int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
