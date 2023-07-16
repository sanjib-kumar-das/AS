#include<stdio.h>
int display(int,int);
int main()
{ 	int n,p,ans;
	scanf("%d %d",&n,&p);
	ans=display(n,p);
	printf("\n value is %d ",ans);

}
int display(int a,int b)
{
 	int z;
 	z=a+b;
	return z;
}
