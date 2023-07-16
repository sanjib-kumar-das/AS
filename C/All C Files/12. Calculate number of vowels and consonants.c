#include<stdio.h>
#include<string.h>

int main()

{
	char str[20];
	int scount=0, vcount=0, choice, i=0, j=0;
	
	
		printf("\nEnter any string=> ");
		gets(str);
		for(i=0;i<20;i++)
			{
			if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
				{
				vcount++;	
				}
						
			}
		for(i=0;i<20;i++)
			{
			if (str[i]==' ')
			{
			scount ++;
		    }
		    			
					}			
		printf("\n\nEnter 1 to get number of Vowels \nEnter 2 to get number of Consonants \nEnter 3 to Exit\n\n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
			 printf("\nNumber of vowels => %d",vcount);
			break;
					
			case 2: 
			
					printf("\nNumber of consonants => %d", (strlen(str)-(vcount+scount)));
			break;
					
			case 3: 
			exit(0);
			
			
			default: printf("\nInvalid Choice !!");
					 break;
		}
	
	
	
	return 0;
}
