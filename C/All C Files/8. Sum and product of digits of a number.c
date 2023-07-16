// sum and product of digits of a number

#include<stdio.h>
  
int main(void)    
{    
	int num,sum=0,mul=1,i; 
	   
	printf("Enter any integer: ");    
	scanf("%d",&num);    
	
	while(num>0)    
	{    
		i=num%10;    
		sum=sum+i;
		mul=mul*i;    
		num=num/10;    
	}    
	printf("\nSum of the digits= %d",sum); 
	printf("\nProduct of the digits= %d",mul); 
	
	  
	return 0;  
}   
