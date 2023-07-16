#include<stdio.h>
//global variable declaration
int a=20;
int main()
{
	//local variable declaration in main
	int a=10,b=20,c=0;
	printf("Value of a in main() = %d\n",a);
	c = sum(a,b);
	printf("Value of c in main() = %d\n",c);
	return 0;
}
//function to add two integers
int sum(int a, int b)
{
	printf("Value of a in sum() = %d\n", a);
	printf("Value of b in sum() = %d\n", b);
	return a+b;
}
