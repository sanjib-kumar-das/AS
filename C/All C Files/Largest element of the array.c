#include<stdio.h>
int main()
{
	int a[10], i, max=0;
	printf("Enter 10 values for the array:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The largest element is : %d",max);
	
	return 0;
}
