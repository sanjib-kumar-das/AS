#include <stdio.h>
 
struct person 
{
   char  name[50];
   int age;
} p;

int main()
{
	struct person *ptr = &p;
	printf("\n Enter name and age of the person \n");
	scanf("%s %d",ptr->name,&ptr->age);
	printf("\n Name of the person :  %s",ptr->name);
	printf("\n Person's age is : %d",ptr->age);
	
	return 0;
}
