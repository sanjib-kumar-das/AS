/*program-36: Program to check if 3 numbers are Pythagorean*/
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three numbers ==> ");
	scanf("%d%d%d", &a, &b, &c);
	if (a*a + b*b == c*c)
	printf("\nThe numbers are Pythagorean");
	else if (b*b + c*c == a*a)
	printf("\nThe numbers are Pythagorean");
	else if (c*c + a*a == b*b)
	printf("\nThe numbers are Pythagorean");
	else
printf("\nThe numbers are not Pythagorean");
return 0;
}
