//Program to create a simple calculator performs +, -, * and / depending on the input from the user
#include<stdio.h>
int main()
 
 {
 	char op;
 	float a,b;
 	printf("Enter an operator (+ - * or /) :");
 	scanf("%c", &op);
 	printf("Enter two operands :");
 	scanf("%f%f", &a, &b);
 	
 	switch (op)
 	{
 		case '+' : printf("%.1f+%.1f=%.1f", a,b,a+b);
 		break;
 		case '-' : printf("%.1f-%.1f=%.1f", a,b,a-b);
 		break;
 		case '*' : printf("%.1f*%.1f=%.1f", a,b,a*b);
 		break;
 		case '/' : printf("%.1f/%.1f=%.1f", a,b,a/b);
 		break;
 		default : printf("Error ! operation is not correct");
	 }
	 return 0;
 }

