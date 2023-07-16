#include<stdio.h>

int* min(int*,int*);

int main()
{
	int a,b,*c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	c=min(&a,&b);
	printf("\n\nSmaller number is %d",*c);
	
	return 0;
}

int* min(int *x , int *y)
{
	if (*x>*y)
	return y;
	else 
	return x;
}

