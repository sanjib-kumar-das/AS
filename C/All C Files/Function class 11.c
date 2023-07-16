#include<stdio.h>
int max(int[]);
int main()
{
	int a[10],i,k;
	printf("Enter values of a: ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	k=max(a);
	printf("\n Largest value of the array is %d",k);
}
int max(int p[])
{
	int x,m=0;
	for (x=0;x<=9;x++)
	{
		if(p[x]>m)
		m=p[x];
	}
	return m;
}
