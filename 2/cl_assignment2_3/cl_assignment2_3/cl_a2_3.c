//#define _CRT_SECURE_N0_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)



#include <stdio.h>
int main()
{
	float a;
	float b;

	printf("�Ǽ� 2��?");
	scanf("%f %f", &a, &b);

	printf("%f + %f = %f \n",a ,b ,a + b);
	printf("%f - %f = %f", a, b, a - b);

}