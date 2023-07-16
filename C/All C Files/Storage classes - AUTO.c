#include<stdio.h>
void increment(void);
int main()
{
	int i;
	for (i=1;i<=3;i++)
	increment();
	return 0;
}
void increment (void)
{
	auto int x = 0;
	x=x+1;
	printf("\n x = %d",x);
}
