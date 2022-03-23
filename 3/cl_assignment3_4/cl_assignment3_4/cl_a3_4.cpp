//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a;

	printf("몇 월? ");
	scanf("%d", &a);

	(a >= 1 && a <= 12) ? printf("올바른 값입니다.") : printf("잘못된 값입니다.");
}
