#include<stdio.h>
#include<string.h>
void time_return(float);

int main()

{
	int index, i=0;
	float time;
	
		printf("\nEnter day index: ");
		scanf("%d",&index);
		printf("\nEnter time in 24hr format: ");
		scanf("%f",&time);
		
		
		
		switch(index)
		{
			case 1: printf("\nDay: SUNDAY");
					time_return(time);
			break;
			
					
			case 2: printf("\nDay: MONDAY");
					time_return(time);
			break;
			
					
			case 3: printf("\nDay: TUESDAY");
					time_return(time);
			break;
			
			
			case 4: printf("\nDay: WEDNESDAY");
					time_return(time);
			break;
			
			
			case 5: printf("\nDay: THURSDAY");
					time_return(time);
			break;
			
			
			case 6: printf("\nDay: FRIDAY");
					time_return(time);
			break;
			
			
			case 7: printf("\nDay: SATURDAY");
					time_return(time);
			break;
			
			
			default: printf("\nInvalid Choice !!");
					 break;
		}
	
	
	
	return 0;
}

void time_return(float t)
{
	if (t>=0.00 && t<= 5.59)
	{
		printf("\nTime: MIDNIGHT");
	}
	else if (t>=6.00 && t<= 11.59)
	{
		printf("\nTime: MORNING");
	}
	else if (t>=12.00 && t<= 16.59)
	{
		printf("\nTime: AFTERNOON");
	}
	else if (t>=17.00 && t<= 19.59)
	{
		printf("\nTime: EVENING");
	}
	else if (t>=20.00 && t<=24.00)
	{
		printf("\nTime: NIGHT");
	}
}
