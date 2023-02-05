#include <stdio.h>

int main(void) {
	int i = 5, j = 0, n = 0, m = 0;

	do {
		j = i;
		while(j < 5) {
			printf(" ");
			++j;
		}
		n = m;		
		while(n < 9) {
			printf("%d", ++n);
		}

		m += 2;
		printf("\n");
	} while(--i > 0);
	return 0;
}
