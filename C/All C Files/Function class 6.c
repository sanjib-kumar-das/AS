#include<stdio.h>
void display(int a[]);
int main()
{ 	int n[]={1,2,3};
	
	display(n);
	printf("\n Back to main");

}
void display(int a[])
{
	//a=a*a;
	printf("\n value is %d ",a[0]);
	printf("\n value is %d ",a[1]);
	printf("\n value is %d ",a[2]);
}
