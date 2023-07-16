#include<stdio.h>
#include<math.h>

int main()
{
	int  num,org, rem, res = 0,n = 0;
	printf("Enter an integer : ");
	scanf("%d", &num);
	org = num;
	
	while (org != 0)
	{
		org /= 10;
		++n;
	}
	org = num;
	while (org != 0)
	{
		rem = org%10;
		res += pow(rem,n);
		org /= 10;
	}
	if (res == num)
	{
		printf("\n %d is an Armorstorng no",num);
	}
	else 
	{
		printf("\n %d is not an Armstorng no",num);
	}
	return 0;
}


// Some Armstrong numbers are : 153, 370, 371, 407 etc.
