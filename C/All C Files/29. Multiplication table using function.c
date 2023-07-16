#include<stdio.h>

void table(int num)
{
	int i=0, res=1;
	
	for(i=1;i<=10;i++)
	{
		res = num*i;
		printf("%d * %d = %d\n\n", num, i, res);
	}
}

int main(void)
{
	int n;
	printf("\nEnter any Integer: ");
	scanf("%d",&n);
	table(n);
	return 0;
}


