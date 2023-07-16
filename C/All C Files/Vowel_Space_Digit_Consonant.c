#include<stdio.h>
int main()
{
	char str[100];
	int i=0,scount=0,vcount=0,dcount=0;
	printf("Enter a string => ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if (str[i]==' ')
			scount ++;
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vcount ++;
		if (str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
			dcount ++;
			
		i++;
	}
	printf("\n Length of string is : %d",i);
	printf("\n Number of vowels => %d",vcount);
	printf("\n Number of digits => %d",dcount);
	printf("\n Number of spaces => %d",scount);
	printf("\n Number of consonants => %d",i-(vcount+scount+dcount));
	
	return 0;
}
