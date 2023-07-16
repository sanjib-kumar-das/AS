#include<stdio.h>
int main()

{
	char str[20];
	int i=0,scount=0,vcount=0;
	printf("Enter any phrase :=> ");
	gets(str);
	
	while(str[i] !='\0')
	{
		if (str[i]==' ')
		{
		scount += 1;
	    }
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		vcount++;
		
	    }
	    i++;
	}
	printf("\nLength of string => %d",i);
	printf("\nNumber of vowels => %d",vcount);
	printf("\nNumber of consonants => %d",i-(vcount+scount));
	printf("\nNumber of spaces => %d", scount);
	return 0;
}
