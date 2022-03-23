//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)


#include <stdio.h>
int main()

{   double a;
	double b;

	printf("질량(kg)? ");
	scanf("%lf", &a );
	printf("높이(m)? ");
	scanf("%lf", &b );
	printf("위치에너지: %.2f ", a * b * 9.8);
	

}

