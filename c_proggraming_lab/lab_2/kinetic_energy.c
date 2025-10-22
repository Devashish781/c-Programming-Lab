#include<stdio.h>
int main()
{
	float m,v,E;
	printf("enter the value of mass (in kg) ");
	scanf("%f",&m);
	printf("enter the value of valocity (in m/s)" );
	scanf("%f",&v);
	E=m*v/2;
	printf("value of kinetic energy is %f",E);
	return 0;
}