#include <stdio.h>

int main(void) {
	int i = 0, j = 5;

	while(j != 0) {
		while(i < j) {
			++i;
			printf("#");
		}
		i = 0;
		printf("\n");
		--j;
	}
	return 0;
}
