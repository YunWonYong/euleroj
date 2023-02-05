#include <stdio.h>

int main(void) {
	int i = 0, j = 0, n = 5;
	do {
		while(j < n) {
			++j;
			if (j > i) {	
				printf("%d", j);
				continue;
			}
			printf(" ");	
		}
		j = 0;
		printf("\n");
	} while(++i < n);
	return 0;
}	
