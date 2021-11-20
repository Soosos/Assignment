#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double Standard(double *num);

int main() {
	double num[5];
	printf("Enter 5 real numbers: ");

	for (int i = 0; i < 5; i++) {
		scanf("%lf", &num[i]);
	}
	
	printf("Standard Deviation = %lf", Standard(num));

	return 0;
}


double Standard(double *num) {
	double average = 0, sum = 0;
	double db[5];
	for (int i = 0; i < 5; i++) {
		average += num[i];
	}
	average /= 5;

	for (int i = 0; i < 5; i++) {
		db[i] = pow(num[i] - average, 2);
		sum += db[i];

	}

	return sqrt(sum / 5);
}