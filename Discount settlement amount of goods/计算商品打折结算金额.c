#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double q = 0;
	scanf("%lf", &q);
	if (q >= 100 && q < 500)
	{
		q *= 0.9;
	}
	else if (q >= 500 && q < 2000)
	{
		q *= 0.8;
	}
	else if (q >= 2000 && q < 5000)
	{
		q *= 0.7;
	}
	else
	{
		q *= 0.6;
	}
	printf("%.1lf\n", q);
	return 0;
}