#include<stdio.h>
void swap(int *,int*);
int main()
{
	int a=5,b=10;
	swap(&a,&b);
	printf("\n In main function a=%d and b=%d",a,b);
}
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	//printf("\n In swap function a=%d and b=%d",*a,*b);
}
