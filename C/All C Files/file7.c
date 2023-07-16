#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp;
 char ch;
 fp = fopen("one.txt", "a");
 
 printf("\n Enter a character to a file \n");
 
ch = getchar();
    putc(ch,fp);//write a character to a file
 
 fclose(fp);
 
 
 fp = fopen("one.txt", "r");
 
 while(1)
   {
      ch = getc(fp);
      if( feof(fp) )         // indicates end of file
      {
         break ;
      }
      printf("%c", ch);
   }
                        
 fclose(fp);
 
 return 0;
}
