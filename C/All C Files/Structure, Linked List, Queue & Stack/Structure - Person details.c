#include<stdio.h>

struct student
{
	int snum;
	char sname[30];
	char sclass[15];
	int sroll;
} s[5];

int main()
{
	int i=0;
	printf("Enter All Informations\n\n");
	
	for(i=0;i<5;++i)
	{
		s[i].snum = i+1;
		
		printf("\nFor Student %d :- \n\n",s[i].snum);
		
		printf("Enter name: ");
		scanf("%s",s[i].sname);
		
		printf("\nEnter class: ");
		scanf("%s",s[i].sclass);
		
		printf("\nEnter roll: ");
		scanf("%d",&s[i].sroll);
	}
	printf("\n\nDisplaying The Informations\n\n");
	
	for(i=0;i<5;++i)
	{
		printf("\n\nStudent number: %d\n",i+1);
		printf("\nName: ");
		puts(s[i].sname);
		
		printf("\nClass: ");
		puts(s[i].sclass);
		
		printf("\nRoll: %d",s[i].sroll);
	}
	return 0;
}
