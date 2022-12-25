#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	char c = '0';

	if (a % 2 == 0 || b % 2 == 1) {
		c = '1';
	}
	printf("%c\n", c);

	return 0;
}
