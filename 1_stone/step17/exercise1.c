#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int i = 0;
	while(++i < n) {
		printf("%d*", i);
	}
	printf("%d\n", n);
	return 0;
}
