#include <stdio.h>

int main(void) {
	int i = 0, j = 0, range = 5;

	while(i < range) {
		++i;
		while(j < range) {
			if (range - i <= j) {
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
