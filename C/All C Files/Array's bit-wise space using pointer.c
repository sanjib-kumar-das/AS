#include<stdio.h>
int main()
{
	int x[5] = {5,10,15,20,25};
	int i=0;
	int *p = x;   // p = &x[0] (same meaning)
	while (i<5)
	{
		printf("\nx[%d]=%d and address is %d",i,*p,p);
		p++;
		i++;
	}
}
	
