#include<stdio.h>

int main()
{
	FILE *p;
	char c;
	int line = 0; 
	
	 // TAKING INPUT
	 
	printf("\nData Input : \n\n");
	p = fopen("info.txt","w");
	
	while((c=getchar()) != EOF)
		putc(c,p);
	fclose(p);
	 
	  //  GIVING OUTPUT
	  
	printf("\nData output : \n\n");
	p = fopen("info.txt","r");
	
	while((c=getc(p)) != EOF)
		printf("%c", c);
		
	fclose(p); 
	
	  //  COUNTING LINE NUMBERS
					                                                                                                                           
	
	p = fopen("info.txt","r");
	
	while(!feof(p))
	{
		if((c=getc(p)) == '\n')
		{
			line ++;
		}
	}
	printf("\n\nNumber of lines = %d",line);      
	return 0;
}
