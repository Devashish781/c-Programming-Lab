#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the numbers, a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	if (a>b & a>c)
	{
		printf("%f is the largest number",a);
	}
	else if (b>a & b>c)
	{
		printf("%f is the largest number",b);
	}
	else if (c>a & c>b)
	{
		printf("%f is the largest number",c);
	}
	return 0;
}