#include<stdio.h>
int main()
{
	float T;
	printf("Current temperature");
	scanf("%f",&T);
	if (82<=T)
	{
		printf("Temperature warning");
	}
	else if (60>T)
	{
		printf("Temperature warning");
	}
	else
	{
		printf("Temperature is safe");
	}
	return 0;
}