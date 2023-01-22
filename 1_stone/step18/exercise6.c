#include <stdio.h>

int main(void) {
	int i = 0, j = 0, range = 10, k = 5, n = 0;

	while(i < k) {
		++i;
		n = k - i;
		while(j < range) {
			if (j >= (k - n) && j <= (k + n)) {
				printf("#");
			} else {
				printf(" ");
			}
			++j;
		}
		j = 0;
		printf("\n");
	}	

	return 0;
}
