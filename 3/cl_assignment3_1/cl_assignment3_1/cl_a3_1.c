//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	double a;
	const double b = 0.9144;
	printf("±Ê¿Ã(yd)? ");
	scanf(" %lf", &a);

	printf("100yd = %.6f m", a * b);
}