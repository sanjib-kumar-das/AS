#include <stdio.h>
int main()
{
	int a=10, b=100;
	printf("a++=%d\n",a++);//Post increment
    printf("a=%d\n",a);
    printf("b--=%d\n",b--);//Post decrement
    printf("b=%d\n",b);
    
    printf("a=++%d\n",a++);//Pre increment
    printf("a=%d\n",a);
    printf("b=--%d\n",b--);//Pre decrement
    printf("b=%d\n",b);
    return 0;
}
