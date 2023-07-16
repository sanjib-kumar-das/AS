#include<stdio.h>

int main() 
{
	int dec, r, temp, oct[50], i=1, j=0;

	printf("Enter the decimal number: ");
	scanf("%ld",&dec);
	
	temp = dec;
	
	while(temp!=0) 
	{
		oct[i++]= temp%8;
		temp = temp/8;
	}
	printf("Equivalent octal value is: ");
	
	for (j=i-1;j>0;j--)
	{
		printf("%d",oct[j]);
	}     
	return 0;
}
