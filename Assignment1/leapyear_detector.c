#include<stdio.h>
int main()
{
	int y,r,r1,r2;
	printf("enter year ");
	scanf("%d",&y);
	r=y%4;
	r1=y%100;
	r2=y%400;
	if (r==0 & r1>0)
	{
		printf("entered year is a leap year");
	}
	else if(r2==0)
	{
		printf("entered year is a leap year");
	}
	else
	{
		printf("entered year is not a leap year");
	}
	return 0;
}