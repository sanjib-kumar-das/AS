#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100];
	printf("Enter a string to find its reverse form : ");
	gets(arr);
	strrev(arr);
	printf("Reverse form of the string is : %s",arr);
	
	return 0;
}
