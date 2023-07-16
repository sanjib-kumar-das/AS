#include<stdio.h>
#include<string.h>
#include <ctype.h>

char stack[30];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    if(top == -1)
       return -1;
    else
       return stack[top--];   
}

int priority(char x)
{
    if(x == '(')
       return 0;
    else if(x == '+' || x == '-')
       return 1;
    else if(x == '*' || x == '/')
       return 2;      
}

int main()
{
    char expression[30];
    char *exp;
    char x;
    printf("Enter the infix expression : ");
    gets(expression);
    exp = expression;
    printf("Postfix Expression: ");
    while(*exp != '\0')
    {
        if(isalnum(*exp))
           printf("%c",*exp);
        else if(*exp == '(')
           push(*exp);
        else if(*exp == ')')
        {
            while((x = pop()) != '(')
                printf("%c",x);
        }   
        else
        {
            while(priority(stack[top]) >= priority(*exp))
                printf("%c",pop());
            push(*exp);    
        } 
        exp++;  
    }
    
    while(top != -1)
        printf("%c",pop());

    return 0;
}
