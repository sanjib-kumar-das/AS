#include <stdio.h>
#include<math.h>

int main(void) 
{
    int num, e;
    long int res1, res2 = 1;
    printf("Enter any integer: ");
    scanf("%d", &num);
    printf("\nEnter any exponent: ");
    scanf("%d", &e);
    
    res1 = pow(num,e);
    
    printf("\nPower of %d using Library function = %ld", num, res1);

    while (e != 0)
	{
        res2 *= num; 
        --e;
    }
    printf("\nPower of %d without using Library function = %ld", num, res2);
    
    
    return 0;
}
