#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	strcpy(str1,"Welcome to the ");
	strcpy(str2,"world of computers.");
	printf("String 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	strcat(str1,str2);
	printf("\nString after concatination : %s",str1);
	return 0;
	
}
