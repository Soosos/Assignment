#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];

	printf("5개의 정수를 입력하세요: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	printf("짝수 출력: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 == 0)
			printf("%d ", num[i]);
	}
	printf("\n");

	printf("홀수 출력: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 != 0)
			printf("%d ", num[i]);
	}
}
