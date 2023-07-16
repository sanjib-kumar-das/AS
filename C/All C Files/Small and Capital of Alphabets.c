#include<stdio.h>
#include <ctype.h>
int main()
{
	char alphabet;
	printf ("Enter an alphabet");
	putchar('\n');  //MOVE TO THE NEXT LINE
	alphabet = getchar();
	
	if (islower(alphabet))
		putchar(toupper(alphabet));  //REVERSE AND DISPLAY
	else
		putchar(tolower(alphabet));  //REVERSE AND DISPLAY
	
	return 0;
}
