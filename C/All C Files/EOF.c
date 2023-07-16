#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	FILE *fp; // file pointer
	
	fp=fopen("one.txt","a");
	//while((a=getchar())!=EOF)
	a=getchar(); // get a character to the program
	putc(a,fp);// write the character to the file using the pointer
	fclose(fp);// close the file.
	
	
	fp=fopen("one.txt","r");
	while((a=getc(fp))!=EOF)
	{
		//	a=getc(fp);
			printf("\n %c",a);
	}

	fclose(fp);
	
	
	return 0;
	
}
