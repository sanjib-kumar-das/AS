//Program to relate two integers using =, > or <
#include<stdio.h>
int main()
 
 {
 	int number1, number2;
 	printf("Enter two integers :");
 	scanf("%d%d", &number1, &number2);
	if (number1==number2)                          //Checks if two integers are equal that is number1 = number2
	{
 	  printf("Result : %d=%d", number1,number2);
    }
 	else if (number1>number2)                     //Checks if number1 > number2
 	{
 	  printf("Result : %d>%d", number1,number2);
    }
 	else                                //If both test expression is false that is number1 < number2
 	{
 	  printf("Result : %d<%d", number1,number2);
    }
 	
 	return 0;
 }
