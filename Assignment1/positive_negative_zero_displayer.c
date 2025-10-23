#include<stdio.h>
int main()
{
	float n;
	printf("enter the number ");
	scanf("%f",&n);
	if (n>0)
	{
		printf("the number is positive");
	}
	else if (n<0)
	{
		printf("the number is negative");
	}
	else
	{
		printf(" the number is zero");
	}
	return 0;
}