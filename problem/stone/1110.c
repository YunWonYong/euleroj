#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a = n / 2;
	int b = n - a;
	printf("%d\n", n + a * b + 1);
	return 0;
}
