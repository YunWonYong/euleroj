#include <stdio.h>

int main(void) {
	int i = 0, j = 0, k = 0, n = 0, c = 0;
	scanf("%d", &n);

	while(i < 8) {
		j = ++i;
		while(j < 9) {
			k = ++j;
			while (k < 10) {
				++k;
				if (i + j + k == n) {
					printf("%d %d %d\n", i, j, k);
					++c;
				}
			}
		}
	}

	printf("%d\n", c);
	return 0;
}
		
