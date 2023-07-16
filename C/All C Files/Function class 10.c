#include<stdio.h>
int max(int,int,int);
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a, &b, &c);
	printf("The maximum value is: %d",max(a,b,c));
}
int max(int x, int y, int z)
{
	if(x>y&&x>z)
	return x;
	else if(y>x&&y>z)
	return y;
	else
	return z;
}
