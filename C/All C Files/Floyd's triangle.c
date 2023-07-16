#include<stdio.h>
int main(void)
{
	int max,row,column,i = 1;
	printf("Enter maximum line number : ");
	scanf("%d",&max);
	
	for (row=1; row <= max; row++)
	{
		for(column=1;column<=row;column++)
		{
			printf("%d", i);
			i++;
		}
		printf("\n");
	}
	return 0;
}

