#include<stdio.h>

int main(void)
{
	int yr;
	printf("Enter the year :");
	scanf("%d", &yr);
	
	if(yr%4 == 0 && yr%100 != 0)
	{
		printf("Leapyear");
	}
	else if (yr%400 == 0)
	{
		printf("Leapyear");
	}
	else
	{
		printf("Not leapyear");
	}
	return 0;
}
