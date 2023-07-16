#include<stdio.h>
#include<math.h>

int main(void)
{
	int num=0, i=0, j=0;
	float cal[10], dav, mean, var, stdv, sum=0, temp=0;
	
	printf("Input 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%f", &cal[i]);
		sum = sum+cal[i];
		num ++;
	}
	mean = (sum/num);
	
	for(j=1;j<=num;j++)
	{
		dav = cal[j]-mean;
		temp = temp+(dav*dav);
	}
	var = temp/num;
	
	printf("\nMean = %.3f", mean);
	printf("\nVariance = %.3f", var);
	printf("\nStandard Daviation = %.3f\n", sqrt(var));
	
	return 0;
}
