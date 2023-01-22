#include <stdio.h>

int main(void) {
	int i = 5, j = 0, range = 5;

	while(i != 0) {
		while(j < range) {
			if (range - i <= j) {
				printf("#");
			} else {
				printf(" ");
			}
			++j;
		}
		--i;
		j = 0;
		printf("\n");
	}
	return 0;
}
