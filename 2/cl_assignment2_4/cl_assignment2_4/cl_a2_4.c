//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)


#include <stdio.h>
int main()
{
	int a;
	
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12 ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf("%i", &a);

	printf("8���� : %o\n", a);
	printf("10���� : %d\n", a);
	printf("16���� : %#x\n", a);
}