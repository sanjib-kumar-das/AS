#include <stdio.h>

int main(void)

{
	
int n, rev = 0, rem,org;
printf("Enter any integer : ");
scanf("%d", &n);

org = n;
while (n != 0)
{
	rem = n%10;
	rev = rev *10+rem;
	n /= 10;
}

if (org == rev)
{
	printf("%d is a Palindrome number",org);
}
else
{
	printf("%d is not a Palindrome number",org);
}
return 0;

}
