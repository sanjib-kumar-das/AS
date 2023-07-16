// * pattern 2

#include<stdio.h>

int main()
{
	int i, j;
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=4 ; j>=i ; j--)
		{
			printf("1");
		}
		printf("\n");
	}
}
