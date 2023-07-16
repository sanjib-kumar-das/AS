#include<stdio.h>

struct invent
{
	char name[20];
	int number;
	float price;
};
int main()
{
	struct invent product[3],*ptr;
	printf("Enter 3 records:- (Name, number, price) \n");
	for (ptr=product;ptr<product+3;ptr++)
	{
		scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
	}
	
	ptr=product;
	while(ptr<product+3)
	{
		printf("\n\nProduct name: %s | Product no.: %d | Price: %.2f",ptr->name,ptr->number,ptr->price);
		ptr++;
	}
	return 0;
}

