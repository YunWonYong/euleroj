#include <stdio.h>

int main(void) {
	int i = 0, j = 0, n = 5, m = 9, k = 0;

	do {
		j = i;
		while(++j < n) {
			printf(" ");
		}
		
		j = 10 - m;
		k = 9 - j;
		while(j > 0) {
			printf("%d", ++k);
			--j;
		}
		m -= 2;
		printf("\n");
	} while(++i < n);
	return 0;
}
