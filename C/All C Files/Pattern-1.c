#include<stdio.h>

int main()
{
	int line, line_max, column;
	printf("Enter the maximum line number ==> ");
	scanf("%d", &line_max);
	
	for(line=1;line<=line_max;line++)
	{
		for(column=1;column<=line;column++)
		{
		    printf("*");
		}
		
		{
			printf("\n");
		}
	}
	return 0;

}

