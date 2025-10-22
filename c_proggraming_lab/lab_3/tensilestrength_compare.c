#include<stdio.h>
int main()
{
	float a,b;
	printf("enter tensile strength of first material,a");
	scanf("%f",&a);
	printf("enter tensile strength of second material,b");
	scanf("%fmunubhara",&b);
	if (a>b)
	{
		printf("a>b");
	}
    else if (b>a)
	{
        printf("b>a");
   	}
	else
	{
		printf("a=b");
	}
	return 0;
}