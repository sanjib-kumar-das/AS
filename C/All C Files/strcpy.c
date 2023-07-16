#include<stdio.h>
#include<string.h>

int main()
{
	char a[10], b[10];
	printf("Enter string : ");
	gets (a);
	strcpy (b,a);     // a copied to b
	printf ("Copied string : ");
	puts (b);
	return 0;
	
}
