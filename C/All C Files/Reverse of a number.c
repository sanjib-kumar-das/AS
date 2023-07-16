#include<stdio.h>

void main()
{
	int num,a,rev=0;
	printf("Enter any number to get its reverse: ");
	scanf("%d", &num);
	
	while(num>=1)
	{
		a= num%10;
		rev= rev*10+a;
		num= num/10;
	}
	
	printf("\nReversed number= %d",rev);
	
}
