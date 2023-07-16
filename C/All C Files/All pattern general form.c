//  For all * shaped patterns :-

#include<stdio.h>

int main()
{
	int line, line_max, space, column; // Take 'space' variable only if there is a left side space in the pattern
	printf("Enter the maximum line number ==> ");
	scanf("%d", &line_max);
	
	/////////////////////////////////////////////////////
	
	for (line=1; line <= line_max; line++)
	// For reverse pattern : 'for (line = line_max ; line >= 1 ; line--);'
	
	////////////////////////////////////////////////////
	
	for (space = 1; space <= (line_max - line); space++)
	// Only if pattern has left side space; Otherwise no use
	
	{
		printf(" ");
	}
	
	///////////////////////////////////////////////////
	
	for(column = 1; column <= X; column++)
	// For odd sequence pattern : X = (2*line-1)
	// For normal sequence pattern X = line
	
	{
		printf("*");
	}
	
	{
		printf("\n");
	}
	
	return 0;
}
