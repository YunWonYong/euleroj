#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int s = n + m;
	if (s % 2 == 0) {
		printf("even\n");
	} else {
		printf("odd\n");
	}
	return 0;
}
