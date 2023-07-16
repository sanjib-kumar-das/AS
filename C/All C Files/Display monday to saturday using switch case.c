#include<stdio.h>

int main(void)
{
	char ch;

	printf("Enter m for Monday\nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday\n\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
	case 'm':
	case 'M': 
	printf("\nMonday");
	break;
	
	case 't':
	case 'T':
	printf("\nTuesday");
	break;
	
	case 'w':
	case 'W':
	printf("\nWednesday");
	break;
	
	case 'h':
	case 'H':
	printf("\nThursday");
	break;
	
	case 'f':
	case 'F':
	printf("\nFriday");
	break;
	
	case 's':
	case 'S':
	printf("\nSaturday");
	break;
	
	case 'u':
	case 'U':
	printf("\nSunday");
	break;
	
	default :
	printf("\nWrong Input !!!");
	break;
	
	}
	return 0;
}
