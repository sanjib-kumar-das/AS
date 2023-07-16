#include<stdio.h>

int main(void)
{
	int num, krs, rem, p, i, a=0;
	printf("Enter any number :");
	scanf("%d", &num);
	krs = num;
	while (num>0)
	{
		rem = num%10;
		p=1;
		for (i = rem; i>=1;i--)
		{
			p = p*i;
		}
		a=a+p;
		num =num/10;
	}
	if (a==krs)
	{
		printf("\n%d is a Krishnamurthy number",krs);
	}
	else
	{
		printf("\n%d is not a Krishnamurthy number",krs);
	}
	return 0;
}


