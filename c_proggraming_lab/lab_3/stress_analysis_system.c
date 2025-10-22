#include<stdio.h>
int main()
{
	float A,M,F;
	printf("Applied stress(MPa)");
	scanf("%f",&A);
	printf("Material yield strength");
	scanf("%f",&M);
	F=M/A;
	printf("Factor of safety=%f ",F);
	if(F>=2.0)
	{
		printf("safe design");
	}
	else if(F>=1.5 & F<2.0)
	{
		printf("Acceptabli with monitoring");
	}
	else
	{
		printf("Danger-redesign needed");
	}
	return 0;
}
