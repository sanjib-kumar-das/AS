#include <stdio.h>

int main(void)
{
	int s1, s2, s3, s4, s5, total;
	float per;
	
	printf("Enter marks obtained in 5 subjects: ");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	
	total = (s1+s2+s3+s4+s5);
	per  = (total/500.0)*100.0;
	printf("\nObtained percentage: %.3f", per);
	
	if (per >= 90 && per <= 100)
	{
		printf("\nObtained grade: OUTSTANDING!");
	}
	else if (per >= 80 && per < 90)
	{
		printf("\nObtained grade: EXCELLENT!");
	}
	else if (per >= 60 && per < 80)
	{
		printf("\nObtained grade: FIRST CLASS!");
	}
	else if (per >= 50 && per < 60)
	{
		printf("\nObtained grade: SECOND CLASS!");
	}
	else
	{
		printf("\nObtained grade: FAIL!");
	}
	
	return 0;
	
}
