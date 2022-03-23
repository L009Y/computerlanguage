//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)


#include <stdio.h>
int main()
{
	int a;
	
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12 처럼 입력하세요.\n");
	printf("정수? ");
	scanf("%i", &a);

	printf("8진수 : %o\n", a);
	printf("10진수 : %d\n", a);
	printf("16진수 : %#x\n", a);
}