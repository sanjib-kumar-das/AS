#include <stdio.h>
#include <string.h>

#define MAX 50

int top=-1;
int item;

void pushstr(char item);
char popstr(void);

 
int main()
{
    char str[MAX];
    char rev_str[MAX];
    int i;
    
    printf("Input the string to be reversed: ");
    gets(str);
    
    
    for(i=0;i<strlen(str);i++)
    {
    	pushstr(str[i]);	
	}
               
    for(i=0;i<strlen(str);i++)
    {
    	rev_str[i]=popstr();
	}
	
    printf("\nReversed String is: %s\n",rev_str);
    
    return 0;
}
 

void pushstr(char item)
{
	char s[MAX];

    if(top==(MAX-1))
    {
        printf("\nStack Overflow!!\n");
        return 0;
    }
        
    top=top+1;
    s[top]=item;
}
 

 char popstr()
{                                                        
	char rev[MAX];
    
    if(top==-1)
    {
        printf("\nStack Underflow!!\n");
        return 0;
    }  
    item = rev[top];
    top=top-1;
    
    return item;
}
