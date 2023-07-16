#include<stdio.h>
int main(){
	
    char name[30];
    char *sample=name;
    int c=0;
    
    printf("Enter a string: ");
    
    gets(name); 
    
    printf("\nVowels present here:- \n");
   while(*sample!='\0')
	{
		if (*sample=='a'||*sample=='e'||*sample=='i'||*sample=='o'||*sample=='u')
		{
			c++;
			printf("\n%c",*sample);
	    } 
		sample++;
	}
    printf("\n\nNumber of vowels present: %d",c);
    return 0;
}

