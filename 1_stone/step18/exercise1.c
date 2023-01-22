#include <stdio.h>

int main(void) {
	int i = 0, j = 0, range = 5;

	while(i < range) {
		++i;
		while(j < i) {
			++j;
			printf("#");
		}
		j = 0;
		printf("\n");
	}
	return 0;
}
