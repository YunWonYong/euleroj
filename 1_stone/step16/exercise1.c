#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int i = 1, range = n - 1, s = 0;
	do {
		if (n % i == 0) {
			s += i;
		}
	} while(++i < range);

	if (n == s) {
		printf("PERFECT\n");
	}
	return 0;
}
