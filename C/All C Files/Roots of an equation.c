#include <stdio.h>
#include <math.h>

int main()
{
double a, b, c, d, r1, r2, rp, ip;
printf("Enter coefficients a, b and c :");
scanf("%lf %lf %lf", &a, &b, &c);
d = b*b-4*a*c;

if (d>0)
{
	r1 = (-b+sqrt(d))/(2*a);
	r2 = (-b-sqrt(d))/(2*a);
	printf("root1 =%.2lf and root 2 =%2.lf", r1, r2);
}
else if(d == 0)
{
	r1 = r2= -b/(2*a);
	printf("root1= root2 = %.2lf", r1);
}
else
{
	rp = -b/(2*a);
	ip = sqrt(-d)/(2*a);
	printf("root1 = %.2lf + %.2lfi & root2 = %.2f - %.2fi", rp, ip, rp, ip);
}
return 0;
}
