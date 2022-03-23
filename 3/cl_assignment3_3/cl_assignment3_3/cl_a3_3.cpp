//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a, b;

	printf("기본요금? ");
	scanf(" %d", &a);

	printf("월 사용량(kwh)? ");
	scanf(" %d", &b);

	printf("전기요금: %d 원", a + (b * 190));
}