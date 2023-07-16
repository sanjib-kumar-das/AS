#include<stdio.h>
int main()
{
int ben, eng, mth, sum;
float avg;
printf("Enter the numbers for Bngali, English and math out of 100 :=> ");
scanf("%d%d%d", &ben, &eng, &mth);

sum=(ben+eng+mth);
printf("\nThe total number is : %d",sum);

avg=(sum/3);
printf("\nThe average is : %.2f",avg);

if(avg>=90 && avg<=100)
{
	printf("\nGrade-AA");	
}
if(avg>=80 && avg<90)
{
	printf("\nGrade-A+");	
}	
if(avg>=70 && avg<80)
{
	printf("\nGrade-B");	
}	
if(avg>=60 && avg<70)
{
	printf("\nGrade-B+");	
}	
if(avg>=50 && avg<60)
{
	printf("\nGrade-C");	
}	
if(avg>=40 && avg<50)
{
	printf("\nGrade-D");	
}	
if(avg<40)
{
	printf("\nGrade-FAIL");	
}		
return 0;
}
