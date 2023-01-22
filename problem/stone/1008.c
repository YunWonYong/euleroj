#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	printf("%d!=(", n);

	int i = 0, s = 1;

	while(++i < n) {
		printf("%d*", i);
		s *= i;
	}

	printf("%d)=%d\n", n, s * n);

	return 0;
}

