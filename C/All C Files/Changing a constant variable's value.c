#include<stdio.h>
int main()
{
	const int x=10;
	int *p;
	p=&x;
	*p += 90;
	
	printf("New value : %d",x);
	return 0;
}
