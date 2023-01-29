#include <stdio.h>

int main(void) {
	int i = 5, j = 0;
	while(i > 0) {
		while(j < 5) {
			++j;
			if (i <= j) {
				printf("%d", j);
				continue;
			}

			printf(" ");
		}
		j = 0;
		printf("\n");
		--i;
	}
	return 0;
}
