// Print multiplication table of any integer

#include <stdio.h>

int main(void) 
{
    int num, i;
    printf("Enter any integer: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d * %d = %d \n", num, i, (num*i));
    }
    
    return 0;
}
