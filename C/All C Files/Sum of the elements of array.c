#include<stdio.h>
int main()
{
	int a[10], i, sum=0;
	printf("Enter 10 values for the array:-\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of all values in the array is: %d",sum);
	
	return 0;
}

