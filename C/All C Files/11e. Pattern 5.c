#include<stdio.h>

int main(void)
{
	int i, j;
	
	for (i=1;i<=4;i++) 
	{
		if (i%2 != 0)
		{
			for(j=1;j<=7;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		else
		{
			printf(" ");
			for(j=1;j<=7;j++)
			{
				printf("*");
			}
			printf("\n");	
		}
	}
	return 0;
}
