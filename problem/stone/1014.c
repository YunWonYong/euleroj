#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int i = 1, s = 1;
	do {
		s *= i;
	} while(++i <= n);
	printf("%d\n", s);
	return 0;
}
