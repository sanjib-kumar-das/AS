#include<stdio.h>							
#include<string.h>

int main()
{
	char name[20];
	int length;
	char *cptr=name;
	
	printf("Enter any string: ");
	scanf("%s", name);
	
	while(*cptr!='\0')
	{
		printf("\n\n%c is stored at address %u",*cptr,cptr);
		cptr++;
	}
	length=cptr-name;
	printf("\n\nLength of the string = %d",length);
	
	return 0;
	
}
