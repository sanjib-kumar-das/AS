#include<stdio.h>
#include <ctype.h>
int main()
{
	char character;
	printf("Press any key !\n");
	character = getchar();
	
	if (isalpha(character)>0)
		printf("\nThe character is a letter.");
	else
	
	if (isdigit(character)>0)
		printf("\nThe character is a digit.");
	else
		printf("\nThis is not a alphanumeric character.");
	
	return 0;
}
