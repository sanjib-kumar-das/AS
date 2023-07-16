#include<stdio.h>

int main()
{
	char name[20];
	char *p;
	printf("Enter a string:- \n");
	gets(name);
	p = name;
	
	while(*p!='\0')
	{
		printf("\n '%c' is stored at -> %u",*p,p);
		p++;
	}
	printf("\n\n Size of the name is %d",p-name);
	p--;

}
