#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		fact = fact*n;
		n--;
	}
	printf("The factorial is : %d",fact);
	return 0;
}
