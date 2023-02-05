#include <stdio.h>

int main(void) {
	int i = 5, j = 0, n = 9, m = 5;
	
	do {
		j = i;
		while(j < m) {
			++j;
			printf(" ");
		}
		
		j = 0;
		
		while(j < n) {
			printf("%d", ++j);
		}
		n -= 2;

		printf("\n");	
			
	} while(--i > 0);

	return 0;
}
