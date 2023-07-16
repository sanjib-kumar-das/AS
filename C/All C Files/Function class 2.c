#include<stdio.h>
void display(int);
int main()
{ 	int n;
	scanf("%d",&n);
	display(n);
	printf("\n Back to main");
}
void display(int a)
{
	a=a*a;
	printf("\n value is %d ",a);
}
