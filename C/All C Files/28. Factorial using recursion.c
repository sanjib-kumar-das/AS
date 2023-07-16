#include<stdio.h>

int fact(int n)
{
   if(n==0)
   {
		return(1);
   }
   else if(n<=0)
   {
   		printf("\nPlease enter only positive value!");
   		exit(0);
   }
   else
   {
		return(n*fact(n-1));
   }
   
}

int main()
{
   int num, f;
   printf("\nEnter the number:");
   scanf("%d",&num);
 
   f = fact(num);
 
   printf("\nFactorial of %d is: %d",num, f);
   return 0;
}


