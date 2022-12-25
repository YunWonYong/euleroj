#include <stdio.h>

int main(void) {
	int d = -3;

	printf("%d\n", d--); // -3
	printf("%d\n", d--); // -4
	printf("%d\n", ++d); // -4 
	printf("%d\n", ++d); // -3
	printf("%d\n", d++); // -3
	return 0;
}
