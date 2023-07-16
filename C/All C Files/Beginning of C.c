#include<stdio.h>

int main()
{
	int x=65, y, z;
	float f, m;
	char c;
	
	printf ("lets start the C programming..\n");
	printf ("\tDept of Computer Class XII\b\\Sc\"\r\"NAMS,\n");
	y=7;
	z=x%y;
	f=x/y;
	m=(float)x/y;    //type casting
	printf("z=%d f=%f m=%f m%=6.2f,", z, f, m, m);
	z=z+1;
	y++;          //post increment
	z+=y;       //arithmetic assignment operator (*=, -=, /=, %=)
	z--;       //post decrement
	printf("\nz=%d", z);
	c='D';
	printf("\nc=%c", c);
	printf("\nc=%d", c);
	printf("\nx=%c", x);
	c++;
	printf("\nc=%c", c);
	return 0;
}
