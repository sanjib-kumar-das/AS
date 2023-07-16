#include<stdio.h>
int main(void)
{
	int i, j, arr[100], n, t;
	printf("Input total number of elements present in the array: ");
	scanf("%d", &n);
	printf ("Input %d numbers:- \n",n);
	
	for (i=0;i<=n-1;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (i=0;i<=n-1;i++)
	{
		for (j=i+1;j<=n-1;j++)
		{
			if(arr[i]<arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	
	printf("\n\nSorted list in descending order:- \n");
	for (i=0;i<=n-1;i++)
	{
		printf("%d\n",arr[i]);
	}
		return 0;
}

