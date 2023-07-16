#include<stdio.h>

int main()
{
	FILE *f1, *f2, *f3;
	int n,i;
	
	printf("Contents of data file :- \n\n");
	f1=fopen("data.txt","w");
	for(i=1; i<=30; i++)
	{
		scanf("%d",&n);
		if(n == -1)
			break;
		putw(n,f1);
	}
	fclose(f1);
	
	f1=fopen("data.txt","r");
	f2=fopen("odd.txt","w");
	f3=fopen("even.txt","w");
	
	while((n = getw(f1)) != EOF)
	{
		if(n % 2 == 0)
			putw(n,f3);
		else
			putw(n,f2);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	f2 = fopen("odd.txt","r");
	f3 = fopen("even.txt","r");
	
	printf("\n\nContents of odd file :-\n\n");
		while((n = getw(f2)) != EOF)
			printf("%d ",n);
	printf("\n\nContents of even file :-\n\n");
		while((n = getw(f3)) != EOF)
			printf("%d ",n);
			
	fclose(f2);
	fclose(f3);
}
