#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];

	printf("5���� ������ �Է��ϼ���: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	printf("¦�� ���: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 == 0)
			printf("%d ", num[i]);
	}
	printf("\n");

	printf("Ȧ�� ���: ");
	for (int i = 0; i < 5; i++) {
		if (num[i] % 2 != 0)
			printf("%d ", num[i]);
	}
}
