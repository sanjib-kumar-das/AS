#include<stdio.h>
void display(char a[]);
int main()
{ 	char n[20];
	scanf("%s",n);
	display(n);
	printf("\n Back to main");

}
void display(char a[])
{
	//a=a*a;
	printf("\n value is %s ",a);
}
