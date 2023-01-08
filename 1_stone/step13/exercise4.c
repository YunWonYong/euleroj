#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	while(a >= b) {
		printf("%d ", a--);
	}
	printf("\n");
	return 0;
}
