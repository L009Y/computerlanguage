//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a;

	printf("�� ��? ");
	scanf("%d", &a);

	(a >= 1 && a <= 12) ? printf("�ùٸ� ���Դϴ�.") : printf("�߸��� ���Դϴ�.");
}
