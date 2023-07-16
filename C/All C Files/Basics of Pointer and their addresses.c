#include<stdio.h>
int main()
{
	int a;
	int *p = &a;        // p = &a (same meaning)
	printf("\nEnter any number for the variable 'a' => ");
	scanf("%d", &a);
	
	printf("Value of a is %d and address of a is %d",a,&a);
		printf("\nValue of a is %d and address of a is %d",a,p);
			printf("\nValue of a is %d and address of a is %d",*p,p);
				printf("\nValue of a is %d and address of a is %d",*&a,&a);
					printf("\nValue of pointer is %d and address of a is %d",p,&p);
}
