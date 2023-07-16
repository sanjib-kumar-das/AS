#include<stdio.h>
int main()

{
	float fh,cl;
	int temp;
	printf("Enter '1' to convert farenheit to celsius and '2' to its opposite");
	printf("\nEnter your choice : ");
	scanf("%d", &temp);
	
	if (temp ==1)
	{
		printf("Enter temperature in farenheit : ");
		scanf("%f", &fh);
		cl = (fh-32)/1.8;
		printf("Temparature in celsius : %.2f",cl);
	}
	else if (temp ==2)
	{
		printf("Enter temparature in celsius : ");
		scanf("%f", &cl);
		fh = (cl*1.8)+32;
		printf("Temperature in farenheit : %.2f",fh);
	}
	else
	{
		printf("Invalid choice !!!!!");
	}
	return 0;
}
