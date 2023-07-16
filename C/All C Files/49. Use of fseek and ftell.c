#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	long n;
	char c;
	
	fp = fopen ("temp.txt","w");
	printf("Enter any string: ");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	printf("\nNumber of characters entered: %d", ftell(fp));
	fclose(fp);
	
	fp = fopen("temp.txt","r");
	n = 0l;
	while(feof(fp)==0)
	{
		fseek(fp,n,0);
		printf("\nPosition of %c is %ld", getc(fp), ftell(fp));
		n++;
	}
	fclose(fp);
}
