#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]= "PROGRAM";
	char b[20]= {'p','r','o','g','r','a','m'};
	char c[20];
	
	printf("Enter string : ");
	gets (c);
	printf ("Length of string a = %d\n",strlen(a));
	printf ("Length of string b = %d\n",strlen(b));
	printf ("Length of string c = %d\n",strlen(c));
	
	return 0;
	
}
