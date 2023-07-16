#include<stdio.h>
int main()
{
	char ch[0];
	printf("\nEnter any string: ");
	gets(ch);
	
	convert(ch);
	return 0;
}

void convert (char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		if(x[i]>=65&&x[i]<=90)
		{
			x[i]=x[i]+32;
		}
		else
		{		
			if(x[i]>=97&&x[i]<=122)
			{
				x[i]=x[i]-32;
			}
    	}
		i++;	
	}
	printf("\n");
	puts(x);
}

