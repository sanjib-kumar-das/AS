#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int k,i=0,v=0,c=0,n=0;
	FILE *fp1,*fp2;
	char a,c1,file1[50],file2[50];
	while(1)
	{
	
	printf("\n1. COPY A FILE \n2. COUNT CHARACTES\n3. EXIT\n\nCHOOSE YOUR CHOICE=> ");
	scanf("%d",&k);
	fflush(stdin);
	switch(k)
	{
		case 1:	printf("\nEnter Source file name with extension (xyz.txt)=> ");
				gets(file1);
				printf("\nEnter Destination file name with extension (xyz.txt)=> ");
				gets(file2);
				fp1 = fopen(file1, "r");
   				fp2 = fopen(file2, "w");
 				while(!feof(fp1))
 				{
 					c=getc(fp1);
 					putc(c,fp2);
				}
				printf("\nFile copied Successfully!!\n\n");
   				fclose(fp1);
   				fclose(fp2);
   				break;
   				
   		case 2:	printf("\nEnter file name with extension (xyz.txt)=> ");
				gets(file1);
		   		fp1=fopen(file1,"r");
				while(!feof(fp1))
				{
					c1=getc(fp1);
					if(c1=='A'||c1=='a'||c1=='E'||c1=='e'||c1=='I'||c1=='i'||c1=='O'||c1=='o'||c1=='U'||c1=='u')
					{
						v++;
					}
					else if(c1>=0 && c1<=9)
					{
						n++;
					}
					else
					{
						if(c1!='\n'&&c1!=' ')
						{
							c++;
						}
					}
				}
				fclose(fp1);
				printf("Consonants= %d\nVowels= %d\nNumber= %d\n",c,v,n);
				break;
		case 3: exit(0);
		break;
				
		default: printf("\n\Invalid Choice!!\n\n");
	}
	}	
}

