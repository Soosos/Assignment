#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	double km = 0.0;
	int a = 0; //scanf return value 

	printf("Please enter kilometers: ");
	a = scanf("%lf", &km);
	double mile = km / 1.609;

	printf("%.1lf km is equal to %.1lf miles.", km, mile);

	return 0;
}
