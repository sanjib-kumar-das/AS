#include<stdio.h>
#include<string.h>

int main()
{
	FILE *p;
	char c, name[20];
	printf("Enter a file name: ");
	gets(name);
	
	p = fopen(name,"a");	
	while((c=getchar())!=EOF)
	{
		putc(c,p);
	}
	fclose(p);
	
	
	p=fopen(name,"r");
	while((c=getc(p))!=EOF)
	{
		printf("%c",c);
	}
	fclose(p);
	
	return 0;
}

