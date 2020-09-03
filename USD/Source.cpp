#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double a;
int main()
{
	printf("Enter the amount you want to redeem : ");
	scanf("%lf", &a);
	if (a > 0)
	{
		a *= 32.5;
		printf("You get the amount %.2lf Baht", a);
	}
	else
	{
		printf("YOU DON'T HAVE MONEY.");
	}
}
