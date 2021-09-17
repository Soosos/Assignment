#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int value, a, b = 0;

	printf("두 정수를 입력하세요: ");
	value = scanf("%d", &a);
	value = scanf("%d", &b);

	printf("%d & %d = %d \n", a, b, a % b);
	printf("%d | %d = %d \n", a, b, a | b);
	printf("%d ^ %d = %d \n", a, b, a ^ b);

	return 0;
}
