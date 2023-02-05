#include <stdio.h>

int main(void) {
	int i = 0, j = 0, n = 1, m = 5;
	
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
		n += 2;

		printf("\n");	
			
	} while(++i < m);

	return 0;
}
