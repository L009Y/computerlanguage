//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a, b;

	printf("�⺻���? ");
	scanf(" %d", &a);

	printf("�� ��뷮(kwh)? ");
	scanf(" %d", &b);

	printf("������: %d ��", a + (b * 190));
}