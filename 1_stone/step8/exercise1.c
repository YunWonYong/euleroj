#include <stdio.h>

int main(void) {

	int b = 12;

	printf("%d\n", b--); // 12
	printf("%d\n", --b); // 10
	printf("%d\n", ++b); // 11
       	printf("%d\n", ++b); // 12
	printf("%d\n", b--); // 12	
	return 0;
}
