#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ToBinary(int num);

int main(void) {
	int i = 0;
	printf("Please enter a number: ");
	scanf("%d", &i);
	ToBinary(i);
	return 0;
}

void ToBinary(int num) {
	if (num < 2) {
		printf("%d", num % 2);
	}
	else {
		ToBinary(num / 2);
		printf("%d", num % 2);
	}
}


//예제가 너무 유명한 예제라 다른 학생들과 코드가 겹칠까 걱정됩니다.. 다른 방법으로 시도해봤지만 반대로 호출하는 방법은 떠오르지가 않습니다...
