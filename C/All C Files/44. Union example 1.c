#include <stdio.h>
#include <string.h>
 
union book
{
	int id;
	float price;
	char name;
};
 
int main( ) 
{

   union book b1;        

   printf("Memory size occupied by data : %d\n", sizeof(b1));

   return 0;
}

