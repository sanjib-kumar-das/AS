#include<stdio.h>
int main(void)

{
	int num;
	printf("Please enter any number :");
	scanf("%d", &num);
	
	krishna(num);

	return 0;
}

void krishna (int n)
{
	int temp, rem, x, p, i=0;
	temp = n;
	
	while (n>0)
	{
		rem = n%10;
		p=1;
		for (i = rem; i>=1;i--)
		{
			p = p*i;
		}
		x=x+p;
		n = n/10;
	}
	
	if (x==temp)
	{
		printf("\n%d is a Krishnamurthy number", temp);
	}
	else
	{
		printf("\n%d is not a Krishnamurthy number", temp);
	}
	return 0;
}


