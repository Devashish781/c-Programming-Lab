#include<math.h>
int main()
{
	float n,sum;
	printf("enter the value of n(natural number) ");
	scanf("%f",&n);
	sum=n*(n+1)/2;
	printf("sum of first %f natural numbers is:%f",n,sum);
	return 0;
}