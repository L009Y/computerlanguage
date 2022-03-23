//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;

	printf("시? ");
	scanf(" %d", &a);
	printf("분? ");
	scanf(" %d", &b);
	printf("초? ");
	scanf(" %d", &c);
	
	printf("입력한 시간은 %02d:%02d:%02d입니다", a, b, c);
}