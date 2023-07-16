#include <stdio.h>
#include <string.h>
 
union book 
{
   int id;
   float price;
   char name[50];
};
 
int main( ) 
{

   union book b1={10};       
   printf("Book ID : %d\n", b1.id);
   
   strcpy(b1.name, "C Programming");
   printf("Book name : %s\n", b1.name);
   
   b1.price = 1200.34;
   printf("Book price : %.3f\n", b1.price); 
   
   return 0;
}

