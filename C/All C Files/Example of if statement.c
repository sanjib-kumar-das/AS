//Program to display a number if user enters any positive number
//If user enters negetive number the number will not be displayed by the compiler
#include <stdio.h>
int main()
{
	 int number;
	 printf("Enter an integer : ");
	 scanf("%d",& number);
	 //Test expression is true if the number is less than 0
	 if (number >=0)
	 {
	 	printf("You entered %d\n",number);
	 }
	 printf("The if statement is easy");
	 return 0;
}
