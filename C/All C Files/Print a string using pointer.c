#include<stdio.h>
int main()
{
	char str[20];
	char *p;
	int i=0;
	p=str;
	printf("Enter the string: ");
	gets(str);
	        
	while(*p != '\0')
	{
		printf("%d index contains %c and its address is %d \n",i,*p,p);
		i++;
		p++;
	}
	return 0;
}
