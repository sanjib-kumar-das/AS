// Find area and circumference of a circle

#include <stdio.h>

int main(void)
{
	int r; 
	float area, cf;
	
	printf("Eter radius of the circle: ");
	scanf("%d", &r);
	
	area = (3.14*r*r);
	printf("\nThe area of the circle: %.3f", area);
	
	cf = (2*3.14*r);
	printf("\nThe circumference of the circle: %.3f", cf);
	
	return 0;
}
