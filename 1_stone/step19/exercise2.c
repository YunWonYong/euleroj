#include <stdio.h>

int main(void) {
	int i = 5, j = 0;
	while(i > 0) {
		while(j < i) {
			printf("%d", ++j);
		}
		j = 0;
		printf("\n");
		--i;
	}
	return 0;
}
