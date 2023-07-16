#include<iostream>
using namespace std;

class person
{
	char name [20];
	int age;
	
	public :
		void getdata (void);
		void display (void);
};

void person :: getdata (void)
{
	cout << "Enter name \n";
	cin >> name;
	cout << "Enter age \n";
	cin >> age;
}

void person :: display (void)
{
	cout << "Name is: " << name <<"\n";
	cout << "Age is: " << age <<"\n";
}

int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
