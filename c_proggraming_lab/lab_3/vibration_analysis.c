#include<stdio.h>
int main()
{
	float A,F;
	printf("Vibration amplittude(mm)=");
	scanf("%f",&A);
	printf("Fequency(hz)=");
	scanf("%f",&F);
	if (A>0.5 & F>20 & F<50)
	{
		printf("High risk");
	}
	else if (A>0.5 & F>60)
	{
		printf("Medium risk");
	}
	else
	{
		printf("low risk");
	}
	return 0;
}