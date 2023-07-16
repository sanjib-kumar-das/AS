#include<stdio.h>

int main(void)
{
	int i, j;
	char word[] = "C PROGRAMMING";
	
	for(i=0;i<=12;i++)
	{
		j = i+1;
		printf("%-12.*s\n", j, word);
	}
	for(i=12;i>=0;i--)
	{
		j = i+1;
		printf("%-12.*s\n", j, word);
	}
	
	return 0;
}
