#include<stdio.h>
int main()
{
	FILE *f1, *f2, *f3;
	int num, i;
	
	printf("Enter numbers (input 0 to end):- \n");
	f1 = fopen("data","w");
	
	for(i=0;i<=100;i++)
	{
		scanf("%d",&num);
		if(num==0)
		{
			break;
		}
		else
		{
			putw(num,f1);
		}
	}
	fclose(f1);
	
	f1 = fopen ("data","r");
	f2 = fopen ("odd","w");
	f3 = fopen ("even","w");
	
	while((num = getw(f1)) != EOF)
	{
		if(num%2 == 0)
		{
			putw(num,f2);
		}
		else
		{
			putw(num,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	f2 = fopen("odd","r");
	f3 = fopen("even","r");
	
	printf("\nContents of Odd file:- \n");
	while((num=getw(f2))!=EOF)
	{
		printf("%4d",num);
	}
	
	printf("\n");
	
	printf("\nContents of Even file:- \n");
	while((num=getw(f3))!=EOF)
	{
		printf("%4d",num);
	}
	
	fclose(f2);
	fclose(f3);
}
