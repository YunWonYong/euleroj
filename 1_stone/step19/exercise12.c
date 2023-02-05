#include <stdio.h>

int main(void) {
	int i = 0, j = 0, c = 65, at = 0, n = 1;
	
	while(i < 5) {
		j = i;
		while(j < 5) {
			printf(" ");
			++j;
		}
		j = 0;
		at = c - 1;
		while(j < n) {
			printf("%c", ++at);
			++j;
		}

		n += 2;
		++c;
		++i;
		printf("\n");
	}	
	return 0;
}
