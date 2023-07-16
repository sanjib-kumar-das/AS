#include<stdio.h>

int main()
{
	FILE *p,*q;
	char c;
	int line=0;
	
	p=fopen("uit.txt","r");
	
	while(!feof(p))
	{
		if((c=getc(p))=='\n')
		{
			line++;			
		}
	}
	
	printf("Number of lines written in the file= %d",line);
	
	return 0;
}

