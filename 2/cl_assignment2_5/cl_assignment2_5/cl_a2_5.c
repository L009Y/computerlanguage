//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)


#include <stdio.h>
int main()

{   double a;
	double b;

	printf("����(kg)? ");
	scanf("%lf", &a );
	printf("����(m)? ");
	scanf("%lf", &b );
	printf("��ġ������: %.2f ", a * b * 9.8);
	

}

