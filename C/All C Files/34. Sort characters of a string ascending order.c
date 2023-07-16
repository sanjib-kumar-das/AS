#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ch, str[100];
	int no[26]={0},n,c,i;
	
	printf("Enter any string: ");
	gets(str);
	
	n=strlen(str);
	
	for (c=0;c<n;c++)
	{
		ch=str[c]-'a';
		no[ch]++;
	}
		
	printf("\n\nString after arranging the letters in ascending order: ");
	for(i=0;i<26;i++)
	{
		if(no[i]==1)
		printf("%c",'a'+i);
	}
	
	return 0;
}

