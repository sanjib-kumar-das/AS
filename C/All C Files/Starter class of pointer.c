#include<stdio.h>

int main()
{
	int a = 10;
	int *point;               // Pointer 'point' is initialized by the sign '*'
	
	point = &a;              // 'point' is holding the address of a
	
	printf("\n %d      is stored in   %d   address", a, &a);
	printf("\n %d      is stored in   %d   address", a, point);
	printf("\n %d      is stored in   %d   address", *point, point);
	printf("\n %d      is stored in   %d   address", *&a, &a);
	printf("\n %d      is stored in   %d   address", a, &*point);
	printf("\n\n %d is stored in   %d   address", point, &point);
	
	return 0;
}
