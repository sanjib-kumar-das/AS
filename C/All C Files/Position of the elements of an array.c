#include<stdio.h>

int main()
{
	int a[5],i=0;
	int *p=a;
	
	printf("Enter 5 elements for the array:-\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<5;i++)
	{
		printf("\n %d is stored at %d",*p,p);
		p++;
	}
	
	return 0;
}
