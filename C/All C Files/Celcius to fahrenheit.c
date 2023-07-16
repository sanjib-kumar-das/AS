#include<stdio.h>

int main(void)
{
	float cel, fer;
	
	printf("Enter temperature in Celcius: ");
	scanf("%f", &cel);
	
	fer = (1.8*cel)+32;
	printf("Temperature in fahrenheit: %f", fer);
	
	return 0;
}
