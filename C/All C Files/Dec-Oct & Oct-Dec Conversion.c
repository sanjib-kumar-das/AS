#include<stdio.h>
#include<math.h>

int main()
{
	char val[20];
	int dec, i=0, n, sum=0;
	printf("\nEnter a decimal number to find its octal value : ");
	scanf("%d",&dec);
	
	while (dec!=0)
	{
		val[i] = dec%8;
		i++;
		dec = dec/8;
	}
	i--;
	
	printf("\nThe octal value is : ");
	
	return 0;
}
