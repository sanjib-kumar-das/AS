#include<stdio.h>
#include<math.h>

int main()
{
	char rem[20];
	int dec, i=0, n, sum=0;
	printf("\n Enter a decimal number to find its binary value : ");
	scanf("%d",&dec);
	
	while (dec != 0)
	{
		rem[i] = dec%2;
		i++;
		dec = dec/2;
	}
	i--;
	printf("\n The binary value is : ");
	
	for (n=i;n>=0;n--)
	{
		printf("%d",rem[n]);
	}
	printf("\n The decimal value is : ");
	
	for (n=0;n<=i;n++)
	{
		sum=sum+(rem[n]*pow(2,n));
	}
	printf("%d",sum);
	return 0;
}
