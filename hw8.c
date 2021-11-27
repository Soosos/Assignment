#include <stdio.h>

int main() {
	int ch;

	while (1) {
		ch = getchar();
		if (ch == '\n') {
			break;
		}
		else {
			putchar(convCase(ch));
		}
	}

	return 0;
}

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

