#include<stdio.h>
int main()
{
	int n,r1,r2;
	printf("enter a number ");
	scanf("%d",&n);
	r1=n%5;
	r2=n%11;
	if (r1==0 && r2==0)
	{
		printf("%d is divisible by 5 and 11",n);
	}
	else
	{
		printf("%d is not divisible",n);
	}
	return 0;
}