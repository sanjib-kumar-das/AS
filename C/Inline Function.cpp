#include<iostream>
using namespace std;

inline float mul (float x, float y);
inline double div (double p, double q);

int main()
{
	float a = 12.345;
	float b = 9.82;
	
	cout << mul(a,b) <<"\n";
	system ("pause");
	cout << div(a,b) <<"\n";
	system ("pause");
	
	return 0;
}
