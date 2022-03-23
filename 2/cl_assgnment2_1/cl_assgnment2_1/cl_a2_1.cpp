//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)


#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("연? ");
	scanf(" %d", &a);

	printf("월? ");
	scanf(" %d", &b);

	printf("일? ");
	scanf(" %d", &c);

	printf("입력한 날짜는 %d년 %d월 %d일 입니다.", a, b, c);
}