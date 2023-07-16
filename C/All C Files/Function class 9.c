# include <stdio.h>
 
/* Function to print reverse of the passed string */
void reverse(char *str)
{
   if (*str!='\0')
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
 
/* Driver program to test above function */
int main()
{
   char a[100] ;
   printf("\n Enter your name\n");
   gets(a);
   reverse(a);
   return 0;
}
