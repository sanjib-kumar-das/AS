// determine smallest and second smallest number using ternary operator

#include <stdio.h>

int main(void)
{
    int num1,num2,num3,temp,result; 
    printf("Enter three numbers: ");
   
    scanf("%d %d %d",&num1,&num2,&num3);
  
       temp=((num1<num2)? num1:num2);
       result=num3<temp?num3:temp;
      
        printf("\n The Smallest number is: %d ", result);
        
       if (result==num1)
       temp=((num2<num3)? num2:num3);
       else if (result==num2)
       temp=((num1<num3)? num1:num3);
       else
       temp=((num1<num2)? num1:num2);
        
        printf("\n The Second Smallest number is: %d ", temp);
        
       
      
    return 0;
}
