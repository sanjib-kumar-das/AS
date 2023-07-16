#include<stdio.h>

void main()
{
	int yr;
	
	printf("Enter the year: ");
	scanf("%d", &yr);
	
	if(yr%4==0 || yr%100==0)
	{
		printf("\n%d is a leapyear", yr);
	}
	else
	{
		printf("\n%d is not a leapyear", yr);
	}
	
	return(0);
}
