#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20], temp[20];
	
	printf("Enter any string: ");
	gets(str);
	
	strcpy(temp, str); 
	strrev(temp);
	
	if (strcmp(str, temp) == 0)
	{
		printf("The string is Palindrome\n");	
	}
	else
	{
		printf("The string is not Palindrome\n");	
	}
	
	return 0;
}
