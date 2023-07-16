#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	char name[20], c, d;
	
	fp = fopen ("data.txt","w");
	printf("Enter any string: ");
	gets(name);
	fputs(name,fp);
	fclose(fp);
	
	printf("\nEnter the letter you want to search: ");
	scanf("%c",d);
	
	fp = fopen("data.txt","r");
	while((c=fgetc(fp))!=EOF)
	{
		if(c==d)
		{
			printf("\n%c is found",c);
		}
	}
	fclose(fp);
}
