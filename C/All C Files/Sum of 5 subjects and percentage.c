#include<stdio.h>

int main(void)
{
	int s1, s2, s3, s4, s5, sum;
	float per;
	
	printf("Enter 5 subject marks: ");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	
	sum = s1+s2+s3+s4+s5;
	printf("\nSum of 5 subjects: %d", sum);
	
	per = (sum*100)/500;
	printf("\nThe percentage is= %.3f", per);
	
	return 0;
}
