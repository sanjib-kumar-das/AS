#include <stdio.h>

int main(void)
{
    char num[16], ones[16], twos[16];
    int i=0, j=0, c=1;

    printf("\nEnter the Binary number: ");
    gets(num);
    
    for(j=0;num[j]!='\0';j++)
    {
    	if(num[j]!='1' && num[j]!='0')
    	{
    		printf("\nThis is not a Binary number!!");
    		exit(0);
		}
	}

    
    for(i=0; i<16; i++)
    {
        if(num[i] == '1')
        {
            ones[i] = '0';
        }
        else if(num[i] == '0')
        {
            ones[i] = '1';
        }
    }

   
    for(i=15; i>=0; i--)
    {
        if(ones[i] == '1' && c == 1)
        {
            twos[i] = '0';
        }
        else if(ones[i] == '0' && c == 1)
        {
            twos[i] = '1';
            c = 0;
        }
        else
        {
            twos[i] = ones[i];
        }
    }
    
    
    printf("One's complement of %s is = %s\n", num, ones);
    printf("Two's complement of %s is = %s\n", num, twos);

    return 0;
}
