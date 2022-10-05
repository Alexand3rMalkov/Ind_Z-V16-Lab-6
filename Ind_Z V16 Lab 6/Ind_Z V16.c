#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	float x, y;
	setlocale(LC_ALL, "rus");
	printf("Введите x и y\n");
	scanf("%f", &x);
	scanf("%f", &y);
	if ((x >= 0 && y >= 0) && (-x + 3 <= y) && ((pow(x, 2) + pow(y, 2)) <= 36)) {
		printf("Принадлежит");
	}
	else {
		printf("Не принадлежит");
	}

}