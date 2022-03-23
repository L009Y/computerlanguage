//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define INCH_TO_CM 2.54

#include <stdio.h>
int main()
{
	float a;

	printf("±Ê¿Ã(in)? ");
	scanf(" %f", &a);
	printf("%.2f in = %.2f cm", a, a * INCH_TO_CM);
}