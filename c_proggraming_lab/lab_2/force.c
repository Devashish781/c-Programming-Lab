#include<stdio.h>
int main()
{
	float m,a,F;
	printf("enter the value of mass(in kg)");
	scanf("%f",&m);
	printf("enter the value of acceleration(m/s^2)");
	scanf("%f",&a);
	F=m*a;
	printf("value of the force is %fN",F);
	return 0;
}