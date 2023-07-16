#include<stdio.h>
float avg(int *arr,int n);
int main()
{
	int count=-1,arr[100],k=0;
	float ans;
	while(k==0)
	{
		count++;
		printf("Enter a number: ");
		scanf("%d",&arr[count]);
		printf("\nWant another number (0=yes,1=no)");
		scanf("%d",&k);
	}
	
	ans=avg(&arr,count);
	
	printf("\n Average of the numbers is %.3f",ans);
	
	return 0;
	
}

float avg(int *arr,int n)
{
	int sum=0,i;
	for (i=0;i<=n;i++)
	{
		sum=sum+*arr;
		arr++;
	}
	return (sum/(n+1));
}

