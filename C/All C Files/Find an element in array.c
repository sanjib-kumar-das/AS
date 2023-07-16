#include<stdio.h>
int main()

{
	int a[5],i=0;
	int find;
	printf("Enter 5 elements of the array:- \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search :- \n");
	scanf("%d", &find);
	
	for(i=0;i<5;i++)
	{
	
		if(find == a[i])
		{
			printf("\n In position %d - Search successful !!!",i);
		}
		else
		{
			printf("\n In position %d - Can't find the element !!!",i);
		}
	}
	return 0;
}
