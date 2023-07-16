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
 
 ch = getc(fp);//read a character from a file
    printf("character from the file is %c",ch);
                        
 fclose(fp);
 
 return 0;
}
