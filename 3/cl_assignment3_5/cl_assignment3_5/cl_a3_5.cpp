//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a;

	printf("È­¾¾¿Âµµ? ");
	scanf(" %d", &a);

	printf("%d F = %.2f C", a, (a - 32) * 5.0 / 9.0);
}