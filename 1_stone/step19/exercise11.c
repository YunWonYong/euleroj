#include <stdio.h>

int main(void) {
	int i = 0, j = 0, c = 65;

	while(i < 5) {
		++i;
		j = 0;
		while(j < i) {
			printf("%c", c + j);
			++j;
		}	
		printf("\n");
	}
	return 0;
}
