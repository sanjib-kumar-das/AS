#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main()
{
	struct Books *p=0;
	p++;
	printf("Size of the structure is %d bytes",p);
	return 0;
}

