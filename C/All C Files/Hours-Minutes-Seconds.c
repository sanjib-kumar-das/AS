// The prog has a prob, not running accurately !!!

#include<stdio.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
} clock;
int main()
{
	printf("Enter time in seconds: ");
	scanf("%d",&clock.seconds);
	
	clock.minutes=clock.seconds/60;
	clock.seconds=clock.seconds%60;
	
	if(clock.minutes>=60)
	{
		clock.hours=clock.minutes/60;
		clock.minutes=clock.minutes%60;
	}
	
	
	printf("\n %d hours %d minutes and %d seconds ",clock.hours,clock.minutes,clock.seconds);
	
	return 0;
}
