#include<stdio.h>
void display(int,int);
int main()
{ 	int n,p;
	scanf("%d %d",&n,&p);
	display(n,p);
	printf("\n Back to main");

}
void display(int a,int b)
{
 	int z;
 	z=a+b;
	printf("\n value is %d ",z);
}
