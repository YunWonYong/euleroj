#include <stdio.h>

int main(void) {
	int i = 0, j = 0, c = 65, n = 1;
	
	while(i < 5) {
		j = i;
		while(j < 5) {
			printf(" ");
			++j;
		}
		j = 0;
		while(j < n) {
			printf("%c", c);
			++j;
		}

		n += 2;
		++c;	
		++i;
		printf("\n");
	}	
	return 0;
}
