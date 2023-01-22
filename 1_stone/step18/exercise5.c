#include <stdio.h>

int main(void) {
	int i = 5, j = 0, range = 10, k = 5, n = 0;

	while(i != 0) {
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
		--i;
		printf("\n");
	}	

	return 0;
}
