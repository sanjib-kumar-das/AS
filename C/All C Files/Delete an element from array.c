#include<stdio.h>
int main()
{
	int a[10], i, val=0,m=0;
	printf("Enter the values for the array:-\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the value which you want to delete: ");
	scanf("%d", &val);
	
	for(i=0;i<10;i++)
	{
		if(val==a[i])
		m=i;
	}
	for(i=m;i<10;i++)
	{
		a[i]=a[i+1];
	}
	printf("\nValues of new array is:-\n");
	for(i=0;i<9;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
