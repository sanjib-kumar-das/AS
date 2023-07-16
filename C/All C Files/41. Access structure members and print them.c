#include <stdio.h>
#include <string.h>
 
struct Books 
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}Book1,Book2;
 
int main(void) 
{
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Brian Kernighan"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 1;

   printf("\nEnter book title: ");
   gets(Book2.title);
   printf("\nEnter book author: ");
   gets(Book2.author);
   printf("\nEnter book subject: ");
   gets(Book2.subject);
   printf("\nEnter book id: ");
   scanf("%d",&Book2.book_id);

	printf("\n");
   
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

	printf("\n");
	
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

   return 0;
}

