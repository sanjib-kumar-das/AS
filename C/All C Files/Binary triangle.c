#include<stdio.h>
int main()
{
	int line, linemax, column;
	printf ("Enter the max line number => ");
	scanf("%d",&linemax);
	
	for (line=1;line<=linemax;line++)
	{
		for (column=1;column<=line;column++)
		{
			printf("%d",(column+line)%2);
		}
		printf("\n");
	}
	return 0;
}

